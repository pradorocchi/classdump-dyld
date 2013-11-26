/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UIPinchGestureRecognizer.h>

@class PUValueFilter;

@interface PUPhotoPinchGestureRecognizer : UIPinchGestureRecognizer {

	CGPoint _initialTouchLocations[2];
	CGPoint _latestTouchLocations[2];
	BOOL _initialTouchLocationsSet;
	BOOL __touchesNeedUpdate;
	float _rotationHysteresisDegrees;
	PUValueFilter* __rotationFilter;
	CGRect _initialPinchRect;

}

@property (assign,nonatomic) float rotationHysteresisDegrees;                                         //@synthesize rotationHysteresisDegrees=_rotationHysteresisDegrees - In the implementation block
@property (assign,nonatomic) CGRect initialPinchRect;                                                 //@synthesize initialPinchRect=_initialPinchRect - In the implementation block
@property (assign,setter=_setTouchesNeedUpdate:,nonatomic) BOOL _touchesNeedUpdate;                   //@synthesize _touchesNeedUpdate=__touchesNeedUpdate - In the implementation block
@property (setter=_setRotationFilter:,nonatomic,retain) PUValueFilter * _rotationFilter;              //@synthesize _rotationFilter=__rotationFilter - In the implementation block
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(CGPoint)adjustedInitialCenterInView:(id)arg1 ;
-(CGPoint)adjustedTranslationInView:(id)arg1 ;
-(float)adjustedScaleInView:(id)arg1 ;
-(CGPoint)adjustedTranslationVelocityInView:(id)arg1 ;
-(float)adjustedScaleVelocityInView:(id)arg1 ;
-(void)setRotationHysteresisDegrees:(float)arg1 ;
-(void)_setRotationFilter:(id)arg1 ;
-(void)_setTouchesNeedUpdate:(BOOL)arg1 ;
-(void)_updateIfNeeded;
-(id)_rotationFilter;
-(float)rotationHysteresisDegrees;
-(BOOL)_touchesNeedUpdate;
-(CGRect)initialPinchRect;
-(void)setInitialPinchRect:(CGRect)arg1 ;
-(float)adjustedRotationInView:(id)arg1 ;
-(float)adjustedRotationVelocityInView:(id)arg1 ;
-(void).cxx_destruct;
@end

