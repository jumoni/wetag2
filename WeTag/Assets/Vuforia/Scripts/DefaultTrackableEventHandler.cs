/*==============================================================================
Copyright (c) 2010-2014 Qualcomm Connected Experiences, Inc.
All Rights Reserved.
Confidential and Proprietary - Protected under copyright and other laws.
==============================================================================*/

using UnityEngine;
using System.Collections.Generic;

namespace Vuforia
{
    /// <summary>
    /// A custom handler that implements the ITrackableEventHandler interface.
    /// </summary>
    public class DefaultTrackableEventHandler : MonoBehaviour,
                                                ITrackableEventHandler
    {
        #region PRIVATE_MEMBER_VARIABLES
 
        private TrackableBehaviour mTrackableBehaviour;

        #endregion // PRIVATE_MEMBER_VARIABLES

        private WeTagHandler wetag;

        private Dictionary<string, Celebrity> celebrityMap = new Dictionary<string, Celebrity>();

        private Dictionary<string, GameObject> celebrityTags = new Dictionary<string, GameObject>();

        public GameObject celebrityTag;

        public GameObject tagPlane;

        #region UNTIY_MONOBEHAVIOUR_METHODS
    
        void Start()
        {
            //string s = "{\n        \"name\": \"Jack Ma\",\n        \"faceRectangle\": {\n          \"left\": 0,\n          \"top\": 300,\n          \"width\": 149,\n          \"height\": 149\n        },\n        \"confidence\": 1\n      }";
            //Celebrity tmp = JsonUtility.FromJson<Celebrity>(s);
            //tmp.faceRectangle.left = 123;
            //Debug.Log("serialze=" + JsonUtility.ToJson(tmp));
            //celebrityMap[tmp.name] = tmp;

            tagPlane = GameObject.FindWithTag("TagPlane");

            wetag = GetComponent<WeTagHandler>();
            mTrackableBehaviour = GetComponent<TrackableBehaviour>();
            if (mTrackableBehaviour)
            {
                mTrackableBehaviour.RegisterTrackableEventHandler(this);
            }
        }

        Vector3 lastPos;
        bool first = true;

        void Update()
		{
   //         var bounds = tagPlane.GetComponent<MeshFilter>().mesh.bounds;
			//float boundsX = tagPlane.transform.localScale.x * bounds.size.x;
			//float boundsY = tagPlane.transform.localScale.y * bounds.size.y;
			//float boundsZ = tagPlane.transform.localScale.z * bounds.size.z;
            //Debug.Log(string.Format("{0},{1},{2}", boundsX, boundsY, boundsZ));
            //if (Input.GetButtonUp("Fire1"))
            //{

            //}
   //         var pos = gameObject.transform.position;
   //         pos = Camera.main.WorldToScreenPoint(pos);
            
			////Debug.Log("CameraPosition = " + tagPlane.transform.position);
   //         //Debug.Log("Camera in Screen = " + pos);

			//if( !first ){
   //             var dis = pos - lastPos;
			//	//dis.z = 0;
   //             //dis /= 3;
   //             //Debug.Log("Transition = " + dis);
   //             wetag.popUpText.transform.Translate(dis);

			//}
   //         first = false;
			//lastPos = pos;
        }

        #endregion // UNTIY_MONOBEHAVIOUR_METHODS

        #region PUBLIC_METHODS

        /// <summary>
        /// Implementation of the ITrackableEventHandler function called when the
        /// tracking state changes.
        /// </summary>
        public void OnTrackableStateChanged(
                                        TrackableBehaviour.Status previousStatus,
                                        TrackableBehaviour.Status newStatus)
        {
            if (newStatus == TrackableBehaviour.Status.DETECTED ||
                newStatus == TrackableBehaviour.Status.TRACKED ||
                newStatus == TrackableBehaviour.Status.EXTENDED_TRACKED)
            {
                OnTrackingFound();
            }
            else
            {
                OnTrackingLost();
            }

        }


        public void clearTags(){
            Debug.Log("Clear tags");
            foreach (var kv in celebrityTags)
            {
                Destroy(kv.Value);
            }
            celebrityTags.Clear();
        }


        #endregion // PUBLIC_METHODS



        #region PRIVATE_METHODS

        private void OnRecognizeFinish(Result res){
            if( res != null ){
				foreach (Celebrity item in res.celebrities)
				{
					// create a new text on (left, top) of item.faceRect
					celebrityMap[item.name] = item;
				}
				updateTags();
            }
        }

        private void updateTags(){
            foreach(var kv in celebrityMap){
                Celebrity item = kv.Value;
				if (celebrityTags.ContainsKey(item.name))
					Destroy(celebrityTags[item.name]);

				//Vector3 pos = Camera.main.ScreenToWorldPoint(new Vector3(item.faceRectangle.left, item.faceRectangle.top, Camera.main.nearClipPlane));
				//Quaternion quat = Quaternion.Euler(90, 0, 0);
				//var newTag = Instantiate(pos, )

				//Ray ray = Camera.main.ScreenPointToRay(new Vector3(item.faceRectangle.left, Screen.height - item.faceRectangle.top));

				Ray ray = Camera.main.ScreenPointToRay(new Vector3(item.faceRectangle.left + item.faceRectangle.width / 2, Screen.height - (item.faceRectangle.top + item.faceRectangle.height/2)));
				//var xzPlane = tagPlane.GetComponent<Collider>();
				Quaternion quat = Quaternion.Euler(90, 0, 0);

                RaycastHit hit;
				if (Physics.Raycast(ray, out hit, Camera.main.farClipPlane) && hit.collider.tag == tagPlane.tag){  // work
					Debug.Log("Find hit point");
                    Vector3 hitPoint = ray.GetPoint(hit.distance);
                    hitPoint.y = 0;
                    var newTag = Instantiate(celebrityTag, hitPoint, quat);
                    
					newTag.transform.parent = gameObject.transform;

					newTag.GetComponent<TextMesh>().text = item.name;
					newTag.transform.localScale /= 2;
					//newTag.transform.LookAt(Camera.main.transform);
					celebrityTags[item.name] = newTag;
                }else{
     //               var pos = Camera.main.ScreenToWorldPoint(new Vector3(item.faceRectangle.left, item.faceRectangle.top, Camera.main.nearClipPlane));
     //               //var pos = new Vector3();
     //               pos.y = 0;
     //               //pos.x = -0.5f + item.faceRectangle.left / Screen.width;
     //               //pos.z = 0.5f - item.faceRectangle.top / Screen.height;

					//Debug.Log("No hit point, pos = " + pos);
     //               return;
					//var newTag = Instantiate(celebrityTag, pos, quat);
					//newTag.transform.parent = gameObject.transform;
     //               newTag.transform.localScale /= 2;
					//newTag.GetComponent<TextMesh>().text = item.name;
					////newTag.transform.LookAt(Camera.main.transform);
					//celebrityTags[item.name] = newTag;
                }
            }
        }

        private void OnTrackingFound()
        {
            Renderer[] rendererComponents = GetComponentsInChildren<Renderer>(true);
            Collider[] colliderComponents = GetComponentsInChildren<Collider>(true);
            clearTags();
            StartCoroutine(wetag.RecognizeObject(OnRecognizeFinish));
            // Enable rendering:
            foreach (Renderer component in rendererComponents)
            {
                component.enabled = true;
            }

            // Enable colliders:
            foreach (Collider component in colliderComponents)
            {
                component.enabled = true;
            }

            Debug.Log("Trackable " + mTrackableBehaviour.TrackableName + " found");
        }

        private void OnTrackingLost()
        {
            Renderer[] rendererComponents = GetComponentsInChildren<Renderer>(true);
            Collider[] colliderComponents = GetComponentsInChildren<Collider>(true);
            //clearTags();
            // Disable rendering:
            foreach (Renderer component in rendererComponents)
            {
                component.enabled = false;
            }

            // Disable colliders:
            foreach (Collider component in colliderComponents)
            {
                component.enabled = false;
            }

            Debug.Log("Trackable " + mTrackableBehaviour.TrackableName + " lost");
        }

        #endregion // PRIVATE_METHODS

		void OnGUI()
		{
			Vector3 p = new Vector3();
			Camera c = Camera.main;
			Event e = Event.current;
			Vector2 mousePos = new Vector2();

			// Get the mouse position from Event.
			// Note that the y position from Event is inverted.
			mousePos.x = e.mousePosition.x;
			mousePos.y = c.pixelHeight - e.mousePosition.y;

			p = c.ScreenToWorldPoint(new Vector3(mousePos.x, mousePos.y, c.nearClipPlane));

			GUILayout.BeginArea(new Rect(20, 20, 250, 120));
			GUILayout.Label("Screen pixels: " + c.pixelWidth + ":" + c.pixelHeight);
			GUILayout.Label("Mouse position: " + mousePos);
			GUILayout.Label("World position: " + p.ToString("F3"));
			GUILayout.EndArea();
		}
    }

}
