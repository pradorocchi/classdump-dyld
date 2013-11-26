/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:16 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UIControl.h>

@class GKBubbleView;

@interface GKBubbleControl : UIControl {

	BOOL _animatingIn;
	BOOL _animateOnTouch;
	GKBubbleView* _bubbleView;

}

@property (getter=isSharedBubble,nonatomic,readonly) BOOL sharedBubble; 
@property (assign,nonatomic) CGRect screenFrame; 
@property (nonatomic,readonly) CGPoint screenPosition; 
@property (nonatomic,readonly) CGSize screenSize; 
@property (assign,nonatomic) GLKVector3 worldPosition; 
@property (nonatomic,readonly) GLKVector3 worldSize; 
@property (assign,nonatomic) int bubbleType; 
@property (nonatomic,retain) GKBubbleView * bubbleView;                              //@synthesize bubbleView=_bubbleView - In the implementation block
@property (assign,nonatomic) BOOL animateOnTouch;                                    //@synthesize animateOnTouch=_animateOnTouch - In the implementation block
-(void)setBubbleType:(int)arg1 ;
-(int)bubbleType;
-(CGRect)screenFrame;
-(void)setScreenFrame:(CGRect)arg1 ;
-(_GLKVector3)worldPosition;
-(_GLKVector3)worldSize;
-(CGPoint)screenPosition;
-(_GLKVector3)worldPositionForScreenPosition:(CGPoint)arg1 andScreenSize:(CGSize)arg2 ;
-(void)setWorldPosition:(_GLKVector3)arg1 ;
-(void)setScreenPosition:(CGPoint)arg1 andScreenSize:(CGSize)arg2 ;
-(id)bubbleView;
-(BOOL)isSharedBubble;
-(_GLKVector3)worldPositionForScreenFrame:(CGRect)arg1 ;
-(id)contentsWrapperView;
-(void)setBubbleView:(id)arg1 ;
-(void)setAnimateOnTouch:(BOOL)arg1 ;
-(void)didTouchDown;
-(void)didTouchUp;
-(id)pathForHitTesting;
-(BOOL)animateOnTouch;
-(BOOL)bouncing;
-(void)bounceAfterDelay:(double)arg1 fromZ:(float)arg2 toZ:(float)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)description;
-(CGSize)screenSize;
@end

