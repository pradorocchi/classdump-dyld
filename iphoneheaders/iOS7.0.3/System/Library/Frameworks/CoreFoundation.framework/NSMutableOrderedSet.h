/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSOrderedSet.h>

@interface NSMutableOrderedSet : NSOrderedSet
+(id)orderedSetWithCapacity:(unsigned)arg1 ;
-(void)pl_addObjectsFromArray:(id)arg1 ;
-(void)pl_removeObjectsInArray:(id)arg1 ;
-(void)pl_insertObjects:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)filterUsingPredicate:(id)arg1 ;
-(void)sortUsingDescriptors:(id)arg1 ;
-(void)setSet:(id)arg1 ;
-(void)addObjects:(const id*)arg1 count:(unsigned)arg2 ;
-(void)insertObjects:(const id*)arg1 count:(unsigned)arg2 atIndex:(unsigned)arg3 ;
-(void)sortRange:(NSRange)arg1 options:(unsigned)arg2 usingComparator:(/*^block*/ id)arg3 ;
-(void)setObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjects:(const id*)arg2 count:(unsigned)arg3 ;
-(void)intersectOrderedSet:(id)arg1 ;
-(void)replaceObject:(id)arg1 ;
-(void)_mutate;
-(void)insertObjectsFromArray:(id)arg1 range:(NSRange)arg2 atIndex:(unsigned)arg3 ;
-(void)insertObjectsFromOrderedSet:(id)arg1 range:(NSRange)arg2 atIndex:(unsigned)arg3 ;
-(void)insertObjectsFromSet:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 inArray:(id)arg2 range:(NSRange)arg3 ;
-(void)removeObjectsInRange:(NSRange)arg1 inOrderedSet:(id)arg2 range:(NSRange)arg3 ;
-(void)removeObjectsInRange:(NSRange)arg1 inSet:(id)arg2 ;
-(void)removeObjectsWithOptions:(unsigned)arg1 passingTest:(/*^block*/ id)arg2 ;
-(void)addObjectsFromArray:(id)arg1 range:(NSRange)arg2 ;
-(void)addObjectsFromOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(void)addObjectsFromOrderedSet:(id)arg1 ;
-(void)addObjectsFromSet:(id)arg1 ;
-(void)insertObjectsFromArray:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)insertObjectsFromOrderedSet:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeFirstObject;
-(void)removeObjectsInRange:(NSRange)arg1 inArray:(id)arg2 ;
-(void)removeObjectsInArray:(id)arg1 range:(NSRange)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 inOrderedSet:(id)arg2 ;
-(void)removeObjectsInOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(void)removeObjectsInOrderedSet:(id)arg1 ;
-(void)removeObjectsInSet:(id)arg1 ;
-(void)removeObjectsAtIndexes:(id)arg1 options:(unsigned)arg2 passingTest:(/*^block*/ id)arg3 ;
-(void)removeObjectsPassingTest:(/*^block*/ id)arg1 ;
-(void)replaceObject:(id)arg1 inRange:(NSRange)arg2 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromArray:(id)arg2 range:(NSRange)arg3 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromArray:(id)arg2 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromOrderedSet:(id)arg2 range:(NSRange)arg3 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromOrderedSet:(id)arg2 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjectsFromSet:(id)arg2 ;
-(void)rollObjectsInRange:(NSRange)arg1 by:(int)arg2 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned)arg2 ;
-(void)setOrderedSet:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeLastObject;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(id)initWithCapacity:(unsigned)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeObjectAtIndex:(unsigned)arg1 ;
-(void)removeObject:(id)arg1 inRange:(NSRange)arg2 ;
-(Class)classForCoder;
-(void)sortUsingComparator:(/*^block*/ id)arg1 ;
-(void)removeObjectsAtIndexes:(id)arg1 ;
-(void)exchangeObjectAtIndex:(unsigned)arg1 withObjectAtIndex:(unsigned)arg2 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned)arg2 ;
-(void)replaceObjectAtIndex:(unsigned)arg1 withObject:(id)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(void)setArray:(id)arg1 ;
-(void)setObject:(id)arg1 ;
-(void)sortWithOptions:(unsigned)arg1 usingComparator:(/*^block*/ id)arg2 ;
-(void)unionSet:(id)arg1 ;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2 ;
-(void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned)arg2 ;
-(void)unionOrderedSet:(id)arg1 ;
-(void)minusOrderedSet:(id)arg1 ;
@end

