/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:08:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface STWorkoutController : NSObject {

	int _workoutState;
	int _workoutType;
	int _calibrationType;
	int _workoutPreset;
	float _customWorkoutDuration;
	float _customWorkoutDistance;
	int _customWorkoutCalories;
	double _elapsedWorkoutTime;
	int _distanceUnits;
	BOOL _skipNextEmpedSearch;

}
+(id)shortDescriptionForWorkoutType:(int)arg1 preset:(int)arg2 ;
+(id)stringQuantificationForWorkoutType:(int)arg1 preset:(int)arg2 ;
@end

