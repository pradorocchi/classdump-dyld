/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDFill.h>
#import <iWorkImport/TSDMixing.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>

@class TSUColor;

@interface TSDColorFill : TSDFill <TSDMixing, NSCopying, NSMutableCopying> {

	TSUColor* mColor;

}

@property (nonatomic,readonly) CGColorRef CGColor; 
@property (nonatomic,readonly) TSUColor * color; 
@property (nonatomic,readonly) float opacity; 
@property (nonatomic,readonly) float hue; 
@property (nonatomic,readonly) float saturation; 
@property (nonatomic,readonly) float brightness; 
@property (nonatomic,readonly) float luminance; 
+(id)instanceWithArchive:(const FillArchive*)arg1 unarchiver:(id)arg2 ;
+(id)colorWithColor:(id)arg1 ;
+(id)keyPathsForValuesAffectingCGColor;
+(id)keyPathsForValuesAffectingOpacity;
+(id)keyPathsForValuesAffectingLuminance;
+(id)keyPathsForValuesAffectingHue;
+(id)keyPathsForValuesAffectingSaturation;
+(id)keyPathsForValuesAffectingBrightness;
+(id)blackColor;
+(id)clearColor;
+(id)colorWithWhite:(float)arg1 alpha:(float)arg2 ;
+(id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
+(id)whiteColor;
+(id)grayColor;
+(id)redColor;
+(id)greenColor;
+(id)blueColor;
+(id)cyanColor;
+(id)magentaColor;
+(id)yellowColor;
+(id)orangeColor;
+(id)purpleColor;
+(id)brownColor;
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)colorWithUIColor:(id)arg1 ;
+(id)randomColor;
-(BOOL)isNearlyWhite;
-(void)saveToArchive:(FillArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const FillArchive*)arg1 unarchiver:(id)arg2 ;
-(SEL)mapThemeAssetSelector;
-(BOOL)isClear;
-(int)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2 ;
-(BOOL)canApplyToCAShapeLayer;
-(void)applyToCAShapeLayer:(id)arg1 withScale:(float)arg2 ;
-(BOOL)drawsInOneStep;
-(void)applyToCALayer:(id)arg1 withScale:(float)arg2 ;
-(BOOL)canApplyToCALayer;
-(float)p_hsbComponentWithIndex:(unsigned long)arg1 ;
-(float)saturation;
-(float)hue;
-(void)dealloc;
-(CGColorRef)CGColor;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)isOpaque;
-(float)opacity;
-(id)initWithWhite:(float)arg1 alpha:(float)arg2 ;
-(id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(id)color;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)initWithColor:(id)arg1 ;
-(float)brightness;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(id)initWithUIColor:(id)arg1 ;
-(int)fillType;
-(id)UIColor;
-(id)grayscaleColor;
-(id)invertedColor;
-(float)luminance;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(id)referenceColor;
@end

