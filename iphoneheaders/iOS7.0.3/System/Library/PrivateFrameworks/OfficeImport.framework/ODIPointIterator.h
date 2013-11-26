/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface ODIPointIterator : NSObject
+(id)pointsForSpecification:(id)arg1 startingPoint:(id)arg2 isLast:(BOOL)arg3 ;
+(id)processAttributes:(id)arg1 startingPoint:(id)arg2 isLast:(BOOL)arg3 ;
+(void)processSelfAxisFromPoint:(id)arg1 state:(ODIPointIteratorState*)arg2 ;
+(void)processChildAxisFromPoint:(id)arg1 state:(ODIPointIteratorState*)arg2 ;
+(void)processFollowingSiblingAxisFromPoint:(id)arg1 state:(ODIPointIteratorState*)arg2 ;
+(BOOL)isDoneForState:(ODIPointIteratorState*)arg1 ;
+(BOOL)isPoint:(id)arg1 ofType:(int)arg2 ;
+(BOOL)addPoint:(id)arg1 state:(ODIPointIteratorState*)arg2 ;
@end

