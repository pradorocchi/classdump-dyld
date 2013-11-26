/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:36 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@interface __NSDictionaryM : NSMutableDictionary {

	unsigned _used : 26;
	unsigned _kvo : 1;
	unsigned _size;
	unsigned long _mutations;
	id* _objs;
	id* _keys;

}
+(id)__new:(const id*)arg1 :(const id*)arg2 :(unsigned)arg3 :(BOOL)arg4 :(BOOL)arg5 ;
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(void)initialize;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)setObservationInfo:(void*)arg1 ;
-(void)__setObject:(id)arg1 forKey:(id)arg2 ;
-(void)_mutate;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned)arg3 ;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS16*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(unsigned)count;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(void)finalize;
@end

