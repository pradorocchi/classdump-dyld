/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface _UIDynamicAnimationActiveValue : NSObject {

	double _value;
	double _minimumActiveValue;
	double _maximumActiveValue;
	int _type;
	double _boundaryPull;
	id _applier;
	unsigned _lowerBoundary : 1;
	unsigned _upperBoundary : 1;

}

@property (assign,nonatomic) double value;                           //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double minimumActiveValue;              //@synthesize minimumActiveValue=_minimumActiveValue - In the implementation block
@property (assign,nonatomic) double maximumActiveValue;              //@synthesize maximumActiveValue=_maximumActiveValue - In the implementation block
@property (assign,nonatomic) int type;                               //@synthesize type=_type - In the implementation block
+(id)activeValue:(double)arg1 ofType:(int)arg2 ;
+(id)lowerBoundary:(double)arg1 ofType:(int)arg2 ;
+(id)upperBoundary:(double)arg1 ofType:(int)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setValue:(double)arg1 ;
-(double)value;
-(void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2 ;
-(void)_setBoundaryPull:(double)arg1 ;
-(BOOL)_isLowerBoundary;
-(BOOL)_isUpperBoundary;
-(/*^block*/ id)_applier;
-(double)minimumActiveValue;
-(double)maximumActiveValue;
-(void)setMinimumActiveValue:(double)arg1 ;
-(void)setMaximumActiveValue:(double)arg1 ;
-(double)_boundaryPull;
@end

