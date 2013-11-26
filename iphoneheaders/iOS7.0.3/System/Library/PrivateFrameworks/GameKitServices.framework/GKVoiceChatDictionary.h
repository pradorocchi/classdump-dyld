/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary;

@interface GKVoiceChatDictionary : NSObject {

	NSMutableDictionary* actualDictionary;
	unsigned type;
	unsigned long orignalCallID;

}

@property (assign) unsigned long callID; 
@property (readonly) unsigned long originalCallID; 
@property (assign) int nonce; 
+(BOOL)validateDictionary:(id)arg1 ;
+(BOOL)validateInvite:(id)arg1 ;
+(BOOL)validateReply:(id)arg1 ;
+(BOOL)validateCancel:(id)arg1 ;
+(BOOL)validateFocus:(id)arg1 ;
+(id)inviteDictionaryToParticipantID:(id)arg1 fromParticipantID:(id)arg2 connectionData:(id)arg3 callID:(unsigned long)arg4 focus:(BOOL)arg5 ;
+(id)dictionaryFromData:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned)type;
-(unsigned)response;
-(id)version;
-(unsigned long)callID;
-(void)setCallID:(unsigned long)arg1 ;
-(id)participantID;
-(id)connectionData;
-(BOOL)isFocus;
-(id)fromParticipantID;
-(int)nonce;
-(id)remoteVCPartyID;
-(id)localVCPartyID;
-(BOOL)matchesNonce:(int)arg1 ;
-(unsigned long)originalCallID;
-(id)replyDictionary:(unsigned)arg1 connectionData:(id)arg2 callID:(unsigned long)arg3 focus:(BOOL)arg4 ;
-(id)cancelDictionary;
-(id)focusDictionary:(BOOL)arg1 ;
-(BOOL)isInviteDictionary;
-(BOOL)isCancelDictionary;
-(BOOL)isReplyDictionary;
-(BOOL)isFocusDictionary;
-(BOOL)matchesResponse:(id)arg1 ;
-(void)setFromParticipantID:(id)arg1 ;
-(void)setNonce:(int)arg1 ;
-(void)setFocus:(BOOL)arg1 ;
-(id)createBlob;
-(id)setLocalVCPartyID:(id)arg1 ;
-(id)setRemoteVCPartyID:(id)arg1 ;
@end

