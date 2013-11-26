/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <CoreFoundation/NSFastEnumeration.h>
#import <CoreFoundation/NSCopying.h>

@class GEOTileKeyMap;

@interface GEOTileKeyList : NSObject <NSFastEnumeration, NSCopying> {

	void* _head;
	void* _tail;
	GEOTileKeyMap* _map;
	unsigned _count;
	unsigned _maxCount;
	unsigned long _mutationsCount;

}
+(id)listFromXPCData:(id)arg1 ;
-(BOOL)containsKey:(const GEOTileKey*)arg1 ;
-(void)dealloc;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_GE30*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(unsigned)count;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)intersectsList:(id)arg1 ;
-(id)sublistWithRange:(NSRange)arg1 ;
-(id)newXPCData;
-(GEOTileKey*)firstKey;
-(void)sort:(/*^block*/ id)arg1 ;
-(BOOL)removeKey:(const GEOTileKey*)arg1 ;
-(id)initWithMaxCapacity:(unsigned)arg1 ;
-(void)_addKeyToBack:(const GEOTileKey*)arg1 ;
-(BOOL)addKey:(const GEOTileKey*)arg1 lostKey:(GEOTileKey*)arg2 ;
-(id)copyWithMaxCapacity:(unsigned)arg1 ;
-(void)addKey:(const GEOTileKey*)arg1 ;
-(unsigned)capacity;
-(id)listWithout:(id)arg1 ;
-(void)removeKeysMatchingPredicate:(/*^block*/ id)arg1 ;
@end

