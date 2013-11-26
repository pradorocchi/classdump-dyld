/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/BKSWorkspaceDelegate.h>
#import <SpringBoard/SBAlertManagerDelegate.h>
#import <SpringBoard/SBAlertManagerObserver.h>
#import <SpringBoard/SBWorkspaceTransactionGroupDelegate.h>
#import <SpringBoard/SBStarkScreenManagerDelegate.h>
#import <SpringBoard/SBStarkScreenControllerDelegate.h>

@protocol OS_dispatch_source;
@class BKSWorkspace, SBAlertManager, SBScreenTimeTrackingController, SBWorkspaceTransaction, SBWorkspaceEventQueueLockAssertion, NSObject, NSTimer, NSMutableArray;

@interface SBWorkspace : NSObject <BKSWorkspaceDelegate, SBAlertManagerDelegate, SBAlertManagerObserver, SBWorkspaceTransactionGroupDelegate, SBStarkScreenManagerDelegate, SBStarkScreenControllerDelegate> {

	BKSWorkspace* _bksWorkspace;
	SBAlertManager* _alertManager;
	BOOL _alertManagerIsDeactivatingAlert;
	SBScreenTimeTrackingController* _screenTimeTrackingController;
	SBWorkspaceTransaction* _currentTransaction;
	SBWorkspaceEventQueueLockAssertion* _eventQueueLock;
	NSObject<OS_dispatch_source>* _transactionWatchdog;
	NSTimer* _relaunchTimer;
	NSMutableArray* _applicationsToRelaunch;

}

@property (nonatomic,retain) SBWorkspaceTransaction * currentTransaction;              //@synthesize currentTransaction=_currentTransaction - In the implementation block
@property (nonatomic,readonly) BKSWorkspace * bksWorkspace;                            //@synthesize bksWorkspace=_bksWorkspace - In the implementation block
@property (nonatomic,readonly) SBAlertManager * alertManager;                          //@synthesize alertManager=_alertManager - In the implementation block
-(id)bksWorkspace;
-(id)_applicationForBundleIdentifier:(id)arg1 frontmost:(BOOL)arg2 ;
-(id)_selectTransactionForAppActivationToApp:(id)arg1 activationHandler:(/*^block*/ id)arg2 ;
-(void)updateInterruptedByCallSettingsFrom:(id)arg1 to:(id)arg2 ;
-(id)alertManager;
-(id)_selectTransactionForAppActivationUnderMainScreenLock:(id)arg1 ;
-(id)_selectTransactionForReturningToTheLockScreenWithActivationHandler:(/*^block*/ id)arg1 ;
-(void)_memoryPressureRelieved:(id)arg1 ;
-(void)_memoryPressureWarn:(id)arg1 ;
-(id)_selectTransactionForReturningToTheLockScreenFromApp:(id)arg1 forceToBuddy:(BOOL)arg2 withActivationHandler:(/*^block*/ id)arg3 ;
-(id)_selectTransactionForAppActivationToApp:(id)arg1 activationHandler:(/*^block*/ id)arg2 canDeactivateAlerts:(BOOL)arg3 ;
-(void)_launchNextPendedAutoLaunchApp;
-(void)_invalidateRelaunchTimer;
-(void)_scheduleRelaunchTimerIfNecessary;
-(BOOL)_handleSetupExited:(id)arg1 ;
-(void)_noteCurrentTransactionFailed:(const char*)arg1 ;
-(void)_handleBuddyLaunchFinished;
-(id)_selectTransactionForAppExited:(id)arg1 ;
-(BOOL)_applicationExited:(id)arg1 withInfo:(id)arg2 ;
-(id)_selectTransactionForAppRelaunch:(id)arg1 ;
-(void)_updateStatusBarTimeItemEnabled;
-(void)alertManager:(id)arg1 topAlert:(id)arg2 requestsWallpaperStyleChangeWithAnimationFactory:(id)arg3 ;
-(void)starkScreenController:(id)arg1 didChangeStateFromState:(int)arg2 ;
-(BOOL)alertManager:(id)arg1 shouldDeactivateDismissedAlert:(id)arg2 ;
-(id)alertManager:(id)arg1 newAlertWindowForLockAlerts:(BOOL)arg2 ;
-(void)alertManager:(id)arg1 willActivateAlert:(id)arg2 overAlerts:(id)arg3 ;
-(void)alertManager:(id)arg1 didActivateAlert:(id)arg2 overAlerts:(id)arg3 ;
-(void)alertManager:(id)arg1 willDeactivateAlert:(id)arg2 top:(BOOL)arg3 ;
-(void)alertManager:(id)arg1 didDeactivateAlert:(id)arg2 top:(BOOL)arg3 ;
-(void)alertManagerDidChangeTopAlert:(id)arg1 ;
-(void)alertManager:(id)arg1 willTearDownAlertWindow:(id)arg2 ;
-(void)alertManager:(id)arg1 didTearDownAlertWindow:(id)arg2 ;
-(void)alertManager:(id)arg1 didRemoveAlert:(id)arg2 fromWindow:(id)arg3 ;
-(void)transactionGroup:(id)arg1 childTransactionDidFinish:(id)arg2 success:(BOOL)arg3 ;
-(void)transactionDidFinish:(id)arg1 success:(BOOL)arg2 ;
-(void)starkScreenManagerWillChangeActiveController:(id)arg1 ;
-(void)starkScreenManagerDidChangeActiveController:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)debugDescription;
-(id)workspace:(id)arg1 applicationWillBecomeReceiver:(id)arg2 fromApplication:(id)arg3 ;
-(void)workspaceWillSuspend:(id)arg1 ;
-(void)workspace:(id)arg1 applicationDidBecomeReceiver:(id)arg2 fromApplication:(id)arg3 ;
-(void)workspace:(id)arg1 handleStatusBarReturnActionFromApplication:(id)arg2 statusBarStyle:(id)arg3 ;
-(void)workspace:(id)arg1 applicationDidStartLaunching:(id)arg2 ;
-(void)workspace:(id)arg1 applicationDidFinishLaunching:(id)arg2 withInfo:(id)arg3 ;
-(void)workspace:(id)arg1 applicationActivated:(id)arg2 ;
-(void)workspace:(id)arg1 applicationExited:(id)arg2 withInfo:(id)arg3 ;
-(void)workspace:(id)arg1 applicationSuspended:(id)arg2 withSettings:(id)arg3 ;
-(void)workspace:(id)arg1 applicationSuspensionSettingsUpdated:(id)arg2 withSettings:(id)arg3 ;
-(void)workspace:(id)arg1 applicationFinishedBackgroundContentFetching:(id)arg2 withInfo:(id)arg3 ;
-(void)workspaceDidSuspend:(id)arg1 ;
-(void)workspaceDidResume:(id)arg1 ;
-(void)workspaceWillResume:(id)arg1 ;
-(void)workspace:(id)arg1 applicationDidFailToLaunch:(id)arg2 ;
-(void)workspace:(id)arg1 applicationDebugStateChanged:(id)arg2 newState:(BOOL)arg3 ;
-(int)workspace:(id)arg1 canOpenApplication:(id)arg2 ;
-(void)workspace:(id)arg1 handleOpenApplicationRequest:(id)arg2 withOptions:(id)arg3 origin:(id)arg4 withResult:(/*^block*/ id)arg5 ;
-(void)workspace:(id)arg1 handleOpenURLRequest:(id)arg2 application:(id)arg3 withOptions:(id)arg4 origin:(id)arg5 withResult:(/*^block*/ id)arg6 ;
-(id)currentTransaction;
-(void)setCurrentTransaction:(id)arg1 ;
@end

