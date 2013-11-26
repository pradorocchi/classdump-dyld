/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBUIBannerTarget.h>
#import <SpringBoard/SBAssistantObserver.h>
#import <SpringBoard/SBBulletinWindowClient.h>
#import <SpringBoard/SBBulletinBusyClient.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSHashTable, NSMutableArray, UIImage, SBBannerContextView;

@interface SBBannerController : NSObject <SBUIBannerTarget, SBAssistantObserver, SBBulletinWindowClient, SBBulletinBusyClient, UIGestureRecognizerDelegate> {

	NSHashTable* _sources;
	NSMutableArray* _pendingBannerContextsNeedingRepop;
	UIImage* _bannerViewBackgroundImage;
	SBBannerContextView* _bannerView;
	BOOL _soundIsPlaying;
	BOOL _dismissalOverdue;
	BOOL _replaceDelayIsActive;
	BOOL _showingStickyDurationBanner;
	BOOL _suppressingBanners;
	BOOL _enableDelayActive;
	BOOL _assistantIsFullyVisible;
	BOOL _locked;
	int _activeDismissGestureType;
	int _overdueDismissReason;
	/*^block*/ id _overdueCompletionBlock;
	BOOL _dismissingBannerForAssistantReveal;
	BOOL _dismissingBannerForAssistantDismiss;
	/*^block*/ id _assistantRevealCompletionBlock;
	/*^block*/ id _assistantDismissCompletionBlock;

}

@property (nonatomic,readonly) int bannerTargetIdiom; 
+(id)_sharedInstanceCreateIfNecessary:(BOOL)arg1 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(void)handleSystemDismissGestureWithState:(int)arg1 position:(CGPoint)arg2 velocity:(float)arg3 ;
-(void)_lockStateChanged:(id)arg1 ;
-(void)bulletinWindowStoppedBeingBusy;
-(void)_updateBannerSuppressionState;
-(void)_setOverdueCompletionBlock:(/*^block*/ id)arg1 ;
-(void)_fireCompletionBlockForBannerAnimationForAssistantRevealIfNecessary;
-(void)_fireCompletionBlockForBannerAnimationForAssistantDismissIfNecessary;
-(void)_dismissBannerWithAnimation:(BOOL)arg1 reason:(int)arg2 forceEvenIfBusy:(BOOL)arg3 completion:(/*^block*/ id)arg4 ;
-(int)bannerTargetIdiom;
-(void)_handleDismissGestureType:(int)arg1 withState:(int)arg2 displacement:(float)arg3 velocity:(float)arg4 ;
-(id)_newBannerViewForContext:(id)arg1 ;
-(CGRect)_bannerFrameForOrientation:(int)arg1 ;
-(void)_removePendingContextsForSourceNeedingRepop:(id)arg1 ;
-(void)dismissBannerWithAnimation:(BOOL)arg1 reason:(int)arg2 ;
-(BOOL)_dequeueBannerIfPossible;
-(id)_pendingBannerContextForSourceNeedingRepop:(id)arg1 ;
-(id)currentBannerContextForSource:(id)arg1 ;
-(BOOL)_dequeueBannerIfPossibleIgnoringStickyBanner:(BOOL)arg1 existingDismissReason:(int)arg2 ;
-(void)_dismissOverdueOrDequeueIfPossible;
-(BOOL)isShowingBanner;
-(void)_updateBannerSuppressionStateAndDequeueIfPossible:(BOOL)arg1 withDelay:(BOOL)arg2 ;
-(void)_dismissIntervalElapsed;
-(void)_dequeueAfterDelayIfPossible;
-(BOOL)_isItemShowable:(id)arg1 fromSource:(id)arg2 ;
-(BOOL)_canDequeueIgnoringStickyBanner:(BOOL)arg1 ;
-(id)_dequeueNextBannerContext;
-(void)_performTransition:(int)arg1 withAnimation:(BOOL)arg2 context:(id)arg3 reason:(int)arg4 completion:(/*^block*/ id)arg5 ;
-(void)_stopCurrentSound;
-(void)_updateDismissGestureState:(SBBannerDismissGestureState*)arg1 withDisplacement:(float)arg2 velocity:(float)arg3 ;
-(void)_tearDownViewWithReason:(int)arg1 ;
-(BOOL)_shouldPendStickyBannerContext:(id)arg1 withReason:(int)arg2 ;
-(id)_bannerViewBackgroundImage;
-(double)_durationForTransition:(int)arg1 ;
-(void)_replaceIntervalElapsed;
-(void)_handleBannerPanGesture:(id)arg1 ;
-(void)_handleBannerTapGesture:(id)arg1 ;
-(void)_playSoundForContext:(id)arg1 ;
-(void)_soundDidFinishPlayingForBannerContext:(id)arg1 ;
-(BOOL)isTrackingDismissGesture;
-(void)registerSource:(id)arg1 ;
-(void)unregisterSource:(id)arg1 ;
-(void)signalSource:(id)arg1 ;
-(void)dismissCurrentBannerContextForSource:(id)arg1 ;
-(void)assistant:(id)arg1 viewWillAppear:(int)arg2 ;
-(void)assistant:(id)arg1 viewDidAppear:(int)arg2 ;
-(void)assistant:(id)arg1 viewWillDisappear:(int)arg2 ;
-(void)assistant:(id)arg1 viewDidDisappear:(int)arg2 ;
-(void)bulletinWindowWillRotateToOrientation:(int)arg1 duration:(double)arg2 ;
-(void)bulletinWindowIsAnimatingRotationToOrientation:(int)arg1 duration:(double)arg2 ;
-(void)bulletinWindowDidRotateFromOrientation:(int)arg1 ;
-(void)dismissBannerWithAnimation:(BOOL)arg1 reason:(int)arg2 forceEvenIfBusy:(BOOL)arg3 ;
-(void)setBannerAlpha:(float)arg1 ;
-(id)newBannerSnapshotViewRotatedForOrientation:(int)arg1 ;
-(void)_presentBannerForContext:(id)arg1 reason:(int)arg2 ;
-(void)_tryToDismissWithAnimation:(BOOL)arg1 reason:(int)arg2 forceEvenIfBusy:(BOOL)arg3 completion:(/*^block*/ id)arg4 ;
-(void)dealloc;
-(id)init;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
@end

