/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:42 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreImage/CIFilter.h>

@class CIVector, CIColor, NSNumber;

@interface CIStarShineGenerator : CIFilter {

	CIVector* inputCenter;
	CIColor* inputColor;
	NSNumber* inputRadius;
	NSNumber* inputCrossScale;
	NSNumber* inputCrossAngle;
	NSNumber* inputCrossOpacity;
	NSNumber* inputCrossWidth;
	NSNumber* inputEpsilon;

}

@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) CIColor * inputColor; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputCrossScale; 
@property (nonatomic,retain) NSNumber * inputCrossAngle; 
@property (nonatomic,retain) NSNumber * inputCrossOpacity; 
@property (nonatomic,retain) NSNumber * inputCrossWidth; 
@property (nonatomic,retain) NSNumber * inputEpsilon; 
+(id)customAttributes;
-(void)setDefaults;
-(id)outputImage;
-(id)_kernel;
-(void)setInputColor:(id)arg1 ;
-(id)inputColor;
-(void)setInputRadius:(id)arg1 ;
-(id)inputRadius;
-(void)setInputCenter:(id)arg1 ;
-(id)inputCenter;
-(void)setInputCrossScale:(id)arg1 ;
-(void)setInputCrossAngle:(id)arg1 ;
-(void)setInputCrossOpacity:(id)arg1 ;
-(void)setInputCrossWidth:(id)arg1 ;
-(void)setInputEpsilon:(id)arg1 ;
-(id)inputEpsilon;
-(id)inputCrossAngle;
-(id)inputCrossScale;
-(id)inputCrossWidth;
-(id)inputCrossOpacity;
@end

