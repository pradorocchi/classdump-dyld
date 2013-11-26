/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libAWDProtobufPower.dylib
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libAWDProtobufPower.dylib/libAWDProtobufPower.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface AWDNetworkUsageInfo : PBCodable {

	unsigned long long _cellIn;
	unsigned long long _cellOut;
	unsigned long long _wifiIn;
	unsigned long long _wifiOut;
	NSString* _processName;
	SCD_Struct_AW1 _has;

}

@property (nonatomic,readonly) BOOL hasProcessName; 
@property (nonatomic,retain) NSString * processName;                  //@synthesize processName=_processName - In the implementation block
@property (assign,nonatomic) BOOL hasWifiIn; 
@property (assign,nonatomic) unsigned long long wifiIn;               //@synthesize wifiIn=_wifiIn - In the implementation block
@property (assign,nonatomic) BOOL hasWifiOut; 
@property (assign,nonatomic) unsigned long long wifiOut;              //@synthesize wifiOut=_wifiOut - In the implementation block
@property (assign,nonatomic) BOOL hasCellIn; 
@property (assign,nonatomic) unsigned long long cellIn;               //@synthesize cellIn=_cellIn - In the implementation block
@property (assign,nonatomic) BOOL hasCellOut; 
@property (assign,nonatomic) unsigned long long cellOut;              //@synthesize cellOut=_cellOut - In the implementation block
-(void)setProcessName:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)processName;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasProcessName;
-(BOOL)hasWifiIn;
-(unsigned long long)wifiIn;
-(void)setWifiIn:(unsigned long long)arg1 ;
-(BOOL)hasWifiOut;
-(unsigned long long)wifiOut;
-(void)setWifiOut:(unsigned long long)arg1 ;
-(BOOL)hasCellIn;
-(unsigned long long)cellIn;
-(void)setCellIn:(unsigned long long)arg1 ;
-(BOOL)hasCellOut;
-(unsigned long long)cellOut;
-(void)setCellOut:(unsigned long long)arg1 ;
-(void)setHasWifiIn:(BOOL)arg1 ;
-(void)setHasWifiOut:(BOOL)arg1 ;
-(void)setHasCellIn:(BOOL)arg1 ;
-(void)setHasCellOut:(BOOL)arg1 ;
@end

