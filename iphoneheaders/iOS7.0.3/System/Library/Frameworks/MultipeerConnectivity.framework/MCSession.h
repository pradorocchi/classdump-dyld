/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:34 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MCSessionDelegate, OS_dispatch_queue, MCSessionPrivateDelegate;
#import <MultipeerConnectivity/MultipeerConnectivity-Structs.h>
@class , MCPeerID, NSArray, NSMutableDictionary, NSObject;

@interface MCSession : NSObject {

	<MCSessionDelegate>* _delegate;
	MCPeerID* _myPeerID;
	NSArray* _securityIdentity;
	int _encryptionPreference;
	OpaqueGCKSessionRef _gckSession;
	OpaqueAGPSessionRef _agpSession;
	unsigned _gckPID;
	NSMutableDictionary* _peerIDMap;
	NSObject<OS_dispatch_queue>* _syncQueue;
	<MCSessionPrivateDelegate>* _privateDelegate;
	NSMutableDictionary* _peerStates;
	NSMutableDictionary* _connectionPendingPeerEvents;
	NSObject<OS_dispatch_queue>* _callbackQueue;

}

@property (assign,nonatomic,@dynamic) <MCSessionPrivateDelegate> * privateDelegate; 
@property (assign,nonatomic) <MCSessionDelegate> * delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MCPeerID * myPeerID;                                              //@synthesize myPeerID=_myPeerID - In the implementation block
@property (nonatomic,readonly) NSArray * securityIdentity;                                       //@synthesize securityIdentity=_securityIdentity - In the implementation block
@property (nonatomic,readonly) int encryptionPreference;                                         //@synthesize encryptionPreference=_encryptionPreference - In the implementation block
@property (nonatomic,readonly) NSArray * connectedPeers; 
@property (assign,nonatomic) OpaqueGCKSessionRef gckSession;                                     //@synthesize gckSession=_gckSession - In the implementation block
@property (assign,nonatomic) OpaqueAGPSessionRef agpSession;                                     //@synthesize agpSession=_agpSession - In the implementation block
@property (assign,nonatomic) unsigned gckPID;                                                    //@synthesize gckPID=_gckPID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * peerIDMap;                                    //@synthesize peerIDMap=_peerIDMap - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * syncQueue;                            //@synthesize syncQueue=_syncQueue - In the implementation block
@property (assign,nonatomic) <MCSessionPrivateDelegate> * privateDelegate;                       //@synthesize privateDelegate=_privateDelegate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * peerStates;                                   //@synthesize peerStates=_peerStates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * connectionPendingPeerEvents;                  //@synthesize connectionPendingPeerEvents=_connectionPendingPeerEvents - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * callbackQueue;                        //@synthesize callbackQueue=_callbackQueue - In the implementation block
+(id)stringForSessionState:(int)arg1 ;
+(id)stringForMCSessionSendDataMode:(int)arg1 ;
-(id)peerStates;
-(id)callbackQueue;
-(id)syncQueue;
-(id)initWithPeer:(id)arg1 ;
-(void)syncSendXDataStreamCloseFromSenderToPID:(unsigned)arg1 streamID:(unsigned)arg2 closeReason:(unsigned short)arg3 ;
-(void)closeOutgoingStream:(id)arg1 forPeer:(id)arg2 state:(id)arg3 error:(id)arg4 removeObserver:(BOOL)arg5 ;
-(void)syncStartStreamWithName:(id)arg1 toPeer:(id)arg2 mcFD:(int)arg3 isResource:(BOOL)arg4 ;
-(OpaqueAGPSessionRef)agpSession;
-(int)encryptionPreference;
-(id)myPeerID;
-(id)securityIdentity;
-(id)stringForEncryptionPreference:(int)arg1 ;
-(id)connectedPeers;
-(void)closeIncomingStream:(id)arg1 forPeer:(id)arg2 state:(id)arg3 error:(id)arg4 removeObserver:(BOOL)arg5 ;
-(void)syncSendXDataConnectionBlobPushToPID:(unsigned)arg1 connectionBlob:(id)arg2 ;
-(void)syncSendXDataPeerIDPushToPID:(unsigned)arg1 ;
-(void)startConnectionWithIndirectPID:(unsigned)arg1 ;
-(void)syncHandleNetworkEvent:(SCD_Struct_MC2*)arg1 pid:(unsigned)arg2 freeEventWhenDone:(BOOL*)arg3 ;
-(void)closeStreamsForPeer:(id)arg1 state:(id)arg2 ;
-(void)syncHandleXDataDataPacket:(char*)arg1 packetSize:(int)arg2 forPeer:(id)arg3 state:(id)arg4 ;
-(void)syncSendXDataStreamOpenResponseToPID:(unsigned)arg1 withRequestID:(unsigned)arg2 streamID:(unsigned)arg3 ;
-(void)syncSendXDataStreamCloseFromReceiverToPID:(unsigned)arg1 streamID:(unsigned)arg2 closeReason:(unsigned short)arg3 ;
-(id)initWithPeer:(id)arg1 securityIdentity:(id)arg2 encryptionPreference:(int)arg3 ;
-(void)syncGetConnectionDataForPID:(unsigned)arg1 completionHandlerCopy:(/*^block*/ id)arg2 ;
-(BOOL)isEncryptionPreferenceCompatible:(int)arg1 ;
-(void)syncConnectPeer:(id)arg1 withConnectionData:(id)arg2 ;
-(void)syncSendData:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 ;
-(void)nearbyConnectionDataForPeer:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)connectPeer:(id)arg1 withNearbyConnectionData:(id)arg2 ;
-(BOOL)sendData:(id)arg1 toPeers:(id)arg2 withMode:(int)arg3 error:(id*)arg4 ;
-(id)sendResourceAtURL:(id)arg1 withName:(id)arg2 toPeer:(id)arg3 withCompletionHandler:(/*^block*/ id)arg4 ;
-(id)startStreamWithName:(id)arg1 toPeer:(id)arg2 error:(id*)arg3 ;
-(void)setGckSession:(OpaqueGCKSessionRef)arg1 ;
-(void)setAgpSession:(OpaqueAGPSessionRef)arg1 ;
-(void)setGckPID:(unsigned)arg1 ;
-(id)peerIDMap;
-(void)setPeerIDMap:(id)arg1 ;
-(void)setPeerStates:(id)arg1 ;
-(id)connectionPendingPeerEvents;
-(void)setConnectionPendingPeerEvents:(id)arg1 ;
-(void)peerDidDeclineInvitation:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
-(void)disconnect;
-(OpaqueGCKSessionRef)gckSession;
-(unsigned)gckPID;
-(id)privateDelegate;
-(void)setPrivateDelegate:(id)arg1 ;
-(void)setSyncQueue:(id)arg1 ;
-(void)setCallbackQueue:(id)arg1 ;
@end

