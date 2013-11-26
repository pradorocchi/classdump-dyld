/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol TSCHCompositeRendering <NSObject>
@optional
-(void)willBeginTransparencyLayer:(int)arg1 inContext:(CGContextRef)arg2;
-(void)didBeginTransparencyLayer:(int)arg1 inContext:(CGContextRef)arg2;
-(void)willEndTransparencyLayer:(int)arg1 inContext:(CGContextRef)arg2;
-(void)didEndTransparencyLayer:(int)arg1 inContext:(CGContextRef)arg2;

@required
-(id)transparencyLayers;
-(void)drawIntoLayer:(int)arg1 inContext:(CGContextRef)arg2 visible:(CGRect)arg3;
-(BOOL)needsAnySeparateLayers;
@end

