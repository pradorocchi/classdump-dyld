/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DAnimationTimeSlice.h>

@class NSDictionary, TSCH3DAnimationTimeSlice, TSCH3DCascadeAnimationTimeSlice;

@interface TSCH3DSetAnimationTimeSlice : TSCH3DAnimationTimeSlice {

	NSDictionary* mSetDictionary;
	NSDictionary* mNegativeSetDictionary;
	TSCH3DAnimationTimeSlice* mSetInterpolation;
	TSCH3DCascadeAnimationTimeSlice* mCascadeInterpolator;

}
+(void)addInterpolatorsToSets:(const map<unsigned int, NSMutableIndexSet *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, NSMutableIndexSet *> > >*)arg1 dictionary:(id)arg2 values:(const vector<float, std::__1::allocator<float> >*)arg3 size:(tvec2<int>*)arg4 ;
+(id)timeSliceWithIndexSet:(id)arg1 elementValues:(const vector<float, std::__1::allocator<float> >*)arg2 setInterpolation:(id)arg3 size:(tvec2<int>*)arg4 cascadeSets:(BOOL)arg5 ;
-(box<glm::detail::tvec1<float> >)rangeForIndex:(const tvec2<int>*)arg1 ;
-(id)initWithSetDictionary:(id)arg1 negativeSetDictionary:(id)arg2 setInterpolation:(id)arg3 cascadeInterpolator:(id)arg4 ;
-(id)p_orderedTimeSliceForIndex:(tvec2<int>*)arg1 ;
-(void)dealloc;
@end

