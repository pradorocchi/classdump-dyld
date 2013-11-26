/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:05:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MapsSyncedClient;
@class NSUbiquitousKeyValueStore, NSMutableDictionary, , NSArray, NSMutableArray, NSDictionary;

@interface MapsSyncManager : NSObject {

	NSUbiquitousKeyValueStore* _kvStore;
	NSMutableDictionary* _items;
	BOOL _initialSetup;
	BOOL _updatingFromKVS;
	NSMutableDictionary* _debugDictionary;
	<MapsSyncedClient>* _client;

}

@property (nonatomic,readonly) <MapsSyncedClient> * client;                            //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) NSArray * orderedItems; 
@property (nonatomic,readonly) NSArray * clientSyncedItems; 
@property (nonatomic,readonly) NSMutableArray * mutableClientSyncedItems; 
@property (readonly) BOOL invertedOrdering; 
@property (nonatomic,readonly) NSDictionary * items;                                   //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * debugDictionary;                    //@synthesize debugDictionary=_debugDictionary - In the implementation block
+(id)syncIdentifier;
-(void)mergeOnNextSync;
-(void)didRemoveSyncedItemAtIndex:(unsigned)arg1 ;
-(void)didAddSyncedItemAtIndex:(unsigned)arg1 ;
-(void)didRemoveSyncedItemsAtIndexes:(id)arg1 ;
-(void)didModifySyncedItem:(id)arg1 ;
-(id)_cloudKeyForItemIdentifier:(id)arg1 ;
-(id)orderedItems;
-(BOOL)useClientPositionForItem:(id)arg1 ;
-(void)_setupStore;
-(id)_kvsDictionaryRepresentation;
-(id)initWithClient:(id)arg1 debugDictionary:(id)arg2 ;
-(id)alreadySyncedKey;
-(void)kvstoreDidChange:(id)arg1 ;
-(id)clientSyncedItems;
-(void)_clientAddObserversAtIndexes:(id)arg1 ;
-(void)_clientDidAddItems:(id)arg1 atIndexes:(id)arg2 ;
-(void)_syncFromKVSAndMerge:(BOOL)arg1 changedKeys:(id)arg2 ;
-(void)_clientRemoveObserversAtIndexes:(id)arg1 ;
-(void)_synchronizeItemForKey:(id)arg1 ;
-(void)_clientRemoveItemsAtIndexes:(id)arg1 ;
-(id)mutableClientSyncedItems;
-(BOOL)invertedOrdering;
-(id)_itemFromClientItem:(id)arg1 ;
-(id)_itemAtIndex:(unsigned)arg1 ;
-(void)_clientInsertItems:(id)arg1 atIndexes:(id)arg2 ;
-(void)_clientUpdateItemsAtIndexes:(id)arg1 ;
-(id)_kvsDictionaryForKey:(id)arg1 ;
-(BOOL)_isConcernedByCloudKey:(id)arg1 ;
-(id)_itemIdentifierFromCloudKey:(id)arg1 ;
-(BOOL)_kvsDidModifyItem:(id)arg1 withCloudData:(id)arg2 ;
-(void)_kvsDidRemoveItems:(id)arg1 ;
-(id)_kvsDidAddItems:(id)arg1 ;
-(void)_checkAndDistributeItemsAroundIndex:(unsigned)arg1 ;
-(void)_clientDidRemoveItemsAtIndexes:(id)arg1 ;
-(void)_clientDidModifyItem:(id)arg1 ;
-(void)simulateKVSNotification:(id)arg1 ;
-(id)debugKeyForSyncedItem:(id)arg1 ;
-(BOOL)shouldSyncItemAtIndex:(unsigned)arg1 ;
-(void)dealloc;
-(id)items;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)reset;
-(void)stop;
-(id)debugDictionary;
-(void)setDebugDictionary:(id)arg1 ;
-(void)checkConsistency;
-(id)client;
-(id)initWithClient:(id)arg1 ;
@end

