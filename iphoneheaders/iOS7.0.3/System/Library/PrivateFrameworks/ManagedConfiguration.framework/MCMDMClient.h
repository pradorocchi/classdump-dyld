/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:00 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
@class CPDistributedMessagingCenter;

@interface MCMDMClient : NSObject {

	CPDistributedMessagingCenter* _messageCenter;

}
+(id)sharedClient;
-(id)init;
-(BOOL)authenticateWithCheckInURL:(id)arg1 identity:(SecIdentityRef)arg2 topic:(id)arg3 useDevelopmentAPNS:(BOOL)arg4 signMessage:(BOOL)arg5 outError:(id*)arg6 ;
-(BOOL)checkOutCheckInURL:(id)arg1 identity:(SecIdentityRef)arg2 topic:(id)arg3 signMessage:(BOOL)arg4 outError:(id*)arg5 ;
-(void)notifyNewConfiguration;
-(void)scheduleTokenUpdate;
-(void)retryNotNowResponse;
-(void)simulatePush;
-(void)removeManagedAppsAccordingToFlags;
-(BOOL)isManagedByMDM;
-(BOOL)isActivationLockAllowed;
-(void).cxx_destruct;
@end

