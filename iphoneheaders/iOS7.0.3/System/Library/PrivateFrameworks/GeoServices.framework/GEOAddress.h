/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:29 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableArray, GEOStructuredAddress;

@interface GEOAddress : PBCodable <NSCopying> {

	NSMutableArray* _formattedAddressLines;
	int _formattedAddressType;
	GEOStructuredAddress* _structuredAddress;
	SCD_Struct_GE52 _has;

}

@property (nonatomic,retain) NSMutableArray * formattedAddressLines;                //@synthesize formattedAddressLines=_formattedAddressLines - In the implementation block
@property (nonatomic,readonly) BOOL hasStructuredAddress; 
@property (nonatomic,retain) GEOStructuredAddress * structuredAddress;              //@synthesize structuredAddress=_structuredAddress - In the implementation block
@property (assign,nonatomic) BOOL hasFormattedAddressType; 
@property (assign,nonatomic) int formattedAddressType;                              //@synthesize formattedAddressType=_formattedAddressType - In the implementation block
-(id)initWithPlacemark:(id)arg1 ;
-(id)singleLineAddress;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithAddressDictionary:(id)arg1 ;
-(void)setFormattedAddressLines:(id)arg1 ;
-(void)setStructuredAddress:(id)arg1 ;
-(id)formattedAddressLines;
-(id)initWithAddressString:(id)arg1 ;
-(id)addressDictionary;
-(void)addFormattedAddressLine:(id)arg1 ;
-(unsigned)formattedAddressLinesCount;
-(void)clearFormattedAddressLines;
-(id)formattedAddressLineAtIndex:(unsigned)arg1 ;
-(BOOL)hasFormattedAddressType;
-(int)formattedAddressType;
-(void)setFormattedAddressType:(int)arg1 ;
-(void)setHasFormattedAddressType:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasStructuredAddress;
-(id)structuredAddress;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

