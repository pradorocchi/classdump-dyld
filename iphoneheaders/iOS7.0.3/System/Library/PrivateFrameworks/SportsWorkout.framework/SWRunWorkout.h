/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:08:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SportsWorkout/SWWorkout.h>
#import <SportsWorkout/SWRunSensorPacketObserver.h>

@class SWRunSensor, SWPaceModel, NSData;

@interface SWRunWorkout : SWWorkout <SWRunSensorPacketObserver> {

	SWRunSensor* _sensor;
	SWPaceModel* _paceModel;
	BOOL _hasStarted;
	float _weightInLbs;
	BOOL _isCalibration;

}

@property (nonatomic,readonly) SWRunSensor * sensor;                                        //@synthesize sensor=_sensor - In the implementation block
@property (assign,nonatomic) float weightInLbs;                                             //@synthesize weightInLbs=_weightInLbs - In the implementation block
@property (nonatomic,@dynamic,readonly) BOOL isWalk; 
@property (assign,nonatomic) BOOL isCalibration;                                            //@synthesize isCalibration=_isCalibration - In the implementation block
@property (nonatomic,@dynamic,copy) NSData * paceModelParameters; 
@property (nonatomic,@dynamic,readonly) BOOL canBeUsedForWalkCalibration; 
@property (nonatomic,@dynamic,readonly) BOOL canBeUsedForRunCalibration; 
@property (nonatomic,@dynamic,readonly) float minimumCalibrationDistanceMiles; 
@property (nonatomic,@dynamic,readonly) float maximumCalibrationDistanceMiles; 
+(id)workoutWithSensor:(id)arg1 ;
-(void)sensor:(id)arg1 didReceivePacketPayload:(const char*)arg2 timestamp:(unsigned long)arg3 ;
-(BOOL)isWalk;
-(BOOL)canBeUsedForWalkCalibration;
-(BOOL)canBeUsedForRunCalibration;
-(void)resetCalibration;
-(BOOL)calibrateWithDistanceMiles:(float)arg1 forWalk:(BOOL)arg2 ;
-(BOOL)recalibrateWithAdjustedDistanceMiles:(float)arg1 ;
-(id)initWithSensor:(id)arg1 ;
-(id)workoutData;
-(void)activateWorkout;
-(void)pauseWorkout;
-(void)setPaceModelParameters:(id)arg1 ;
-(id)paceModelParameters;
-(float)minimumCalibrationDistanceMiles;
-(float)maximumCalibrationDistanceMiles;
-(id)sensor;
-(void)setWeightInLbs:(float)arg1 ;
-(BOOL)isCalibration;
-(void)setIsCalibration:(BOOL)arg1 ;
-(float)weightInLbs;
-(void)dealloc;
@end

