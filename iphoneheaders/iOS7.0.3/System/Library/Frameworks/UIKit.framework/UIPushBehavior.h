/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDynamicBehavior.h>

@class NSMutableDictionary, NSArray;

@interface UIPushBehavior : UIDynamicBehavior {

	float _angle;
	float _magnitude;
	BOOL _active;
	int _mode;
	CGVector _forceVector;
	double _timeInterval;
	NSMutableDictionary* _targetPoints;
	int _i;

}

@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) int mode; 
@property (assign,nonatomic) BOOL active; 
@property (assign,nonatomic) float angle; 
@property (assign,nonatomic) float magnitude; 
@property (assign,nonatomic) CGVector pushDirection; 
-(void)dealloc;
-(id)init;
-(id)description;
-(void)_commonInit;
-(id)items;
-(BOOL)active;
-(id)initWithItems:(id)arg1 ;
-(int)mode;
-(void)_associate;
-(void)_dissociate;
-(void)setActive:(BOOL)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)removeItem:(id)arg1 ;
-(void)setAngle:(float)arg1 ;
-(float)angle;
-(void)_step;
-(void)setXComponent:(float)arg1 yComponent:(float)arg2 ;
-(float)magnitude;
-(void)setAngle:(float)arg1 magnitude:(float)arg2 ;
-(float)yComponent;
-(float)xComponent;
-(void)setMagnitude:(float)arg1 ;
-(void)setXComponent:(float)arg1 ;
-(void)setYComponent:(float)arg1 ;
-(CGPoint)targetPointForItem:(id)arg1 ;
-(void)setTargetPoint:(CGPoint)arg1 forItem:(id)arg2 ;
-(id)initWithItems:(id)arg1 mode:(int)arg2 ;
-(UIOffset)targetOffsetFromCenterForItem:(id)arg1 ;
-(void)setTargetOffsetFromCenter:(UIOffset)arg1 forItem:(id)arg2 ;
-(CGVector)pushDirection;
-(void)setPushDirection:(CGVector)arg1 ;
@end

