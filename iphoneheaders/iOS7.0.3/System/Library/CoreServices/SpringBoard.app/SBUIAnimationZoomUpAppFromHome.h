/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SBUIAnimationZoomUpApp.h>
#import <SpringBoard/SBIconAnimatorDelegate.h>

@class SBIconAnimator;

@interface SBUIAnimationZoomUpAppFromHome : SBUIAnimationZoomUpApp <SBIconAnimatorDelegate> {

	SBIconAnimator* _iconAnimator;

}
-(void)prepareZoom;
-(void)animateZoomWithCompletion:(/*^block*/ id)arg1 ;
-(void)cleanupZoom;
-(void)iconAnimatorWasInvalidated:(id)arg1 ;
-(void)dealloc;
@end

