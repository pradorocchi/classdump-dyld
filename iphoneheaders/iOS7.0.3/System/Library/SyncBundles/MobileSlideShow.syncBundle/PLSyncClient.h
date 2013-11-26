/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SyncBundles/MobileSlideShow.syncBundle/MobileSlideShow
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileSlideShow/MobileSlideShow-Structs.h>
#import <AirTraffic/ATClient.h>

@protocol OS_dispatch_group, OS_dispatch_source;
@class NSMutableDictionary, PLPhotoLibrary, PLSAlbum, NSMutableArray, PLSLibraryChangeSnapshot, NSObject;

@interface PLSyncClient : NSObject <ATClient> {

	NSMutableDictionary* _albumsAndEvents;
	PLPhotoLibrary* _library;
	PLSAlbum* _masterAlbum;
	NSMutableArray* _outstandingAssets;
	NSMutableArray* _outstandingSyncJobs;
	NSMutableDictionary* _uuidToPLSAsset;
	NSMutableDictionary* _albumUUIDToObjectIDMap;
	NSMutableDictionary* _assetUUIDtoSortToken;
	PLSLibraryChangeSnapshot* _libraryChangeSnapshot;
	CFDictionaryRef _pendingAssetsPerContainer;
	NSObject<OS_dispatch_group>* _libraryGroup;
	NSMutableDictionary* _restorePathToAssetGroup;
	NSMutableDictionary* _restoreContext;
	unsigned _syncRequested : 1;
	BOOL _isResync;
	NSObject<OS_dispatch_source>* _memoryPressureSource;
	double _lastSyncJobsSaveTime;

}

@property (retain) PLSAlbum * masterAlbum;                                        //@synthesize masterAlbum=_masterAlbum - In the implementation block
@property (retain) NSMutableArray * outstandingAssets;                            //@synthesize outstandingAssets=_outstandingAssets - In the implementation block
@property (retain) NSMutableArray * outstandingSyncJobs;                          //@synthesize outstandingSyncJobs=_outstandingSyncJobs - In the implementation block
@property (retain) NSMutableDictionary * uuidToPLSAsset;                          //@synthesize uuidToPLSAsset=_uuidToPLSAsset - In the implementation block
@property (retain) NSMutableDictionary * restorePathToAssetGroup;                 //@synthesize restorePathToAssetGroup=_restorePathToAssetGroup - In the implementation block
@property (retain) PLSLibraryChangeSnapshot * libraryChangeSnapshot;              //@synthesize libraryChangeSnapshot=_libraryChangeSnapshot - In the implementation block
@property (assign) BOOL isResync;                                                 //@synthesize isResync=_isResync - In the implementation block
@property (nonatomic,readonly) double _timeSinceLastSave; 
+(id)pathToRestoreContext;
-(void)_clearSyncState;
-(id)masterAlbum;
-(void)setIsResync:(BOOL)arg1 ;
-(void)setMasterAlbum:(id)arg1 ;
-(void)_stopListeningToMemoryPressureEvents;
-(void)setOutstandingSyncJobs:(id)arg1 ;
-(void)_uninitializeLibrary;
-(unsigned long long)_assetCountInManagedObjectContext:(id)arg1 forSyncedAssets:(BOOL)arg2 ;
-(unsigned long long)_imageFileBlockCountInManagedObjectContext:(id)arg1 forSyncedAssets:(BOOL)arg2 ;
-(unsigned long long)_extraFileBlockCount;
-(void)_startListeningToMemoryPressureEvents;
-(void)_initializeLibrary;
-(void)_enqueueRemoteSyncCleanupJobBeforeDate:(id)arg1 withFinishedBlock:(/*^block*/ id)arg2 ;
-(void)_saveOutstandingSyncJobs;
-(id)outstandingSyncJobs;
-(void)_enqueueSyncSaveJob:(id)arg1 ;
-(id)_albumURIForAlbumUUID:(id)arg1 ;
-(double)_timeSinceLastSave;
-(id)_allAssetDirectoryURLs;
-(id)_allAssetMetricBaseURLs;
-(BOOL)isResync;
-(id)_onDeviceAssetsByUUID;
-(id)_onDeviceAlbumsByUUID;
-(id)_addAlbumNamed:(id)arg1 uuid:(id)arg2 kindValue:(int)arg3 ;
-(id)libraryChangeSnapshot;
-(void)_reconcileDeviceAlbumListSortingWithAlbums:(id)arg1 iTunesAlbumOrder:(id)arg2 ;
-(void)_persistAssetAlbumOrderStructures;
-(void)_reorderAlbumListProxy:(id)arg1 withAlbumsAtIndexes:(id)arg2 inNewOrder:(id)arg3 ;
-(void)_incrementPendingCountForContainerUUID:(id)arg1 ;
-(id)outstandingAssets;
-(void)_reconcileAlbums:(id)arg1 ;
-(void)_reconcileAssets:(id)arg1 ;
-(void)_setPendingAlbumCounts:(id)arg1 ;
-(void)_createAlbumUUIDToObjectIDMap:(id)arg1 ;
-(void)_initializeOutstandingAssets;
-(void)_pullOutMasterAlbumFromAlbumsAndEvents;
-(void)setUuidToPLSAsset:(id)arg1 ;
-(void)setLibraryChangeSnapshot:(id)arg1 ;
-(void)_reconcileMetadata;
-(id)_neededRestoreAssets;
-(void)setOutstandingAssets:(id)arg1 ;
-(void)_clearPendingCounts;
-(void)_clearEmptySyncAlbums;
-(void)_cleanupAfterSyncOrRestoreWithError:(id)arg1 ;
-(void)_restoreAssetTransfer:(id)arg1 succeeded:(BOOL)arg2 withError:(id)arg3 ;
-(void)_syncAssetTransfer:(id)arg1 succeeded:(BOOL)arg2 withError:(id)arg3 ;
-(void)setRestorePathToAssetGroup:(id)arg1 ;
-(id)restorePathToAssetGroup;
-(void)_loadRestoreContext;
-(id)_restorePathsFromIncompletePaths:(id)arg1 ;
-(id)_restorePathsFromBackupList:(id)arg1 ;
-(void)_writeRestoreContext;
-(id)_getAssetsToRestoreFromPaths:(id)arg1 ;
-(void)_populateRestorePathToAssetGroupDictionary:(id)arg1 withUUIDPathDict:(id)arg2 ;
-(id)uuidToPLSAsset;
-(void)dealloc;
-(id)currentSyncAnchor;
-(BOOL)prepareForSyncWithHostAnchor:(id)arg1 progressCallback:(/*^block*/ id)arg2 error:(id*)arg3 ;
-(BOOL)reconcileSync:(unsigned)arg1 withNewAnchor:(id)arg2 progressCallback:(/*^block*/ id)arg3 error:(id*)arg4 ;
-(void)syncEndedWithSuccess:(BOOL)arg1 ;
-(void)restoreEndedWithError:(id)arg1 ;
-(id)outstandingAssetTransfers;
-(void)assetTransfer:(id)arg1 succeeded:(BOOL)arg2 withError:(id)arg3 ;
-(void)assetTransferEndedWithSuccess:(BOOL)arg1 ;
-(void)pathsToBackup:(id*)arg1 pathsNotToBackup:(id*)arg2 ;
-(id)installedAssetMetrics;
-(id)supportedDataclasses;
@end

