/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <UIKit/UIView.h>

@protocol HNDViewDelegateControl;
@class ;

@interface HNDView : UIView {

	BOOL _active;
	<HNDViewDelegateControl>* _controlDelegate;

}

@property (assign) <HNDViewDelegateControl> * controlDelegate;              //@synthesize controlDelegate=_controlDelegate - In the implementation block
@property (assign,nonatomic,@dynamic) BOOL isActive; 
-(void)setControlDelegate:(id)arg1 ;
-(void)handleRealUpEvent:(CGPoint)arg1 ;
-(void)handleRealCancelEvent:(CGPoint)arg1 ;
-(void)handleRealMoveEvent:(CGPoint)arg1 ;
-(void)handleFingerDriftedAway;
-(void)handleRealDownEvent:(CGPoint)arg1 ;
-(id)controlDelegate;
-(id)description;
-(BOOL)isActive;
-(void)setIsActive:(BOOL)arg1 ;
@end

