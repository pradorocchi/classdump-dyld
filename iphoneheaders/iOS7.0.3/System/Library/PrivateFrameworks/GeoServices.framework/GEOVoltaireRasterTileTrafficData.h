/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMutableArray, NSArray;

@interface GEOVoltaireRasterTileTrafficData : NSObject {

	SCD_Struct_GE71* _vertices;
	NSMutableArray* _trafficSegments;
	NSArray* _trafficIncidents;
	double _expirationTime;

}

@property (assign,nonatomic) SCD_Struct_GE71* vertices;                     //@synthesize vertices=_vertices - In the implementation block
@property (nonatomic,retain) NSMutableArray * trafficSegments;              //@synthesize trafficSegments=_trafficSegments - In the implementation block
@property (nonatomic,readonly) NSArray * trafficIncidents;                  //@synthesize trafficIncidents=_trafficIncidents - In the implementation block
@property (assign,nonatomic) double expirationTime;                         //@synthesize expirationTime=_expirationTime - In the implementation block
+(double)expirationTimeInterval;
+(id)createWithData:(id)arg1 tileKey:(const GEOTileKey*)arg2 ;
-(void)dealloc;
-(void)setVertices:(SCD_Struct_GE71*)arg1 ;
-(void)setTrafficSegments:(id)arg1 ;
-(id)initWithData:(id)arg1 tileKey:(const GEOTileKey*)arg2 ;
-(SCD_Struct_GE71*)vertices;
-(id)trafficSegments;
-(id)trafficIncidents;
-(void)setExpirationTime:(double)arg1 ;
-(double)expirationTime;
@end

