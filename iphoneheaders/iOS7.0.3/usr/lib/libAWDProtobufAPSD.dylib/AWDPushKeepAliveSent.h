/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libAWDProtobufAPSD.dylib
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libAWDProtobufAPSD.dylib/libAWDProtobufAPSD.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface AWDPushKeepAliveSent : PBCodable {

	unsigned long long _timestamp;
	unsigned _connectionType;
	unsigned _dualChannelState;
	NSString* _guid;
	unsigned _keepAliveACKDuration;
	int _linkQuality;
	unsigned _nextKeepAliveInterval;
	unsigned _timeSinceLastKeepAlive;
	SCD_Struct_AW2 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                              //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                      //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                              //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceLastKeepAlive; 
@property (assign,nonatomic) unsigned timeSinceLastKeepAlive;              //@synthesize timeSinceLastKeepAlive=_timeSinceLastKeepAlive - In the implementation block
@property (assign,nonatomic) BOOL hasNextKeepAliveInterval; 
@property (assign,nonatomic) unsigned nextKeepAliveInterval;               //@synthesize nextKeepAliveInterval=_nextKeepAliveInterval - In the implementation block
@property (assign,nonatomic) BOOL hasKeepAliveACKDuration; 
@property (assign,nonatomic) unsigned keepAliveACKDuration;                //@synthesize keepAliveACKDuration=_keepAliveACKDuration - In the implementation block
@property (assign,nonatomic) BOOL hasDualChannelState; 
@property (assign,nonatomic) unsigned dualChannelState;                    //@synthesize dualChannelState=_dualChannelState - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)connectionType;
-(void)setConnectionType:(unsigned)arg1 ;
-(id)guid;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setGuid:(id)arg1 ;
-(BOOL)hasGuid;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasConnectionType;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(BOOL)hasLinkQuality;
-(int)linkQuality;
-(void)setLinkQuality:(int)arg1 ;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(BOOL)hasDualChannelState;
-(unsigned)dualChannelState;
-(void)setDualChannelState:(unsigned)arg1 ;
-(void)setHasDualChannelState:(BOOL)arg1 ;
-(BOOL)hasTimeSinceLastKeepAlive;
-(unsigned)timeSinceLastKeepAlive;
-(void)setTimeSinceLastKeepAlive:(unsigned)arg1 ;
-(BOOL)hasNextKeepAliveInterval;
-(unsigned)nextKeepAliveInterval;
-(void)setNextKeepAliveInterval:(unsigned)arg1 ;
-(BOOL)hasKeepAliveACKDuration;
-(unsigned)keepAliveACKDuration;
-(void)setKeepAliveACKDuration:(unsigned)arg1 ;
-(void)setHasTimeSinceLastKeepAlive:(BOOL)arg1 ;
-(void)setHasNextKeepAliveInterval:(BOOL)arg1 ;
-(void)setHasKeepAliveACKDuration:(BOOL)arg1 ;
@end

