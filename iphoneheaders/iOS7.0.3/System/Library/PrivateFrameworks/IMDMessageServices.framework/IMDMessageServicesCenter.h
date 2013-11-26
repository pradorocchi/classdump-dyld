/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:48 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMDMessageServices.framework/IMDMessageServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface IMDMessageServicesCenter : NSObject {

	NSObject<OS_xpc_object>* _connection;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_requestRoutingWithGUID:(id)arg1 chatGUID:(id)arg2 error:(unsigned)arg3 handler:(/*^block*/ id)arg4 ;
-(void)requestRoutingForMessageGuid:(id)arg1 inChat:(id)arg2 error:(unsigned)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)requestRoutingWithCompletion:(/*^block*/ id)arg1 ;
-(void)_disconnected;
-(BOOL)_connect;
-(BOOL)_disconnect;
@end

