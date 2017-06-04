/*============================================================================== 
 Copyright (c) 2016 PTC Inc. All Rights Reserved.
 
 Copyright (c) 2015 Qualcomm Connected Experiences, Inc. All Rights Reserved. 
 * ==============================================================================*/
using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Vuforia;

using UnityEngine.Networking;

[System.Serializable]
public class Metadata
{
	public int width;
	public int height;
	public string format;
}

[System.Serializable]
public class Celebrity
{
	public string name;
	public Rect factRectangle;
	public float confidence;
}

[System.Serializable]
public class Result
{
	public Celebrity[] celebrities;
}

[System.Serializable]
public class CognitiveResponse
{
	public string requestId;
	public Metadata metadata;
	public Result result;
}

public class UDTEventHandler : MonoBehaviour, IUserDefinedTargetEventHandler
{
	#region PUBLIC_MEMBERS
	/// <summary>
	/// Can be set in the Unity inspector to reference a ImageTargetBehaviour that is instanciated for augmentations of new user defined targets.
	/// </summary>
	public ImageTargetBehaviour ImageTargetTemplate;

	/// <summary>
	/// The cognitive API Auth.
	/// </summary>
	public string cognitiveAPIAuth = "974c0cbdf8b244c28024aaab33ab2fdb";

	/// <summary>
	/// The cognitive URI.
	/// </summary>
	public string cognitiveURI = "https://api.cognitive.azure.cn/vision/v1.0/models/celebrities/analyze";

	public GUIText popUpText;

	public int LastTargetIndex
	{
		get { return (mTargetCounter - 1) % MAX_TARGETS; }
	}
	#endregion PUBLIC_MEMBERS


	#region PRIVATE_MEMBERS
	private const int MAX_TARGETS = 5;
	private UserDefinedTargetBuildingBehaviour mTargetBuildingBehaviour;
	private QualityDialog mQualityDialog;
	private ObjectTracker mObjectTracker;

	private bool mFormatRegistered = false;

	// DataSet that newly defined targets are added to
	private DataSet mBuiltDataSet;

	// Currently observed frame quality
	private ImageTargetBuilder.FrameQuality mFrameQuality = ImageTargetBuilder.FrameQuality.FRAME_QUALITY_NONE;

	// Counter used to name newly created targets
	private int mTargetCounter;

	private TrackableSettings mTrackableSettings;
	#endregion //PRIVATE_MEMBERS


	#region MONOBEHAVIOUR_METHODS
	public void Start()
	{
		//popUpText = GameObject.FindWithTag("PopupText") as GUIText;
		mTargetBuildingBehaviour = GetComponent<UserDefinedTargetBuildingBehaviour>();
		if (mTargetBuildingBehaviour)
		{
			mTargetBuildingBehaviour.RegisterEventHandler(this);
			Debug.Log("Registering User Defined Target event handler.");
		}

		mTrackableSettings = FindObjectOfType<TrackableSettings>();
		mQualityDialog = FindObjectOfType<QualityDialog>();
		if (mQualityDialog)
		{
			mQualityDialog.gameObject.SetActive(false);
		}

		VuforiaARController.Instance.RegisterVuforiaStartedCallback(OnVuforiaStarted);

	}
	#endregion //MONOBEHAVIOUR_METHODS


	#region IUserDefinedTargetEventHandler implementation
	/// <summary>
	/// Called when UserDefinedTargetBuildingBehaviour has been initialized successfully
	/// </summary>
	public void OnInitialized()
	{
		mObjectTracker = TrackerManager.Instance.GetTracker<ObjectTracker>();
		if (mObjectTracker != null)
		{
			// Create a new dataset
			mBuiltDataSet = mObjectTracker.CreateDataSet();
			mObjectTracker.ActivateDataSet(mBuiltDataSet);
		}

	}



	/// <summary>
	/// Updates the current frame quality
	/// </summary>
	public void OnFrameQualityChanged(ImageTargetBuilder.FrameQuality frameQuality)
	{
		Debug.Log("Frame quality changed: " + frameQuality.ToString());
		mFrameQuality = frameQuality;
		if (mFrameQuality == ImageTargetBuilder.FrameQuality.FRAME_QUALITY_LOW)
		{

			Debug.Log("Low camera image quality");
		}
	}

	/// <summary>
	/// Takes a new trackable source and adds it to the dataset
	/// This gets called automatically as soon as you 'BuildNewTarget with UserDefinedTargetBuildingBehaviour
	/// </summary>
	public void OnNewTrackableSource(TrackableSource trackableSource)
	{
		mTargetCounter++;

		// Deactivates the dataset first
		mObjectTracker.DeactivateDataSet(mBuiltDataSet);

		// Destroy the oldest target if the dataset is full or the dataset 
		// already contains five user-defined targets.
		if (mBuiltDataSet.HasReachedTrackableLimit() || mBuiltDataSet.GetTrackables().Count() >= MAX_TARGETS)
		{
			IEnumerable<Trackable> trackables = mBuiltDataSet.GetTrackables();
			Trackable oldest = null;
			foreach (Trackable trackable in trackables)
			{
				if (oldest == null || trackable.ID < oldest.ID)
					oldest = trackable;
			}

			if (oldest != null)
			{
				Debug.Log("Destroying oldest trackable in UDT dataset: " + oldest.Name);
				mBuiltDataSet.Destroy(oldest, true);
			}
		}

		// Get predefined trackable and instantiate it
		ImageTargetBehaviour imageTargetCopy = (ImageTargetBehaviour)Instantiate(ImageTargetTemplate);
		imageTargetCopy.gameObject.name = "UserDefinedTarget-" + mTargetCounter;

		// Add the duplicated trackable to the data set and activate it
		mBuiltDataSet.CreateTrackable(trackableSource, imageTargetCopy.gameObject);

		// Activate the dataset again
		mObjectTracker.ActivateDataSet(mBuiltDataSet);

		// Extended Tracking with user defined targets only works with the most recently defined target.
		// If tracking is enabled on previous target, it will not work on newly defined target.
		// Don't need to call this if you don't care about extended tracking.
		StopExtendedTracking();
		mObjectTracker.Stop();
		mObjectTracker.ResetExtendedTracking();
		mObjectTracker.Start();

		// Make sure TargetBuildingBehaviour keeps scanning...
		mTargetBuildingBehaviour.StartScanning();
	}
	#endregion IUserDefinedTargetEventHandler implementation


	#region PUBLIC_METHODS
	/// <summary>
	/// Instantiates a new user-defined target and is also responsible for dispatching callback to 
	/// IUserDefinedTargetEventHandler::OnNewTrackableSource
	/// </summary>
	public void BuildNewTarget()
	{
		StartCoroutine(RecognizeObject());
		if (mFrameQuality == ImageTargetBuilder.FrameQuality.FRAME_QUALITY_MEDIUM ||
			mFrameQuality == ImageTargetBuilder.FrameQuality.FRAME_QUALITY_HIGH)
		{
			// create the name of the next target.
			// the TrackableName of the original, linked ImageTargetBehaviour is extended with a continuous number to ensure unique names
			string targetName = string.Format("{0}-{1}", ImageTargetTemplate.TrackableName, mTargetCounter);

			// generate a new target:
			mTargetBuildingBehaviour.BuildNewTarget(targetName, ImageTargetTemplate.GetSize().x);
		}
		else
		{
			Debug.Log("Cannot build new target, due to poor camera image quality");
			if (mQualityDialog)
			{
				mQualityDialog.gameObject.SetActive(true);
			}
		}
	}

	public void CloseQualityDialog()
	{
		if (mQualityDialog)
			mQualityDialog.gameObject.SetActive(false);
	}
	#endregion //PUBLIC_METHODS


	#region PRIVATE_METHODS

	Vuforia.Image.PIXEL_FORMAT mPixelFormat = Vuforia.Image.PIXEL_FORMAT.RGBA8888;
	private void OnVuforiaStarted()
	{

		// Vuforia has started, now register camera image format

		if (CameraDevice.Instance.SetFrameFormat(mPixelFormat, true))
		{
			Debug.Log("Successfully registered pixel format " + mPixelFormat.ToString());

			mFormatRegistered = true;
		}
		else
		{
			Debug.LogError(
				"Failed to register pixel format " + mPixelFormat.ToString() +
				"\n the format may be unsupported by your device;" +
				"\n consider using a different pixel format.");

			mFormatRegistered = false;
		}
	}


	/// <summary>
	/// This method only demonstrates how to handle extended tracking feature when you have multiple targets in the scene
	/// So, this method could be removed otherwise
	/// </summary>
	private void StopExtendedTracking()
	{
		// If Extended Tracking is enabled, we first disable it for all the trackables
		// and then enable it only for the newly created target
		bool extTrackingEnabled = mTrackableSettings && mTrackableSettings.IsExtendedTrackingEnabled();
		if (extTrackingEnabled)
		{
			StateManager stateManager = TrackerManager.Instance.GetStateManager();

			// 1. Stop extended tracking on all the trackables
			foreach (var tb in stateManager.GetTrackableBehaviours())
			{
				var itb = tb as ImageTargetBehaviour;
				if (itb != null)
				{
					itb.ImageTarget.StopExtendedTracking();
				}
			}

			// 2. Start Extended Tracking on the most recently added target
			List<TrackableBehaviour> trackableList = stateManager.GetTrackableBehaviours().ToList();
			ImageTargetBehaviour lastItb = trackableList[LastTargetIndex] as ImageTargetBehaviour;
			if (lastItb != null)
			{
				if (lastItb.ImageTarget.StartExtendedTracking())
					Debug.Log("Extended Tracking successfully enabled for " + lastItb.name);
			}
		}
	}

	/// <summary>
	/// Upload the image to Recognitive API and display tags
	/// </summary>
	private IEnumerator RecognizeObject()
	{

		Debug.Log(this.cognitiveAPIAuth);

		Vuforia.Image image = CameraDevice.Instance.GetCameraImage(mPixelFormat);
		if (image != null)
		{

			Texture2D tex = new Texture2D(image.Width, image.Height, TextureFormat.RGBA32, false);
			tex.LoadRawTextureData(image.Pixels);
			tex.Apply();

			Debug.Log(
				"\nImage Format: " + image.PixelFormat +
				"\nImage Size:   " + image.Width + "x" + image.Height +
				"\nBuffer Size:  " + image.BufferWidth + "x" + image.BufferHeight +
				"\nImage Stride: " + image.Stride + "\n"
			);

			Debug.Log(
				"\nTexture Format: " + tex.format.ToString() +
				"\nTexture Size:   " + tex.width + "x" + tex.height
			);

			byte[] pixels = tex.EncodeToJPG();

			if (pixels != null && pixels.Length > 0)
			{
				Debug.Log(
					"\nImage pixels: " +
					pixels[0] + ", " +
					pixels[1] + ", " +
					pixels[2] + ", ...\n"
				);
			}
			//WWWForm form = new WWWForm();
			//form.AddField("url", "http://www.tianya999.com/uploads/allimg/130419/2291-13041ZZ126.jpg");

			UnityWebRequest req = UnityWebRequest.Post(cognitiveURI, "");
			req.SetRequestHeader("Content-Type", "application/octet-stream");
			req.SetRequestHeader("Ocp-Apim-Subscription-Key", cognitiveAPIAuth);

			UploadHandler uploadHandler = new UploadHandlerRaw(pixels);
			//uploadHandler.contentType = "application/octet-stream";  // default
			req.uploadHandler = uploadHandler;

			yield return req.Send();
			if (req.isError)
			{
				Debug.Log(req.error);
			}
			else
			{
				//string str = "{\r  \"requestId\": \"9669d8c1-9130-48dc-ad93-3403ca27ce4d\",\r  \"metadata\": {\r    \"width\": 4000,\r    \"height\": 2667,\r    \"format\": \"Jpeg\"\r  },\r  \"result\": {\r    \"celebrities\": [\r      {\r        \"name\": \"Jack Ma\",\r        \"faceRectangle\": {\r          \"left\": 2143,\r          \"top\": 623,\r          \"width\": 736,\r          \"height\": 736\r        },\r        \"confidence\": 0.9999925\r      }\r    ]\r  }\r}";
				CognitiveResponse resp = JsonUtility.FromJson<CognitiveResponse>(System.Text.Encoding.UTF8.GetString(req.downloadHandler.data));
				//CognitiveResponse resp = JsonUtility.FromJson<CognitiveResponse>(str);
				Debug.Log("Result = " + JsonUtility.ToJson(resp.result));

				//StartCoroutine(ShowMessage("JsonUtility.ToJson(resp.result)", 5));
			}

		}

	}

	private IEnumerator ShowMessage(string message, float delay)
	{
		popUpText.text = message;
		popUpText.enabled = true;
		yield return new WaitForSeconds(delay);
		popUpText.enabled = false;
	}



	#endregion //PRIVATE_METHODS
}



