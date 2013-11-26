/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <CoreData/CoreData-Structs.h>
@interface NSMergePolicy : NSObject {

	unsigned _type;
	void* _reserved2;
	void* _reserved3;

}

@property (readonly) unsigned mergeType;              //@synthesize type=_type - In the implementation block
+(BOOL)accessInstanceVariablesDirectly;
+(void)load;
-(unsigned)mergeType;
-(void)_mergeChangesStoreUpdatesTrumpForObject:(id)arg1 withRecord:(id)arg2 ;
-(void)_mergeChangesObjectUpdatesTrumpForObject:(id)arg1 withRecord:(id)arg2 ;
-(void)mergeToManyRelationshipForSourceObject:(id)arg1 withOldSnapshot:(id)arg2 newSnapshot:(id)arg3 andAncestor:(id)arg4 andLegacyPath:(BOOL)arg5 ;
-(void)_mergeDeletionWithStoreChangesForObject:(id)arg1 withRecord:(id)arg2 ;
-(BOOL)resolveConflict:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)type;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)initWithType:(unsigned)arg1 ;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(id)initWithMergeType:(unsigned)arg1 ;
-(BOOL)resolveConflicts:(id)arg1 error:(id*)arg2 ;
@end

