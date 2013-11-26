/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSMutableArray, GEOLatLng, NSData;

@interface GEOSuggestionEntry : PBCodable <NSCopying> {

	SCD_Struct_GE151* _textHighlights;
	unsigned _textHighlightsCount;
	unsigned _textHighlightsSpace;
	NSString* _calloutTitle;
	NSMutableArray* _displayLines;
	NSString* _iconID;
	GEOLatLng* _latlng;
	NSString* _searchQueryDisplayString;
	NSData* _suggestionEntryMetadata;

}

@property (nonatomic,retain) NSMutableArray * displayLines;                    //@synthesize displayLines=_displayLines - In the implementation block
@property (nonatomic,readonly) unsigned textHighlightsCount; 
@property (nonatomic,readonly) SCD_Struct_GE151* textHighlights; 
@property (nonatomic,readonly) BOOL hasIconID; 
@property (nonatomic,retain) NSString * iconID;                                //@synthesize iconID=_iconID - In the implementation block
@property (nonatomic,readonly) BOOL hasLatlng; 
@property (nonatomic,retain) GEOLatLng * latlng;                               //@synthesize latlng=_latlng - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata;                 //@synthesize suggestionEntryMetadata=_suggestionEntryMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchQueryDisplayString; 
@property (nonatomic,retain) NSString * searchQueryDisplayString;              //@synthesize searchQueryDisplayString=_searchQueryDisplayString - In the implementation block
@property (nonatomic,readonly) BOOL hasCalloutTitle; 
@property (nonatomic,retain) NSString * calloutTitle;                          //@synthesize calloutTitle=_calloutTitle - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSuggestionEntryMetadata:(id)arg1 ;
-(BOOL)hasSuggestionEntryMetadata;
-(id)suggestionEntryMetadata;
-(void)setDisplayLines:(id)arg1 ;
-(void)clearTextHighlights;
-(void)setIconID:(id)arg1 ;
-(void)setLatlng:(id)arg1 ;
-(void)setSearchQueryDisplayString:(id)arg1 ;
-(void)setCalloutTitle:(id)arg1 ;
-(void)addDisplayLine:(id)arg1 ;
-(unsigned)displayLinesCount;
-(void)clearDisplayLines;
-(id)displayLineAtIndex:(unsigned)arg1 ;
-(unsigned)textHighlightsCount;
-(SCD_Struct_GE151)textHighlightsAtIndex:(unsigned)arg1 ;
-(void)addTextHighlights:(SCD_Struct_GE151)arg1 ;
-(BOOL)hasIconID;
-(id)iconID;
-(BOOL)hasLatlng;
-(id)latlng;
-(BOOL)hasSearchQueryDisplayString;
-(id)searchQueryDisplayString;
-(BOOL)hasCalloutTitle;
-(id)calloutTitle;
-(SCD_Struct_GE151*)textHighlights;
-(void)setTextHighlights:(SCD_Struct_GE151*)arg1 count:(unsigned)arg2 ;
-(id)displayLines;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

