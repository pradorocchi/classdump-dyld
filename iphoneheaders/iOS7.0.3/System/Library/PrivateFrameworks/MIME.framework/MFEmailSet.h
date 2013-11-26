/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:56 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MIME/MIME-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@interface MFEmailSet : NSMutableSet {

	CFSetRef _set;

}
+(id)set;
-(void)setSet:(id)arg1 ;
-(BOOL)isSubsetOfSet:(id)arg1 ;
-(id)allCommentedAddresses;
-(void)dealloc;
-(void)removeObject:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_MF2*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(unsigned)count;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(id)initWithCapacity:(unsigned)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)objectEnumerator;
-(id)allObjects;
-(BOOL)isEqualToSet:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(BOOL)intersectsSet:(id)arg1 ;
-(id)member:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(id)_generateAllObjectsFromSelector:(SEL)arg1 ;
@end

