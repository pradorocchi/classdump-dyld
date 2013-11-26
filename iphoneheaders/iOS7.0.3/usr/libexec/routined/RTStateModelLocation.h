/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/routined
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSSecureCoding.h>

@interface RTStateModelLocation : NSObject <NSSecureCoding> {

	double _Latitude_deg;
	double _Longitude_deg;
	double _uncertainty_m;
	double _timestamp_s;

}

@property (assign,nonatomic) double Latitude_deg;               //@synthesize Latitude_deg=_Latitude_deg - In the implementation block
@property (assign,nonatomic) double Longitude_deg;              //@synthesize Longitude_deg=_Longitude_deg - In the implementation block
@property (assign,nonatomic) double uncertainty_m;              //@synthesize uncertainty_m=_uncertainty_m - In the implementation block
@property (assign,nonatomic) double timestamp_s;                //@synthesize timestamp_s=_timestamp_s - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)Latitude_deg;
-(double)Longitude_deg;
-(double)uncertainty_m;
-(void)setLatitude_deg:(double)arg1 ;
-(void)setLongitude_deg:(double)arg1 ;
-(void)setUncertainty_m:(double)arg1 ;
-(id)initWithLat:(double)arg1 Lon:(double)arg2 Uncertainty:(double)arg3 andTimestamp_s:(double)arg4 ;
-(double)timestamp_s;
-(void)setTimestamp_s:(double)arg1 ;
-(id)initWithLocation:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
@end

