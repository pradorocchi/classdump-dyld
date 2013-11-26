/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface _CIScreenFilter : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputAngle;
	NSNumber* inputWidth;
	NSNumber* inputSharpness;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputAngle; 
@property (nonatomic,retain) NSNumber * inputWidth; 
@property (nonatomic,retain) NSNumber * inputSharpness; 
+(id)customAttributes;
-(void)setDefaults;
-(id)outputImage;
-(id)inputImage;
-(void)setInputImage:(id)arg1 ;
-(id)_kernel;
-(void)setInputAngle:(id)arg1 ;
-(id)inputAngle;
-(id)_kernel_name;
-(void)setInputCenter:(id)arg1 ;
-(id)inputCenter;
-(void)setInputWidth:(id)arg1 ;
-(void)setInputSharpness:(id)arg1 ;
-(id)inputWidth;
-(id)inputSharpness;
-(id)_kernel_code;
@end

