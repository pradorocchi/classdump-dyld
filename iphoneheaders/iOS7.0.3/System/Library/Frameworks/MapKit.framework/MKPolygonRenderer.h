/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayPathRenderer.h>

@class MKPolygon;

@interface MKPolygonRenderer : MKOverlayPathRenderer

@property (nonatomic,readonly) MKPolygon * polygon; 
-(void)fillPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithPolygon:(id)arg1 ;
-(id)polygon;
-(void)createPath;
@end
