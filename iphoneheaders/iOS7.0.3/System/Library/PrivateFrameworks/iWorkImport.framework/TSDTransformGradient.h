/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDGradient.h>
#import <iWorkImport/TSDMixing.h>

@interface TSDTransformGradient : TSDGradient <TSDMixing> {

	CGPoint mStart;
	CGPoint mEnd;
	CGSize mBaseNaturalSize;
	CGAffineTransform mTransformBeforeUpgrade;

}

@property (assign,nonatomic) CGPoint startPoint; 
@property (assign,nonatomic) CGPoint endPoint; 
@property (assign,nonatomic) CGSize baseNaturalSize; 
-(void)saveToArchive:(FillArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const FillArchive*)arg1 unarchiver:(id)arg2 ;
-(void)paintPath:(CGPathRef)arg1 naturalBounds:(CGRect)arg2 inContext:(CGContextRef)arg3 isPDF:(BOOL)arg4 ;
-(int)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2 ;
-(id)initWithGradientStops:(id)arg1 type:(unsigned)arg2 ;
-(id)initWithStartColor:(id)arg1 endColor:(id)arg2 type:(unsigned)arg3 ;
-(BOOL)isAdvancedGradientIgnoringFlag;
-(BOOL)isEqualIgnoringTransform:(id)arg1 ;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 atAngle:(float)arg3 ;
-(CGPoint)startPointForPath:(id)arg1 andBounds:(CGRect)arg2 ;
-(CGPoint)endPointForPath:(id)arg1 andBounds:(CGRect)arg2 ;
-(float)gradientAngleInDegrees;
-(void)p_setDefaultValues;
-(CGSize)baseNaturalSizeForBounds:(CGRect)arg1 ;
-(CGSize)baseNaturalSize;
-(void)setBaseNaturalSize:(CGSize)arg1 ;
-(CGAffineTransform)transformForSize:(CGSize)arg1 ;
-(void)p_drawQuartzShadingInContext:(CGContextRef)arg1 withGradientNaturalSize:(CGSize)arg2 baseNaturalSize:(CGSize)arg3 start:(CGPoint)arg4 end:(CGPoint)arg5 ;
-(CGPoint)normalizedPointForSize:(CGSize)arg1 endPoint:(BOOL)arg2 ;
-(id)initWithGradient:(id)arg1 inPath:(id)arg2 andBounds:(CGRect)arg3 ;
-(CGPoint)p_scalePoint:(CGPoint)arg1 toShapeWithNaturalSize:(CGSize)arg2 ;
-(CGPoint)p_scalePoint:(CGPoint)arg1 fromShapeWithNaturalSize:(CGSize)arg2 ;
-(CGPoint)endPoint;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(CGPoint)startPoint;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
@end

