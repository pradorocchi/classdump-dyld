/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface TSDWrapPolygon : NSObject <NSCopying> {

	void* mPolygon;
	BOOL mIntersectsSelf;
	BOOL mComputedSelfIntersection;
	CGRect mBounds;
	BOOL mComputedBounds;

}
-(void)setIntersectsSelf:(BOOL)arg1 ;
-(void)p_setPolygon:(SCD_Struct_TS477*)arg1 ;
-(void)p_freePolygon;
-(void)p_computeIntersectionState;
-(BOOL)intersectsSelf;
-(CGPoint)intersectionPointBetween:(CGPoint)arg1 and:(CGPoint)arg2 ;
-(int)p_countSegments;
-(void*)polygon;
-(void)dealloc;
-(CGRect)bounds;
-(id)bezierPath;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setPath:(id)arg1 ;
-(id).cxx_construct;
-(id)initWithPath:(id)arg1 ;
-(void)transformUsingAffineTransform:(CGAffineTransform)arg1 ;
@end

