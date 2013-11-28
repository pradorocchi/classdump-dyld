/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class GEOLatLng;

@interface GEOLocation : PBCodable <NSCopying> {

	double _course;
	double _heading;
	double _horizontalAccuracy;
	double _speed;
	double _timestamp;
	double _verticalAccuracy;
	int _altitude;
	GEOLatLng* _latLng;
	int _type;
	SCD_Struct_GE50 _has;

}

@property (nonatomic,retain) GEOLatLng * latLng;                      //@synthesize latLng=_latLng - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasAltitude; 
@property (assign,nonatomic) int altitude;                            //@synthesize altitude=_altitude - In the implementation block
@property (assign,nonatomic) BOOL hasHorizontalAccuracy; 
@property (assign,nonatomic) double horizontalAccuracy;               //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasVerticalAccuracy; 
@property (assign,nonatomic) double verticalAccuracy;                 //@synthesize verticalAccuracy=_verticalAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasSpeed; 
@property (assign,nonatomic) double speed;                            //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic) BOOL hasHeading; 
@property (assign,nonatomic) double heading;                          //@synthesize heading=_heading - In the implementation block
@property (assign,nonatomic) BOOL hasCourse; 
@property (assign,nonatomic) double course;                           //@synthesize course=_course - In the implementation block
+(id)locationWithCLLocation:(id)arg1 course:(double)arg2 ;
-(id)addr;
-(id)initWithCLLocation:(id)arg1 ;
-(id)initWithCLLocation:(id)arg1 course:(double)arg2 ;
-(id)_initWithCLClientLocation:(const SCD_Struct_GE51*)arg1 ;
-(id)initWithLocation:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setSpeed:(double)arg1 ;
-(double)timestamp;
-(void)setType:(int)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(double)speed;
-(id)dictionaryRepresentation;
-(id)initWithGEOCoordinate:(SCD_Struct_GE12)arg1 ;
-(id)latLng;
-(BOOL)hasAltitude;
-(void)setAltitude:(int)arg1 ;
-(BOOL)hasHorizontalAccuracy;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(BOOL)hasVerticalAccuracy;
-(void)setVerticalAccuracy:(double)arg1 ;
-(BOOL)hasHeading;
-(void)setHeading:(double)arg1 ;
-(BOOL)hasCourse;
-(void)setCourse:(double)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(void)setHasAltitude:(BOOL)arg1 ;
-(void)setHasHorizontalAccuracy:(BOOL)arg1 ;
-(void)setHasVerticalAccuracy:(BOOL)arg1 ;
-(void)setHasSpeed:(BOOL)arg1 ;
-(void)setHasHeading:(BOOL)arg1 ;
-(void)setHasCourse:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasType;
-(BOOL)hasSpeed;
-(double)horizontalAccuracy;
-(double)verticalAccuracy;
-(int)altitude;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(void)setLatLng:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)course;
-(double)heading;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
@end
