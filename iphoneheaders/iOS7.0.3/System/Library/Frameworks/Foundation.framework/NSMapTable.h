/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:56 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSFastEnumeration.h>

@interface NSMapTable : NSObject <NSCopying, NSCoding, NSFastEnumeration>
+(id)mapTableWithKeyOptions:(unsigned)arg1 valueOptions:(unsigned)arg2 ;
+(id)strongToWeakObjectsMapTable;
+(id)alloc;
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(id)mapTableWithWeakToWeakObjects;
+(id)mapTableWithStrongToStrongObjects;
+(id)mapTableWithWeakToStrongObjects;
+(id)mapTableWithStrongToWeakObjects;
+(id)strongToStrongObjectsMapTable;
+(id)weakToWeakObjectsMapTable;
+(id)weakToStrongObjectsMapTable;
-(void)removeAllItems;
-(id)enumerator;
-(id)keyPointerFunctions;
-(id)valuePointerFunctions;
-(void)setItem:(const void*)arg1 forKey:(const void*)arg2 ;
-(void)setItem:(const void*)arg1 forAbsentKey:(const void*)arg2 ;
-(void)setItem:(const void*)arg1 forKnownAbsentKey:(const void*)arg2 ;
-(void*)existingItemForSetItem:(const void*)arg1 forAbsentKey:(const void*)arg2 ;
-(void)replaceItem:(const void*)arg1 forExistingKey:(const void*)arg2 ;
-(BOOL)mapMember:(const void*)arg1 originalKey:(const void*)arg2 value:(const void*)arg3 ;
-(unsigned)getKeys:(const void*)arg1 values:(const void*)arg2 ;
-(id)mutableDictionary;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS5*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)count;
-(id)init;
-(id)copy;
-(void)removeAllObjects;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)objectEnumerator;
-(id)initWithKeyOptions:(unsigned)arg1 valueOptions:(unsigned)arg2 capacity:(unsigned)arg3 ;
-(id)allValues;
-(id)dictionaryRepresentation;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(id)initWithKeyPointerFunctions:(id)arg1 valuePointerFunctions:(id)arg2 capacity:(unsigned)arg3 ;
@end

