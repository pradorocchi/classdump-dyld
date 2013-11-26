/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@class NSSharedKeySet, NSMutableDictionary;

@interface NSSharedKeyDictionary : NSMutableDictionary {

	NSSharedKeySet* _keyMap;
	unsigned _count;
	id* _values;
	/*function pointer*/ void* _ifkIMP;
	NSMutableDictionary* _sideDic;
	unsigned long _mutations;

}
+(id)sharedKeyDictionaryWithKeySet:(id)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned)arg3 ;
-(id)initWithKeySet:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS16*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)count;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(Class)classForCoder;
-(id)keyEnumerator;
-(id)keySet;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(void)finalize;
@end

