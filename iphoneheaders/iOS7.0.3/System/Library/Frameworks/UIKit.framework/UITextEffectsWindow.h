/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAutoRotatingWindow.h>
#import <UIKit/_UIScreenBasedObject.h>

@class UIScreen;

@interface UITextEffectsWindow : UIAutoRotatingWindow <_UIScreenBasedObject> {

	unsigned long _activeEffectsCount;
	BOOL _inDealloc;
	BOOL _nonServiceHosted;
	float _defaultWindowLevel;
	CGPoint _hostedWindowOffset;
	int _bgCount;
	unsigned _activeRemoteViewCount;
	unsigned _windowLevelCount;
	float _windowLevelStack[5];

}

@property (readonly) UIScreen * _intendedScreen; 
@property (readonly) unsigned contextID; 
@property (assign,nonatomic) BOOL nonServiceHosted;                   //@synthesize nonServiceHosted=_nonServiceHosted - In the implementation block
@property (assign,nonatomic) float defaultWindowLevel;                //@synthesize defaultWindowLevel=_defaultWindowLevel - In the implementation block
@property (assign,nonatomic) CGPoint hostedWindowOffset;              //@synthesize hostedWindowOffset=_hostedWindowOffset - In the implementation block
@property (nonatomic,readonly) CGRect hostedFrame; 
+(id)sharedTextEffectsWindow;
+(id)sharedTextEffectsWindowAboveStatusBar;
+(id)_sharedTextEffectsWindowforScreen:(id)arg1 aboveStatusBar:(BOOL)arg2 matchesStatusBarOrientationOnAccess:(BOOL)arg3 ;
+(id)sharedTextEffectsWindowAboveStatusBarForScreen:(id)arg1 ;
+(id)preferredTextEffectsWindow;
+(id)preferredTextEffectsWindowAboveStatusBar;
+(id)sharedTextEffectsWindow:(BOOL)arg1 ;
+(id)sharedTextEffectsWindowForScreen:(id)arg1 ;
+(void)_releaseSharedInstances;
+(void)raiseTextEffectsWindowsForShowNotificationCenter;
+(void)lowerTextEffectsWindowsForHideNotificationCenter;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 ;
-(void)bringSubviewToFront:(id)arg1 ;
-(void)sendSubviewToBack:(id)arg1 ;
-(BOOL)_isTextEffectsWindow;
-(BOOL)_shouldTintStatusBar;
-(int)interfaceOrientation;
-(BOOL)_canActAsKeyWindowForScreen:(id)arg1 ;
-(BOOL)_isWindowServerHostingManaged;
-(CGPoint)convertPoint:(CGPoint)arg1 fromWindow:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 toView:(id)arg2 ;
-(BOOL)_usesWindowServerHitTesting;
-(BOOL)_canAffectStatusBarAppearance;
-(BOOL)isInternalWindow;
-(void)_updateTransformLayerForClassicPresentation;
-(CGPoint)convertPoint:(CGPoint)arg1 toWindow:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 toWindow:(id)arg2 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)handleStatusBarChangeFromHeight:(float)arg1 toHeight:(float)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromWindow:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromView:(id)arg2 ;
-(BOOL)_disableViewScaling;
-(void)setKeepContextInBackground:(BOOL)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toView:(id)arg2 ;
-(void)didAddSubview:(id)arg1 ;
-(void)_didRemoveSubview:(id)arg1 ;
-(BOOL)nonServiceHosted;
-(void)matchDeviceOrientation;
-(id)aboveStatusBar;
-(void)setDefaultWindowLevel:(float)arg1 ;
-(float)defaultWindowLevel;
-(id)_initWithScreen:(id)arg1 options:(id)arg2 ;
-(BOOL)_matchingOptions:(id)arg1 ;
-(id)_intendedScreen;
-(void)_applicationDidFinishLaunching:(id)arg1 ;
-(CGPoint)hostedWindowOffset;
-(CGPoint)_adjustPointForHostedDisplay:(CGPoint)arg1 hasTarget:(BOOL)arg2 inset:(BOOL)arg3 ;
-(void)delayHideWindow;
-(void)sortSubviews;
-(void)updateForOrientation:(int)arg1 ;
-(void)updateForOrientation:(int)arg1 forceResetTransform:(BOOL)arg2 ;
-(unsigned)contextID;
-(void)_setWindowLevel:(float)arg1 ;
-(void)_restoreWindowLevel;
-(CGRect)hostedFrame;
-(CGPoint)classicWindowPointForPoint:(CGPoint)arg1 ;
-(CGPoint)magnifierScreenPointForPoint:(CGPoint)arg1 targetWindow:(id)arg2 ;
-(void)resetTransform;
-(void)updateSubviewOrdering;
-(void)setNonServiceHosted:(BOOL)arg1 ;
-(void)setHostedWindowOffset:(CGPoint)arg1 ;
@end

