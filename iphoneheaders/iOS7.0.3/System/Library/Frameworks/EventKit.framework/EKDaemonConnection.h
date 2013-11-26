/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSString, NSObject, NSMutableDictionary;

@interface EKDaemonConnection : NSObject {

	unsigned long _options;
	NSString* _dbPath;
	unsigned _serverPort;
	unsigned _machPort;
	unsigned _connectionPort;
	NSObject<OS_dispatch_queue>* _connectionLock;
	id _delegate;
	NSMutableDictionary* _replyHandlers;
	unsigned _nextID;
	NSObject<OS_dispatch_source>* _replySource;
	NSObject<OS_dispatch_queue>* _replyHandlerLock;
	BOOL _registeredForStartNote;

}

@property (readonly) unsigned port; 
@property (assign) id delegate;                  //@synthesize delegate=_delegate - In the implementation block
-(id)initWithOptions:(unsigned long)arg1 path:(id)arg2 ;
-(id)addReplyHandler:(/*^block*/ id)arg1 ;
-(void)removeReplyHandler:(id)arg1 ;
-(BOOL)_connectToServer;
-(void)_finishAllRepliesOnServerDeath;
-(void)_processReplyWithID:(unsigned)arg1 data:(id)arg2 finished:(BOOL)arg3 ;
-(void)_daemonRestarted;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)disconnect;
-(unsigned)port;
@end

