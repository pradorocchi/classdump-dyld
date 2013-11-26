/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSArray, NSString, NSDictionary, NSData;

@interface GKMatchRequestInternal : GKInternalRepresentation {

	unsigned _matchType;
	NSArray* _playersToInvite;
	NSString* _inviteMessage;
	NSDictionary* _localizableInviteMessage;
	NSData* _sessionToken;
	NSString* _rid;
	unsigned _version;
	int _playerGroup;
	unsigned _playerAttributes;
	unsigned char _minPlayers;
	unsigned char _maxPlayers;
	unsigned char _defaultNumberOfPlayers;

}

@property (assign,nonatomic) unsigned char minPlayers;                             //@synthesize minPlayers=_minPlayers - In the implementation block
@property (assign,nonatomic) unsigned char maxPlayers;                             //@synthesize maxPlayers=_maxPlayers - In the implementation block
@property (assign,nonatomic) unsigned char defaultNumberOfPlayers;                 //@synthesize defaultNumberOfPlayers=_defaultNumberOfPlayers - In the implementation block
@property (assign,nonatomic) int playerGroup;                                      //@synthesize playerGroup=_playerGroup - In the implementation block
@property (assign,nonatomic) unsigned playerAttributes;                            //@synthesize playerAttributes=_playerAttributes - In the implementation block
@property (nonatomic,retain) NSArray * playersToInvite;                            //@synthesize playersToInvite=_playersToInvite - In the implementation block
@property (nonatomic,copy) NSString * inviteMessage;                               //@synthesize inviteMessage=_inviteMessage - In the implementation block
@property (nonatomic,retain) NSDictionary * localizableInviteMessage;              //@synthesize localizableInviteMessage=_localizableInviteMessage - In the implementation block
@property (assign,nonatomic) unsigned matchType;                                   //@synthesize matchType=_matchType - In the implementation block
@property (nonatomic,retain) NSData * sessionToken;                                //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,retain) NSString * rid;                                       //@synthesize rid=_rid - In the implementation block
@property (assign,nonatomic) unsigned version;                                     //@synthesize version=_version - In the implementation block
+(id)secureCodedPropertyKeys;
-(int)playerGroup;
-(unsigned)playerAttributes;
-(id)sessionToken;
-(void)setMatchType:(unsigned)arg1 ;
-(void)setPlayerGroup:(int)arg1 ;
-(void)setPlayerAttributes:(unsigned)arg1 ;
-(void)setSessionToken:(id)arg1 ;
-(id)localizableInviteMessage;
-(void)setLocalizableInviteMessage:(id)arg1 ;
-(id)inviteMessage;
-(unsigned char)defaultNumberOfPlayers;
-(unsigned char)minPlayers;
-(void)setDefaultNumberOfPlayers:(unsigned char)arg1 ;
-(unsigned char)maxPlayers;
-(void)setMinPlayers:(unsigned char)arg1 ;
-(void)setMaxPlayers:(unsigned char)arg1 ;
-(id)playersToInvite;
-(void)setPlayersToInvite:(id)arg1 ;
-(void)setInviteMessage:(id)arg1 ;
-(id)rid;
-(void)setRid:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(unsigned)matchType;
@end

