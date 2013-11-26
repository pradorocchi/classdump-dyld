/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/_UIBasicAnimationFactory.h>

@class CAMediaTimingFunction;

@interface SBFAnimationFactory : NSObject <_UIBasicAnimationFactory> {

	CAMediaTimingFunction* _timingFunction;
	double _duration;
	double _delay;
	double _frameInterval;

}

@property (assign,nonatomic) double duration;                                     //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double delay;                                        //@synthesize delay=_delay - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (assign,nonatomic) double frameInterval;                                //@synthesize frameInterval=_frameInterval - In the implementation block
+(void)animateWithSettings:(id)arg1 delay:(double)arg2 options:(unsigned)arg3 animations:(/*^block*/ id)arg4 completion:(/*^block*/ id)arg5 ;
+(id)factoryWithSettings:(id)arg1 ;
+(id)factoryWithAnimationAttributes:(id)arg1 ;
+(void)animateWithSettings:(id)arg1 animations:(/*^block*/ id)arg2 completion:(/*^block*/ id)arg3 ;
+(void)animateWithSettings:(id)arg1 options:(unsigned)arg2 animations:(/*^block*/ id)arg3 completion:(/*^block*/ id)arg4 ;
+(void)animateWithSettings:(id)arg1 delay:(double)arg2 animations:(/*^block*/ id)arg3 completion:(/*^block*/ id)arg4 ;
+(void)animateWithFactory:(id)arg1 animations:(/*^block*/ id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)dealloc;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setDelay:(double)arg1 ;
-(void)setFrameInterval:(double)arg1 ;
-(void)setTimingFunction:(id)arg1 ;
-(id)timingFunction;
-(double)frameInterval;
-(double)delay;
-(void)setTimingFunctionFromSettings:(id)arg1 ;
-(void)animateWithDelay:(double)arg1 options:(unsigned)arg2 animations:(/*^block*/ id)arg3 completion:(/*^block*/ id)arg4 ;
-(void)animateWithDelay:(double)arg1 animations:(/*^block*/ id)arg2 completion:(/*^block*/ id)arg3 ;
-(id)_animation;
@end

