/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:29 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <QuartzCore/CALayer.h>

@class FigCaptionLayerPrivate;

@interface FigCaptionLayer : CALayer {

	FigCaptionLayerPrivate* _priv;

}
-(void)resetCaptions;
-(void)processCaptionCommand:(unsigned)arg1 data:(id)arg2 ;
-(void)_renderer:(OpaqueFigCFCaptionRendererRef)arg1 didChangeRows:(SCD_Struct_Fi3)arg2 ;
-(void)dealloc;
-(id)init;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setFontName:(const char*)arg1 ;
-(void)finalize;
-(void)layoutSublayers;
@end

