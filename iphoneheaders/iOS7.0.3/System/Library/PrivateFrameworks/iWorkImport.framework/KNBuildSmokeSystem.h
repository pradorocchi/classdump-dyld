/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDGLParticleSystem.h>

@interface KNBuildSmokeSystem : TSDGLParticleSystem {

	float _speedMax;
	float _rotationMax;
	float _scaleMax;
	float _lifeSpanDelay;

}

@property (assign,nonatomic) float speedMax;                   //@synthesize speedMax=_speedMax - In the implementation block
@property (assign,nonatomic) float rotationMax;                //@synthesize rotationMax=_rotationMax - In the implementation block
@property (assign,nonatomic) float scaleMax;                   //@synthesize scaleMax=_scaleMax - In the implementation block
@property (assign,nonatomic) float lifeSpanDelay;              //@synthesize lifeSpanDelay=_lifeSpanDelay - In the implementation block
+(BOOL)willOverrideStartingPoints;
-(float)speedMax;
-(float)rotationMax;
-(CGPoint)startingPointAtIndexPoint:(CGPoint)arg1 ;
-(SCD_Struct_TS480)speedAtIndexPoint:(CGPoint)arg1 ;
-(SCD_Struct_TS480)rotationAtIndexPoint:(CGPoint)arg1 ;
-(float)scaleAtIndexPoint:(CGPoint)arg1 ;
-(CGSize)lifeSpanAtIndexPoint:(CGPoint)arg1 ;
-(void)setRotationMax:(float)arg1 ;
-(void)setScaleMax:(float)arg1 ;
-(void)setLifeSpanDelay:(float)arg1 ;
-(void)setSpeedMax:(float)arg1 ;
-(float)lifeSpanDelay;
-(float)scaleMax;
@end

