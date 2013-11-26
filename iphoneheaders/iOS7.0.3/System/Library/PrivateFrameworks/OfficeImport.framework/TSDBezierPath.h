/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:46 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@interface TSDBezierPath : NSObject <NSCopying, NSCoding> {

	int sfr_elementCount;
	int sfr_elementMax;
	PATHSEGMENT* sfr_head;
	float* sfr_elementLength;
	float sfr_totalLength;
	int sfr_lastSubpathIndex;
	void* sfr_extraSegments;
	float sfr_lineWidth;
	CGRect sfr_controlPointBounds;
	float sfr_miterLimit;
	float sfr_flatness;
	float* sfr_dashedLinePattern;
	unsigned sfr_dashedLineCount;
	float sfr_dashedLinePhase;
	void* sfr_path;
	int sfr_extraSegmentCount;
	int sfr_extraSegmentMax;
	struct {
		unsigned sfr_flags : 8;
		unsigned sfr_pathState : 2;
		unsigned sfr_calculatedLengths : 1;
		unsigned sfr_unused : 21;
	}  sfr_bpFlags;

}
+(id)bezierPath;
+(id)bezierPathWithRect:(CGRect)arg1 ;
+(id)bezierPathWithOvalInRect:(CGRect)arg1 ;
+(id)bezierPathWithRoundedRect:(CGRect)arg1 cornerRadius:(float)arg2 ;
+(id)bezierPathWithCGPath:(CGPathRef)arg1 ;
+(float)lineWidth;
+(void)setLineWidth:(float)arg1 ;
+(unsigned)lineCapStyle;
+(void)setLineCapStyle:(unsigned)arg1 ;
+(unsigned)lineJoinStyle;
+(void)setLineJoinStyle:(unsigned)arg1 ;
+(float)miterLimit;
+(void)setMiterLimit:(float)arg1 ;
+(float)flatness;
+(void)setFlatness:(float)arg1 ;
+(void)initialize;
+(void)fillRect:(CGRect)arg1 ;
+(unsigned)windingRule;
+(void)setWindingRule:(unsigned)arg1 ;
+(void)strokeRect:(CGRect)arg1 ;
+(void)clipRect:(CGRect)arg1 ;
+(void)strokeLineFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
+(void)setDefaultMiterLimit:(float)arg1 ;
+(float)defaultMiterLimit;
+(void)setDefaultFlatness:(float)arg1 ;
+(float)defaultFlatness;
+(void)setDefaultWindingRule:(unsigned)arg1 ;
+(unsigned)defaultWindingRule;
+(void)setDefaultLineCapStyle:(unsigned)arg1 ;
+(unsigned)defaultLineCapStyle;
+(void)setDefaultLineJoinStyle:(unsigned)arg1 ;
+(unsigned)defaultLineJoinStyle;
+(void)setDefaultLineWidth:(float)arg1 ;
+(float)defaultLineWidth;
+(id)bezierPathWithStart:(CGPoint)arg1 end:(CGPoint)arg2 ;
-(const char*)cString;
-(void)dealloc;
-(CGRect)bounds;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(float)length;
-(void)moveToPoint:(CGPoint)arg1 ;
-(void)closePath;
-(void)addClip;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)removeAllPoints;
-(id)bezierPathByReversingPath;
-(BOOL)isEmpty;
-(CGPoint)currentPoint;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(void)setLineDash:(const float*)arg1 count:(int)arg2 phase:(float)arg3 ;
-(void)getLineDash:(float*)arg1 count:(int*)arg2 phase:(float*)arg3 ;
-(void)fill;
-(void)stroke;
-(void)lineToPoint:(CGPoint)arg1 ;
-(void)appendBezierPath:(id)arg1 ;
-(void)appendBezierPathWithRect:(CGRect)arg1 ;
-(void)appendBezierPathWithOvalInRect:(CGRect)arg1 ;
-(void)appendBezierPathWithArcWithCenter:(CGPoint)arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4 clockwise:(BOOL)arg5 ;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(unsigned)lineCapStyle;
-(void)setLineCapStyle:(unsigned)arg1 ;
-(unsigned)lineJoinStyle;
-(void)setLineJoinStyle:(unsigned)arg1 ;
-(float)miterLimit;
-(void)setMiterLimit:(float)arg1 ;
-(float)flatness;
-(void)setFlatness:(float)arg1 ;
-(id).cxx_construct;
-(int)elementCount;
-(unsigned)elementAtIndex:(int)arg1 ;
-(unsigned)windingRule;
-(void)setWindingRule:(unsigned)arg1 ;
-(void)_deviceMoveToPoint:(CGPoint)arg1 ;
-(void)_deviceLineToPoint:(CGPoint)arg1 ;
-(void)_deviceCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(void)_deviceClosePath;
-(unsigned)elementAtIndex:(int)arg1 associatedPoints:(CGPoint*)arg2 ;
-(void)subdivideBezierWithFlatness:(float)arg1 startPoint:(CGPoint)arg2 controlPoint1:(CGPoint)arg3 controlPoint2:(CGPoint)arg4 endPoint:(CGPoint)arg5 ;
-(void)flattenIntoPath:(id)arg1 ;
-(void)_doPath;
-(CGRect)controlPointBounds;
-(void)appendBezierPathWithArcWithCenter:(CGPoint)arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4 ;
-(void)transformUsingAffineTransform:(CGAffineTransform)arg1 ;
-(void)_appendArcSegmentWithCenter:(CGPoint)arg1 radius:(double)arg2 angle1:(double)arg3 angle2:(double)arg4 ;
-(void)curveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(id)_copyFlattenedPath;
-(void)relativeMoveToPoint:(CGPoint)arg1 ;
-(void)relativeLineToPoint:(CGPoint)arg1 ;
-(void)relativeCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(id)bezierPathByFlatteningPath;
-(void)setAssociatedPoints:(CGPoint*)arg1 atIndex:(int)arg2 ;
-(void)appendBezierPathWithPoints:(CGPoint*)arg1 count:(int)arg2 ;
-(void)appendBezierPathWithArcFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 radius:(float)arg3 ;
-(void)_addPathSegment:(int)arg1 point:(CGPoint)arg2 ;
-(void)appendBezierPathWithArcWithEllipseBounds:(CGRect)arg1 startRadialVector:(CGPoint)arg2 endRadialVector:(CGPoint)arg3 angleSign:(int)arg4 startNewPath:(BOOL)arg5 ;
-(void)appendBezierPathWithArcWithEllipseBounds:(CGRect)arg1 startAngle:(float)arg2 swingAngle:(float)arg3 angleType:(int)arg4 startNewPath:(BOOL)arg5 ;
-(void)attachBezierPath:(id)arg1 ;
-(BOOL)isFlat;
-(unsigned)elementAtIndex:(int)arg1 allPoints:(CGPoint*)arg2 ;
-(float)calculateLengthOfElement:(int)arg1 ;
-(void)calculateLengths;
-(void)_appendToPath:(id)arg1 ;
-(CGPathRef)cgPath;
-(BOOL)isRectangular;
-(BOOL)isCircular;
-(BOOL)isClockwise;
-(float)lengthOfElement:(int)arg1 ;
-(float)lengthToElement:(int)arg1 ;
-(id)initWithCString:(const char*)arg1 ;
-(void)finalize;
@end

