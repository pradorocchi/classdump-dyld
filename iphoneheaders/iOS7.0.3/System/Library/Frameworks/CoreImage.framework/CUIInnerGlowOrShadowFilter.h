/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:42 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber, CIColor;

@interface CUIInnerGlowOrShadowFilter : CIFilter {

	CIImage* inputImage;
	CIVector* inputOffset;
	NSNumber* inputRange;
	NSNumber* inputRadius;
	CIColor* inputColor;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputOffset; 
@property (nonatomic,retain) NSNumber * inputRange; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) CIColor * inputColor; 
+(id)customAttributes;
-(void)setDefaults;
-(id)outputImage;
-(id)inputImage;
-(void)setInputImage:(id)arg1 ;
-(id)_kernel;
-(void)setInputColor:(id)arg1 ;
-(id)inputColor;
-(void)setInputRadius:(id)arg1 ;
-(id)inputRadius;
-(void)setInputOffset:(id)arg1 ;
-(void)setInputRange:(id)arg1 ;
-(id)inputOffset;
-(id)inputRange;
@end

