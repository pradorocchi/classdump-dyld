/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoard/SBStarkBackgroundProviderManagerObserver.h>
#import <SpringBoard/SBStarkBackgroundProviderRemoteViewControllerDelegate.h>

@protocol SBStarkBackgroundProvidersViewControllerDelegate;
@class _UIAsyncInvocation, SBStarkBackgroundProviderManager, SBStarkBackgroundProviderRemoteViewController, SBStarkBackgroundProvider, ;

@interface SBStarkBackgroundProvidersViewController : UIViewController <SBStarkBackgroundProviderManagerObserver, SBStarkBackgroundProviderRemoteViewControllerDelegate> {

	_UIAsyncInvocation* _cancelRequest;
	SBStarkBackgroundProviderManager* _backgroundProviderManager;
	SBStarkBackgroundProviderRemoteViewController* _activeViewController;
	SBStarkBackgroundProvider* _transitioningToProvider;
	CGRect _viewportFrame;
	BOOL _makingInitialTransition;
	BOOL _firstTransitionOccurred;
	<SBStarkBackgroundProvidersViewControllerDelegate>* _delegate;
	unsigned _reactivateAttempt;
	double _lastReactivationAttempt;

}

@property (assign,nonatomic) <SBStarkBackgroundProvidersViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGRect viewportFrame; 
-(BOOL)_isActive:(id)arg1 ;
-(void)addedBackgroundProvider:(id)arg1 ;
-(void)_animateTo:(id)arg1 withTransition:(int)arg2 ;
-(void)_finishInitialBackgroundTransitionIfNecessary;
-(void)_providerDidStopProvidingContent:(id)arg1 ;
-(BOOL)_isVisible:(id)arg1 ;
-(void)_transitionToProvider:(id)arg1 withTransition:(int)arg2 ;
-(BOOL)_isVisibleOrTransitioningTo:(id)arg1 ;
-(void)removedBackgroundProvider:(id)arg1 ;
-(void)didStopProvidingContent:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)setViewportFrame:(CGRect)arg1 ;
-(void)switchToState:(id)arg1 withAnimationName:(id)arg2 ;
-(CGRect)viewportFrame;
@end

