/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:42 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CITileFilter : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputAngle;
	NSNumber* inputWidth;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputAngle; 
@property (nonatomic,retain) NSNumber * inputWidth; 
+(id)customAttributes;
-(void)setDefaults;
-(id)inputImage;
-(void)setInputImage:(id)arg1 ;
-(id)_kernel;
-(void)setInputAngle:(id)arg1 ;
-(id)inputAngle;
-(id)_kernel_name;
-(id)_kernel_source;
-(void)setInputCenter:(id)arg1 ;
-(id)inputCenter;
-(void)setInputWidth:(id)arg1 ;
-(id)inputWidth;
@end

