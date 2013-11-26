/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaLibraryDataProviderPrivate.h>

@protocol OS_dispatch_queue;
@class NSString, NSArray, NSObject, ML3MusicLibrary, NSSet;

@interface MPMediaLibraryDataProviderML3 : NSObject <MPMediaLibraryDataProviderPrivate> {

	NSString* _uniqueIdentifier;
	NSObject<OS_dispatch_queue>* _backgroundTaskQueue;
	unsigned _backgroundTask;
	unsigned _backgroundTaskCount;
	BOOL _hasScheduledEventPosting;
	ML3MusicLibrary* _library;
	int _refreshState;

}

@property (nonatomic,retain) ML3MusicLibrary * library;                            //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) BOOL requiresAuthentication; 
@property (nonatomic,readonly) NSSet * propertiesToCache; 
@property (nonatomic,readonly) NSString * syncValidity; 
@property (nonatomic,readonly) NSString * databasePath; 
@property (nonatomic,readonly) BOOL isGeniusEnabled; 
@property (nonatomic,readonly) NSArray * preferredAudioLanguages; 
@property (nonatomic,readonly) NSArray * preferredSubtitleLanguages; 
@property (nonatomic,readonly) NSArray * localizedSectionIndexTitles; 
+(id)_unadjustedValueForMPProperty:(id)arg1 withDefaultValue:(id)arg2 ;
-(void)loadValueForAggregateFunction:(id)arg1 onCollectionsForProperty:(id)arg2 queryCriteria:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)loadValueForAggregateFunction:(id)arg1 onItemsForProperty:(id)arg2 queryCriteria:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)enumerateItemIdentifiersForQueryCriteria:(id)arg1 ordered:(BOOL)arg2 cancelBlock:(/*^block*/ id)arg3 usingBlock:(/*^block*/ id)arg4 ;
-(void)enumerateCollectionIdentifiersForQueryCriteria:(id)arg1 ordered:(BOOL)arg2 cancelBlock:(/*^block*/ id)arg3 usingBlock:(/*^block*/ id)arg4 ;
-(unsigned long long)currentEntityRevision;
-(long long)playlistGeneration;
-(BOOL)writable;
-(BOOL)hasMediaOfType:(unsigned)arg1 ;
-(BOOL)hasGeniusMixes;
-(BOOL)hasUbiquitousBookmarkableItems;
-(long long)itemPersistentIDForStoreID:(long long)arg1 ;
-(long long)addPlaylistWithValuesForProperties:(id)arg1 ;
-(BOOL)removeItemsWithIdentifiers:(long long*)arg1 count:(unsigned)arg2 hideFromPurchaseHistory:(BOOL)arg3 ;
-(BOOL)removePlaylistWithIdentifier:(long long)arg1 ;
-(void)populateLocationPropertiesOfItemWithIdentifier:(long long)arg1 withPath:(id)arg2 ;
-(id)preferredAudioLanguages;
-(id)preferredSubtitleLanguages;
-(void)performReadTransactionWithBlock:(/*^block*/ id)arg1 ;
-(id)syncValidity;
-(BOOL)itemExistsWithPersistentID:(unsigned long long)arg1 ;
-(BOOL)playlistExistsWithPersistentID:(unsigned long long)arg1 ;
-(id)itemResultSetForQueryCriteria:(id)arg1 ;
-(void)loadQueryCriteria:(id)arg1 hasItemsWithCompletionBlock:(/*^block*/ id)arg2 ;
-(void)loadQueryCriteria:(id)arg1 hasCollectionsWithCompletionBlock:(/*^block*/ id)arg2 ;
-(void)loadQueryCriteria:(id)arg1 countOfItemsWithCompletionBlock:(/*^block*/ id)arg2 ;
-(void)loadQueryCriteria:(id)arg1 countOfCollectionsWithCompletionBlock:(/*^block*/ id)arg2 ;
-(id)collectionResultSetForQueryCriteria:(id)arg1 ;
-(void)setLibraryEntityFilterPredicatesWithCloudFilteringType:(int)arg1 additionalFilterPredicates:(id)arg2 ;
-(void)setLibraryContainerFilterPredicatesWithCloudFilteringType:(int)arg1 additionalFilterPredicates:(id)arg2 ;
-(void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 itemBlock:(/*^block*/ id)arg2 collectionBlock:(/*^block*/ id)arg3 ;
-(void)loadProperties:(id)arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)loadBestArtworkImageDataForSize:(CGSize)arg1 ofItemWithIdentifier:(long long)arg2 atPlaybackTime:(double)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)loadProperties:(id)arg1 ofCollectionWithIdentifier:(long long)arg2 groupingType:(int)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofCollectionWithIdentifier:(long long)arg3 groupingType:(int)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofPlaylistWithIdentifier:(long long)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)addItemWithIdentifier:(long long)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)addItemsWithIdentifiers:(long long*)arg1 count:(unsigned)arg2 toPlaylistWithIdentifier:(long long)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)removeItemsWithIdentifiers:(long long*)arg1 atFilteredIndexes:(id)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)removeAllItemsInPlaylistWithIdentifier:(long long)arg1 ;
-(void)moveItemFromIndex:(unsigned)arg1 toIndex:(unsigned)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)_libraryContentsDidChange:(id)arg1 ;
-(void)_dynamicPropertiesDidChange:(id)arg1 ;
-(void)_invisiblePropertiesDidChange:(id)arg1 ;
-(void)_displayValuesDidChange:(id)arg1 ;
-(void)_syncGenerationDidChange:(id)arg1 ;
-(void)_libraryUIDDidChange:(id)arg1 ;
-(void)_postEvents;
-(void)performBackgroundTaskWithBlock:(/*^block*/ id)arg1 ;
-(id)adjustedValueForMPProperty:(id)arg1 ofEntity:(id)arg2 withDefaultValue:(id)arg3 ;
-(void)_loadValueForAggregateFunction:(id)arg1 entityClass:(Class)arg2 property:(id)arg3 query:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(void)_loadProperties:(id)arg1 ofEntityWithIdentifier:(long long)arg2 ML3EntityClass:(Class)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(id)ML3SystemFilterPredicatesWithGroupingType:(int)arg1 cloudTrackFilteringType:(int)arg2 additionalFilterPredicates:(id)arg3 ;
-(id)systemFilterPredicatesWithGroupingType:(int)arg1 cloudTrackFilteringType:(int)arg2 ;
-(BOOL)_dataProviderSupportsEntityChangeTracking;
-(void)_coalesceEvents;
-(BOOL)_removeEntitiesWithIdentifiers:(long long*)arg1 count:(unsigned)arg2 entityClass:(Class)arg3 ;
-(void)dealloc;
-(id)name;
-(id)uniqueIdentifier;
-(id)initWithLibrary:(id)arg1 ;
-(BOOL)performTransactionWithBlock:(/*^block*/ id)arg1 ;
-(id)library;
-(void)setLibrary:(id)arg1 ;
-(BOOL)isCurrentThreadInTransaction;
-(unsigned long long)syncGenerationID;
-(id)localizedSectionIndexTitles;
-(id)localizedSectionHeaderForSectionIndex:(unsigned)arg1 ;
-(id)databasePath;
-(void).cxx_destruct;
-(id)lastModifiedDate;
@end

