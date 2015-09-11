//
//  Fighter.h
//  KOF
//
//  Created by Dongtao Yu on 11/09/2015.
//
//

#ifndef __KOF__Fighter__
#define __KOF__Fighter__

#include <stdio.h>
#include "cocos2d.h"
#include <boost/format.hpp>

class Fighter
{
    
public:
    Fighter(cocos2d::Sprite*, std::string);
    CC_SYNTHESIZE(cocos2d::Sprite*, sprite, Sprite);
    
    void stand();
    void moveForward();
    void moveBack();
    void jumpUp();
    void jumpForward();
    void jumpBack();
    
    bool isStand();
//private:
    
    
    
    
    
};


#endif /* defined(__KOF__Fighter__) */
