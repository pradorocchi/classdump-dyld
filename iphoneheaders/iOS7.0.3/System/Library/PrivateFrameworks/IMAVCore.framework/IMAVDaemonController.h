/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol IMAVDaemonProtocol, OS_dispatch_queue;
#import <IMAVCore/IMAVCore-Structs.h>
@class IMRemoteObject, IMLocalObject, IMAVDaemonListener, NSProtocolChecker, NSString, NSMutableArray, NSLock, NSObject;

@interface IMAVDaemonController : NSObject {

	IMRemoteObject<IMAVDaemonProtocol>* _remoteObject;
	IMLocalObject* _localObject;
	IMAVDaemonListener* _daemonListener;
	NSProtocolChecker* _protocol;
	NSString* _listenerID;
	NSMutableArray* _listeners;
	NSLock* _connectionLock;
	NSObject<OS_dispatch_queue>* _listenerLockQueue;
	NSObject<OS_dispatch_queue>* _remoteDaemonLockQueue;
	NSObject<OS_dispatch_queue>* _remoteMessageQueue;
	NSObject<OS_dispatch_queue>* _localObjectLockQueue;
	CFRunLoopSourceRef _runLoopSource;
	BOOL _hasCheckedForDaemon;
	BOOL _acquiringDaemonConnection;

}

@property (nonatomic,readonly) IMAVDaemonListener * listener;                                  //@synthesize daemonListener=_daemonListener - In the implementation block
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * _remoteMessageQueue;              //@synthesize remoteMessageQueue=_remoteMessageQueue - In the implementation block
+(id)sharedInstance;
-(BOOL)isConnected;
-(BOOL)isConnecting;
-(void)dealloc;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)listener;
-(BOOL)addListenerID:(id)arg1 ;
-(void)_connectToDaemon;
-(void)_disconnectFromDaemon;
-(void)_cleanUpConnection;
-(BOOL)_makeConnectionWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)_localObjectDiedNotification:(id)arg1 ;
-(void)_remoteObjectDiedNotification:(id)arg1 ;
-(void)_noteSetupComplete;
-(void)_localObjectCleanup;
-(void)_remoteObjectCleanup;
-(BOOL)__isLocalObjectValidOnQueue:(id)arg1 ;
-(BOOL)__isRemoteObjectValidOnQueue:(id)arg1 ;
-(BOOL)remoteObjectExists;
-(void)remoteObjectDiedNotification:(id)arg1 ;
-(void)localObjectDiedNotification:(id)arg1 ;
-(BOOL)localObjectExists;
-(BOOL)hasListenerForID:(id)arg1 ;
-(void)_listenerSetUpdated;
-(BOOL)removeListenerID:(id)arg1 ;
-(id)_remoteMessageQueue;
@end

