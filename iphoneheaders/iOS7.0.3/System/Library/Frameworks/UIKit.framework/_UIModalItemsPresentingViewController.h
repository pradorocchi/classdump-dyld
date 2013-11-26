/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:56 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>

@class NSMutableArray, UIView, _UIModalItem, UIWindow;

@interface _UIModalItemsPresentingViewController : UIViewController {

	NSMutableArray* _items;
	NSMutableArray* _itemsViews;
	NSMutableArray* _occludedWindows;
	UIView* _backgroundView;
	_UIModalItem* _currentItem;
	UIView* _currentItemView;
	UIView* _dimmingView;
	CGRect _keyboardFrame;
	float _keyboardHeight;
	BOOL _isInTransition;
	_UIModalItem* _itemBeingPresented;
	_UIModalItem* _itemBeingDismissed;
	UIWindow* _rotationDelegate;
	/*^block*/ id _itemsTransitionCompletion;

}

@property (assign,nonatomic) BOOL isInTransition;                            //@synthesize isInTransition=_isInTransition - In the implementation block
@property (nonatomic,retain) _UIModalItem * currentItem;                     //@synthesize currentItem=_currentItem - In the implementation block
@property (nonatomic,retain) _UIModalItem * itemBeingPresented;              //@synthesize itemBeingPresented=_itemBeingPresented - In the implementation block
@property (nonatomic,retain) _UIModalItem * itemBeingDismissed;              //@synthesize itemBeingDismissed=_itemBeingDismissed - In the implementation block
@property (nonatomic,retain) UIWindow * rotationDelegate;                    //@synthesize rotationDelegate=_rotationDelegate - In the implementation block
@property (copy) id itemsTransitionCompletion;                               //@synthesize itemsTransitionCompletion=_itemsTransitionCompletion - In the implementation block
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)wantsFullScreenLayout;
-(void)viewWillLayoutSubviews;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(int)preferredInterfaceOrientationForPresentation;
-(id)rotationDelegate;
-(void)setRotationDelegate:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)setItemBeingPresented:(id)arg1 ;
-(void)setItemBeingDismissed:(id)arg1 ;
-(void)setItemsTransitionCompletion:(/*^block*/ id)arg1 ;
-(void)setCurrentItem:(id)arg1 ;
-(void)keyfirstResponderChanged:(id)arg1 ;
-(void)keyboardChanged:(id)arg1 ;
-(BOOL)isInTransition;
-(id)itemBeingPresented;
-(void)_applyPresentingAnimationEndingStateForModalItem:(id)arg1 view:(id)arg2 forceCenter:(BOOL)arg3 ;
-(id)itemBeingDismissed;
-(void)_applyDismissingAnimationEndingStateForModalItem:(id)arg1 view:(id)arg2 forceCenter:(BOOL)arg3 ;
-(void)_dismissItem:(id)arg1 andPresentItem:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/ id)arg4 ;
-(id)_createViewForItem:(id)arg1 ;
-(void)_desaturateUI;
-(void)_applyPresentingViewMetricsStateForModalItem:(id)arg1 ;
-(void)_resaturateUI;
-(/*^block*/ id)itemsTransitionCompletion;
-(void)_applyPresentingAnimationStartingStateForModalItem:(id)arg1 view:(id)arg2 ;
-(void)_applyDismissingAnimationEndingStateForModalItem:(id)arg1 view:(id)arg2 ;
-(void)_applyPresentingAnimationEndingStateForModalItem:(id)arg1 view:(id)arg2 ;
-(void)_dismissItem:(id)arg1 andPresentItem:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/ id)arg4 keepDimmingView:(BOOL)arg5 ;
-(void)_hideAnimated:(BOOL)arg1 dimmSpotlight:(BOOL)arg2 ;
-(id)currentItem;
-(id)initWithModalItemType:(int)arg1 ;
-(void)_hideItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)displayModalItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)hideModalItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)_dismissMe:(id)arg1 animated:(BOOL)arg2 ;
-(void)_enqueueAdditionalTransitionCompletion:(/*^block*/ id)arg1 ;
-(void)_hideDimmingViewAnimated:(BOOL)arg1 ;
-(void)_showDimmingViewAnimated:(BOOL)arg1 ;
-(void)_hide;
-(void)_showDimmingView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_showItem:(id)arg1 animated:(BOOL)arg2 undimmSpotlight:(BOOL)arg3 ;
-(void)_updateItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setIsInTransition:(BOOL)arg1 ;
@end

