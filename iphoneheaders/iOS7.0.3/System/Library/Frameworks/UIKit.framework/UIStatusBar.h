/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:09 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIScrollsToTopInitiatorView.h>
#import <UIKit/UIStatusBarServerClient.h>
#import <UIKit/UIStatusBarStateObserver.h>

@protocol UIStatusBarStateProvider, UIStatusBarStyleDelegate;
@class UIStatusBarWindow, UIStatusBarServer, , UIStatusBarBackgroundView, UIStatusBarForegroundView, UILabel, NSString, NSMutableArray, UIStatusBarStyleAttributes, UIColor, UIStatusBarStyleAnimationParameters, NSNumber, NSMutableSet, UIStatusBarStyleRequest;

@interface UIStatusBar : _UIScrollsToTopInitiatorView <UIStatusBarServerClient, UIStatusBarStateObserver> {

	UIStatusBarWindow* _statusBarWindow;
	UIStatusBarServer* _statusBarServer;
	<UIStatusBarStateProvider>* _inProcessProvider;
	BOOL _showsForeground;
	UIStatusBarBackgroundView* _backgroundView;
	UIStatusBarForegroundView* _foregroundView;
	UILabel* _doubleHeightLabel;
	NSString* _currentDoubleHeightText;
	SCD_Struct_UI67 _currentRawData;
	NSMutableArray* _interruptedAnimationCompositeViews;
	UIStatusBarBackgroundView* _newStyleBackgroundView;
	UIStatusBarForegroundView* _newStyleForegroundView;
	UIStatusBar* _slidingStatusBar;
	int _requestedStyle;
	int _styleOverrides;
	UIStatusBarStyleAttributes* _styleAttributes;
	int _orientation;
	BOOL _hidden;
	BOOL _suppressesHiddenSideEffects;
	BOOL _foreground;
	BOOL _registered;
	BOOL _waitingOnCallbackAfterChangingStyleOverridesLocally;
	BOOL _suppressGlow;
	float _translucentBackgroundAlpha;
	BOOL _showOnlyCenterItems;
	SCD_Struct_UI68* _localDataOverrides;
	UIColor* _tintColor;
	UIColor* _lastUsedBackgroundColor;
	UIStatusBarStyleAnimationParameters* _nextTintTransition;
	NSNumber* _overrideHeight;
	NSMutableSet* _disableRasterizationReasons;
	BOOL _persistentAnimationsEnabled;
	BOOL _simulatesLegacyAppearance;
	BOOL _serverUpdatesDisabled;
	BOOL _homeItemsDisabled;
	<UIStatusBarStyleDelegate>* _styleDelegate;
	UIColor* _foregroundColor;
	int _legibilityStyle;

}

@property (assign,nonatomic) <UIStatusBarStyleDelegate> * styleDelegate;              //@synthesize styleDelegate=_styleDelegate - In the implementation block
@property (assign,nonatomic) UIStatusBarWindow * statusBarWindow;                     //@synthesize statusBarWindow=_statusBarWindow - In the implementation block
@property (assign,nonatomic) BOOL persistentAnimationsEnabled;                        //@synthesize persistentAnimationsEnabled=_persistentAnimationsEnabled - In the implementation block
@property (nonatomic,readonly) int styleOverrides;                                    //@synthesize styleOverrides=_styleOverrides - In the implementation block
@property (assign,nonatomic) BOOL simulatesLegacyAppearance;                          //@synthesize simulatesLegacyAppearance=_simulatesLegacyAppearance - In the implementation block
@property (assign,nonatomic) BOOL serverUpdatesDisabled;                              //@synthesize serverUpdatesDisabled=_serverUpdatesDisabled - In the implementation block
@property (assign,nonatomic) BOOL homeItemsDisabled;                                  //@synthesize homeItemsDisabled=_homeItemsDisabled - In the implementation block
@property (nonatomic,retain) UIColor * foregroundColor;                               //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (assign,nonatomic) int legibilityStyle;                                     //@synthesize legibilityStyle=_legibilityStyle - In the implementation block
@property (nonatomic,copy) UIStatusBarStyleRequest * styleRequest; 
+(id)statusBarTintColorForNavBarTintColor:(id)arg1 ;
+(int)defaultStyleForRequestedStyle:(int)arg1 styleOverrides:(int)arg2 ;
+(CGRect)_frameForStyle:(int)arg1 orientation:(int)arg2 inWindowOfSize:(CGSize)arg3 ;
+(float)heightForStyle:(int)arg1 orientation:(int)arg2 ;
+(void)setTintOverrideEnabled:(BOOL)arg1 withColor:(id)arg2 ;
+(void)setSuppressUpdateAnimations:(BOOL)arg1 ;
+(id)defaultBlueTintColor;
+(id)navBarTintColorFromStatusBarTintColor:(id)arg1 ;
+(void)getData:(SCD_Struct_UI67*)arg1 forRequestedData:(const SCD_Struct_UI67*)arg2 withOverrides:(const SCD_Struct_UI68*)arg3 ;
+(id)_styleAttributesForStatusBarStyle:(int)arg1 legacy:(BOOL)arg2 ;
+(CGRect)_frameForStyleAttributes:(id)arg1 orientation:(int)arg2 inWindowOfSize:(CGSize)arg3 ;
+(CGRect)_frameForStyleAttributes:(id)arg1 orientation:(int)arg2 ;
+(id)_styleAttributesForRequest:(id)arg1 ;
+(int)cornerStyleForRequestedStyle:(int)arg1 effectiveStyle:(int)arg2 alignment:(int)arg3 ;
+(id)_newStyleAttributesForRequest:(id)arg1 ;
+(int)defaultStatusBarStyleWithTint:(BOOL)arg1 ;
+(int)lowBatteryLevel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id)_backgroundView;
-(void)forceUpdateDoubleHeightStatus;
-(void)setStyleDelegate:(id)arg1 ;
-(void)requestStyle:(int)arg1 animated:(BOOL)arg2 ;
-(void)_setVisualAltitude:(float)arg1 ;
-(void)_setVisualAltitudeBias:(CGSize)arg1 ;
-(void)requestStyle:(int)arg1 animationParameters:(id)arg2 ;
-(void)setHidden:(BOOL)arg1 animationParameters:(id)arg2 ;
-(void)noteStyleOverridesChangedLocally;
-(void)setTintColor:(id)arg1 withDuration:(double)arg2 ;
-(BOOL)isTranslucent;
-(int)currentStyle;
-(float)heightForOrientation:(int)arg1 ;
-(float)currentHeight;
-(id)statusBarWindow;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setTintColor:(id)arg1 ;
-(void)didMoveToSuperview;
-(float)_standardHeight;
-(BOOL)_isTransparent;
-(BOOL)isDoubleHeight;
-(int)legibilityStyle;
-(void)setOrientation:(int)arg1 ;
-(id)foregroundColor;
-(void)setSuppressesGlow:(BOOL)arg1 ;
-(void)setPersistentAnimationsEnabled:(BOOL)arg1 ;
-(BOOL)persistentAnimationsEnabled;
-(int)styleOverrides;
-(void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const SCD_Struct_UI67*)arg2 withActions:(int)arg3 ;
-(void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2 ;
-(void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(BOOL)arg2 forStyle:(int)arg3 ;
-(void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(int)arg3 ;
-(void)setStatusBarWindow:(id)arg1 ;
-(CGAffineTransform)_hiddenTransformForHideAnimationParameters:(id)arg1 ;
-(void)_didEnterBackground:(id)arg1 ;
-(void)_willEnterForeground:(id)arg1 ;
-(void)_itemViewPerformButtonAction:(id)arg1 ;
-(void)_itemViewShouldBeginDisablingRasterization:(id)arg1 ;
-(void)_itemViewShouldEndDisablingRasterization:(id)arg1 ;
-(void)_styleOverridesDidChange:(id)arg1 ;
-(void)_evaluateServerRegistration;
-(void)_updateShouldRasterize;
-(id)initWithFrame:(CGRect)arg1 showForegroundView:(BOOL)arg2 inProcessStateProvider:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 showForegroundView:(BOOL)arg2 ;
-(void)forceUpdateToData:(const SCD_Struct_UI67*)arg1 animated:(BOOL)arg2 ;
-(id)_currentComposedData;
-(void)_setDoubleHeightStatusString:(id)arg1 ;
-(void)_adjustDoubleHeightTextVisibility;
-(CGRect)frameForOrientation:(int)arg1 ;
-(void)forceUpdateStyleOverrides:(BOOL)arg1 ;
-(id)_currentStyleAttributes;
-(id)styleRequest;
-(id)_styleAttributesForRequest:(id)arg1 ;
-(int)styleForRequestedStyle:(int)arg1 ;
-(id)currentStyleRequestForStyle:(int)arg1 ;
-(void)_requestStyleAttributes:(id)arg1 animationParameters:(id)arg2 ;
-(id)activeTintColor;
-(id)_prepareToSetStyle:(id)arg1 animation:(int)arg2 ;
-(void)_endDisablingRasterizationForReason:(id)arg1 ;
-(void)_beginDisablingRasterizationForReason:(id)arg1 ;
-(void)_setStyle:(id)arg1 animation:(int)arg2 ;
-(void)_finishedSettingStyleWithOldHeight:(float)arg1 newHeight:(float)arg2 animation:(int)arg3 ;
-(void)_updateBackgroundFrame;
-(CGRect)_backgroundFrameForAttributes:(id)arg1 ;
-(id)_prepareInterruptedAnimationCompositeViewIncludingForeground:(BOOL)arg1 ;
-(void)_updatePersistentAnimationsEnabledForForegroundView:(id)arg1 ;
-(id)_currentComposedDataForStyle:(id)arg1 ;
-(CGAffineTransform)_slideTransform;
-(void)_setFrameForStyle:(id)arg1 ;
-(void)_swapToNewBackgroundView;
-(void)_crossfadeToNewForegroundViewWithAlpha:(float)arg1 ;
-(void)_setStyle:(id)arg1 ;
-(void)_swapToNewForegroundView;
-(void)_crossfadeToNewBackgroundView;
-(float)_hiddenAlphaForHideAnimationParameters:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_touchShouldProduceReturnEvent;
-(BOOL)serverUpdatesDisabled;
-(void)forceUpdateData:(BOOL)arg1 ;
-(void)forceUpdateGlowAnimation;
-(void)forgetEitherSideHistory;
-(id)styleDelegate;
-(void)setForegroundColor:(id)arg1 animationParameters:(id)arg2 ;
-(void)setLegibilityStyle:(int)arg1 animationParameters:(id)arg2 ;
-(BOOL)simulatesLegacyAppearance;
-(void)setStyleRequest:(id)arg1 animationParameters:(id)arg2 ;
-(BOOL)homeItemsDisabled;
-(void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const SCD_Struct_UI67*)arg2 withActions:(int)arg3 ;
-(void)setBackgroundAlpha:(float)arg1 ;
-(void)setShowsOnlyCenterItems:(BOOL)arg1 ;
-(void)setLocalDataOverrides:(SCD_Struct_UI68*)arg1 ;
-(CGRect)currentFrame;
-(void)requestStyle:(int)arg1 ;
-(void)requestStyle:(int)arg1 animation:(int)arg2 startTime:(double)arg3 duration:(double)arg4 curve:(int)arg5 ;
-(id)currentDoubleHeightLabelText;
-(void)setSuppressesHiddenSideEffects:(BOOL)arg1 ;
-(BOOL)_shouldSeekHigherPriorityTouchTarget;
-(void)crossfadeTime:(BOOL)arg1 duration:(double)arg2 ;
-(void)setSimulatesLegacyAppearance:(BOOL)arg1 ;
-(void)setForegroundColor:(id)arg1 ;
-(void)setLegibilityStyle:(int)arg1 ;
-(void)setStyleRequest:(id)arg1 ;
-(void)setServerUpdatesDisabled:(BOOL)arg1 ;
-(void)_setOverrideHeight:(float)arg1 ;
-(void)_clearOverrideHeight;
-(void)setHomeItemsDisabled:(BOOL)arg1 ;
@end

