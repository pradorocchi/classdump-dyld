/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, GKPlayerInternal, NSDate;

@interface GKTurnBasedParticipantInternal : GKInternalRepresentation {

	NSString* _sessionID;
	GKPlayerInternal* _player;
	GKPlayerInternal* _invitedBy;
	NSString* _inviteMessage;
	NSString* _status;
	NSDate* _lastTurnDate;
	NSDate* _timeoutDate;
	unsigned _matchOutcome;
	unsigned char _slot;

}

@property (nonatomic,readonly) NSString * playerID; 
@property (nonatomic,retain) NSString * sessionID;                      //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * player;                 //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * invitedBy;              //@synthesize invitedBy=_invitedBy - In the implementation block
@property (nonatomic,retain) NSString * inviteMessage;                  //@synthesize inviteMessage=_inviteMessage - In the implementation block
@property (nonatomic,retain) NSString * status;                         //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSDate * lastTurnDate;                     //@synthesize lastTurnDate=_lastTurnDate - In the implementation block
@property (nonatomic,retain) NSDate * timeoutDate;                      //@synthesize timeoutDate=_timeoutDate - In the implementation block
@property (assign,nonatomic) unsigned matchOutcome;                     //@synthesize matchOutcome=_matchOutcome - In the implementation block
@property (assign,nonatomic) unsigned char slot;                        //@synthesize slot=_slot - In the implementation block
+(id)secureCodedPropertyKeys;
-(unsigned char)slot;
-(id)serverRepresentation;
-(unsigned)matchOutcome;
-(id)timeoutDate;
-(void)setMatchOutcome:(unsigned)arg1 ;
-(void)setTimeoutDate:(id)arg1 ;
-(void)setInvitedBy:(id)arg1 ;
-(void)setSlot:(unsigned char)arg1 ;
-(id)playerID;
-(id)lastTurnDate;
-(void)setLastTurnDate:(id)arg1 ;
-(id)inviteMessage;
-(void)setInviteMessage:(id)arg1 ;
-(id)invitedBy;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)status;
-(void)setStatus:(id)arg1 ;
-(id)sessionID;
-(void)setSessionID:(id)arg1 ;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end

