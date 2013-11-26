/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:56 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUViewController.h>

@class NSMutableArray, UIViewController, SUOverlayTransition, SUScriptWindowContext, SUScriptFunction, SUMaskedView, SUTouchCaptureView, SUMaskProvider;

@interface SUOverlayViewController : SUViewController {

	NSMutableArray* _actionQueue;
	UIViewController* _activeViewController;
	UIViewController* _backViewController;
	BOOL _canSwipeToDismiss;
	UIViewController* _frontViewController;
	SUOverlayTransition* _lastFlipTransition;
	CGSize _overlaySize;
	SUOverlayTransition* _presentationTransition;
	SUScriptWindowContext* _scriptWindowContext;
	float _shadowOpacity;
	float _shadowRadius;
	SUScriptFunction* _shouldDismissFunction;
	int _state;
	SUMaskedView* _subviewContainerView;
	SUTouchCaptureView* _touchCaptureView;

}

@property (nonatomic,readonly) UIViewController * activeViewController; 
@property (nonatomic,retain) UIViewController * backViewController;                     //@synthesize backViewController=_backViewController - In the implementation block
@property (nonatomic,retain) UIViewController * frontViewController;                    //@synthesize frontViewController=_frontViewController - In the implementation block
@property (assign,nonatomic) CGSize overlaySize;                                        //@synthesize overlaySize=_overlaySize - In the implementation block
@property (nonatomic,retain) SUMaskProvider * maskProvider; 
@property (assign,nonatomic) float shadowOpacity;                                       //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
@property (assign,nonatomic) float shadowRadius;                                        //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (assign,nonatomic) BOOL canSwipeToDismiss;                                    //@synthesize canSwipeToDismiss=_canSwipeToDismiss - In the implementation block
@property (nonatomic,retain) SUScriptFunction * shouldDismissFunction;                  //@synthesize shouldDismissFunction=_shouldDismissFunction - In the implementation block
@property (getter=isActiveOverlay,nonatomic,readonly) BOOL activeOverlay; 
@property (getter=isOnFront,nonatomic,readonly) BOOL onFront; 
@property (nonatomic,retain) SUOverlayTransition * presentationTransition;              //@synthesize presentationTransition=_presentationTransition - In the implementation block
+(CGSize)defaultOverlaySize;
-(id)activeViewController;
-(void)dealloc;
-(id)init;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setShadowOpacity:(float)arg1 ;
-(void)setShadowRadius:(float)arg1 ;
-(float)shadowRadius;
-(float)shadowOpacity;
-(id)copyArchivableContext;
-(void)restoreArchivableContext:(id)arg1 ;
-(id)scriptWindowContext;
-(void)setScriptWindowContext:(id)arg1 ;
-(BOOL)isActiveOverlay;
-(BOOL)shouldExcludeFromNavigationHistory;
-(void)invalidateForMemoryPurge;
-(void)storePage:(id)arg1 finishedWithSuccess:(BOOL)arg2 ;
-(void)setBackViewController:(id)arg1 ;
-(void)_performNextAction;
-(void)flipWithTransition:(id)arg1 ;
-(void)setCanSwipeToDismiss:(BOOL)arg1 ;
-(void)setFrontViewController:(id)arg1 ;
-(void)setShouldDismissFunction:(id)arg1 ;
-(void)setMaskProvider:(id)arg1 ;
-(void)setOverlaySize:(CGSize)arg1 ;
-(id)backViewController;
-(BOOL)canSwipeToDismiss;
-(id)frontViewController;
-(CGSize)overlaySize;
-(id)shouldDismissFunction;
-(void)imagePageViewTapped:(id)arg1 ;
-(id)presentationTransition;
-(void)_enqueueAction:(id)arg1 ;
-(void)setPresentationTransition:(id)arg1 ;
-(void)_overlayAnimationDidFinish;
-(BOOL)isOnFront;
-(void)_overlayActionDidFinish;
-(void)viewWillDismissWithTransition:(id)arg1 ;
-(id)initWithOverlayConfiguration:(id)arg1 ;
-(void)_applyOverlayConfiguration:(id)arg1 ;
-(void)_setActiveViewController:(id)arg1 updateInterface:(BOOL)arg2 ;
-(void)_tearDownTouchCaptureView;
-(id)_activeViewController;
-(id)maskProvider;
-(id)_subviewContainerView;
-(void)_applyDisplayProperties;
-(void)_setShadowVisible:(BOOL)arg1 ;
-(void)_touchCaptureAction:(id)arg1 ;
-(id)_flipTransition;
-(void)_finishFlipAction:(id)arg1 ;
-(void)_performFlipTransitionAction:(id)arg1 ;
-(BOOL)_isControllerLoaded:(id)arg1 ;
-(void)_performFlipAction:(id)arg1 ;
@end

