//
//  LoadingLayer.h
//  KOF
//
//  Created by Dongtao Yu on 7/09/2015.
//
//

#ifndef __KOF__LoadingLayer__
#define __KOF__LoadingLayer__

#include <stdio.h>
#include "cocos2d.h"
#include "CocosGUI.h"
#include "cocostudio/CocoStudio.h"

class LoadingLayer : public cocos2d::LayerColor
{
public:
    
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    // implement the "static create()" method manually
    CREATE_FUNC(LoadingLayer);
    
    static void AppendText(Node*, std::string);
    static void SetText(Node* scene, std::string value);
    static void SetLoadingBarPercentage(Scene*, int);
    
};
#endif /* defined(__KOF__LoadingLayer__) */
