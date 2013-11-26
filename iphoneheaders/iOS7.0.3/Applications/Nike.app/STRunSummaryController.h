/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Nike.app/Nike
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>
#import <Nike/STCustomSheetControllerDelegate.h>

@class STRunSummaryView, NSDictionary, STCalibrationDistanceController;

@interface STRunSummaryController : UIViewController <STCustomSheetControllerDelegate> {

	STRunSummaryView* _runSummaryView;
	NSDictionary* _workoutSummary;
	BOOL _didSaveWorkout;
	BOOL _historical;
	STCalibrationDistanceController* _calibrationDistanceController;
	float _minCalibrationDistance;
	float _maxCalibrationDistance;

}

@property (nonatomic,retain) NSDictionary * workoutSummary;                    //@synthesize workoutSummary=_workoutSummary - In the implementation block
@property (assign,getter=isHistorical,nonatomic) BOOL historical;              //@synthesize historical=_historical - In the implementation block
-(void)_done;
-(void)customValueSelectionDidSave;
-(void)customValueSelectionDidCancel;
-(void)setWorkoutSummary:(id)arg1 ;
-(void)setHistorical:(BOOL)arg1 ;
-(void)_saveWorkout:(BOOL)arg1 ;
-(void)_showCalibration;
-(void)_modifyViewAfterSave;
-(float)_distanceIntervalToUseForCalibration;
-(id)_newCalibrationEligibleLabel;
-(id)workoutSummary;
-(BOOL)isHistorical;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillTerminate:(id)arg1 ;
@end

