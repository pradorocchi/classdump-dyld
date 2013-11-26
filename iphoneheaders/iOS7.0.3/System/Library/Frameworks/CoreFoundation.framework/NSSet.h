/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSFastEnumeration.h>

@interface NSSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>
+(id)nonRetainingSet;
+(BOOL)supportsSecureCoding;
+(id)setWithArray:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
+(id)newSetWithObjects:(const id*)arg1 count:(unsigned)arg2 ;
+(id)setWithArray:(id)arg1 range:(NSRange)arg2 ;
+(id)setWithArray:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)setWithOrderedSet:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
+(id)setWithOrderedSet:(id)arg1 range:(NSRange)arg2 ;
+(id)setWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)setWithOrderedSet:(id)arg1 ;
+(id)setWithSet:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)setWithSet:(id)arg1 ;
+(id)set;
+(id)setWithObject:(id)arg1 ;
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)setWithObjects:(id)arg1 ;
+(id)setWithArray:(id)arg1 ;
+(id)setWithObjects:(const id*)arg1 count:(unsigned)arg2 ;
-(unsigned)pl_countOfObjectsPassingTest:(/*^block*/ id)arg1 ;
-(id)allObjectsWithClass:(Class)arg1 ;
-(id)allObjectsWithClass:(Class)arg1 ;
-(id)mf_getAllObjectsAsArray;
-(void)__imForEach:(/*^block*/ id)arg1 ;
-(id)__imSetByApplyingBlock:(/*^block*/ id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLType;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)filteredSetUsingPredicate:(id)arg1 ;
-(id)sortedArrayUsingDescriptors:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(id)_sumForKeyPath:(id)arg1 ;
-(id)_avgForKeyPath:(id)arg1 ;
-(id)_countForKeyPath:(id)arg1 ;
-(id)_maxForKeyPath:(id)arg1 ;
-(id)_minForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfArraysForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfObjectsForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfSetsForKeyPath:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(BOOL)isNSSet__;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned)arg2 ;
-(void)getObjects:(id*)arg1 ;
-(id)objectsWithOptions:(unsigned)arg1 passingTest:(/*^block*/ id)arg2 ;
-(BOOL)isSubsetOfSet:(id)arg1 ;
-(id)initWithSet:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)initWithArray:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
-(id)initWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2 ;
-(BOOL)intersectsOrderedSet:(id)arg1 ;
-(unsigned)countForObject:(id)arg1 ;
-(unsigned long)_cfTypeID;
-(BOOL)__getValue:(id*)arg1 forObj:(id)arg2 ;
-(void)__applyValues:(/*function pointer*/ void*)arg1 context:(void*)arg2 ;
-(id)objectWithOptions:(unsigned)arg1 passingTest:(/*^block*/ id)arg2 ;
-(id)initWithOrderedSet:(id)arg1 range:(NSRange)arg2 copyItems:(BOOL)arg3 ;
-(void)getObjects:(id*)arg1 count:(unsigned)arg2 ;
-(id)objectPassingTest:(/*^block*/ id)arg1 ;
-(id)initWithArray:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithOrderedSet:(id)arg1 range:(NSRange)arg2 ;
-(id)members:(id)arg1 notFoundMarker:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS16*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)count;
-(void)makeObjectsPerformSelector:(SEL)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/ id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(BOOL)containsObject:(id)arg1 ;
-(id)initWithObjects:(id)arg1 ;
-(id)anyObject;
-(void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)objectEnumerator;
-(id)objectsPassingTest:(/*^block*/ id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(id)allObjects;
-(id)setByAddingObjectsFromSet:(id)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned)arg2 ;
-(BOOL)isEqualToSet:(id)arg1 ;
-(BOOL)intersectsSet:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(id)member:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(id)sortedArrayUsingComparator:(/*^block*/ id)arg1 ;
-(id)setByAddingObjectsFromArray:(id)arg1 ;
-(id)initWithArray:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)setByAddingObject:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(BOOL)isSubsetOfOrderedSet:(id)arg1 ;
-(id)sortedArrayWithOptions:(unsigned)arg1 usingComparator:(/*^block*/ id)arg2 ;
-(id)initWithOrderedSet:(id)arg1 ;
@end

