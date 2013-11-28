/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIControl, UITapGestureRecognizer, NSMutableArray, NSArray;

@interface SKUIOverlayContainerViewController : UIViewController <UIGestureRecognizerDelegate> {

	UIControl* _backstopView;
	BOOL _isAdjustingViewsForDismiss;
	int _selectedViewControllerIndex;
	UITapGestureRecognizer* _tapGestureRecognizer;
	NSMutableArray* _viewControllers;

}

@property (nonatomic,readonly) UIControl * backstopControl; 
@property (nonatomic,readonly) NSArray * viewControllers;                //@synthesize viewControllers=_viewControllers - In the implementation block
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(id)viewControllers;
-(id)backstopControl;
-(void)showViewControllers:(id)arg1 ;
-(void)showViewController:(id)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)dismissWithFadeTransitionCompletionBlock:(/*^block*/ id)arg1 ;
-(void)dismissWithFlipTransition:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)showViewController:(id)arg1 withFlipTransition:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)_frameAction:(id)arg1 ;
-(void)_tapAction:(id)arg1 ;
-(void)_removeChildren;
-(void)_fadeInViewController:(id)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)_slideInViewController:(id)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)_pushViewController:(id)arg1 ;
-(void)_positionViewControllersForOrientation:(int)arg1 ;
-(CGRect)_frameToCenterViewController:(id)arg1 ;
-(id)_viewControllerForPoint:(CGPoint)arg1 ;
-(int)_indexOfViewControllerForPoint:(CGPoint)arg1 ;
-(void)_popViewControllers;
-(float)_overlaySpacingForOrientation:(int)arg1 ;
-(void).cxx_destruct;
-(id)_selectedViewController;
@end
