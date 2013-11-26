/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SBStarkWorkspaceTransaction.h>

@class SBAlert;

@interface SBStarkAlertToAlertWorkspaceTransaction : SBStarkWorkspaceTransaction {

	SBAlert* _activatingAlert;
	SBAlert* _deactivatingAlert;
	BOOL _activation;

}
-(id)initActivationWithWorkspace:(id)arg1 mainScreenAlertManager:(id)arg2 starkScreenController:(id)arg3 from:(id)arg4 to:(id)arg5 ;
-(id)initDeactivationWithWorkspace:(id)arg1 mainScreenAlertManager:(id)arg2 starkScreenController:(id)arg3 from:(id)arg4 to:(id)arg5 ;
-(BOOL)selfStarkAlertWillActivate:(id)arg1 overAlerts:(id)arg2 ;
-(BOOL)selfStarkAlertDidActivate:(id)arg1 overAlerts:(id)arg2 ;
-(BOOL)selfStarkAlertDidDeactivate:(id)arg1 ;
-(BOOL)selfStarkAlertWillDeactivate:(id)arg1 ;
-(id)_initWithWorkspace:(id)arg1 mainScreenAlertManager:(id)arg2 starkScreenController:(id)arg3 activatingAlert:(id)arg4 deactivatingAlert:(id)arg5 activation:(BOOL)arg6 ;
-(void)_commit;
-(void)dealloc;
-(id)debugDescription;
@end

