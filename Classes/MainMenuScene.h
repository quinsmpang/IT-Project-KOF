//
//  MainMenuScene.h
//  KOF
//
//  Created by Dongtao Yu on 12/08/2015.
//
//

#ifndef __KOF__MainMenuScene__
#define __KOF__MainMenuScene__

#include "PhotonMultiplayer.hpp"
#include "cocos2d.h"

#include "definitions.h"
#include "HelpScene.h"
#include "SettingScene.h"
#include "LoadingLayer.h"
#include "GKHWrapperCpp.h"
#include "GameHelper.h"
#include "MultiplayerCallback.h"


class MainMenuScene : public cocos2d::Layer, public MultiplayerCallback
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();
    
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    void update(float);
    
    // implement the "static create()" method manually
    CREATE_FUNC(MainMenuScene);
    
private:
    //TODO: comments
    void GoToChooseRoomScene(cocos2d::Ref*, ui::Widget::TouchEventType type);
    
    //TODO: comments
    void GoToHelpScene(cocos2d::Ref*, ui::Widget::TouchEventType type);
    
    //TODO: comments
    void GoToSettingScene(cocos2d::Ref*, ui::Widget::TouchEventType type);
    
    //TODO: comments
    void GotoLeaderBoardScene(cocos2d::Ref*, ui::Widget::TouchEventType type);
    
    void onJoinLobbyDone();
    void onSubscribeLobbyDone();
    
    // ConnectionRequestListener
    void onConnectDone();
};

#endif /* defined(__KOF__MainMenuScene__) */
