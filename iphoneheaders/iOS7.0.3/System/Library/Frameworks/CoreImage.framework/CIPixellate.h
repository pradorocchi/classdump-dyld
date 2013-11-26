/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIPixellate : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputScale;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputScale; 
+(id)customAttributes;
-(void)setDefaults;
-(id)outputImage;
-(bool)_isIdentity;
-(id)inputImage;
-(void)setInputImage:(id)arg1 ;
-(id)_kernel;
-(void)setInputCenter:(id)arg1 ;
-(id)inputCenter;
-(void)setInputScale:(id)arg1 ;
-(id)inputScale;
@end

