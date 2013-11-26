/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameKitServices/GKVoiceChatServicePrivate.h>

@class NSMutableArray, NSString;

@interface GKVoiceChatServiceFocus : GKVoiceChatServicePrivate {

	NSMutableArray* outgoingCallDictList;
	NSMutableArray* incomingCallDictList;
	int incomingUID;
	NSString* currentFocus;
	int packetsPerBundle;
	BOOL hasMic;

}

@property (nonatomic,copy) NSString * currentFocus; 
@property (assign) int packetsPerBundle; 
@property (assign) BOOL hasMic; 
+(id)defaultVoiceChatService;
-(void)dealloc;
-(id)init;
-(void)setRemoteVideoLayer:(void*)arg1 ;
-(void*)remoteVideoLayer;
-(void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(unsigned long)arg3 error:(id)arg4 ;
-(void)videoConference:(id)arg1 didStopWithCallID:(unsigned long)arg2 error:(id)arg3 ;
-(void)setQualityDelegate:(id)arg1 ;
-(void)setPacketsPerBundle:(int)arg1 ;
-(int)packetsPerBundle;
-(void)setShouldTimeoutPackets:(BOOL)arg1 ;
-(void)setIsUsingSuppression:(BOOL)arg1 ;
-(void)setChatMode:(int)arg1 ;
-(void)setCurrentFocus:(id)arg1 ;
-(void)updatedMutedPeers:(id)arg1 forParticipantID:(id)arg2 ;
-(void)updatedConnectedPeers:(id)arg1 ;
-(void)setHasMic:(BOOL)arg1 ;
-(BOOL)hasMic;
-(id)currentFocus;
-(void)setSpeakingDelegate:(id)arg1 ;
-(void)setTalkingPeersLimit:(unsigned)arg1 ;
-(void)setLocalVideoLayer:(void*)arg1 ;
-(void*)localVideoLayer;
-(void)setFocus:(BOOL)arg1 ;
-(void)remoteCancelledProc:(id)arg1 ;
-(void)stopVoiceChatProc:(id)arg1 participantDidCancel:(BOOL)arg2 ;
-(id)openOutgoingDictionaryForParticipantID:(id)arg1 ;
-(id)dictionaryForCallID:(unsigned long)arg1 isIncomingDictonary:(BOOL)arg2 ;
-(BOOL)processInviteDictionary:(id)arg1 fromParticipantID:(id)arg2 ;
-(BOOL)processReplyDict:(id)arg1 ;
-(BOOL)processCancelDict:(id)arg1 ;
-(BOOL)processFocusDict:(id)arg1 fromParticipantID:(id)arg2 ;
-(BOOL)processInviteDictionaryForTie:(id)arg1 fromParticipantID:(id)arg2 ;
-(id)dictionaryForParticipantID:(id)arg1 isIncomingDictonary:(BOOL)arg2 ;
-(id)dictionaryForNonce:(int)arg1 participantID:(id)arg2 isIncomingDictonary:(BOOL)arg3 ;
-(id)incomingDictionaryMatchingOriginalCallID:(unsigned long)arg1 participantID:(id)arg2 ;
-(BOOL)processFocusChange:(id)arg1 fromParticipantID:(id)arg2 ;
-(BOOL)startVoiceChatWithParticipantID:(id)arg1 error:(id*)arg2 ;
-(void)remoteCancelled:(id)arg1 ;
-(void)stopVoiceChatProc:(id)arg1 ;
-(BOOL)acceptCallID:(unsigned long)arg1 error:(id*)arg2 ;
-(void)denyCallID:(unsigned long)arg1 ;
-(void)receivedData:(id)arg1 fromParticipantID:(id)arg2 ;
-(void)sendFocusChange:(BOOL)arg1 ;
-(double)localFramerate;
-(double)localBitrate;
-(double)remoteFramerate;
-(double)remoteBitrate;
-(id)localDisplayNameForCallID:(unsigned long)arg1 ;
-(id)remoteDisplayNameForCallID:(unsigned long)arg1 ;
-(BOOL)isAudioPausedToParticipantID:(id)arg1 ;
-(void)pauseAudio:(BOOL)arg1 toParticipantID:(id)arg2 ;
@end

