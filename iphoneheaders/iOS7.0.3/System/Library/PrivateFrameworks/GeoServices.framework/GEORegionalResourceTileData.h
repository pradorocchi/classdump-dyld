/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableArray;

@interface GEORegionalResourceTileData : PBCodable <NSCopying> {

	NSMutableArray* _attributions;
	NSMutableArray* _icons;

}

@property (nonatomic,retain) NSMutableArray * icons;                     //@synthesize icons=_icons - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributions;              //@synthesize attributions=_attributions - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)dictionaryRepresentation;
-(void)setIcons:(id)arg1 ;
-(id)icons;
-(void)addAttribution:(id)arg1 ;
-(void)clearAttributions;
-(id)attributionAtIndex:(unsigned)arg1 ;
-(void)addIcon:(id)arg1 ;
-(id)iconAtIndex:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)attributions;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)iconsCount;
-(void)clearIcons;
-(unsigned)attributionsCount;
-(void)setAttributions:(id)arg1 ;
@end

