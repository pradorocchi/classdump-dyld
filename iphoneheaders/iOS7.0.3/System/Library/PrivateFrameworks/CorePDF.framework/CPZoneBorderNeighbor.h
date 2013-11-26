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

@class CPShape;

@interface CPZoneBorderNeighbor : NSObject <NSCopying, CPCopying> {

	CPShape* neighborShape;
	int shapeSide;

}
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)initSuper;
-(id)neighborShape;
-(int)shapeSide;
-(void)setNeighborShape:(id)arg1 ;
-(void)setShapeSide:(int)arg1 ;
@end

