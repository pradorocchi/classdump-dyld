/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:10 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TouchRemote/TRTCPConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMapTable;

@interface TRDConnectionManager : NSObject <TRTCPConnectionDelegate> {

	NSObject<OS_dispatch_queue>* _accessQueue;
	NSObject<OS_dispatch_queue>* _connectionDelegateQueue;
	NSMapTable* _connectionToXPCConnectionOwners;
	NSMapTable* _serviceToConnection;
	NSMapTable* _serviceToConnectionCompletionHandlers;
	NSMapTable* _XPCConnectionToConnectionToPacketEventClasses;

}
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)TRXPCD_closeConnectionWithUniqueIdentifier:(int)arg1 ;
-(void)TRXPCD_connectionWithUniqueIdentifier:(int)arg1 sendPacketEvent:(id)arg2 withCompletionHandler:(/*^block*/ id)arg3 ;
-(void)TRXPCD_connectionWithUniqueIdentifier:(int)arg1 setRelevantReceivedPacketEventTypes:(id)arg2 ;
-(void)connectToService:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)TRXPCD_connectToService:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)connectionDidClose:(id)arg1 ;
-(void)connection:(id)arg1 didReceivePacketEvent:(id)arg2 ;
-(void)_XPCServerDidInvalidateClientConnectionNotification:(id)arg1 ;
-(id)_existingConnectionForService:(id)arg1 ;
-(void)_callConnectionCompletionHandlersForService:(id)arg1 withConnection:(id)arg2 error:(id)arg3 ;
-(id)_existingConnectionForConnectionUniqueIdentifier:(int)arg1 ;
-(id)_packetEventClassesForPacketEventTypes:(id)arg1 ;
-(void).cxx_destruct;
@end

