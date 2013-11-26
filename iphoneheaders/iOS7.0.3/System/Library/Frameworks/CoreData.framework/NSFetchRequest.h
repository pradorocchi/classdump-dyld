/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentStoreRequest.h>
#import <CoreFoundation/NSCoding.h>

@class NSArray, NSPredicate, NSEntityDescription;

@interface NSFetchRequest : NSPersistentStoreRequest <NSCoding> {

	NSArray* _groupByProperties;
	NSPredicate* _havingPredicate;
	unsigned _offset;
	NSArray* _valuesToFetch;
	NSEntityDescription* _entity;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;
	unsigned _batchSize;
	unsigned long _fetchLimit;
	NSArray* _relationshipKeyPathsForPrefetching;
	struct {
		unsigned distinctValuesOnly : 1;
		unsigned includesSubentities : 1;
		unsigned includesPropertyValues : 1;
		unsigned resultType : 3;
		unsigned returnsObjectsAsFaults : 1;
		unsigned excludePendingChanges : 1;
		unsigned isInUse : 1;
		unsigned entityIsName : 1;
		unsigned refreshesRefetched : 1;
		unsigned propertiesValidated : 1;
		unsigned disableCaching : 1;
		unsigned _RESERVED : 19;
	}  _flags;

}
+(BOOL)accessInstanceVariablesDirectly;
+(void)initialize;
+(id)fetchRequestWithEntityName:(id)arg1 ;
-(BOOL)includesPropertyValues;
-(BOOL)includesSubentities;
-(unsigned)fetchLimit;
-(id)propertiesToGroupBy;
-(BOOL)returnsObjectsAsFaults;
-(id)propertiesToFetch;
-(unsigned)fetchOffset;
-(void)_throwIfNotEditable;
-(BOOL)_isEditable;
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 uniquedMappings:(id)arg6 entities:(id)arg7 ;
-(id)havingPredicate;
-(id)relationshipKeyPathsForPrefetching;
-(BOOL)returnsDistinctResults;
-(BOOL)includesPendingChanges;
-(BOOL)shouldRefreshRefetchedObjects;
-(BOOL)_disablePersistentStoreResultCaching;
-(void)setReturnsDistinctResults:(BOOL)arg1 ;
-(void)setShouldRefreshRefetchedObjects:(BOOL)arg1 ;
-(void)_setDisablePersistentStoreResultCaching:(BOOL)arg1 ;
-(id)affectedStores;
-(id)_newValidatedProperties:(id)arg1 groupBy:(BOOL)arg2 error:(id*)arg3 ;
-(void)setAffectedStores:(id)arg1 ;
-(void)setPropertiesToGroupBy:(id)arg1 ;
-(id)groupByProperties;
-(void)setGroupByProperties:(id)arg1 ;
-(void)setHavingPredicate:(id)arg1 ;
-(void)_resolveEntityWithContext:(id)arg1 ;
-(void)_incrementInUseCounter;
-(id)stores;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setPredicate:(id)arg1 ;
-(void)setSortDescriptors:(id)arg1 ;
-(id)predicate;
-(BOOL)hasChanges;
-(void)setEntity:(id)arg1 ;
-(void)setFetchLimit:(unsigned)arg1 ;
-(void)setReturnsObjectsAsFaults:(BOOL)arg1 ;
-(void)setFetchBatchSize:(unsigned)arg1 ;
-(void)setRelationshipKeyPathsForPrefetching:(id)arg1 ;
-(id)entityName;
-(void)setIncludesPendingChanges:(BOOL)arg1 ;
-(void)setIncludesPropertyValues:(BOOL)arg1 ;
-(void)setResultType:(unsigned)arg1 ;
-(id)entity;
-(void)setPropertiesToFetch:(id)arg1 ;
-(void)setIncludesSubentities:(BOOL)arg1 ;
-(unsigned)fetchBatchSize;
-(id)sortDescriptors;
-(id)initWithEntityName:(id)arg1 ;
-(unsigned)requestType;
-(void)setFetchOffset:(unsigned)arg1 ;
-(unsigned)resultType;
@end

