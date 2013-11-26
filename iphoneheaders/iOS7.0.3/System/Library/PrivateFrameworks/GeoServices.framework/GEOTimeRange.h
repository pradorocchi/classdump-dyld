/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:35 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@interface GEOTimeRange : PBCodable <NSCopying> {

	unsigned _from;
	unsigned _to;
	BOOL _allDay;
	SCD_Struct_GE60 _has;

}

@property (assign,nonatomic) BOOL hasFrom; 
@property (assign,nonatomic) unsigned from;               //@synthesize from=_from - In the implementation block
@property (assign,nonatomic) BOOL hasTo; 
@property (assign,nonatomic) unsigned to;                 //@synthesize to=_to - In the implementation block
@property (assign,nonatomic) BOOL hasAllDay; 
@property (assign,nonatomic) BOOL allDay;                 //@synthesize allDay=_allDay - In the implementation block
-(void)setAllDay:(BOOL)arg1 ;
-(BOOL)allDay;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasFrom;
-(BOOL)hasTo;
-(BOOL)hasAllDay;
-(void)setHasFrom:(BOOL)arg1 ;
-(void)setHasTo:(BOOL)arg1 ;
-(void)setHasAllDay:(BOOL)arg1 ;
-(unsigned)from;
-(unsigned)to;
-(BOOL)readFrom:(id)arg1 ;
-(void)setFrom:(unsigned)arg1 ;
-(void)setTo:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

