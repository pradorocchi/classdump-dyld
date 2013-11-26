/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libAWDProtobufWifi.dylib
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libAWDProtobufWifi.dylib/libAWDProtobufWifi.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface AWDWifiMetricWiFiTetheredDeviceOUI : PBCodable {

	unsigned long long _timestamp;
	NSData* _tetheredOUI;
	SCD_Struct_AW8 _has;

}

@property (nonatomic,readonly) BOOL hasTetheredOUI; 
@property (nonatomic,retain) NSData * tetheredOUI;                      //@synthesize tetheredOUI=_tetheredOUI - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
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
-(void)setTetheredOUI:(id)arg1 ;
-(BOOL)hasTetheredOUI;
-(id)tetheredOUI;
@end

