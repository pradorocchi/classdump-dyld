/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface MBDurationEstimation : NSObject {

	double _timeBegan;
	double _currentEstimate;
	float _currentProgress;
	double _estimateAtLastUpdate;
	float _progressAtLastUpdate;
	double _estimationHysteresis;
	float _progressHysteresis;

}

@property (assign,nonatomic) double estimationHysteresis;              //@synthesize estimationHysteresis=_estimationHysteresis - In the implementation block
@property (assign,nonatomic) float progressHysteresis;                 //@synthesize progressHysteresis=_progressHysteresis - In the implementation block
-(BOOL)shouldUpdateWithProgress:(float)arg1 ;
-(unsigned)minutesRemaining;
-(double)timeRemainingWithProgress:(float)arg1 ;
-(double)estimationHysteresis;
-(void)setEstimationHysteresis:(double)arg1 ;
-(float)progressHysteresis;
-(void)setProgressHysteresis:(float)arg1 ;
-(id)init;
-(void)reset;
-(double)timeRemaining;
@end

