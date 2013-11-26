/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableOrderedSet.h>

@class NSMutableArray;

@interface __NSOrderedSetM : NSMutableOrderedSet {

	unsigned _used;
	CFBasicHashRef _set;
	NSMutableArray* _array;

}
+(id)__new:(const id*)arg1 :(unsigned)arg2 :(BOOL)arg3 ;
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)setObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_mutate;
-(void)dealloc;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS16*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(unsigned)indexOfObject:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeObjectAtIndex:(unsigned)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(void)replaceObjectAtIndex:(unsigned)arg1 withObject:(id)arg2 ;
-(void)finalize;
@end

