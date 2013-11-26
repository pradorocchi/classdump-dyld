/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMDMessageServices.framework/XPCServices/IMDMessageServicesAgent.xpc/IMDMessageServicesAgent
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <IMDMessageServicesAgent/IMDMessageServicesAgent-Structs.h>
@interface IMDMessageServicesAgentController : NSObject
+(id)sharedInstance;
-(void)chooseRouteForMessage:(id)arg1 withError:(unsigned)arg2 inChat:(id)arg3 handler:(/*^block*/ id)arg4 ;
-(void)checkForPendingRoutingWithHandler:(/*^block*/ id)arg1 ;
-(id)_routingDictionaryForService:(id)arg1 extraFlags:(unsigned long long)arg2 updateProperties:(BOOL)arg3 ;
-(IMDChatRecordStructRef)copyBestChatWithGuid:(id)arg1 message:(IMDMessageRecordStructRef)arg2 ;
-(void)_chooseRouteForMessage:(id)arg1 error:(unsigned)arg2 handler:(/*^block*/ id)arg3 ;
@end

