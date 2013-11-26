/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <CoreData/CoreData-Structs.h>
@class NSSQLAdapter, NSSQLStatement, NSArray;

@interface NSSQLConnection : NSObject {

	NSSQLAdapter* _adapter;
	BOOL _transactionIsOpen;
	BOOL _useSyntaxColoredLogging;
	NSSQLStatement* _sqlStatement;
	NSArray* _columnsToFetch;
	NSArray* _metadataColumns;

}
+(void)initialize;
-(id)columnsToFetch;
-(BOOL)isOpen;
-(void)endFetch;
-(BOOL)isFetchInProgress;
-(id)adapter;
-(void)prepareSQLStatement:(id)arg1 ;
-(void)execute;
-(void)bindTempTableForBindIntarray:(id)arg1 ;
-(void)resetSQLStatement;
-(void)releaseSQLStatement;
-(void)updateRow:(id)arg1 ;
-(void)insertCorrelation:(id)arg1 ;
-(void)updateCorrelation:(id)arg1 ;
-(void)deleteCorrelation:(id)arg1 ;
-(void)performAdapterOperation:(id)arg1 ;
-(void)prepareAndExecuteSQLStatement:(id)arg1 ;
-(void)createTableForEntity:(id)arg1 ;
-(void)createIndexesForEntity:(id)arg1 ;
-(void)createManyToManyTablesForEntity:(id)arg1 ;
-(void)willCreateSchema;
-(void)beginTransaction;
-(BOOL)hasMetadataTable;
-(void)didCreateSchema;
-(void)createTablesForEntities:(id)arg1 ;
-(void)createPrimaryKeyTableForModel:(id)arg1 knownEmpty:(BOOL)arg2 ;
-(void)createMetadata;
-(void)saveMetadata:(id)arg1 ;
-(void)rollbackTransaction;
-(id)metadataColumns;
-(void)setColumnsToFetch:(id)arg1 ;
-(id)newFetchedArray;
-(void)_raiseOptimisticLockingExceptionWithReason:(id)arg1 ;
-(id)initWithAdapter:(id)arg1 ;
-(void)awake;
-(void)sleep;
-(BOOL)hasOpenTransaction;
-(void)forceTransactionClosed;
-(void)_forceDisconnectOnError;
-(void)transactionDidBegin;
-(void)transactionDidCommit;
-(void)transactionDidRollback;
-(BOOL)canConnect;
-(BOOL)databaseIsEmpty;
-(void)selectAttributes:(id)arg1 fetchRequest:(id)arg2 lock:(BOOL)arg3 entity:(id)arg4 ;
-(id)sqlStatement;
-(void)setExclusiveLockingMode:(BOOL)arg1 ;
-(id)describeResults;
-(int)fetchResultSet:(void*)arg1 usingFetchPlan:(id)arg2 ;
-(void)performAdapterOperations:(id)arg1 ;
-(void)createSchema;
-(CFArrayRef)rawIntegerRowsForSQL:(id)arg1 ;
-(long long)fetchMaxPrimaryKeyForEntity:(id)arg1 ;
-(id)fetchTableNames;
-(id)fetchTableCreationSQL;
-(id)newFetchUUIDSForSubentitiesRootedAt:(id)arg1 ;
-(id)fetchMetadata;
-(long long)generatePrimaryKeysForEntity:(id)arg1 batch:(unsigned)arg2 ;
-(void)prepareForPrimaryKeyGeneration;
-(void)endPrimaryKeyGeneration;
-(BOOL)hasPrimaryKeyTable;
-(void)_performPostSaveTasks;
-(id)fetchUbiquityKnowledgeVector;
-(void)updateUbiquityKnowledgeVector:(id)arg1 ;
-(void)updateUbiquityKnowledgeForPeerWithID:(id)arg1 andTransactionNumber:(id)arg2 ;
-(void)addPeerRange:(id)arg1 ;
-(void)addPeerRangeForPeerID:(id)arg1 entityName:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 peerRangeStart:(id)arg5 peerRangeEnd:(id)arg6 ;
-(id)allPeerRanges;
-(id)createMapOfEntityNameToPKMaxForEntitiesFromUBRangeTable:(id)arg1 ;
-(id)createMapOfEntityNameToPKMaxForEntitiesFromPKTable:(id)arg1 ;
-(id)createMapOfEntityNameToPKMaxForEntities:(id)arg1 ;
-(void)setUbiquityTableValue:(id)arg1 forKey:(id)arg2 ;
-(id)ubiquityTableKeysAndValues;
-(id)ubiquityTableValueForKey:(id)arg1 ;
-(void)dropUbiquityTables;
-(void)dealloc;
-(void)commitTransaction;
-(void)connect;
-(void)disconnect;
-(void)finalize;
-(void)insertRow:(id)arg1 ;
-(void)deleteRow:(id)arg1 ;
@end

