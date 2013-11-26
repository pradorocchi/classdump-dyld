/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <UIKit/_UISettings.h>

@interface SBFAnimationCurveSettings : _UISettings {

	unsigned _curve;
	CGPoint _controlPoint1;
	CGPoint _controlPoint2;

}

@property (assign,nonatomic) unsigned curve;                     //@synthesize curve=_curve - In the implementation block
@property (assign,nonatomic) CGPoint controlPoint1;              //@synthesize controlPoint1=_controlPoint1 - In the implementation block
@property (assign,nonatomic) CGPoint controlPoint2;              //@synthesize controlPoint2=_controlPoint2 - In the implementation block
+(id)settingsControllerModule;
+(id)_rowsRelativeToKeyPath:(id)arg1 ;
-(void)setCurve:(unsigned)arg1 ;
-(unsigned)curve;
-(void)setDefaultValues;
-(CGPoint)controlPoint1;
-(CGPoint)controlPoint2;
-(void)setControlPoint1:(CGPoint)arg1 ;
-(void)setControlPoint2:(CGPoint)arg1 ;
@end

