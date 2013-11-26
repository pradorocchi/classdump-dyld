/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAPropertyAnimation.h>

@interface CABasicAnimation : CAPropertyAnimation

@property (assign) BOOL roundsToInteger; 
@property (assign) float startAngle; 
@property (assign) float endAngle; 
@property (retain) id fromValue; 
@property (retain) id toValue; 
@property (retain) id byValue; 
-(id)byValue;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(BOOL)roundsToInteger;
-(float)endAngle;
-(double)_timeFunction:(double)arg1 ;
-(void)setEndAngle:(float)arg1 ;
-(id)fromValue;
-(void)setFromValue:(id)arg1 ;
-(void)setToValue:(id)arg1 ;
-(void)setRoundsToInteger:(BOOL)arg1 ;
-(id)toValue;
-(void)setStartAngle:(float)arg1 ;
-(float)startAngle;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(void)setByValue:(id)arg1 ;
-(void)CA_prepareRenderValue;
@end

