using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.IO;
using Vuforia;

using UnityEngine.Networking;

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

[RequireComponent(typeof(Plane))]
public class WeTagHandler : MonoBehaviour
{


	/// <summary>
	/// The cognitive API Auth.
	/// </summary>
	public string cognitiveAPIAuth = "974c0cbdf8b244c28024aaab33ab2fdb";

	/// <summary>
	/// The cognitive URI.
	/// </summary>
	public string cognitiveURI = "https://api.cognitive.azure.cn/vision/v1.0/models/celebrities/analyze";

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

	//public string sasd;

	// Use this for initialization
	void Start()
	{

	}

	// Update is called once per frame
	void Update()
	{
        

	}

	private Texture2D captureImage;

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

    private Rect box;
    private void OnGUI()
    {
		if (box != null){
			//GUI.Box(box, "box");
		}
        if( captureImage != null ){
			//GUI.DrawTexture(new Rect(0, 0, captureImage.width, captureImage.height), captureImage);
			//GUI.DrawTexture(new Rect(captureImage.width + 10, 0, captureFlipH.width, captureFlipH.height), captureFlipH);
			//GUI.DrawTexture(new Rect(captureImage.width * 2 + 20, 0, captureFlipV.width, captureFlipV.height), captureFlipV);

		}
    }

    //private IEnumerator ShowMessage(string message, float delay)
    //{
    //	popUpText.text = message;
    //	popUpText.enabled = true;
    //	yield return new WaitForSeconds(delay);
    //	popUpText.enabled = false;
    //}

}
