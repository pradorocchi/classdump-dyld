/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class UIView, SBLockScreenView, SBLockScreenBounceAnimator, _UIDynamicValueAnimation, SBDisableAppStatusBarAlphaChangesAssertion;

@interface SBLockScreenSlideUpController : NSObject {

	BOOL _isInScreenOffMode;
	UIView* _slidingStatusBarView;
	SBLockScreenView* _lockScreenView;
	SBLockScreenBounceAnimator* _bounceAnimator;
	_UIDynamicValueAnimation* _dynamicAnimation;
	SBDisableAppStatusBarAlphaChangesAssertion* _disableStatusBarAssertion;

}

@property (retain) SBDisableAppStatusBarAlphaChangesAssertion * disableStatusBarAssertion;              //@synthesize disableStatusBarAssertion=_disableStatusBarAssertion - In the implementation block
+(id)lockScreenViewFakeStatusBar;
-(id)lockScreenView;
-(void)setLockScreenView:(id)arg1 ;
-(id)bounceAnimator;
-(void)cleanupFromGesture;
-(void)prepareForSlideUpAnimation;
-(void)finalizeGesture;
-(void)hideSlidingStatusBar;
-(void)abortDynamicAnimationForScreenOff;
-(void)setGrabberOnLockScreen:(id)arg1 ;
-(id)_newBounceAnimatorWithGrabberView:(id)arg1 ;
-(id)_newDynamicAnimationForGestureSucceeded:(BOOL)arg1 targetValue:(double)arg2 withInitialVelocity:(double)arg3 ;
-(void)gestureDidEnd:(BOOL)arg1 ;
-(void)setDisableStatusBarAssertion:(id)arg1 ;
-(void)gestureWillEndWithVelocity:(float)arg1 ;
-(id)disableStatusBarAssertion;
-(void)setInScreenOffMode:(BOOL)arg1 ;
-(void)translateSlidingViewByY:(float)arg1 ;
-(void)dealloc;
-(id)grabberView;
@end

