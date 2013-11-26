/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/sbin/distnoted
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <distnoted/_NSDNXPCObject.h>

@protocol OS_xpc_object;
@class _NSDNXPCConnection, NSObject, NSMutableArray;

@interface ClientOfLocalNoteServer : NSObject <_NSDNXPCObject> {

	_NSDNXPCConnection* _client;
	NSObject<OS_xpc_object>* _regList;
	NSObject<OS_xpc_object>* _queue;
	BOOL _suspended;
	NSMutableArray* _invalidHandlers;
	int _started;
	int _invalid;
	BOOL _postingForbidden;
	BOOL _registerAllForbidden;
	int _lock;
	int _pid;
	char* _processName;

}
-(void)addInvalidationHandler:(/*^block*/ id)arg1 ;
-(void)handlePost:(id)arg1 ;
-(id)initWithClientConnection:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)start;
@end

