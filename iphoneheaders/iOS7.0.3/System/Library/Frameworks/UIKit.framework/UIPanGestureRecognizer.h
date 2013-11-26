/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:06 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class NSMutableArray, UIPanGestureVelocitySample;

@interface UIPanGestureRecognizer : UIGestureRecognizer {

	CGPoint _firstScreenLocation;
	CGPoint _lastScreenLocation;
	double _lastTouchTime;
	id _velocitySample;
	id _previousVelocitySample;
	NSMutableArray* _touches;
	unsigned _lastTouchCount;
	unsigned _minimumNumberOfTouches;
	unsigned _maximumNumberOfTouches;
	float _hysteresis;
	CGPoint _lastUnadjustedScreenLocation;
	unsigned _failsPastMaxTouches : 1;
	unsigned _canPanHorizontally : 1;
	unsigned _canPanVertically : 1;
	unsigned _ignoresStationaryTouches : 1;
	NSMutableArray* _movingTouches;

}

@property (assign,nonatomic) unsigned minimumNumberOfTouches;                                                          //@synthesize minimumNumberOfTouches=_minimumNumberOfTouches - In the implementation block
@property (assign,nonatomic) unsigned maximumNumberOfTouches;                                                          //@synthesize maximumNumberOfTouches=_maximumNumberOfTouches - In the implementation block
@property (getter=_velocitySample,readonly) UIPanGestureVelocitySample * _velocitySample;                              //@synthesize velocitySample=_velocitySample - In the implementation block
@property (getter=_previousVelocitySample,readonly) UIPanGestureVelocitySample * _previousVelocitySample;              //@synthesize previousVelocitySample=_previousVelocitySample - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMaximumNumberOfTouches:(unsigned)arg1 ;
-(CGPoint)translationInView:(id)arg1 ;
-(CGPoint)velocityInView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(float)_hysteresis;
-(void)_setHysteresis:(float)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_setIgnoresStationaryTouches:(BOOL)arg1 ;
-(void)setFailsPastMaxTouches:(BOOL)arg1 ;
-(void)setTranslation:(CGPoint)arg1 inView:(id)arg2 ;
-(unsigned)numberOfTouches;
-(CGPoint)locationOfTouch:(unsigned)arg1 inView:(id)arg2 ;
-(unsigned)minimumNumberOfTouches;
-(void)setMinimumNumberOfTouches:(unsigned)arg1 ;
-(void)_resetGestureRecognizer;
-(void)_setCanPanVertically:(BOOL)arg1 ;
-(void)_willBeginAfterSatisfyingFailureRequirements;
-(id)_velocitySample;
-(id)_previousVelocitySample;
-(void)_resetVelocitySamples;
-(CADoublePoint)_convertPoint:(CGPoint)arg1 fromScreenCoordinatesToView:(id)arg2 ;
-(CADoublePoint)_convertPoint:(CGPoint)arg1 toScreenCoordinatesFromView:(id)arg2 ;
-(CADoublePoint)_convertVelocitySample:(id)arg1 fromScreenCoordinatesToView:(id)arg2 ;
-(UIOffset)_offsetInViewFromScreenLocation:(CGPoint)arg1 toScreenLocation:(CGPoint)arg2 ;
-(CGPoint)_shiftPanLocationToNewScreenLocation:(CGPoint)arg1 lockingToAxis:(int)arg2 ;
-(CGPoint)_adjustScreenLocation:(CGPoint)arg1 ;
-(BOOL)_willScrollX;
-(BOOL)_willScrollY;
-(void)_touchesListChangedFrom:(id)arg1 to:(id)arg2 ;
-(BOOL)_updateMovingTouchesArraySavingOldArray:(id*)arg1 ;
-(void)_centroidMovedTo:(CGPoint)arg1 atTime:(double)arg2 ;
-(void)_processTouchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldTryToBeginWithEvent:(id)arg1 ;
-(void)_removeHysteresisFromTranslation;
-(void)_handleEndedTouches:(id)arg1 withFinalStateAdjustments:(/*^block*/ id)arg2 ;
-(BOOL)failsPastMaxTouches;
-(int)_lastTouchCount;
-(BOOL)_ignoresStationaryTouches;
-(BOOL)_canPanHorizontally;
-(BOOL)_canPanVertically;
-(void)_setCanPanHorizontally:(BOOL)arg1 ;
-(unsigned)maximumNumberOfTouches;
@end

