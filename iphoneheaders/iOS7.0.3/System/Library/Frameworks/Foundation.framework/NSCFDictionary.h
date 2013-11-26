/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:54 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@interface NSCFDictionary : NSMutableDictionary
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(void)setObservationInfo:(void*)arg1 ;
-(oneway void)release;
-(id)retain;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS5*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(unsigned)count;
-(void)removeAllObjects;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(unsigned)retainCount;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(Class)classForCoder;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(void)finalize;
@end

