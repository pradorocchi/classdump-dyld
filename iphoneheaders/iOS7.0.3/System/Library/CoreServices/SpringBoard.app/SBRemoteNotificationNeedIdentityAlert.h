/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class SBApplication;

@interface SBRemoteNotificationNeedIdentityAlert : SBAlertItem {

	SBApplication* _app;

}
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)dealloc;
-(BOOL)dismissOnModalDisplayActivation;
-(BOOL)dismissOnLock;
-(id)initWithApplication:(id)arg1 ;
@end

