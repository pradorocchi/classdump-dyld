/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:42 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface CIColorMap : CIFilter {

	CIImage* inputImage;
	CIImage* inputGradientImage;
	CIImage* cachedGradientImage;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputGradientImage; 
@property (nonatomic,retain) CIImage * cachedGradientImage; 
+(id)customAttributes;
-(id)outputImage;
-(id)inputImage;
-(void)setInputImage:(id)arg1 ;
-(id)_kernel;
-(id)gradientImage;
-(void)setInputGradientImage:(id)arg1 ;
-(id)inputGradientImage;
-(id)cachedGradientImage;
-(void)setCachedGradientImage:(id)arg1 ;
-(void)dealloc;
@end

