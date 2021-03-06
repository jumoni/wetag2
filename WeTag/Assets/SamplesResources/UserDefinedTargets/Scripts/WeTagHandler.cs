﻿using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.IO;
using Vuforia;

using UnityEngine.Networking;
using System.Text.RegularExpressions;
using SimpleJSON;
using EasyUIAnimator;

[System.Serializable]
public class Metadata{
	public int width;
	public int height;
	public string format;
}

[System.Serializable]
public class FaceRectangle{
	public int left;
	public int top;
	public int width;
	public int height;

}

[System.Serializable]
public class RecogItem{
	public string name;
	public FaceRectangle faceRectangle;
	public double confidence;
}

[System.Serializable]
public class Result{
	public RecogItem[] celebrities;
	public RecogItem[] landmarks;
}

[System.Serializable]
public class CognitiveResponse{
	public string requestId;
	public Metadata metadata;
	public Result result;
}

[System.Serializable]
public class WikiItem{
    public string title;
    public string extract;
    //public string timestamp;
    //public int size;
    //public int wordcount;
}

[System.Serializable]
public class MediaWikiQuery{
    //public string searchinfo;   // actually not string
    public WikiItem[] pages;
}

[System.Serializable]
public class MediaWikiResult{
    public MediaWikiQuery query;
}

public enum TagOption {
    Celebrity, Landmark
}

[RequireComponent(typeof(Plane))]
public class WeTagHandler : MonoBehaviour
{

    #region PUBLIC_MEMBERS

    /// <summary>
    /// Recog finish delegate.
    /// <param name="res">recognize result</param>
    /// </summary>
    public delegate void RecogFinishDelegate(Result res);

    //public GameObject popUpText;

    //public TextMesh textmesh;

    public GameObject celebrityTag;

    public Material lineMat;

    public static Vuforia.Image.PIXEL_FORMAT mPixelFormat = Vuforia.Image.PIXEL_FORMAT.RGB888;

	#endregion

	#region PRIVATE_MEMBERS

	/// <summary>
	/// The cognitive API Auth.
	/// </summary>
	private string cognitiveAPIAuth = "974c0cbdf8b244c28024aaab33ab2fdb";

	/// <summary>
	/// The cognitive URI.
	/// </summary>
	private string cognitiveURI = "https://api.cognitive.azure.cn/vision/v1.0/models/{0}/analyze";

	private string mediaWikiURL = "http://en.wikipedia.org/w/api.php?format=json&action=query&generator=search&gsrsearch={0}&gsrlimit=10&prop=pageimages|extracts&pilimit=max&exintro&explaintext";
	

	private Texture2D captureImage;

    private Rect box;

    private string boxText = "box";

	private bool _isDetailShown = false;

    private float titlePosition;

    private TagOption _tagOption = TagOption.Celebrity;

    public TagOption tagOption{
        get{
            return _tagOption;
        }
        set{
            var origin = _tagOption;
            _tagOption = value;
			//Debug.Log("origin = " + origin);
			//Debug.Log("value = " + value);

			if( value != origin ){
                var handler = gameObject.GetComponent<UDTEventHandler>();
                handler.clearTags();
                isDetailShown = false;
                //handler.BuildNewTarget();
			}

            var text = GameObject.Find("TagOptionText").GetComponent<Text>();
            text.text = value.ToString();
			var title = GameObject.Find("InfoTitle");
			if (title)
				title.gameObject.SetActive(false);
        }
    }


	public bool isDetailShown
	{
		get
		{
			return _isDetailShown;
		}
		set
		{
			if (_isDetailShown != value)
			{
				float duration = 0.2f;

				var infoTitle = GameObject.Find("InfoTitle").GetComponent<RectTransform>();
				var infoContent = GameObject.Find("InfoBackground").GetComponent<RectTransform>();

				if (value)
				{        // hide -> show
					var scaleto = UIAnimator.ScaleTo(infoContent, Vector3.one, duration);
					var move = UIAnimator.MoveVerticalTo(infoTitle, titlePosition, duration).SetCallback(scaleto.Play);
					move.Play();
				}
				else
				{          // show -> hide
					var move = UIAnimator.MoveVerticalTo(infoTitle, 0, duration);
					var scaleto = UIAnimator.ScaleTo(infoContent, new Vector3(0, 1, 0), duration).SetCallback(move.Play);
					//move.Play();
					scaleto.Play();
				}
			}
			_isDetailShown = value;
		}
	}


	#endregion

	//public string sasd;

	// Use this for initialization
	void Start()
    {
        initWeTagUI();
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 touchPos = new Vector3();
        bool isTouch = false;

        if( Input.GetMouseButtonDown(0) ){
            isTouch = true;
            touchPos = Input.mousePosition;
        }

		foreach(var touch in Input.touches)
		{
			//Debug.Log("here");
			touchPos = touch.position;
			isTouch = true;
			if (touch.phase == TouchPhase.Began)
			{
			}
		}

		if (isTouch){
			var ray = Camera.main.ScreenPointToRay(touchPos);
			var hits = Physics.RaycastAll(ray);
			foreach (var hit in hits)
			{
				if (hit.collider.tag == "RecogItemTag")
				{
                    // create touch effect: change background shader color
                    var tagObject = hit.collider.transform.parent;

                    //hit.collider.GetComponent<Renderer>().material.color = new Color(0.0f, 0.0f, 0.4f);
                    var rect = tagObject.GetComponent<RectTransform>();
                    var origin = tagObject.localScale;
                    var after = origin * 1.2f;

                    var scaleback = UIAnimator.Scale(rect, after, origin, 0.2f);
                    var scaleto = UIAnimator.ScaleTo(rect, after, 0.2f).SetCallback(scaleback.Play);
                    scaleto.Play();

                    string searchName = tagObject.GetComponentInChildren<TextMesh>().text;
					StartCoroutine(SearchWiki(searchName));
				}
			}
        }

    }

    #region PUBLIC_METHODS

    /// <summary>
    /// Upload the image to Recognitive API and display tags
    /// </summary>
    public IEnumerator RecognizeObject(RecogFinishDelegate callback)
    {
        string url = string.Format(this.cognitiveURI, _tagOption == TagOption.Celebrity ? "celebrities" : "landmarks");
		Debug.Log(this.cognitiveAPIAuth);

        var title = GameObject.Find("InfoTitle");
        if( title )
            title.gameObject.SetActive(false);
        isDetailShown = false;

        Vuforia.Image image = CameraDevice.Instance.GetCameraImage(mPixelFormat);

        bool isHorizontal = false;

        if (image != null)
        {
            TextureFormat texFormat;
            if (mPixelFormat == Vuforia.Image.PIXEL_FORMAT.RGBA8888)
            {
                texFormat = TextureFormat.RGBA32;
                isHorizontal = false;
            }
            else
            {
                texFormat = TextureFormat.RGB24;
                isHorizontal = false;
            }

            Texture2D tex = new Texture2D(image.Width, image.Height, texFormat, false);

            tex.LoadRawTextureData(image.Pixels);
            tex.Apply();

            tex = FlipTexture(tex, isHorizontal);

            //captureImage = tex;
            //tex = FlipTexture(tex, isHorizontal);

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

            UnityWebRequest req = UnityWebRequest.Post(url, "");
            req.SetRequestHeader("Content-Type", "application/octet-stream");
            req.SetRequestHeader("Ocp-Apim-Subscription-Key", cognitiveAPIAuth);

            //        try{
            //SaveToFile("/screenshot", "jpg", pixels);
            //}catch(IOException ex){
            //    Debug.Log(ex.Message);
            //}

            UploadHandler uploadHandler = new UploadHandlerRaw(pixels);
            //uploadHandler.contentType = "application/octet-stream";  // default
            req.uploadHandler = uploadHandler;

            yield return req.Send();
            if (req.isError)
            {
                Debug.Log("req.isError");
                Debug.Log(req.error);
            }
            else
            {
                string respString = System.Text.Encoding.UTF8.GetString(req.downloadHandler.data);
                CognitiveResponse resp = JsonUtility.FromJson<CognitiveResponse>(respString);
                //CognitiveResponse resp = JsonUtility.FromJson<CognitiveResponse>(str);
                Debug.Log("Resp = " + respString);
                //if (textmesh)
                //    textmesh.text = JsonUtility.ToJson(resp.result);
                //else
                    //Debug.Log("textmesh is null");
                if (resp.result != null)
                {
                    if( _tagOption == TagOption.Celebrity ){
						foreach (var celebrity in resp.result.celebrities){
							//Debug.Log(string.Format("FaceRectangle = {0}, {1}", celebrity.faceRectangle.left, celebrity.faceRectangle.top));
							celebrity.faceRectangle.height = (int)(celebrity.faceRectangle.height * (Screen.height * 1.0 / image.Height));
							celebrity.faceRectangle.width = (int)(celebrity.faceRectangle.width * (Screen.width * 1.0 / image.Width));
							celebrity.faceRectangle.left = (int)(celebrity.faceRectangle.left * (Screen.width * 1.0 / image.Width));
							celebrity.faceRectangle.top = (int)(celebrity.faceRectangle.top * (Screen.height * 1.0 / image.Height));
							//Debug.Log(string.Format("FaceRectangle = {0}, {1}", celebrity.faceRectangle.left, celebrity.faceRectangle.top));
						}
                    }else{  // landmarks doesn't have faceRectangle, display tag in the center of screen
                        foreach(var landmark in resp.result.landmarks){
                            landmark.faceRectangle.left = Screen.width / 2;
                            landmark.faceRectangle.top = Screen.height / 2;
                            landmark.faceRectangle.width = landmark.faceRectangle.height = 0;
						}
                    }
                    callback(resp.result);
                }
                //StartCoroutine(ShowMessage("JsonUtility.ToJson(resp.result)", 5));
            }
        }
        else
        {
            //textmesh.text = "Image is null";
            Debug.Log("Image is null");
        }
    }

    private string currentDisplayWikiName;
    public IEnumerator SearchWiki(string name)
    {
        if ( currentDisplayWikiName == null )
            currentDisplayWikiName = name;

        if( currentDisplayWikiName == name ){
            yield return null;
        }

        UnityWebRequest req = UnityWebRequest.Get(string.Format(mediaWikiURL, name));

        yield return req.Send();

        if (req.isError)
        {
            Debug.Log("req.isError");
            Debug.Log(req.error);
        }
        else
        {

            //}
            var resp = JSON.Parse(System.Text.Encoding.UTF8.GetString(req.downloadHandler.data));
            //Debug.Log(resp.ToString());

            bool isFound = false;
            //int minIndex = 1;

            foreach (var item in resp["query"]["pages"].Children)
            {
                if (item["title"].ToString().Contains(name) && item["index"].AsInt == 1)
                {
                    //minIndex = System.Math.Max(minIndex, item["index"]);
                    //boxText = item["extract"];
                    Debug.Log("BoxText = " + item["extract"]);
                    //boxText = Regex.Replace(boxText, "<[^>]*>", "");
                    var infoText = GameObject.Find("InfoText").GetComponent<Text>();
                    infoText.text = item["extract"];

                    var title = GameObject.Find("WeTagCanvas").transform.Find("InfoTitle").gameObject;
                    title.GetComponentInChildren<Text>().text = "About " + name;
                    title.SetActive(true);

                    //Debug.Log(GameObject.Find("WeTagCanvas").transform.Find("InfoTitle") == null);
                    isDetailShown = true;
                    isFound = true;
                }
            }

            if (!isFound)
                Debug.Log("No wiki items");
        }
        //yield return null;
    }

    public void showNoRecogItemDialog(){
		//boxText = 
		var infoText = GameObject.Find("InfoText").GetComponent<Text>();
		infoText.text = "Cannot recognize any " + (tagOption == TagOption.Celebrity ? "celebrities" : "landmarks");
        var title = GameObject.Find("WeTagCanvas").transform.Find("InfoTitle").gameObject;
        title.GetComponentInChildren<Text>().text = "Info";
		title.SetActive(true);
		isDetailShown = true;
    }


    public void DrawConnectingLines(FaceRectangle rect)
    {
        var points = new Vector3[4]{
            new Vector3(rect.left, Screen.height),
            new Vector3(rect.left+rect.width, Screen.height - rect.top),
            new Vector3(rect.left+rect.width, Screen.height - (rect.top + rect.height)),
            new Vector3(rect.left, Screen.height - (rect.top+rect.height))
        };
        box = new Rect(rect.left, rect.top, rect.width, rect.height);
        int N = points.Length;

        for (int i = 0; i < N; i++)
        {
            RaycastHit hit;
            Ray ray = Camera.main.ScreenPointToRay(points[i]);
            Debug.Log(string.Format("Point[{0}] = {1}", i, points[i]));
            if (Physics.Raycast(ray, out hit, Camera.main.farClipPlane))
            {
                points[i] = ray.GetPoint(hit.distance);
                points[i].y = 0;
            }
            else
            {
                Debug.Log("DrawConnectingLines: No hit point for" + points[i]);
                return;
            }
        }
        Debug.Log("Begin DrawConnectingLines");
        // Loop through each point to connect to the mainPoint
        for (int i = 0; i < N; i++)
        {
            Vector3 point = points[i];
            Vector3 lastPoint = points[(i + 1) % N];
            GL.Begin(GL.LINES);
            lineMat.SetPass(0);
            GL.Color(new Color(lineMat.color.r, lineMat.color.g, lineMat.color.b, lineMat.color.a));
            GL.Vertex3(lastPoint.x, lastPoint.y, lastPoint.z);
            GL.Vertex3(point.x, point.y, point.z);
            GL.End();
        }

    }


    public void changeDetailUI()
    {
        isDetailShown = !isDetailShown;
    }

    public void changeTagOption(){
        if( tagOption == TagOption.Celebrity ){
            tagOption = TagOption.Landmark;
        }else{
            tagOption = TagOption.Celebrity;
        }
		
    }


    #endregion


    #region PRIVATE_METHODS


    private void SaveToFile(string filename, string subfix, byte[] bytes)
    {
        string path;
        int index = 0;
        do
        {
            //path = System.IO.Path.Combine();
            path = Application.dataPath + "/" + filename + (index++) + "." + subfix;
        } while (File.Exists(path));

        var file = File.Open(path, FileMode.Create);

        var writer = new BinaryWriter(file);
        writer.Write(bytes);

        Debug.Log("SaveToFile: path = " + path);
    }

    private void OnGUI()
    {
        if (box != null)
        {
            //GUI.skin.box.wordWrap = true;
            //GUI.Box(box, boxText);
        }
    }

    private Texture2D FlipTexture(Texture2D original, bool isHorizontal)
    {
        Texture2D flipped = new Texture2D(original.width, original.height);

        int xN = original.width;
        int yN = original.height;

        for (int i = 0; i < xN; i++)
        {
            for (int j = 0; j < yN; j++)
            {
                if (isHorizontal)
                    flipped.SetPixel(xN - i - 1, j, original.GetPixel(i, j));
                else
                    flipped.SetPixel(i, yN - j - 1, original.GetPixel(i, j));
            }
        }
        flipped.Apply();

        return flipped;
    }

    private void initWeTagUI(){
        RectTransform background = GameObject.Find("InfoBackground").GetComponent<RectTransform>();
        float backgroundHeight = Screen.height / 5;

        background.sizeDelta = new Vector2(Screen.width, backgroundHeight);
        background.position.Set(-Screen.width/2, backgroundHeight / 2, 0);
        background.localScale = new Vector3();

		RectTransform title = GameObject.Find("InfoTitle").GetComponent<RectTransform>();
		titlePosition = backgroundHeight / Screen.height;
        title.position.Set(0, 0, 0);
        float titleHeight = backgroundHeight / 3;
        title.sizeDelta = new Vector2(titleHeight * 5, titleHeight);
        GameObject.Find("InfoTitle").gameObject.SetActive(false);
        isDetailShown = false;
    }

    #endregion

}
