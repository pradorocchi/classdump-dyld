/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:09 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/UIPDFMarkupAnnotation.h>

@interface UIPDFHighlightAnnotation : UIPDFMarkupAnnotation {

	CGColorRef _highLightColor;

}
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(Class)viewClass;
-(BOOL)recognizeGestures;
-(void)drawLayerUpright:(id)arg1 inContext:(CGContextRef)arg2 selection:(id)arg3 rectangles:(unsigned)arg4 ;
-(void)drawLayerRotated:(id)arg1 inContext:(CGContextRef)arg2 selection:(id)arg3 rectangles:(unsigned)arg4 ;
-(int)annotationType;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

