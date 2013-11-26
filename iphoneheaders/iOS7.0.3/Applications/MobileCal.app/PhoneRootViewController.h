/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIViewController.h>
#import <CommunicationsSetupUI/CNFRegWizardControllerDelegate.h>
#import <UIKit/UITabBarControllerDelegate.h>

@class PhoneContentView, PhoneTabBarController, CNFRegWizardController, InCallController, VideoConferenceController, PHEmergencyDialerViewController, _UIBackdropView;

@interface PhoneRootViewController : UIViewController <CNFRegWizardControllerDelegate, UITabBarControllerDelegate> {

	int _currentViewType;
	PhoneContentView* _contentView;
	PhoneTabBarController* _tabBarViewController;
	CNFRegWizardController* _faceTimeRegistrationViewController;
	InCallController* _inCallViewController;
	VideoConferenceController* _videoConferenceViewController;
	PHEmergencyDialerViewController* _emergencyDialerViewController;
	BOOL _faceTimeRegistrationViewIsShowing;
	BOOL _disableAutomaticAppearEvents;
	BOOL _inTransitionBetweenViewTypes;
	BOOL _returnToTabViewOnSuspendIfNeeded;
	_UIBackdropView* _backdropView;

}

@property (nonatomic,readonly) PhoneContentView * contentView; 
@property (nonatomic,readonly) _UIBackdropView * backdropView;                                               //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,readonly) PhoneTabBarController * tabBarViewController;                                 //@synthesize tabBarViewController=_tabBarViewController - In the implementation block
@property (nonatomic,readonly) CNFRegWizardController * faceTimeRegistrationViewController;                  //@synthesize faceTimeRegistrationViewController=_faceTimeRegistrationViewController - In the implementation block
@property (nonatomic,readonly) InCallController * inCallViewController;                                      //@synthesize inCallViewController=_inCallViewController - In the implementation block
@property (nonatomic,readonly) VideoConferenceController * videoConferenceViewController;                    //@synthesize videoConferenceViewController=_videoConferenceViewController - In the implementation block
@property (nonatomic,readonly) PHEmergencyDialerViewController * emergencyDialerViewController;              //@synthesize emergencyDialerViewController=_emergencyDialerViewController - In the implementation block
@property (assign,nonatomic) BOOL disableAutomaticAppearEvents;                                              //@synthesize disableAutomaticAppearEvents=_disableAutomaticAppearEvents - In the implementation block
@property (assign,nonatomic) int currentViewType;                                                            //@synthesize currentViewType=_currentViewType - In the implementation block
@property (nonatomic,readonly) BOOL inTransitionBetweenViewTypes;                                            //@synthesize inTransitionBetweenViewTypes=_inTransitionBetweenViewTypes - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Ph8 applicationBadge; 
-(int)currentViewType;
-(BOOL)inTransitionBetweenViewTypes;
-(id)viewControllerForRootViewType:(int)arg1 ;
-(id)videoConferenceViewController;
-(id)tabBarViewController;
-(void)animateInUI;
-(void)resetCurrentViewType;
-(id)inCallViewController;
-(id)emergencyDialerViewController;
-(void)updateChildViewControllersForCurrentOrientation;
-(void)transitionToView:(int)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)showFaceTimeFirstRunViewIfNeeded;
-(void)setupCrossfadeBackToDialingAppWithDelay:(double)arg1 ;
-(void)returnToTabViewForSuspendIfNeeded;
-(void)setContentViewHiddenPosition;
-(void)showContentViewAnimated:(BOOL)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)setupContentViewFullSize;
-(void)setupContentViewSidebar;
-(void)updateFacetimeFirstRunViewKnockouts;
-(void)setDisableAutomaticAppearEvents:(BOOL)arg1 ;
-(void)_unloadChildViewControllers;
-(void)_createFaceTimeFirstRunViewIfNeeded;
-(void)_unloadViewsForController:(id)arg1 ;
-(void)_ensureProperPositionForContentView;
-(BOOL)isContentViewLoaded;
-(void)setContentViewNormalPosition;
-(void)removeViewControllerFromHierarchyIfNecessary:(id)arg1 ;
-(void)initializeToVideoConferenceViewAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(BOOL)shouldSwitchRootViewToViewType:(int)arg1 ;
-(void)setCurrentViewType:(int)arg1 ;
-(void)initializeToTabViewAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(void)initializeToInCallViewAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(void)transitionFromTabViewToInCallViewAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(void)transitionFromTabViewToVideoConferenceViewAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(void)transitionFromInCallViewToTabViewAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(void)transitionFromInCallViewToVideoConferenceViewAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(void)transitionFromVideoConferenceViewToTabViewAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(void)transitionFromVideoConferenceViewToInCallViewAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(void)initializeToEmergencyDialerViewAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(void)hideVideoConferenceBackgroundViewAnimated:(BOOL)arg1 ;
-(void)hideContentViewAnimated:(BOOL)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)showVideoConferenceBackgroundViewAnimated:(BOOL)arg1 ;
-(void)_destroyFirstRunController;
-(SCD_Struct_Ph8)applicationBadge;
-(BOOL)disableAutomaticAppearEvents;
-(id)faceTimeRegistrationViewController;
-(void)_applicationSuspended:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)applicationWillSuspend;
-(void)applicationDidResume;
-(BOOL)shouldAutorotate;
-(id)contentView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidUnload;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)_getRotationContentSettings:(SCD_Struct_Ro7*)arg1 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)tabBarController:(id)arg1 didSelectViewController:(id)arg2 ;
-(BOOL)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2 ;
-(id)backdropView;
-(void)firstRunControllerDidFinish:(id)arg1 finished:(BOOL)arg2 ;
@end

