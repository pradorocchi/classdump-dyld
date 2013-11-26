/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSArray;

@interface TSCHChartAxisAnalysis : NSObject {

	long long _retainCount;
	NSArray* _majorGridLocations;
	NSArray* _minorGridLocations;
	NSArray* _totals;
	double _min;
	double _max;
	double _modelMin;
	double _modelMax;

}

@property (assign,nonatomic) double min;                              //@synthesize min=_min - In the implementation block
@property (assign,nonatomic) double max;                              //@synthesize max=_max - In the implementation block
@property (assign,nonatomic) double modelMin;                         //@synthesize modelMin=_modelMin - In the implementation block
@property (assign,nonatomic) double modelMax;                         //@synthesize modelMax=_modelMax - In the implementation block
@property (nonatomic,copy) NSArray * majorGridLocations;              //@synthesize majorGridLocations=_majorGridLocations - In the implementation block
@property (nonatomic,copy) NSArray * minorGridLocations;              //@synthesize minorGridLocations=_minorGridLocations - In the implementation block
@property (nonatomic,copy) NSArray * totals;                          //@synthesize totals=_totals - In the implementation block
+(id)allocWithZone:(NSZoneRef)arg1 ;
-(id)majorGridLocations;
-(id)minorGridLocations;
-(void)setModelMin:(double)arg1 ;
-(void)setModelMax:(double)arg1 ;
-(double)modelMin;
-(double)modelMax;
-(void)setMajorGridLocations:(id)arg1 ;
-(void)setMinorGridLocations:(id)arg1 ;
-(id)totals;
-(void)setTotals:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(unsigned)retainCount;
-(double)max;
-(void)setMax:(double)arg1 ;
-(double)min;
-(void)setMin:(double)arg1 ;
@end

