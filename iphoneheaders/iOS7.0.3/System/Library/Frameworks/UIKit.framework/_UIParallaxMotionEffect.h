/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:10 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIMotionEffect.h>

@class UIMotionEffectGroup, UIInterpolatingMotionEffect, _UITiltMotionEffect;

@interface _UIParallaxMotionEffect : UIMotionEffect {

	UIMotionEffectGroup* _group;
	UIOffset _slideMagnitude;
	UIInterpolatingMotionEffect* _horizontalSlideEffect;
	UIInterpolatingMotionEffect* _verticalSlideEffect;
	_UITiltMotionEffect* _tiltEffect;

}

@property (assign,nonatomic) UIOffset slideMagnitude;                                   //@synthesize slideMagnitude=_slideMagnitude - In the implementation block
@property (assign,nonatomic) float horizontalSlideAccelerationBoostFactor; 
@property (assign,nonatomic) float verticalSlideAccelerationBoostFactor; 
@property (assign,nonatomic) float maximumHorizontalTiltAngle; 
@property (assign,nonatomic) float maximumVerticalTiltAngle; 
@property (assign,nonatomic) float rotatingSphereRadius; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(UIOffset)slideMagnitude;
-(void)setSlideMagnitude:(UIOffset)arg1 ;
-(id)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)arg1 ;
-(void)setRotatingSphereRadius:(float)arg1 ;
-(float)maximumHorizontalTiltAngle;
-(void)setMaximumHorizontalTiltAngle:(float)arg1 ;
-(float)maximumVerticalTiltAngle;
-(void)setMaximumVerticalTiltAngle:(float)arg1 ;
-(float)rotatingSphereRadius;
-(float)horizontalSlideAccelerationBoostFactor;
-(float)verticalSlideAccelerationBoostFactor;
-(void)_updateSlideEffectsWithCurrentSlideMagnitude;
-(id)_keyPathsAndRelativeValuesForPose:(id)arg1 ;
-(void)_updateGroupMotionEffect;
-(void)_activateTiltEffectIfNecessary;
-(void)setHorizontalSlideAccelerationBoostFactor:(float)arg1 ;
-(void)setVerticalSlideAccelerationBoostFactor:(float)arg1 ;
@end

