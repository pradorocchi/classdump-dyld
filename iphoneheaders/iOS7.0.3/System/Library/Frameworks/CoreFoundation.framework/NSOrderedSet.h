/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSFastEnumeration.h>

@interface NSOrderedSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>
+(id)newOrderedSetWithObjects:(const id*)arg1 count:(unsigned)arg2 ;
+(id)orderedSetWithObjects:(id)arg1 ;
+(id)orderedSetWithArray:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
+(id)orderedSetWithArray:(id)arg1 range:(NSRange)arg2 ;
+(id)orderedSetWithArray:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)orderedSetWithOrderedSet:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
+(id)orderedSetWithOrderedSet:(id)arg1 range:(NSRange)arg2 ;
+(id)orderedSetWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)orderedSetWithSet:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)orderedSetWithArray:(id)arg1 ;
+(id)orderedSet;
+(id)orderedSetWithObject:(id)arg1 ;
+(id)orderedSetWithOrderedSet:(id)arg1 ;
+(id)orderedSetWithObjects:(const id*)arg1 count:(unsigned)arg2 ;
+(id)orderedSetWithSet:(id)arg1 ;
-(BOOL)pl_isSortedUsingComparator:(/*^block*/ id)arg1 ;
-(id)pl_shortDescription;
-(unsigned)pl_indexOfObjectIdenticalTo:(id)arg1 ;
-(id)filteredOrderedSetUsingPredicate:(id)arg1 ;
-(id)sortedArrayUsingDescriptors:(id)arg1 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned)arg2 ;
-(id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned)arg2 ;
-(id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned)arg2 ;
-(id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned)arg2 ;
-(void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned)arg3 ;
-(BOOL)_validateValue:(inout id*)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned)arg3 error:(out id*)arg4 ;
-(id)_sumForKeyPath:(id)arg1 ;
-(id)_avgForKeyPath:(id)arg1 ;
-(id)_countForKeyPath:(id)arg1 ;
-(id)_maxForKeyPath:(id)arg1 ;
-(id)_minForKeyPath:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(BOOL)isNSOrderedSet__;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned)arg2 ;
-(unsigned)indexOfObjectWithOptions:(unsigned)arg1 passingTest:(/*^block*/ id)arg2 ;
-(unsigned)indexOfObjectAtIndexes:(id)arg1 options:(unsigned)arg2 passingTest:(/*^block*/ id)arg3 ;
-(id)indexesOfObjectsWithOptions:(unsigned)arg1 passingTest:(/*^block*/ id)arg2 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned)arg2 passingTest:(/*^block*/ id)arg3 ;
-(void)getObjects:(id*)arg1 ;
-(id)objectsWithOptions:(unsigned)arg1 passingTest:(/*^block*/ id)arg2 ;
-(BOOL)isSubsetOfSet:(id)arg1 ;
-(id)initWithSet:(id)arg1 copyItems:(BOOL)arg2 ;
-(BOOL)isEqualToOrderedSet:(id)arg1 ;
-(id)initWithArray:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
-(id)initWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2 ;
-(BOOL)intersectsOrderedSet:(id)arg1 ;
-(id)reversedOrderedSet;
-(unsigned)countForObject:(id)arg1 ;
-(id)objectWithOptions:(unsigned)arg1 passingTest:(/*^block*/ id)arg2 ;
-(id)sortedArrayFromRange:(NSRange)arg1 options:(unsigned)arg2 usingComparator:(/*^block*/ id)arg3 ;
-(id)initWithOrderedSet:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
-(BOOL)containsObject:(id)arg1 inRange:(NSRange)arg2 ;
-(unsigned)countForObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)objectAtIndexes:(id)arg1 options:(unsigned)arg2 passingTest:(/*^block*/ id)arg3 ;
-(id)objectPassingTest:(/*^block*/ id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 options:(unsigned)arg2 passingTest:(/*^block*/ id)arg3 ;
-(id)initWithArray:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS16*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/ id)arg1 ;
-(unsigned)indexOfObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)objectAtIndexedSubscript:(unsigned)arg1 ;
-(id)lastObject;
-(BOOL)containsObject:(id)arg1 ;
-(id)array;
-(id)initWithObjects:(id)arg1 ;
-(id)set;
-(id)reverseObjectEnumerator;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(Class)classForCoder;
-(id)objectEnumerator;
-(id)indexesOfObjectsPassingTest:(/*^block*/ id)arg1 ;
-(id)objectsPassingTest:(/*^block*/ id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(id)allObjects;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned)arg2 ;
-(id)firstObject;
-(unsigned)indexOfObjectPassingTest:(/*^block*/ id)arg1 ;
-(BOOL)intersectsSet:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(id)sortedArrayUsingComparator:(/*^block*/ id)arg1 ;
-(unsigned)indexOfObject:(id)arg1 inSortedRange:(NSRange)arg2 options:(unsigned)arg3 usingComparator:(/*^block*/ id)arg4 ;
-(id)initWithArray:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)initWithObject:(id)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(unsigned)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(BOOL)isSubsetOfOrderedSet:(id)arg1 ;
-(id)sortedArrayWithOptions:(unsigned)arg1 usingComparator:(/*^block*/ id)arg2 ;
-(id)initWithOrderedSet:(id)arg1 ;
@end

