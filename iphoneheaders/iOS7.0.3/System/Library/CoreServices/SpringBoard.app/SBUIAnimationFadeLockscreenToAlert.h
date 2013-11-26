/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBLockScreenViewController, SBAlertManager, SBUIFullscreenAlertAdapter, UIView;

@interface SBUIAnimationFadeLockscreenToAlert : SBUIMainScreenAnimationController {

	SBLockScreenViewController* _lockScreenViewController;
	SBAlertManager* _alertManager;
	SBUIFullscreenAlertAdapter* _toAlert;
	UIView* _cameraSnapshotView;
	BOOL _animatingFromCamera;
	BOOL _alertViewIsAnimatingItself;
	BOOL _alertIsTransparent;
	BOOL _finishedPrimaryFadeAnimation;
	BOOL _needsLockScreenAlphaRestoredOnCompletion;

}
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(void)_animationFinished;
-(void)_evaluateTotalAnimationCompletion;
-(void)_alertViewFinishedAnimatingItself;
-(void)_fadeAnimationFinished;
-(id)initWithLockScreenController:(id)arg1 toAlert:(id)arg2 alertManager:(id)arg3 ;
-(void)dealloc;
-(double)animationDuration;
-(void)_startAnimation;
@end

