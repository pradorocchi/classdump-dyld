/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol TSARenderingExporterDelegate
@optional
-(int)renderingQuality;

@required
-(float)viewScale;
-(CGContextRef)newCGContextForURL:(id)arg1;
-(void)releaseCGContext:(CGContextRef)arg1;
-(BOOL)supportsPaging;
-(BOOL)supportsRenderingQuality;
-(void)teardown;
-(void)setup;
@end

