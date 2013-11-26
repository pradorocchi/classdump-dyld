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

@class NSString, GEOLatLng, NSData;

@interface GEORPDirectionsEvent : PBCodable <NSCopying> {

	long long _errorCode;
	NSString* _errorDomain;
	GEOLatLng* _occurrenceLatLng;
	unsigned _occurrenceResponseIndex;
	NSData* _occurrenceRouteID;
	unsigned _occurrenceStepIndex;
	unsigned _switchedToResponseIndex;
	NSData* _switchedToRouteID;
	NSString* _synthesizedStepInstructions;
	int _synthesizedStepManeuverType;
	int _type;
	SCD_Struct_GE53 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasOccurrenceResponseIndex; 
@property (assign,nonatomic) unsigned occurrenceResponseIndex;                    //@synthesize occurrenceResponseIndex=_occurrenceResponseIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasOccurrenceRouteID; 
@property (nonatomic,retain) NSData * occurrenceRouteID;                          //@synthesize occurrenceRouteID=_occurrenceRouteID - In the implementation block
@property (assign,nonatomic) BOOL hasOccurrenceStepIndex; 
@property (assign,nonatomic) unsigned occurrenceStepIndex;                        //@synthesize occurrenceStepIndex=_occurrenceStepIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasOccurrenceLatLng; 
@property (nonatomic,retain) GEOLatLng * occurrenceLatLng;                        //@synthesize occurrenceLatLng=_occurrenceLatLng - In the implementation block
@property (assign,nonatomic) BOOL hasSwitchedToResponseIndex; 
@property (assign,nonatomic) unsigned switchedToResponseIndex;                    //@synthesize switchedToResponseIndex=_switchedToResponseIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasSwitchedToRouteID; 
@property (nonatomic,retain) NSData * switchedToRouteID;                          //@synthesize switchedToRouteID=_switchedToRouteID - In the implementation block
@property (assign,nonatomic) BOOL hasSynthesizedStepManeuverType; 
@property (assign,nonatomic) int synthesizedStepManeuverType;                     //@synthesize synthesizedStepManeuverType=_synthesizedStepManeuverType - In the implementation block
@property (nonatomic,readonly) BOOL hasSynthesizedStepInstructions; 
@property (nonatomic,retain) NSString * synthesizedStepInstructions;              //@synthesize synthesizedStepInstructions=_synthesizedStepInstructions - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                              //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                                 //@synthesize errorCode=_errorCode - In the implementation block
-(id)errorDomain;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasType:(BOOL)arg1 ;
-(void)setOccurrenceRouteID:(id)arg1 ;
-(void)setOccurrenceLatLng:(id)arg1 ;
-(void)setSwitchedToRouteID:(id)arg1 ;
-(void)setSynthesizedStepInstructions:(id)arg1 ;
-(void)setErrorDomain:(id)arg1 ;
-(BOOL)hasOccurrenceResponseIndex;
-(unsigned)occurrenceResponseIndex;
-(void)setOccurrenceResponseIndex:(unsigned)arg1 ;
-(BOOL)hasOccurrenceRouteID;
-(id)occurrenceRouteID;
-(BOOL)hasOccurrenceStepIndex;
-(unsigned)occurrenceStepIndex;
-(void)setOccurrenceStepIndex:(unsigned)arg1 ;
-(BOOL)hasOccurrenceLatLng;
-(id)occurrenceLatLng;
-(BOOL)hasSwitchedToResponseIndex;
-(unsigned)switchedToResponseIndex;
-(void)setSwitchedToResponseIndex:(unsigned)arg1 ;
-(BOOL)hasSwitchedToRouteID;
-(id)switchedToRouteID;
-(BOOL)hasSynthesizedStepManeuverType;
-(int)synthesizedStepManeuverType;
-(void)setSynthesizedStepManeuverType:(int)arg1 ;
-(BOOL)hasSynthesizedStepInstructions;
-(id)synthesizedStepInstructions;
-(BOOL)hasErrorDomain;
-(void)setHasOccurrenceResponseIndex:(BOOL)arg1 ;
-(void)setHasOccurrenceStepIndex:(BOOL)arg1 ;
-(void)setHasSwitchedToResponseIndex:(BOOL)arg1 ;
-(void)setHasSynthesizedStepManeuverType:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasType;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasErrorCode;
-(long long)errorCode;
-(void)setErrorCode:(long long)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
@end

