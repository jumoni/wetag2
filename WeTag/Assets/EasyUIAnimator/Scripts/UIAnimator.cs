/*
 * Copyright (c) 2017 Gabriel Reis
 *
 * Simplified it so that it doesn't throw exceptions.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

namespace EasyUIAnimator
{
	public class UIAnimator : MonoBehaviour {
		private static UIAnimator instance;
		private List<UIAnimation> animations;
		private List<UIAnimation> removeList;
		private Vector2 screenDimension;
		private Vector2 invertedscreenDimension;

		private static UIAnimator Instance 			{get {return instance;}}
		public static Vector2 ScreenDimension 		{get {return instance.screenDimension;}}
		public static List<UIAnimation> Animations 	{get {return instance.animations;}}
		#region UNITY

		void Awake () 
		{
			if (instance == null){
				instance = this;
				animations = new List<UIAnimation>();
				removeList = new List<UIAnimation>();
			}
		}

		void Start (){
			screenDimension 		= new Vector2(Screen.width,Screen.height);
			invertedscreenDimension = new Vector2(1f/Screen.width,1f/Screen.height);
		}

		void Update(){
			if(animations.Count > 0){
				for (int i = 0; i < animations.Count; i++) {
					if(!animations[i].Update(Time.deltaTime)){
						removeList.Add(animations[i]);
					}
				}
			}
			RemoveSafely();
		}

		#endregion

		#region PUBLIC

		public static Vector2 GetCenter(RectTransform transform){
			return Vector2.Scale(transform.position,Instance.invertedscreenDimension);
		}

		public static UIAnimation AddAnimation(UIAnimation animation){
			instance.animations.Add(animation);
			return animation;
		}

		public static void RemoveAnimation(UIAnimation anim){
			foreach(UIAnimation animation in instance.animations){
				if(animation == anim){
					instance.removeList.Add(animation);
					return;
				}
			}
		}

		#endregion

		#region PRIVATE

		private void RemoveSafely(){
			if(removeList.Count > 0){
				foreach (var item in removeList) {
					if(item.OnFinish != null)
						item.OnFinish();
					animations.Remove(item);
				}
				removeList.Clear();
			}
		}

		#endregion

		#region MOVE_ANIMATION

		public static UIPositionAnimation Move(RectTransform transform, Vector2 origin, Vector2 target, float duration){
			return new UIPositionAnimation(
				transform: 	transform,
				origin: 	origin,
				target:		target,
				duration:	duration
			);
		}

		public static UIPositionAnimation MoveTo(RectTransform transform, Vector2 target, float duration){
			return Move (transform, GetCenter(transform), target, duration);
		}

		public static UIPositionAnimation MoveHorizontal(RectTransform transform, float origin, float target, float duration){
			return Move (transform, new Vector2(origin,GetCenter(transform).y), new Vector2(target,GetCenter(transform).y), duration);
		}

		public static UIPositionAnimation MoveHorizontalTo(RectTransform transform, float target, float duration){
			return Move (transform, GetCenter(transform), new Vector2(target,GetCenter(transform).y), duration);
		}

		public static UIPositionAnimation MoveVertical(RectTransform transform, float origin, float target, float duration){
			return Move (transform, new Vector2(GetCenter(transform).x,origin), new Vector2(GetCenter(transform).x,target), duration);
		}

		public static UIPositionAnimation MoveVerticalTo(RectTransform transform, float target, float duration){
			return Move (transform, GetCenter(transform), new Vector2(GetCenter(transform).x,target), duration);
		}

		public static UIPositionAnimation MoveOffset(RectTransform transform, Vector2 offset, float duration){
			return Move (transform, GetCenter(transform), GetCenter(transform) + offset, duration);
		}

		#endregion
		#region SCALE_ANIMATION

		public static UIScaleAnimation Scale(RectTransform transform, Vector3 origin, Vector3 target, float duration){
			return new UIScaleAnimation(
				transform: 	transform,
				origin: 	origin,
				target:		target,
				duration:	duration
			);
		}

		public static UIScaleAnimation ScaleTo(RectTransform transform, Vector3 target, float duration){
			return Scale(transform, transform.localScale, target, duration);
		}

		public static UIScaleAnimation ScaleOffset(RectTransform transform, Vector3 offset, float duration){
			return Scale(transform, transform.localScale, transform.localScale + offset, duration);
		}

		#endregion
		#region ROTATION_ANIMATION

		public static UIRotationAnimation Rotate(RectTransform transform, Quaternion origin, Quaternion target, float duration){
			return new UIRotationAnimation(
				transform: 	transform,
				origin: 	origin,
				target:		target,
				duration:	duration
			);
		}

		public static UIRotationAnimation RotateTo(RectTransform transform, Quaternion target, float duration){
			return Rotate(transform, transform.localRotation, target, duration);
		}

		public static UIRotationAnimation RotateOffset(RectTransform transform, Quaternion offset, float duration){
			return Rotate(transform, transform.localRotation, transform.localRotation * offset, duration);
		}

		#endregion
		#region ALPHA_ANIMATION

		public static UISpriteAnimation ChangeColor(Image image, Color originColor, Color targetColor, float duration){
			return new UISpriteAnimation(
				image:			image,
				originColor:	originColor,
				targetColor:	targetColor,
				duration:		duration
			);
		}

		public static UISpriteAnimation ChangeColorTo(Image image, Color targetColor, float duration){
			return ChangeColor(image,image.color,targetColor,duration);
		}

		public static UISpriteAnimation FadeIn(Image image, float duration){
			Color originColor = image.color;
			originColor.a = 0;
			Color targetColor = image.color;
			targetColor.a = 1;
			return ChangeColor(image,originColor,targetColor,duration);
		}

		public static UISpriteAnimation FadeOut(Image image, float duration){
			Color originColor = image.color;
			originColor.a = 1;
			Color targetColor = image.color;
			targetColor.a = 0;
			return ChangeColor(image,originColor,targetColor,duration);
		}

		#endregion
	}

	public abstract class UIAnimation{

		public delegate void AnimationCallback();

		private float timer = 0;
		private float delay = 0;
		private bool paused = false;
		private AnimationCallback onFinish;
		protected float duration;
		protected UpdateBehaviour updateBehaviour;

		public float Duration 	{get {return duration;}}
		public float Delay 		{get {return delay;}}
		public AnimationCallback OnFinish {get {return onFinish;}}

		public bool Update(float deltaTime){
			if(paused)
				return true;

			timer += deltaTime / duration;

			if(timer < 0)
				OnUpdate(0);
			else if(timer < 1){
				OnUpdate(timer);
			}
			else{
				OnEnd();
				return false;
			}
			return true;
		}

		public abstract void OnUpdate(float timer);

		public abstract void OnEnd();

		public virtual UIAnimation SetEffect(Effect.EffectUpdate effect, Quaternion rotation = default(Quaternion)){return this;}

		public UIAnimation SetCallback(AnimationCallback callback){
			onFinish = callback;
			return this;
		}

		public UIAnimation SetModifier(UpdateBehaviour updateBehaviour){
			this.updateBehaviour = updateBehaviour;
			return this;
		}

		public UIAnimation SetDelay(float delay){
			this.delay = delay;
			timer = - delay / duration;
			return this;
		}

		public void Play(){
			if(paused)
				paused = false;
			else
				Restart();
		}

		public void Pause(){
			paused = true;
		}

		public void Restart(){
			SetDelay(delay);
			if(!UIAnimator.Animations.Contains(this))
				UIAnimator.AddAnimation(this);
		}

		public void Stop(){
			UIAnimator.RemoveAnimation(this);
		}
	}

	public class UIPositionAnimation : UIAnimation{
		private RectTransform transform;
		private Vector2 originPosition;
		private Vector2 targetPosition;
		private Effect.EffectBehaviour effectBehaviour;

		public UIPositionAnimation(RectTransform transform, UIPositionAnimation animation) :
		this (transform, animation.originPosition, animation.targetPosition, animation.duration){
			originPosition = animation.originPosition;
			targetPosition = animation.targetPosition;
			updateBehaviour = animation.updateBehaviour;
			effectBehaviour = animation.effectBehaviour;
		}

		public UIPositionAnimation(RectTransform transform, Vector2 origin, Vector2 target, float duration){
			this.transform 		= transform;
			this.duration 		= duration < 0.0000001f ? 0.0000001f : duration;
			this.originPosition = Vector2.Scale(origin,UIAnimator.ScreenDimension) - (Vector2)transform.position + transform.anchoredPosition;
			this.targetPosition = Vector2.Scale(target,UIAnimator.ScreenDimension) - (Vector2)transform.position + transform.anchoredPosition;
			updateBehaviour		= Modifier.Linear;
			effectBehaviour		= Effect.NoEffect;
		}

		public override void OnUpdate (float timer){
			transform.anchoredPosition 	= Vector2.Lerp(originPosition, 	targetPosition, updateBehaviour(timer))	+ effectBehaviour(timer);
		}

		public override void OnEnd (){
			transform.anchoredPosition = targetPosition;
		}

		public override UIAnimation SetEffect (Effect.EffectUpdate effect, Quaternion rotation = default(Quaternion)){
			Vector2 direction = (targetPosition-originPosition).normalized;
			direction = (direction == Vector2.zero) ? Vector2.right : direction;
			Vector2 directionVector = rotation * direction;
			directionVector *=  UIAnimator.ScreenDimension.y;
			this.effectBehaviour = Effect.GetBehaviour(effect, directionVector);
			return this;
		}
	}

	public class UIScaleAnimation : UIAnimation{
		private RectTransform transform;
		private Vector3 originScale;
		private Vector3 targetScale;
		private Effect.EffectBehaviour effectBehaviour;

		public UIScaleAnimation(RectTransform transform, UIScaleAnimation animation) :
		this (transform, animation.originScale, animation.targetScale, animation.duration){}

		public UIScaleAnimation(RectTransform transform, Vector3 origin, Vector3 target, float duration){
			this.transform 		= transform;
			this.duration 		= duration < 0.0000001f ? 0.0000001f : duration;
			this.originScale 	= origin;
			this.targetScale 	= target;
			updateBehaviour		= Modifier.Linear;
			effectBehaviour		= Effect.NoEffect;
		}

		public override void OnUpdate (float timer){
			transform.localScale		= Vector3.Lerp(originScale, 	targetScale, 	updateBehaviour(timer)) + (Vector3)effectBehaviour(timer);
		}

		public override void OnEnd (){
			transform.localScale = targetScale;
		}

		public override UIAnimation SetEffect (Effect.EffectUpdate effect, Quaternion rotation = default(Quaternion)){
			this.effectBehaviour = Effect.GetBehaviour(effect,rotation * (targetScale-originScale));
			return this;
		}
	}

	public class UIRotationAnimation : UIAnimation{
		private RectTransform transform;
		private Quaternion originRotation;
		private Quaternion targetRotation;
		private Effect.EffectBehaviour effectBehaviour;

		public UIRotationAnimation(RectTransform transform, UIRotationAnimation animation) :
		this (transform, animation.originRotation, animation.targetRotation, animation.duration){}

		public UIRotationAnimation(RectTransform transform, Quaternion origin, Quaternion target, float duration){
			this.transform 		= transform;
			this.duration 		= duration < 0.0000001f ? 0.0000001f : duration;
			this.originRotation = origin;
			this.targetRotation = target;
			updateBehaviour		= Modifier.Linear;
			effectBehaviour		= Effect.NoEffect;
		}

		public override void OnUpdate (float timer){
			transform.localRotation = Quaternion.Lerp(originRotation, targetRotation, updateBehaviour(timer)) * Quaternion.Euler(Vector3.forward*effectBehaviour(timer).x);
			Debug.Log ("effectBehaviour(timer).y: " + (effectBehaviour(timer).y));
		}

		public override void OnEnd (){
			transform.localRotation = targetRotation;
		}

		public override UIAnimation SetEffect (Effect.EffectUpdate effect, Quaternion rotation = default(Quaternion)){
			this.effectBehaviour = Effect.GetBehaviour(effect, Vector2.right);
			return this;
		}
	}

	public class UISpriteAnimation : UIAnimation{
		private Image image;
		private Color[] colors;

		public UISpriteAnimation(Image img, UISpriteAnimation animation) :
		this (img, animation.colors[0], animation.colors[1], animation.duration){}

		public UISpriteAnimation(Image image, Color originColor, Color targetColor, float duration){
			this.image = image;
			this.duration = duration;
			colors = new Color[]{originColor,targetColor};
			updateBehaviour		= Modifier.Linear;
		}

		public override void OnUpdate (float timer){
			image.color	= Color.Lerp(colors[0], colors[1], updateBehaviour(timer));
		}

		public override void OnEnd (){
			image.color = colors[1];
		}
	}

	public class UIGroupAnimation : UIAnimation{
		private UIAnimation[] animations;
		private bool[] finished;
		private float lastTime;

		public UIGroupAnimation(RectTransform[] rects, UIPositionAnimation transformAnimation){
			animations = new UIAnimation[rects.Length];
			for (int i = 0; i < animations.Length; i++) {
				animations[i] = new UIPositionAnimation(rects[i],transformAnimation);
			}
			duration = animations[0].Duration;
			finished = new bool[animations.Length];
		}

		public UIGroupAnimation(RectTransform[] rects, UIScaleAnimation transformAnimation){
			animations = new UIAnimation[rects.Length];
			for (int i = 0; i < animations.Length; i++) {
				animations[i] = new UIScaleAnimation(rects[i],transformAnimation);
			}
			duration = animations[0].Duration;
			finished = new bool[animations.Length];
		}

		public UIGroupAnimation(Image[] imgs, UISpriteAnimation spriteAnimation){
			animations = new UIAnimation[imgs.Length];
			for (int i = 0; i < animations.Length; i++) {
				animations[i] = new UISpriteAnimation(imgs[i],spriteAnimation);
			}
			duration = animations[0].Duration;
			finished = new bool[animations.Length];
		}

		public UIGroupAnimation(params UIAnimation[] animations){
			for (int i = 1; i < animations.Length; i++) {
				duration = Mathf.Max(duration,animations[i].Duration + animations[i].Delay);
			}
			this.animations = animations;
			finished = new bool[animations.Length];
		}

		public override void OnUpdate (float timer){
			float deltaTime = (timer - lastTime) * duration;
			for (int i = 0; i < animations.Length; i++) {
				if(!finished[i])
					finished[i] = !animations[i].Update(deltaTime);
			}
			lastTime = timer;
		}

		public override void OnEnd (){
			for (int i = 0; i < animations.Length; i++) {
				animations[i].OnEnd();
				finished[i] = false;
				animations[i].SetDelay(animations[i].Delay);
				lastTime = 0;
			}
		}

		public override UIAnimation SetEffect (Effect.EffectUpdate effect, Quaternion rotation = default(Quaternion))
		{
			for (int i = 0; i < animations.Length; i++) {
				animations[i].SetEffect(effect,rotation);
			}
			return this;
		}

		public UIGroupAnimation SetGroupModifier(UpdateBehaviour mod){
			for (int i = 0; i < animations.Length; i++) {
				animations[i].SetModifier(mod);
			}
			return this;
		}

		public UIGroupAnimation SetGroupEffect(Effect.EffectGroup effectGroup, float max = 0.2f, float min = 0.0f, int maxBounce = 2, int minBounce = 1, int minAngle = 0, int maxAngle = 0){
			for (int i = 0; i < animations.Length; i++) {
				animations[i].SetEffect(effectGroup (Random.Range(min,max), Random.Range(minBounce,maxBounce)), Quaternion.Euler(Vector3.forward * Random.Range(minAngle,maxAngle)));
			}
			return this;
		}
	}

	public delegate float UpdateBehaviour(float deltaTime);

	public static class Modifier{
		public static float Linear	(float time)	{return time;}
		public static float QuadOut	(float time)	{return time * time;}
		public static float QuadIn	(float time)	{return (float)Mathf.Pow(time,0.50f);}
		public static float CubOut	(float time)	{return time * time * time;}
		public static float CubIn	(float time)	{return Mathf.Pow(time,0.33f);}
		public static float PolyOut	(float time)	{return time * time * time * time;}
		public static float PolyIn	(float time)	{return Mathf.Pow(time,0.25f);}
		public static float Sin		(float time)	{return 0.5f + 0.5f * Mathf.Cos((1-time)*Mathf.PI);}
		public static float Tan		(float time)	{return 2 * time - Sin(time);}
		public static float CircularIn	(float time){return Mathf.Sqrt(Mathf.Sin(time*Mathf.PI/2));}
		public static float CircularOut	(float time){return 1 - Mathf.Sqrt(Mathf.Cos(-time*Mathf.PI/2));}
	}
		
	public static class Effect{
		public delegate EffectUpdate EffectGroup(float max, int bounce);
		public delegate Vector2 EffectBehaviour(float time);
		public delegate float EffectUpdate(float time);
		public static Vector2 NoEffect(float time){return Vector2.zero;}

		public static EffectUpdate Spring(float max = 0.2f, int bounce = 2)	{return (float time) => {return max * (1- time * time) * Mathf.Sin(Mathf.PI * bounce * time * time);};}
		public static EffectUpdate Wave(float max = 0.2f, int bounce = 2)	{return (float time) => {return max * Mathf.Sin(Mathf.PI * bounce * time);};} 
		public static EffectUpdate Explosion(float max = 0.2f)				{return (float time) => {return max * Mathf.Sqrt(Mathf.Sin(Mathf.Pow(time,0.75f)*Mathf.PI));};} 

		public static EffectGroup SpringGroup	(){return (float max, int bounce) => {return Spring(max,bounce);};}
		public static EffectGroup WaveGroup		(){return (float max, int bounce) => {return Wave(max,bounce);};}
		public static EffectGroup ExplosionGroup(){return (float max, int bounce) => {return Explosion(max);};}

		public static EffectBehaviour GetBehaviour(EffectUpdate update, Vector2 directionVector){
			return ((float time) => {return directionVector * update(time);});
		}
	}
}
