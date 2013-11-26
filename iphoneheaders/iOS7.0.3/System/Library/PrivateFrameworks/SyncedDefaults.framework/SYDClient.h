/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:04 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
#import <SyncedDefaults/SyncedDefaults-Structs.h>
@class NSObject, NSString;

@interface SYDClient : NSObject {

	NSObject<OS_dispatch_queue>* _queue;
	NSObject<OS_xpc_object>* _connection;
	NSString* _bundleIdentifier;
	NSString* _storeIdentifier;
	BOOL _additionalSource;

}
-(void)dealloc;
-(void)_resetConnection;
-(void)shutdown;
-(id)initWithQueue:(id)arg1 bundleIdentifier:(CFStringRef)arg2 storeIdentifier:(CFStringRef)arg3 additionalSource:(BOOL)arg4 ;
-(void)_createConnectionIfNecessary;
-(id)_newMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)_sendMessageNoReply:(id)arg1 ;
-(id)_sendMessageWithReplySync:(id)arg1 ;
-(void)_sendMessage:(id)arg1 replyHandler:(/*^block*/ id)arg2 ;
-(id)initWithQueue:(id)arg1 bundleIdentifier:(CFStringRef)arg2 storeIdentifier:(CFStringRef)arg3 ;
-(void)sendMessageWithName:(id)arg1 ;
-(id)sendMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)sendMessageWithName:(id)arg1 replyHandler:(/*^block*/ id)arg2 ;
-(void)sendMessageWithName:(id)arg1 userInfo:(id)arg2 replyHandler:(/*^block*/ id)arg3 ;
-(void)finalize;
@end

