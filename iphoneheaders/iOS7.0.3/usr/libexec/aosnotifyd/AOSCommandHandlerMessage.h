/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/aosnotifyd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <aosnotifyd/AOSCommandHandler.h>

@class AOSUserNotification;

@interface AOSCommandHandlerMessage : AOSCommandHandler {

	AOSUserNotification* _waitingSecureMsgNotfn;

}

@property (nonatomic,retain) AOSUserNotification * waitingSecureMsgNotfn;              //@synthesize waitingSecureMsgNotfn=_waitingSecureMsgNotfn - In the implementation block
-(void)handleCommand;
-(void)sendAck;
-(BOOL)shouldHonorSecureMessage;
-(BOOL)shouldShowLockScreenSecureMessage;
-(void)showSecureMessage:(id)arg1 andLockScreenMessage:(id)arg2 ;
-(id)waitingSecureMsgNotfn;
-(void)setWaitingSecureMsgNotfn:(id)arg1 ;
-(void).cxx_destruct;
@end

