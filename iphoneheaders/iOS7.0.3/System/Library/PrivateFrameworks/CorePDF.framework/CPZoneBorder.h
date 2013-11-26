/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CorePDF/CPCopying.h>

@class CPPage, NSMutableArray;

@interface CPZoneBorder : NSObject <NSCopying, CPCopying> {

	CGRect bounds;
	CPPage* page;
	NSMutableArray* ownerArray;
	NSMutableArray* graphicObjects;
	NSMutableArray* neighbors;
	NSMutableArray* intersections;
	BOOL isHorizontal;
	BOOL hasForwardVector;
	BOOL hasBackwardVector;
	float overhangMin;
	float overhangMax;

}
+(void)outerVertices:(CGPoint*)arg1 fromBorders:(id)arg2 swollenBy:(float)arg3 ;
+(int)clockwiseWindingNumberOfShapeWithBorders:(id)arg1 ;
+(void)addIntersectionBetweenBorder:(id)arg1 andBorder:(id)arg2 atRect:(CGRect)arg3 ;
+(CGRect)extendRect:(CGRect)arg1 ;
+(void)removeIntersectionBetweenBorder:(id)arg1 andBorder:(id)arg2 ;
-(void)dealloc;
-(CGRect)bounds;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)isVertical;
-(id)page;
-(BOOL)isHorizontal;
-(long)zOrder;
-(int)compareXBounds:(id)arg1 ;
-(int)compareYBounds:(id)arg1 ;
-(id)initSuper;
-(unsigned)graphicObjectCount;
-(id)graphicObjectAtIndex:(unsigned)arg1 ;
-(BOOL)hasNeighborShape:(id)arg1 ;
-(unsigned)indexOfIntersectionWith:(id)arg1 ;
-(unsigned)neighborCount;
-(id)neighborAtIndex:(unsigned)arg1 ;
-(BOOL)hasNeighborShape:(id)arg1 atSide:(int)arg2 ;
-(id)graphicObjects;
-(void)addGraphicObject:(id)arg1 ;
-(unsigned)intersectionCount;
-(BOOL)windsClockwiseOnto:(id)arg1 ;
-(BOOL)continues:(id)arg1 ;
-(BOOL)extractCycleTo:(id)arg1 goingForward:(BOOL)arg2 throughIntersectionIndex:(unsigned)arg3 returningTo:(id)arg4 atRect:(CGRect*)arg5 ;
-(id)copyWithoutIntersections;
-(BOOL)hasClockwiseVectorAtIndex:(unsigned)arg1 startingForward:(BOOL)arg2 ;
-(BOOL)hasCounterclockwiseVectorAtIndex:(unsigned)arg1 startingForward:(BOOL)arg2 ;
-(void)addToArray:(id)arg1 ;
-(void)trimToLastIntersections;
-(void)addNeighbor:(id)arg1 ;
-(void)removeFromArray;
-(void)removeLooseThreadsStartingFrom:(id)arg1 ;
-(id)initWithGraphicObject:(id)arg1 ;
-(void)addToArray:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeFromArrayAtIndex:(unsigned)arg1 ;
-(id)ownerArray;
-(void)removeGraphicObjectAtIndex:(unsigned)arg1 ;
-(void)removeNeighborAtIndex:(unsigned)arg1 ;
-(void)setHasForwardVector:(BOOL)arg1 ;
-(BOOL)hasForwardVector;
-(void)setHasBackwardVector:(BOOL)arg1 ;
-(BOOL)hasBackwardVector;
-(void)setSide:(int)arg1 ofPage:(id)arg2 ;
-(BOOL)intersectsWith:(id)arg1 atRect:(CGRect*)arg2 ;
-(void)instantiateVectors;
-(BOOL)hasVectorGoingForward:(BOOL)arg1 startingAtIndex:(unsigned*)arg2 ;
-(BOOL)extractCycleTo:(id)arg1 goingForward:(BOOL)arg2 startingAtIndex:(unsigned)arg3 ;
-(BOOL)crosses:(id)arg1 ;
-(void)combine:(id)arg1 ;
@end

