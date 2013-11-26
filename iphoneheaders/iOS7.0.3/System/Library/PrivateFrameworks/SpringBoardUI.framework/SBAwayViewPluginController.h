/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:42 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class UIView, NSString;

@interface SBAwayViewPluginController : NSObject {

	UIView* _view;
	BOOL _viewCanBeDisplayed;
	BOOL _fullscreen;
	BOOL _alwaysFullscreen;
	int _orientation;
	/*^block*/ id _disableTransitionBlock;
	unsigned _effectivePresentationStyle;
	NSString* _enablingApplicationBundleIdentifier;

}

@property (nonatomic,retain) UIView * view; 
@property (assign,nonatomic) int orientation;                                                                                                            //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) BOOL viewCanBeDisplayed;                                                                                                    //@synthesize viewCanBeDisplayed=_viewCanBeDisplayed - In the implementation block
@property (assign,setter=_setEffectivePresentationStyle:,getter=_effectivePresentationStyle,nonatomic) unsigned effectivePresentationStyle;              //@synthesize effectivePresentationStyle=_effectivePresentationStyle - In the implementation block
@property (assign,getter=isAlwaysFullscreen,nonatomic) BOOL alwaysFullscreen; 
@property (nonatomic,copy) NSString * enablingApplicationBundleIdentifier;                                                                               //@synthesize enablingApplicationBundleIdentifier=_enablingApplicationBundleIdentifier - In the implementation block
+(id)_serializedDataForContext:(id)arg1 ;
+(void)enableBundleNamed:(id)arg1 activationContext:(id)arg2 ;
+(void)disableBundleNamed:(id)arg1 deactivationContext:(id)arg2 ;
+(void)enableBundleNamed:(id)arg1 ;
+(void)disableBundleNamed:(id)arg1 ;
-(id)customHeaderView;
-(BOOL)isFullscreen;
-(void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(id)init;
-(id)view;
-(int)orientation;
-(void)setView:(id)arg1 ;
-(id)backgroundView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(double)transitionDuration;
-(void)setOrientation:(int)arg1 ;
-(unsigned)presentationStyle;
-(void)disable;
-(id)legibilitySettings;
-(void)disableWithTransitionBlock:(/*^block*/ id)arg1 ;
-(void)_setDisableTransitionBlock:(/*^block*/ id)arg1 ;
-(void)setFullscreen:(BOOL)arg1 duration:(double)arg2 ;
-(BOOL)viewWantsOverlayLayout;
-(BOOL)disablesAwayItemsCompletely;
-(BOOL)shouldAutoHideNotifications;
-(double)viewFadeInDuration;
-(BOOL)canBeAlwaysFullscreen;
-(void)alwaysFullscreenValueHasChanged;
-(BOOL)showDateView;
-(void)purgeView;
-(void)setViewCanBeDisplayed:(BOOL)arg1 ;
-(void)setActivationContext:(id)arg1 ;
-(void)setDeactivationContext:(id)arg1 ;
-(/*^block*/ id)_disableTransitionBlock;
-(/*^block*/ id)enableTransitionBlock;
-(BOOL)viewWantsFullscreenLayout;
-(unsigned)notificationBehavior;
-(BOOL)shouldDisableOnRelock;
-(BOOL)shouldDisableOnUnlock;
-(BOOL)shouldShowLockStatusBarTime;
-(BOOL)allowsNotificationCenter;
-(BOOL)allowsControlCenter;
-(BOOL)allowsTimer;
-(void)setAlwaysFullscreen:(BOOL)arg1 ;
-(BOOL)isAlwaysFullscreen;
-(void)deviceLockViewWillShow;
-(void)deviceLockViewDidHide;
-(BOOL)retainsPriorityWhileInactive;
-(int)pluginPriority;
-(BOOL)animateResumingToApplicationWithIdentifier:(id)arg1 ;
-(id)bundleIDForUnlock;
-(BOOL)showAwayItems;
-(BOOL)showDate;
-(BOOL)showStatusBar;
-(BOOL)showHeaderView;
-(BOOL)canScreenDim;
-(BOOL)allowsLockScreenCamera;
-(BOOL)allowsLockScreenMediaControls;
-(BOOL)allowsPhotoSlideshow;
-(BOOL)allowsSiri;
-(BOOL)wantsToOpenURLsWhilePasscodeLocked;
-(BOOL)wantsHardwareEventsWhenScreenDimmed;
-(BOOL)wantsUserWallpaper;
-(BOOL)showsDuringCall;
-(BOOL)handleMenuButtonTap;
-(BOOL)handleMenuButtonDoubleTap;
-(BOOL)wantsMenuButtonHeldEvent;
-(BOOL)handleMenuButtonHeld;
-(BOOL)handleGesture:(int)arg1 fingerCount:(unsigned)arg2 ;
-(BOOL)handleLockButtonPressed;
-(BOOL)handleVolumeUpButtonPressed;
-(BOOL)handleVolumeDownButtonPressed;
-(BOOL)handleHeadsetButtonPressed:(BOOL)arg1 ;
-(BOOL)wantsAutomaticFullscreenTimer;
-(BOOL)wantsSwipeGestureRecognizer;
-(BOOL)wantsMesaAutoUnlock;
-(void)lockScreenMediaControlsShown:(BOOL)arg1 ;
-(BOOL)viewCanBeDisplayed;
-(unsigned)_effectivePresentationStyle;
-(void)_setEffectivePresentationStyle:(unsigned)arg1 ;
-(id)enablingApplicationBundleIdentifier;
-(void)setEnablingApplicationBundleIdentifier:(id)arg1 ;
-(unsigned)overlayStyle;
@end

