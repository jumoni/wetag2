using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.IO;
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

	public GUIText popUpText;

	public TextMesh textmesh;

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
	public IEnumerator RecognizeObject()
	{

		Debug.Log(this.cognitiveAPIAuth);

		Vuforia.Image image = CameraDevice.Instance.GetCameraImage(mPixelFormat);
        
		if (image != null)
		{
            TextureFormat texFormat;
            if (mPixelFormat == Vuforia.Image.PIXEL_FORMAT.RGBA8888)
                texFormat = TextureFormat.RGBA32;
            else
                texFormat = TextureFormat.RGB24;
            Texture2D tex = new Texture2D(image.Width, image.Height, texFormat, false);
            
			tex.LoadRawTextureData(image.Pixels);
			tex.Apply();

            tex = FlipTexture(tex);

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
            try{

				SaveToFile("/screenshot", "jpg", pixels);
            }catch(IOException ex){
                Debug.Log(ex.Message);
            }

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
				//string str = "{\r  \"requestId\": \"9669d8c1-9130-48dc-ad93-3403ca27ce4d\",\r  \"metadata\": {\r    \"width\": 4000,\r    \"height\": 2667,\r    \"format\": \"Jpeg\"\r  },\r  \"result\": {\r    \"celebrities\": [\r      {\r        \"name\": \"Jack Ma\",\r        \"faceRectangle\": {\r          \"left\": 2143,\r          \"top\": 623,\r          \"width\": 736,\r          \"height\": 736\r        },\r        \"confidence\": 0.9999925\r      }\r    ]\r  }\r}";
				CognitiveResponse resp = JsonUtility.FromJson<CognitiveResponse>(System.Text.Encoding.UTF8.GetString(req.downloadHandler.data));
				//CognitiveResponse resp = JsonUtility.FromJson<CognitiveResponse>(str);
				Debug.Log("Result = " + JsonUtility.ToJson(resp.result));
				if (textmesh)
					textmesh.text = JsonUtility.ToJson(resp.result);
				else
					Debug.Log("textmesh is null");
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

            path = Application.persistentDataPath + filename + (index++) + "." + subfix;

        }while (File.Exists(path));

        var file = File.Open(path, FileMode.Create);

        var writer = new BinaryWriter(file);
        writer.Write(bytes);

        Debug.Log("SaveToFile: path = " + path);
    }

	Texture2D FlipTexture(Texture2D original)
	{
		Texture2D flipped = new Texture2D(original.width, original.height);

		int xN = original.width;
		int yN = original.height;


		for (int i = 0; i < xN; i++)
		{
			for (int j = 0; j < yN; j++)
			{
				flipped.SetPixel(i, yN - j - 1, original.GetPixel(i, j));
			}
		}
		flipped.Apply();

		return flipped;
	}

	private IEnumerator ShowMessage(string message, float delay)
	{
		popUpText.text = message;
		popUpText.enabled = true;
		yield return new WaitForSeconds(delay);
		popUpText.enabled = false;
	}

}
