/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBAlertManager, SBAlert, UIView;

@interface SBUIAnimationFadePluginAlertToHome : SBUIMainScreenAnimationController {

	SBAlertManager* _alertManager;
	SBAlert* _alert;
	UIView* _viewToAnimate;

}
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(double)animationDelay;
-(id)initWithDeactivatingAlert:(id)arg1 alertManager:(id)arg2 ;
-(void)dealloc;
-(double)animationDuration;
-(void)_startAnimation;
@end

