/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libAWDProtobufWifi.dylib
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libAWDProtobufWifi.dylib/libAWDProtobufWifi.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@interface AWDWiFiMetricCustomNetworkSetting : PBCodable {

	unsigned long long _timestamp;
	unsigned _autoProxySetCount;
	unsigned _bootpSetCount;
	unsigned _customNetworkCount;
	unsigned _dhcpSetCount;
	unsigned _manualProxySetCount;
	unsigned _staticSetCount;
	unsigned _totalNetworkCount;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCustomNetworkCount; 
@property (assign,nonatomic) unsigned customNetworkCount;               //@synthesize customNetworkCount=_customNetworkCount - In the implementation block
@property (assign,nonatomic) BOOL hasTotalNetworkCount; 
@property (assign,nonatomic) unsigned totalNetworkCount;                //@synthesize totalNetworkCount=_totalNetworkCount - In the implementation block
@property (assign,nonatomic) BOOL hasDhcpSetCount; 
@property (assign,nonatomic) unsigned dhcpSetCount;                     //@synthesize dhcpSetCount=_dhcpSetCount - In the implementation block
@property (assign,nonatomic) BOOL hasBootpSetCount; 
@property (assign,nonatomic) unsigned bootpSetCount;                    //@synthesize bootpSetCount=_bootpSetCount - In the implementation block
@property (assign,nonatomic) BOOL hasStaticSetCount; 
@property (assign,nonatomic) unsigned staticSetCount;                   //@synthesize staticSetCount=_staticSetCount - In the implementation block
@property (assign,nonatomic) BOOL hasManualProxySetCount; 
@property (assign,nonatomic) unsigned manualProxySetCount;              //@synthesize manualProxySetCount=_manualProxySetCount - In the implementation block
@property (assign,nonatomic) BOOL hasAutoProxySetCount; 
@property (assign,nonatomic) unsigned autoProxySetCount;                //@synthesize autoProxySetCount=_autoProxySetCount - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasCustomNetworkCount;
-(unsigned)customNetworkCount;
-(void)setCustomNetworkCount:(unsigned)arg1 ;
-(BOOL)hasTotalNetworkCount;
-(unsigned)totalNetworkCount;
-(void)setTotalNetworkCount:(unsigned)arg1 ;
-(BOOL)hasDhcpSetCount;
-(unsigned)dhcpSetCount;
-(void)setDhcpSetCount:(unsigned)arg1 ;
-(BOOL)hasBootpSetCount;
-(unsigned)bootpSetCount;
-(void)setBootpSetCount:(unsigned)arg1 ;
-(BOOL)hasStaticSetCount;
-(unsigned)staticSetCount;
-(void)setStaticSetCount:(unsigned)arg1 ;
-(BOOL)hasManualProxySetCount;
-(unsigned)manualProxySetCount;
-(void)setManualProxySetCount:(unsigned)arg1 ;
-(BOOL)hasAutoProxySetCount;
-(unsigned)autoProxySetCount;
-(void)setAutoProxySetCount:(unsigned)arg1 ;
-(void)setHasCustomNetworkCount:(BOOL)arg1 ;
-(void)setHasTotalNetworkCount:(BOOL)arg1 ;
-(void)setHasDhcpSetCount:(BOOL)arg1 ;
-(void)setHasBootpSetCount:(BOOL)arg1 ;
-(void)setHasStaticSetCount:(BOOL)arg1 ;
-(void)setHasManualProxySetCount:(BOOL)arg1 ;
-(void)setHasAutoProxySetCount:(BOOL)arg1 ;
@end

