//
//  ViewController.swift
//  WeTagUnity
//
//  Created by cs on 2017/6/2.
//  Copyright © 2017年 cs. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        
        let unityView = UnityGetGLView()
        
//        self.view = unityView!
        
        self.view.addSubview(unityView!)
        unityView!.translatesAutoresizingMaskIntoConstraints = false;
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

