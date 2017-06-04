//
//  ViewController.swift
//  WeTagUnity
//
//  Created by cs on 2017/6/2.
//  Copyright © 2017年 cs. All rights reserved.
//

import UIKit


class ViewController: UIViewController {

    
    private var cognitiveURL:String =  "https://api.cognitive.azure.cn/vision/v1.0/models/celebrities/analyze"
    
    private var auth:String = "974c0cbdf8b244c28024aaab33ab2fdb"
    
    public func recognize(image: UIImage){
        
        if let imageData = UIImageJPEGRepresentation(image, 1) {
            let encodedData = imageData.base64EncodedString(options: NSData.Base64EncodingOptions(rawValue: 0))
            
            var request = URLRequest(url: URL(string: cognitiveURL)!)
            request.httpMethod = "POST"
            request.httpBody = encodedData.data(using: .utf8)
            
            let task = URLSession.shared.dataTask(with: request) { data, response, error in
                guard let data = data, error == nil else{
                    print("error=\(error)")
                    return
                }
                if let httpStatus = response as? HTTPURLResponse, httpStatus.statusCode != 200 {           // check for http errors
                    print("statusCode should be 200, but is \(httpStatus.statusCode)")
                    print("response = \(response)")
                }
                /*
                 {
                 "requestId": "3f9d03f9-0404-41d5-8752-967ea242d2a0",
                 "metadata": {
                    "width": 1024,
                    "height": 640,
                    "format": "Jpeg"
                 },
                 "result": {
                    "celebrities": [
                    {
                        "name": "ROBERT DOWNEY JR.",
                        "faceRectangle": {
                            "left": 483,
                            "top": 174,
                            "width": 52,
                            "height": 52
                        },
                        "confidence": 0.991924942
                    },
                    {
                        "name": "Jeremy Renner",
                        "faceRectangle": {
                            "left": 943,
                            "top": 213,
                            "width": 45,
                            "height": 45
                        },
                        "confidence": 0.990392566
                    }
                 ]
                 }
                 }
                 
                 */
                let responseString = String(data: data, encoding: .utf8)
                print("responseString = \(responseString)")
                // TODO: 解析response字符串获取celebrities数组内容并更新显示tag
                let json = try? JSONSerialization.jsonObject(with: (responseString?.data(using: .utf8))!)
            }
            task.resume()
        }
        
    }
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

