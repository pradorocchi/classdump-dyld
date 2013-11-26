/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SBWorkspaceTransaction.h>

@class SBApplication;

@interface SBToAppWorkspaceTransaction : SBWorkspaceTransaction {

	SBApplication* _toApp;
	BOOL _activateSuspended;
	double _watchdogExtension;
	BOOL _fromAssistant;
	BOOL _fromSwitcher;
	/*^block*/ id _activationHandlerBlock;

}

@property (nonatomic,readonly) SBApplication * toApplication;              //@synthesize toApp=_toApp - In the implementation block
-(double)_watchdogInterval;
-(BOOL)_shouldBeWatchdogged:(id*)arg1 ;
-(void)_transactionComplete;
-(void)_interruptWithReason:(int)arg1 ;
-(id)initWithWorkspace:(id)arg1 alertManager:(id)arg2 toApplication:(id)arg3 activationHandler:(/*^block*/ id)arg4 ;
-(BOOL)shouldToggleSpringBoardStatusBarOnCleanup;
-(BOOL)shouldDismissSwitcher;
-(void)performToAppStateCleanup;
-(BOOL)shouldPerformToAppStateCleanupOnCompletion;
-(BOOL)shouldAnimateOrientationChangeOnCompletion;
-(id)toApplication;
-(void)_captureApplicationData;
-(void)_fireAndClearActivationContinuationForActivationFailureIfNecessary;
-(void)toggleStatusBarForCleanup;
-(BOOL)shouldHideSpringBoardStatusBarOnCleanup;
-(void)_commit;
-(void)dealloc;
-(id)debugDescription;
-(void)activate:(id)arg1 ;
@end

