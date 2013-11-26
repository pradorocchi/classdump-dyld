/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface WBSFluidProgressState : NSObject {

	int _fluidProgressType;
	NSString* _loadURL;
	float _webKitProgressValue;
	float _linearFunctionM;
	float _linearFunctionB;
	double _startTimeForFluidProgress;
	double _lastTimeProgressValueWasUpdated;
	int _fluidProgressAnimationPhase;
	float _previousDestinationPosition;
	float _animationDuration;
	float _minProgressPosition;
	BOOL _hasCompletedLoad;
	BOOL _hasCanceledLoad;
	BOOL _hasCommittedLoad;
	BOOL _shouldAnimateUsingInitialPosition;

}

@property (assign) int fluidProgressType;                               //@synthesize fluidProgressType=_fluidProgressType - In the implementation block
@property (retain) NSString * loadURL;                                  //@synthesize loadURL=_loadURL - In the implementation block
@property (assign) float minProgressPosition; 
@property (assign) int fluidProgressAnimationPhase; 
@property (assign) BOOL hasCompletedLoad;                               //@synthesize hasCompletedLoad=_hasCompletedLoad - In the implementation block
@property (assign) BOOL hasCanceledLoad;                                //@synthesize hasCanceledLoad=_hasCanceledLoad - In the implementation block
@property (assign) BOOL hasCommittedLoad;                               //@synthesize hasCommittedLoad=_hasCommittedLoad - In the implementation block
@property (assign) BOOL shouldAnimateUsingInitialPosition;              //@synthesize shouldAnimateUsingInitialPosition=_shouldAnimateUsingInitialPosition - In the implementation block
+(double)_estimatedLoadTimeRemainingFromProgressValue:(float)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithType:(int)arg1 ;
-(double)_animationDuration;
-(void)setMinProgressPosition:(float)arg1 ;
-(void)_updateLinearFunction;
-(double)secondsElapsedSinceLoadBegan;
-(double)_fractionCompleteAtElapsedTime:(float)arg1 ;
-(float)_adjustProgressPosition:(float)arg1 ;
-(BOOL)isFluidProgressStalled;
-(float)fluidProgressValue;
-(float)_nextProgressPosition:(double)arg1 ;
-(int)fluidProgressAnimationPhase;
-(void)setFluidProgressAnimationPhase:(int)arg1 ;
-(void)setWebKitProgressValue:(float)arg1 ;
-(float)minProgressPosition;
-(id)nextFluidProgressAnimation;
-(int)fluidProgressType;
-(void)setFluidProgressType:(int)arg1 ;
-(id)loadURL;
-(void)setLoadURL:(id)arg1 ;
-(BOOL)hasCompletedLoad;
-(void)setHasCompletedLoad:(BOOL)arg1 ;
-(BOOL)hasCanceledLoad;
-(void)setHasCanceledLoad:(BOOL)arg1 ;
-(BOOL)hasCommittedLoad;
-(void)setHasCommittedLoad:(BOOL)arg1 ;
-(BOOL)shouldAnimateUsingInitialPosition;
-(void)setShouldAnimateUsingInitialPosition:(BOOL)arg1 ;
-(double)_estimatedLoadTimeRemaining;
@end

