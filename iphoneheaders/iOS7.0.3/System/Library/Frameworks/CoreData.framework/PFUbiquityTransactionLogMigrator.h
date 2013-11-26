/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:34 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSManagedObjectModel, NSMappingModel, NSString, NSDictionary, NSSet;

@interface PFUbiquityTransactionLogMigrator : NSObject {

	NSManagedObjectModel* _srcModel;
	NSManagedObjectModel* _dstModel;
	NSMappingModel* _mappingModel;
	NSString* _localPeerID;
	NSDictionary* _mappingsByEntityName;
	NSSet* _removedEntities;
	BOOL _throttleLogs;

}

@property (readonly) BOOL throttleLogs;              //@synthesize throttleLogs=_throttleLogs - In the implementation block
-(void)populateMappingsByEntityName;
-(BOOL)migrateTransactionLogFromLocation:(id)arg1 toLocation:(id)arg2 error:(id*)arg3 ;
-(BOOL)migrateBaselineFromLocation:(id)arg1 toLocation:(id)arg2 error:(id*)arg3 ;
-(BOOL)throttleLogs;
-(id)createDestinationObjectsFromSourceObjects:(id)arg1 migrationContext:(id)arg2 ;
-(id)createDestinationGlobalObjectIDFromSourceGlobalObjectID:(id)arg1 ;
-(id)createDestinationObjectContentFromSourceObjectContent:(id)arg1 withEntityMapping:(id)arg2 migrationContext:(id)arg3 ;
-(id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2 mappingModel:(id)arg3 localPeerID:(id)arg4 ;
-(BOOL)migrateTransactionLogsForStoreName:(id)arg1 andLocalPeerID:(id)arg2 atUbiquityRootLocation:(id)arg3 error:(id*)arg4 ;
-(void)dealloc;
@end

