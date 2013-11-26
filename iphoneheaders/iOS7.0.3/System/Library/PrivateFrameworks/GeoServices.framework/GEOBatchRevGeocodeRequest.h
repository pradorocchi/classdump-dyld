/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableArray;

@interface GEOBatchRevGeocodeRequest : PBRequest <NSCopying> {

	SCD_Struct_GE54* _additionalPlaceTypes;
	NSMutableArray* _locations;
	NSMutableArray* _serviceTags;
	BOOL _splitIntoClusters;
	SCD_Struct_GE52 _has;

}

@property (assign,nonatomic) BOOL hasSplitIntoClusters; 
@property (assign,nonatomic) BOOL splitIntoClusters;                            //@synthesize splitIntoClusters=_splitIntoClusters - In the implementation block
@property (nonatomic,retain) NSMutableArray * locations;                        //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) unsigned additionalPlaceTypesCount; 
@property (nonatomic,readonly) int* additionalPlaceTypes; 
@property (nonatomic,retain) NSMutableArray * serviceTags;                      //@synthesize serviceTags=_serviceTags - In the implementation block
-(void)dealloc;
-(void)setLocations:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setServiceTags:(id)arg1 ;
-(void)addServiceTag:(id)arg1 ;
-(unsigned)serviceTagsCount;
-(void)clearServiceTags;
-(id)serviceTagAtIndex:(unsigned)arg1 ;
-(id)serviceTags;
-(unsigned)additionalPlaceTypesCount;
-(void)clearAdditionalPlaceTypes;
-(int)additionalPlaceTypeAtIndex:(unsigned)arg1 ;
-(void)addAdditionalPlaceType:(int)arg1 ;
-(int*)additionalPlaceTypes;
-(id)locationAtIndex:(unsigned)arg1 ;
-(void)addLocation:(id)arg1 ;
-(void)clearLocations;
-(BOOL)hasSplitIntoClusters;
-(BOOL)splitIntoClusters;
-(void)setHasSplitIntoClusters:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setAdditionalPlaceTypes:(int*)arg1 count:(unsigned)arg2 ;
-(void)setSplitIntoClusters:(BOOL)arg1 ;
-(unsigned)locationsCount;
-(id)locations;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

