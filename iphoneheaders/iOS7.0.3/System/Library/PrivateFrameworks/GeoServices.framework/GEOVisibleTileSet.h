/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:36 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@interface GEOVisibleTileSet : PBCodable <NSCopying> {

	SCD_Struct_GE57* _tileKeys;
	unsigned _tileKeysCount;
	unsigned _tileKeysSpace;
	unsigned _identifier;
	int _style;

}

@property (assign,nonatomic) int style;                                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned tileKeysCount; 
@property (nonatomic,readonly) SCD_Struct_GE57* tileKeys; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setStyle:(int)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(int)style;
-(unsigned)identifier;
-(id)dictionaryRepresentation;
-(void)setIdentifier:(unsigned)arg1 ;
-(void)clearTileKeys;
-(SCD_Struct_GE57*)tileKeys;
-(void)setTileKeys:(SCD_Struct_GE57*)arg1 count:(unsigned)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)tileKeysCount;
-(SCD_Struct_GE57)tileKeyAtIndex:(unsigned)arg1 ;
-(void)addTileKey:(SCD_Struct_GE57)arg1 ;
@end

