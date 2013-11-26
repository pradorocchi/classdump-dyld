/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>

@class UIWindow, UIView, UIClassicStatusBarView;

@interface UIStatusBarViewController : UIViewController {

	BOOL _iPhoneWS;
	UIWindow* _window;
	UIView* _statusBar;
	UIClassicStatusBarView* _statusBarBackgroundView;
	BOOL _keyboardVisible;

}

@property (nonatomic,readonly) UIWindow * window;              //@synthesize window=_window - In the implementation block
+(double)statusBarOrientationAnimationDurationFrom:(int)arg1 to:(int)arg2 ;
-(void)dealloc;
-(id)window;
-(id)init;
-(void)setStatusBarStyle:(int)arg1 animationParameters:(id)arg2 ;
-(void)setStatusBarHidden:(BOOL)arg1 animationParameters:(id)arg2 ;
-(void)setStatusBarOrientation:(int)arg1 animationParameters:(id)arg2 ;
-(void)loadView;
-(BOOL)isClassicControlWindow:(id)arg1 ;
-(void)_updateStatusBarForRotationFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2 style:(int)arg3 hidden:(BOOL)arg4 slideUp:(BOOL)arg5 ;
-(void)_changeStatusBarOrientationFrom:(int)arg1 toOrientation:(int)arg2 ;
-(void)_prepareForZoom:(BOOL)arg1 ;
-(void)_zoom:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_statusBarViewControllerKeyboardWillShow:(id)arg1 ;
-(void)_statusBarViewControllerKeyboardDidHide:(id)arg1 ;
-(void)_statusBarHideAnimationFinished:(id)arg1 finished:(BOOL)arg2 hidden:(id)arg3 ;
-(void)_updateStatusBarGeometryForRotationFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2 hidden:(BOOL)arg3 slideUp:(BOOL)arg4 ;
-(void)_changeStatusBarOrientationFinished:(id)arg1 finished:(BOOL)arg2 context:(void*)arg3 ;
-(void)_finishStatusBarOrientationChange;
-(CGSize)_statusBarSizeForOrientation:(int)arg1 ;
@end

