/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SBWorkspaceTransaction.h>
#import <SpringBoard/SBUIAnimationControllerDelegate.h>

@class SBAlert, SBUIAnimationController;

@interface SBAlertToAlertWorkspaceTransaction : SBWorkspaceTransaction <SBUIAnimationControllerDelegate> {

	SBAlert* _activatingAlert;
	SBAlert* _deactivatingAlert;
	BOOL _activation;
	SBUIAnimationController* _animation;
	BOOL _animatingAlertDeactivation;

}
-(id)initActivationWithWorkspace:(id)arg1 alertManager:(id)arg2 from:(id)arg3 to:(id)arg4 ;
-(id)initDeactivationWithWorkspace:(id)arg1 alertManager:(id)arg2 from:(id)arg3 to:(id)arg4 ;
-(void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(void)_transactionComplete;
-(BOOL)selfAlertWillActivate:(id)arg1 overAlerts:(id)arg2 ;
-(BOOL)selfAlertDidActivate:(id)arg1 overAlerts:(id)arg2 ;
-(BOOL)selfAlertWillDeactivate:(id)arg1 ;
-(BOOL)selfAlertDidDeactivate:(id)arg1 ;
-(void)_endAnimation;
-(void)_alertAnimationComplete:(id)arg1 ;
-(void)_deactivateAlertIfNecessary;
-(void)_handleFailure;
-(id)_initWithWorkspace:(id)arg1 alertManager:(id)arg2 activatingAlert:(id)arg3 deactivatingAlert:(id)arg4 activation:(BOOL)arg5 ;
-(void)_commit;
-(void)dealloc;
-(id)debugDescription;
@end

