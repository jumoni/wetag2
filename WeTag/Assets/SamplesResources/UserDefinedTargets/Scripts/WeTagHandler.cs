using UnityEngine;
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
public class Celebrity{
	public string name;
	public FaceRectangle faceRectangle;
	public double confidence;
}

[System.Serializable]
public class Result{
	public Celebrity[] celebrities;
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

[RequireComponent(typeof(Plane))]
public class WeTagHandler : MonoBehaviour
{

#region PUBLIC_MEMBERS

    /// <summary>
    /// The cognitive API Auth.
    /// </summary>
    public string cognitiveAPIAuth = "974c0cbdf8b244c28024aaab33ab2fdb";

	/// <summary>
	/// The cognitive URI.
	/// </summary>
	public string cognitiveURI = "https://api.cognitive.azure.cn/vision/v1.0/models/celebrities/analyze";

    public string mediaWikiURL = "http://en.wikipedia.org/w/api.php?format=json&action=query&generator=search&gsrsearch={0}&gsrlimit=10&prop=pageimages|extracts&pilimit=max&exintro&explaintext";
    public static Vuforia.Image.PIXEL_FORMAT mPixelFormat = Vuforia.Image.PIXEL_FORMAT.RGB888;

    /// <summary>
    /// Recog finish delegate.
    /// <param name="res">recognize result</param>
    /// </summary>
    public delegate void RecogFinishDelegate(Result res);

	//public GameObject popUpText;

	public TextMesh textmesh;

	public GameObject celebrityTag;

	public Material lineMat;

	#endregion

	#region PRIVATE_MEMBERS

	private Texture2D captureImage;
	
    private Rect box;

    private string boxText = "box";

    #endregion

    //public string sasd;

    // Use this for initialization
    void Start()
	{

	}

	// Update is called once per frame
	void Update()
	{
        

	}


	/// <summary>
	/// Upload the image to Recognitive API and display tags
	/// </summary>
	public IEnumerator RecognizeObject(RecogFinishDelegate callback)
	{

		Debug.Log(this.cognitiveAPIAuth);

		Vuforia.Image image = CameraDevice.Instance.GetCameraImage(mPixelFormat);

        bool isHorizontal = false;

		if (image != null)
		{
            TextureFormat texFormat;
            if (mPixelFormat == Vuforia.Image.PIXEL_FORMAT.RGBA8888){
                texFormat = TextureFormat.RGBA32;
                isHorizontal = false;
            }else{
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

			UnityWebRequest req = UnityWebRequest.Post(cognitiveURI, "");
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
				CognitiveResponse resp = JsonUtility.FromJson<CognitiveResponse>(System.Text.Encoding.UTF8.GetString(req.downloadHandler.data));
				//CognitiveResponse resp = JsonUtility.FromJson<CognitiveResponse>(str);
				Debug.Log("Result = " + JsonUtility.ToJson(resp.result));
				if (textmesh)
					textmesh.text = JsonUtility.ToJson(resp.result);
				else
					Debug.Log("textmesh is null");
                if( resp.result != null ){
					//var celebrities = resp.result.celebrities;
					foreach (var celebrity in resp.result.celebrities) {
						//Debug.Log(string.Format("FaceRectangle = {0}, {1}", celebrity.faceRectangle.left, celebrity.faceRectangle.top));
                        celebrity.faceRectangle.height = (int)(celebrity.faceRectangle.height * (Screen.height * 1.0 / image.Height));
                        celebrity.faceRectangle.width = (int)(celebrity.faceRectangle.width * (Screen.width * 1.0 / image.Width));
                        celebrity.faceRectangle.left = (int)(celebrity.faceRectangle.left * (Screen.width * 1.0 / image.Width));
						celebrity.faceRectangle.top = (int)(celebrity.faceRectangle.top * (Screen.height * 1.0 / image.Height));
						//Debug.Log(string.Format("FaceRectangle = {0}, {1}", celebrity.faceRectangle.left, celebrity.faceRectangle.top));
                    }
                    callback(resp.result);
                }
				//StartCoroutine(ShowMessage("JsonUtility.ToJson(resp.result)", 5));
			}
        }else{
			textmesh.text = "Image is null";
			Debug.Log("Image is null");
        }
	}

    public IEnumerator SearchWiki(string name){

        UnityWebRequest req = UnityWebRequest.Get(string.Format(mediaWikiURL, name));

        yield return req.Send();

        if( req.isError ){
            Debug.Log("req.isError");
            Debug.Log(req.error);
        }else{

			//}
			var resp = JSON.Parse(System.Text.Encoding.UTF8.GetString(req.downloadHandler.data));
			Debug.Log(resp.ToString());

			bool isFound = false;
            //int minIndex = 1;

            foreach(var item in resp["query"]["pages"].Children){
                if( item["title"].ToString().Contains(name) && item["index"].AsInt == 1 ){
					//minIndex = System.Math.Max(minIndex, item["index"]);
					boxText = item["extract"];
					Debug.Log("BoxText = " + boxText);
					//boxText = Regex.Replace(boxText, "<[^>]*>", "");
					var infoText = GameObject.Find("InfoText").GetComponent<Text>();
					infoText.text = boxText;
                    GameObject.Find("DetailInfoText").GetComponent<Text>().text = boxText;
					isFound = true;
                }
            }

			if( !isFound )
    			Debug.Log("No wiki items");
        }
        //yield return null;
    }

    private void SaveToFile(string filename, string subfix, byte[] bytes){
        string path;
        int index = 0;
        do{
            //path = System.IO.Path.Combine();
            path = Application.dataPath + "/" + filename + (index++) + "." + subfix;
        }while (File.Exists(path));

        var file = File.Open(path, FileMode.Create);

        var writer = new BinaryWriter(file);
        writer.Write(bytes);

        Debug.Log("SaveToFile: path = " + path);
    }

	Texture2D FlipTexture(Texture2D original, bool isHorizontal)
	{
		Texture2D flipped = new Texture2D(original.width, original.height);

		int xN = original.width;
		int yN = original.height;

		for (int i = 0; i < xN; i++)
		{
			for (int j = 0; j < yN; j++)
			{
                if( isHorizontal )
                    flipped.SetPixel(xN - i - 1, j, original.GetPixel(i, j));
                else
				    flipped.SetPixel(i, yN - j - 1, original.GetPixel(i, j));
			}
		}
		flipped.Apply();

		return flipped;
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

    private void OnGUI()
    {
		if (box != null)
		{
			//GUI.skin.box.wordWrap = true;
            //GUI.Box(box, boxText);
		}
    }

    public void scaleBox(){
        
        var infoContent = GameObject.Find("InfoBackground").GetComponent<RectTransform>();
        Vector2 pos = infoContent.position;
        pos.x /= Screen.width;
        pos.y /= Screen.height;
        var move = UIAnimator.MoveVerticalTo(infoContent, -0.5f, 1.0f).SetEffect(Effect.Spring());
        //move.Play();
        
        var infoTitle = GameObject.Find("InfoTitle").GetComponent<RectTransform>();
        var scaleto = UIAnimator.ScaleTo(infoTitle, new Vector3(0, 0, 0), 0.5f).SetCallback(move.Play);
        scaleto.Play();
        //var originSclae = infoContent.transform.localScale;
        //var afterScale = originSclae;
        //afterScale *= 2;
        //var scale = UIAnimator.Scale(infoContent, originSclae, afterScale, 0.5f);
        //move.Play();
        //scale.Play();

    }

	//private IEnumerator ShowMessage(string message, float delay)
	//{
	//	popUpText.text = message;
	//	popUpText.enabled = true;
	//	yield return new WaitForSeconds(delay);
	//	popUpText.enabled = false;
	//}


	//public static Vector2 NativeResolution = new Vector2(480, 320);

 //   private bool _didResizeUI = false;

	//private static float _guiScaleFactor = -1.0f;
	//private static Vector3 _offset = Vector3.zero;

	//static List<Matrix4x4> stack = new List<Matrix4x4>();
	//public void BeginUIResizing()
	//{
	//	Vector2 nativeSize = NativeResolution;

	//	_didResizeUI = true;

	//	stack.Add(GUI.matrix);
	//	Matrix4x4 m = new Matrix4x4();
	//	var w = (float)Screen.width;
	//	var h = (float)Screen.height;
	//	var aspect = w / h;
	//	var offset = Vector3.zero;
	//	if (aspect < (nativeSize.x / nativeSize.y))
	//	{
	//		//screen is taller
	//		_guiScaleFactor = (Screen.width / nativeSize.x);
	//		offset.y += (Screen.height - (nativeSize.y * guiScaleFactor)) * 0.5f;
	//	}
	//	else
	//	{
	//		// screen is wider
	//		_guiScaleFactor = (Screen.height / nativeSize.y);
	//		offset.x += (Screen.width - (nativeSize.x * guiScaleFactor)) * 0.5f;
	//	}

	//	m.SetTRS(offset, Quaternion.identity, Vector3.one * guiScaleFactor);
	//	GUI.matrix *= m;
	//}

	//public void EndUIResizing()
	//{
	//	GUI.matrix = stack[stack.Count - 1];
	//	stack.RemoveAt(stack.Count - 1);
	//	_didResizeUI = false;
	//}

}
