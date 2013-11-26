/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:14 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UISplitViewController.h>

@protocol GKMasterDetailViewControllerDelegate;
@class , UINavigationController, UIColor, UIView, NSMutableArray, UIViewController;

@interface GKMasterDetailViewController : UISplitViewController {

	<GKMasterDetailViewControllerDelegate>* _masterDetailDelegate;
	BOOL _covered;
	UINavigationController* _masterNavigationController;
	UINavigationController* _detailNavigationController;
	UIColor* _separatorLineColor;
	UIView* _separatorWrapperView;
	UIView* _separatorLineView;
	UIView* _separatorBarView;
	UIView* _separatorBarMaskView;
	/*^block*/ id _presentationDelayHandler;
	NSMutableArray* _controllersDelayingPresentation;

}

@property (nonatomic,retain) UIViewController * rootDetailViewController; 
@property (nonatomic,retain) UINavigationController * masterNavigationController;                        //@synthesize masterNavigationController=_masterNavigationController - In the implementation block
@property (nonatomic,retain) UINavigationController * detailNavigationController;                        //@synthesize detailNavigationController=_detailNavigationController - In the implementation block
@property (nonatomic,retain) UIColor * separatorLineColor;                                               //@synthesize separatorLineColor=_separatorLineColor - In the implementation block
@property (assign,nonatomic) <GKMasterDetailViewControllerDelegate> * masterDetailDelegate; 
@property (assign,getter=isCovered,nonatomic) BOOL covered;                                              //@synthesize covered=_covered - In the implementation block
@property (nonatomic,retain) UIView * separatorWrapperView;                                              //@synthesize separatorWrapperView=_separatorWrapperView - In the implementation block
@property (nonatomic,retain) UIView * separatorLineView;                                                 //@synthesize separatorLineView=_separatorLineView - In the implementation block
@property (nonatomic,retain) UIView * separatorBarView;                                                  //@synthesize separatorBarView=_separatorBarView - In the implementation block
@property (nonatomic,retain) UIView * separatorBarMaskView;                                              //@synthesize separatorBarMaskView=_separatorBarMaskView - In the implementation block
@property (nonatomic,copy) id presentationDelayHandler;                                                  //@synthesize presentationDelayHandler=_presentationDelayHandler - In the implementation block
@property (nonatomic,retain) NSMutableArray * controllersDelayingPresentation;                           //@synthesize controllersDelayingPresentation=_controllersDelayingPresentation - In the implementation block
-(BOOL)_gkShouldRefreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 ;
-(void)_gkRefreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 ;
-(BOOL)statusShouldCoverSplitViewFor:(id)arg1 ;
-(void)setCovered:(BOOL)arg1 ;
-(void)viewDidDisappearAnimated:(BOOL)arg1 bubbleFlow:(BOOL)arg2 ;
-(id)separatorLineColor;
-(double)bubbleFlowAnimateOutDuration;
-(double)bubbleFlowAnimateInDuration;
-(void)willAnimateKeyframesForAppearingWithBubbleFlowFromRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 absoluteTransitionDuration:(double)arg3 ;
-(void)willAnimateKeyframesForDisappearingWithBubbleFlowFromRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 absoluteTransitionDuration:(double)arg3 ;
-(BOOL)readyToAppearWithBubbleFlow;
-(void)delayAppearingWithBubbleFlowUntil:(/*^block*/ id)arg1 ;
-(void)setRootDetailViewController:(id)arg1 ;
-(id)masterNavigationController;
-(id)detailNavigationController;
-(void)_setSeparatorBarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)blankRootDetailViewController;
-(id)separatorLineView;
-(id)separatorBarView;
-(id)separatorBarMaskView;
-(void)setRootDetailViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setupSeparatorViews;
-(void)setPresentationDelayHandler:(/*^block*/ id)arg1 ;
-(void)setControllersDelayingPresentation:(id)arg1 ;
-(id)controllersDelayingPresentation;
-(void)_animateSlidingDoorTransitionFromRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 duration:(double)arg3 appearing:(BOOL)arg4 ;
-(id)_viewForSlidingInMasterView;
-(id)_viewForSlidingInDetailView;
-(id)masterDetailDelegate;
-(void)setMasterDetailDelegate:(id)arg1 ;
-(void)pushMasterViewController:(id)arg1 ;
-(void)popToRootDetailViewControllerAnimated:(BOOL)arg1 ;
-(id)rootDetailViewController;
-(void)didTouchMasterBackButton;
-(BOOL)automaticallyForwardAppearanceMethods;
-(void)setSeparatorLineColor:(id)arg1 ;
-(void)setMasterNavigationController:(id)arg1 ;
-(void)setDetailNavigationController:(id)arg1 ;
-(BOOL)isCovered;
-(id)separatorWrapperView;
-(void)setSeparatorWrapperView:(id)arg1 ;
-(void)setSeparatorLineView:(id)arg1 ;
-(void)setSeparatorBarView:(id)arg1 ;
-(void)setSeparatorBarMaskView:(id)arg1 ;
-(/*^block*/ id)presentationDelayHandler;
-(void)dealloc;
-(id)init;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setNavigationBarHidden:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

