/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class GEOPlaceSearchRequest, GEOPlaceSearchResponse, NSString;

@interface GEORPCorrectedSearch : PBCodable <NSCopying> {

	unsigned _correctedSearchResultIndex;
	unsigned _originalSearchResultIndex;
	GEOPlaceSearchRequest* _placeSearchRequest;
	GEOPlaceSearchResponse* _placeSearchResponse;
	NSString* _preferredSearchDisplayLocation;
	SCD_Struct_GE55 _has;

}

@property (nonatomic,readonly) BOOL hasPlaceSearchRequest; 
@property (nonatomic,retain) GEOPlaceSearchRequest * placeSearchRequest;                //@synthesize placeSearchRequest=_placeSearchRequest - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceSearchResponse; 
@property (nonatomic,retain) GEOPlaceSearchResponse * placeSearchResponse;              //@synthesize placeSearchResponse=_placeSearchResponse - In the implementation block
@property (assign,nonatomic) BOOL hasOriginalSearchResultIndex; 
@property (assign,nonatomic) unsigned originalSearchResultIndex;                        //@synthesize originalSearchResultIndex=_originalSearchResultIndex - In the implementation block
@property (assign,nonatomic) BOOL hasCorrectedSearchResultIndex; 
@property (assign,nonatomic) unsigned correctedSearchResultIndex;                       //@synthesize correctedSearchResultIndex=_correctedSearchResultIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasPreferredSearchDisplayLocation; 
@property (nonatomic,retain) NSString * preferredSearchDisplayLocation;                 //@synthesize preferredSearchDisplayLocation=_preferredSearchDisplayLocation - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPlaceSearchRequest:(id)arg1 ;
-(BOOL)hasPlaceSearchRequest;
-(id)placeSearchRequest;
-(void)setPlaceSearchResponse:(id)arg1 ;
-(BOOL)hasPlaceSearchResponse;
-(id)placeSearchResponse;
-(void)setPreferredSearchDisplayLocation:(id)arg1 ;
-(BOOL)hasOriginalSearchResultIndex;
-(unsigned)originalSearchResultIndex;
-(void)setOriginalSearchResultIndex:(unsigned)arg1 ;
-(BOOL)hasCorrectedSearchResultIndex;
-(unsigned)correctedSearchResultIndex;
-(void)setCorrectedSearchResultIndex:(unsigned)arg1 ;
-(BOOL)hasPreferredSearchDisplayLocation;
-(id)preferredSearchDisplayLocation;
-(void)setHasOriginalSearchResultIndex:(BOOL)arg1 ;
-(void)setHasCorrectedSearchResultIndex:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

