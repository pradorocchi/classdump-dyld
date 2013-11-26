/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libAWDProtobufAirPlay.dylib
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libAWDProtobufAirPlay.dylib/libAWDProtobufAirPlay.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface AWDAirPlayVideoSessionStartedOnClient : PBCodable {

	unsigned long long _fileBytes;
	unsigned long long _timestamp;
	unsigned _audioOnly;
	unsigned _authMs;
	unsigned _bitrate;
	unsigned _bonjourMs;
	unsigned _connectMs;
	unsigned _duration;
	unsigned _infoMs;
	unsigned _postAuthMs;
	unsigned _secureConnectionMs;
	NSString* _serverModel;
	NSString* _serverVersion;
	NSString* _sessionUUID;
	int _status;
	unsigned _transportType;
	unsigned _type;
	SCD_Struct_AW13 _has;

}

@property (nonatomic,readonly) BOOL hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                    //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasServerModel; 
@property (nonatomic,retain) NSString * serverModel;                    //@synthesize serverModel=_serverModel - In the implementation block
@property (nonatomic,readonly) BOOL hasServerVersion; 
@property (nonatomic,retain) NSString * serverVersion;                  //@synthesize serverVersion=_serverVersion - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                             //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) unsigned transportType;                    //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL hasFileBytes; 
@property (assign,nonatomic) unsigned long long fileBytes;              //@synthesize fileBytes=_fileBytes - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                         //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasBitrate; 
@property (assign,nonatomic) unsigned bitrate;                          //@synthesize bitrate=_bitrate - In the implementation block
@property (assign,nonatomic) BOOL hasAudioOnly; 
@property (assign,nonatomic) unsigned audioOnly;                        //@synthesize audioOnly=_audioOnly - In the implementation block
@property (assign,nonatomic) BOOL hasBonjourMs; 
@property (assign,nonatomic) unsigned bonjourMs;                        //@synthesize bonjourMs=_bonjourMs - In the implementation block
@property (assign,nonatomic) BOOL hasConnectMs; 
@property (assign,nonatomic) unsigned connectMs;                        //@synthesize connectMs=_connectMs - In the implementation block
@property (assign,nonatomic) BOOL hasInfoMs; 
@property (assign,nonatomic) unsigned infoMs;                           //@synthesize infoMs=_infoMs - In the implementation block
@property (assign,nonatomic) BOOL hasSecureConnectionMs; 
@property (assign,nonatomic) unsigned secureConnectionMs;               //@synthesize secureConnectionMs=_secureConnectionMs - In the implementation block
@property (assign,nonatomic) BOOL hasAuthMs; 
@property (assign,nonatomic) unsigned authMs;                           //@synthesize authMs=_authMs - In the implementation block
@property (assign,nonatomic) BOOL hasPostAuthMs; 
@property (assign,nonatomic) unsigned postAuthMs;                       //@synthesize postAuthMs=_postAuthMs - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(unsigned)duration;
-(void)setDuration:(unsigned)arg1 ;
-(void)setType:(unsigned)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)type;
-(id)dictionaryRepresentation;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setServerVersion:(id)arg1 ;
-(id)serverVersion;
-(unsigned)bitrate;
-(void)setBitrate:(unsigned)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(void)setTransportType:(unsigned)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)setHasStatus:(BOOL)arg1 ;
-(void)setSessionUUID:(id)arg1 ;
-(void)setBonjourMs:(unsigned)arg1 ;
-(void)setConnectMs:(unsigned)arg1 ;
-(void)setAuthMs:(unsigned)arg1 ;
-(void)setFileBytes:(unsigned long long)arg1 ;
-(void)setAudioOnly:(unsigned)arg1 ;
-(void)setServerModel:(id)arg1 ;
-(void)setInfoMs:(unsigned)arg1 ;
-(void)setSecureConnectionMs:(unsigned)arg1 ;
-(void)setPostAuthMs:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)transportType;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasSessionUUID;
-(id)sessionUUID;
-(BOOL)hasBonjourMs;
-(unsigned)bonjourMs;
-(BOOL)hasConnectMs;
-(unsigned)connectMs;
-(BOOL)hasAuthMs;
-(unsigned)authMs;
-(void)setHasBonjourMs:(BOOL)arg1 ;
-(void)setHasConnectMs:(BOOL)arg1 ;
-(void)setHasAuthMs:(BOOL)arg1 ;
-(BOOL)hasServerModel;
-(id)serverModel;
-(BOOL)hasServerVersion;
-(BOOL)hasFileBytes;
-(unsigned long long)fileBytes;
-(BOOL)hasBitrate;
-(BOOL)hasAudioOnly;
-(unsigned)audioOnly;
-(BOOL)hasInfoMs;
-(unsigned)infoMs;
-(BOOL)hasSecureConnectionMs;
-(unsigned)secureConnectionMs;
-(BOOL)hasPostAuthMs;
-(unsigned)postAuthMs;
-(void)setHasFileBytes:(BOOL)arg1 ;
-(void)setHasBitrate:(BOOL)arg1 ;
-(void)setHasAudioOnly:(BOOL)arg1 ;
-(void)setHasInfoMs:(BOOL)arg1 ;
-(void)setHasSecureConnectionMs:(BOOL)arg1 ;
-(void)setHasPostAuthMs:(BOOL)arg1 ;
@end

