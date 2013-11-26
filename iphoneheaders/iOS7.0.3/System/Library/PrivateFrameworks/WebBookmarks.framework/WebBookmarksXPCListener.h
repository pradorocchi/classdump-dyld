/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:36 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebBookmarks/WebBookmarksXPCConnectionDelegate.h>

@protocol OS_xpc_object, WebBookmarksXPCConnectionDelegate;
@class NSObject, NSMutableArray, , NSMutableDictionary;

@interface WebBookmarksXPCListener : NSObject <WebBookmarksXPCConnectionDelegate> {

	NSObject<OS_xpc_object>* _listenerConnection;
	NSMutableArray* _clientConnections;
	<WebBookmarksXPCConnectionDelegate>* _delegate;
	NSMutableDictionary* _messageHandlers;

}
-(void)dealloc;
-(void)connection:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)setHandler:(/*^block*/ id)arg1 forMessageNamed:(const char*)arg2 ;
-(void)setMessageHandlers:(id)arg1 ;
-(void)_handleIncomingConnection:(id)arg1 ;
-(id)initListenerForMachService:(const char*)arg1 delegate:(id)arg2 ;
@end

