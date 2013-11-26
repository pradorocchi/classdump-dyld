/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDDecorator.h>
#import <iWorkImport/TSDLayoutManipulatingTracker.h>
#import <iWorkImport/TSDRepTracker.h>

@protocol TSDRepTrackerDelegate;
@class TSDRep, CAShapeLayer, ;

@interface TSDRepRotateTracker : NSObject <TSDDecorator, TSDLayoutManipulatingTracker, TSDRepTracker> {

	TSDRep* mRep;
	BOOL mDidBeginRotation;
	BOOL mMovedMinimumDistance;
	CGPoint mCenterForRotation;
	float mSnapThreshold;
	float mRotateDeltaInRadians;
	float mCurrentLogicalAngleInDegrees;
	float mCurrentPhysicalAngleInDegrees;
	float mPreviousSnap;
	float mOriginalAngleInDegrees;
	float mOriginalAngleForRotationInDegrees;
	CAShapeLayer* mGuideLayer;
	BOOL mHaveSproingedHUD;
	BOOL mShouldShowHUD;
	<TSDRepTrackerDelegate>* mDelegate;
	TSDRep* mOriginalNonFloatingRep;
	BOOL mIsInspectorDrivenTracking;

}

@property (nonatomic,retain) TSDRep * rep; 
@property (assign,nonatomic) BOOL shouldShowHUD; 
@property (assign,nonatomic) CGPoint centerForRotation; 
@property (nonatomic,readonly) float currentLogicalAngleInDegrees; 
@property (nonatomic,readonly) float originalAngleInDegrees; 
@property (assign,nonatomic) float snapThreshold; 
@property (assign,nonatomic) BOOL isInspectorDrivenTracking; 
-(id)initWithRep:(id)arg1 ;
-(id)rep;
-(void)changeDynamicLayoutsForReps:(id)arg1 ;
-(BOOL)shouldOpenCommandGroupToCommitChangesForReps:(id)arg1 ;
-(CGPoint)centerForRotation;
-(void)p_hideHUD;
-(BOOL)isInspectorDrivenTracking;
-(void)setIsInspectorDrivenTracking:(BOOL)arg1 ;
-(void)commitChangesForReps:(id)arg1 ;
-(BOOL)supportsAlignmentGuides;
-(BOOL)operationShouldBeDynamic;
-(id)decoratorOverlayLayers;
-(CGAffineTransform)rotateTransform;
-(void)setRep:(id)arg1 ;
-(void)p_makeSiblingRepsPerformBlock:(/*^block*/ id)arg1 ;
-(void)p_hideGuideLayer;
-(void)p_updateHUDWithAngle:(float)arg1 ;
-(void)p_sproingHUD;
-(void)p_updateGuideLayerWithAngle:(float)arg1 didSnap:(BOOL)arg2 ;
-(void)p_begin;
-(BOOL)p_shouldApplyRotateToSiblingsOfRep;
-(BOOL)shouldShowHUD;
-(void)addRotateDelta:(float)arg1 ;
-(void)setShouldShowHUD:(BOOL)arg1 ;
-(void)setCenterForRotation:(CGPoint)arg1 ;
-(float)currentLogicalAngleInDegrees;
-(float)originalAngleInDegrees;
-(float)snapThreshold;
-(void)setSnapThreshold:(float)arg1 ;
-(void)dealloc;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
@end

