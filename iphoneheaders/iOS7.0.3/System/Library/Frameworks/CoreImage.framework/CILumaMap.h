/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface CILumaMap : CIFilter {

	CIImage* inputImage;
	CIImage* _tableImage;

}

@property (nonatomic,retain) CIImage * inputImage; 
+(id)customAttributes;
-(void)setDefaults;
-(id)outputImage;
-(id)inputImage;
-(void)setInputImage:(id)arg1 ;
-(id)_kernel;
-(const char*)lumaTable;
@end

