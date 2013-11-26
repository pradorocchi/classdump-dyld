/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:02 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLAlbumProtocol.h>
#import <PhotoLibraryServices/PLIndexMappingCache.h>
#import <PhotoLibraryServices/PLDerivedAlbumOrigin.h>

@protocol PLIndexMappingCache;
@class NSFetchRequest, NSMutableOrderedSet, NSCache, PLManagedAlbum, NSObject, NSString, NSOrderedSet, PLManagedAsset, NSArray, NSDate, NSNumber, UIImage, NSDictionary, NSURL;

@interface PLInFlightAssetsAlbum : NSObject <PLAlbumProtocol, PLIndexMappingCache, PLDerivedAlbumOrigin> {

	NSFetchRequest* _fetchRequest;
	NSMutableOrderedSet* _albumOIDs;
	NSMutableOrderedSet* _inflightAssets;
	unsigned _photosCount;
	unsigned _videosCount;
	NSCache* __assetCache;
	PLManagedAlbum* _backingAlbum;
	BOOL _sessionLimited;
	id _weak_assets;
	NSObject<PLIndexMappingCache>* _derivedAlbums[5];
	BOOL __notificationsEnabled;

}

@property (nonatomic,readonly) PLManagedAlbum * backingAlbum;                            //@synthesize backingAlbum=_backingAlbum - In the implementation block
@property (assign,nonatomic) BOOL sessionLimited; 
@property (assign,nonatomic) NSMutableOrderedSet * _assets; 
@property (assign,nonatomic) BOOL _notificationsEnabled;                                 //@synthesize _notificationsEnabled=__notificationsEnabled - In the implementation block
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSOrderedSet * assets; 
@property (nonatomic,readonly) unsigned approximateCount; 
@property (nonatomic,readonly) unsigned assetsCount; 
@property (nonatomic,readonly) unsigned photosCount; 
@property (nonatomic,readonly) unsigned videosCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (nonatomic,readonly) BOOL canShowComments; 
@property (nonatomic,readonly) BOOL canShowAvalancheStacks; 
@property (nonatomic,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) NSNumber * kind; 
@property (nonatomic,readonly) int kindValue; 
@property (nonatomic,readonly) NSMutableOrderedSet * mutableAssets; 
@property (assign,nonatomic) BOOL hasUnseenContentBoolValue; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) UIImage * posterImage; 
@property (nonatomic,readonly) BOOL isLibrary; 
@property (nonatomic,readonly) BOOL isCameraAlbum; 
@property (nonatomic,readonly) BOOL isPanoramasAlbum; 
@property (nonatomic,readonly) BOOL isWallpaperAlbum; 
@property (nonatomic,readonly) BOOL isPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isPendingPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isStandInAlbum; 
@property (nonatomic,readonly) BOOL isOwnedCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isMultipleContributorCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL canContributeToCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL shouldDeleteWhenEmpty; 
@property (nonatomic,retain) NSDictionary * slideshowSettings; 
@property (nonatomic,retain) NSString * importSessionID; 
@property (nonatomic,readonly) NSURL * groupURL; 
@property (nonatomic,readonly) id sortingComparator; 
@property (nonatomic,readonly) id sectioningComparator; 
@property (assign,nonatomic) int pendingItemsCount; 
@property (assign,nonatomic) int pendingItemsType; 
@property (nonatomic,readonly) <NSObject><NSCopying> * cachedIndexMapState; 
+(NSObject*)inFlightAssetsAlbumWithBackingAlbum:(NSObject*)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)description;
-(BOOL)isEmpty;
-(id)title;
-(id)kind;
-(id)localizedTitle;
-(void)addInFlightAsset:(id)arg1 ;
-(void)removeInflightAssets:(id)arg1 ;
-(BOOL)isCameraAlbum;
-(int)kindValue;
-(BOOL)isCloudSharedAlbum;
-(id)titleForSectionStartingAtIndex:(unsigned)arg1 ;
-(id)displayableIndexesForCount:(unsigned)arg1 ;
-(void)reducePendingItemsCountBy:(unsigned)arg1 ;
-(void)batchFetchAssets:(id)arg1 ;
-(id)filteredIndexesForPredicate:(id)arg1 ;
-(void)setUINotificationsEnabled:(BOOL)arg1 ;
-(id)mutableAssets;
-(BOOL)hasUnseenContentBoolValue;
-(void)setHasUnseenContentBoolValue:(BOOL)arg1 ;
-(id)posterImage;
-(BOOL)isLibrary;
-(BOOL)isPanoramasAlbum;
-(BOOL)isWallpaperAlbum;
-(BOOL)isPhotoStreamAlbum;
-(BOOL)isPendingPhotoStreamAlbum;
-(BOOL)isStandInAlbum;
-(BOOL)isOwnedCloudSharedAlbum;
-(BOOL)isMultipleContributorCloudSharedAlbum;
-(BOOL)canContributeToCloudSharedAlbum;
-(BOOL)shouldDeleteWhenEmpty;
-(id)slideshowSettings;
-(void)setSlideshowSettings:(id)arg1 ;
-(id)importSessionID;
-(void)setImportSessionID:(id)arg1 ;
-(id)groupURL;
-(/*^block*/ id)sortingComparator;
-(/*^block*/ id)sectioningComparator;
-(int)pendingItemsCount;
-(void)setPendingItemsCount:(int)arg1 ;
-(int)pendingItemsType;
-(void)setPendingItemsType:(int)arg1 ;
-(BOOL)canPerformEditOperation:(int)arg1 ;
-(id)uuid;
-(id)assets;
-(unsigned)approximateCount;
-(unsigned)assetsCount;
-(unsigned)photosCount;
-(unsigned)videosCount;
-(id)keyAsset;
-(void)setKeyAsset:(id)arg1 ;
-(id)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(id)arg1 ;
-(id)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(id)arg1 ;
-(BOOL)canShowComments;
-(BOOL)canShowAvalancheStacks;
-(id)localizedLocationNames;
-(unsigned)batchSize;
-(id)fetchRequest;
-(unsigned)_fetchedCountForAssetsOfKind:(short)arg1 ;
-(unsigned)countForAssetsOfKind:(short)arg1 ;
-(void)unregisterAllDerivedAlbums;
-(void)enumerateDerivedAlbums:(/*^block*/ id)arg1 ;
-(void)registerDerivedAlbum:(NSObject*)arg1 ;
-(BOOL)hasDerivedIndexMappers;
-(id)assetsByObjectIDAtIndexes:(id)arg1 ;
-(id)backingAlbum;
-(void)set_assets:(id)arg1 ;
-(id)_assets;
-(BOOL)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2 ;
-(Class)derivedChangeNotificationClass;
-(id)currentStateForChange;
-(id)cachedIndexMapState;
-(id)initWithBackingAlbum:(NSObject*)arg1 ;
-(BOOL)sessionLimited;
-(id)_albumOIDs;
-(void)_resetAlbumOIDs;
-(id)managedObjectForOID:(id)arg1 ;
-(id)managedObjectsForOIDs:(id)arg1 ;
-(id)managedObjectsAtAlbumIndexes:(id)arg1 ;
-(id)managedObjectAtAlbumIndex:(unsigned)arg1 ;
-(void)setSessionLimited:(BOOL)arg1 ;
-(void)clearAssetCaches;
-(unsigned)countOfMergedAssets;
-(unsigned)indexInMergedAssetsOfObject:(id)arg1 ;
-(id)objectInMergedAssetsAtIndex:(unsigned)arg1 ;
-(void)getMergedAssets:(id*)arg1 range:(NSRange)arg2 ;
-(void)insertObject:(id)arg1 inMergedAssetsAtIndex:(unsigned)arg2 ;
-(void)removeObjectFromMergedAssetsAtIndex:(unsigned)arg1 ;
-(void)startNewSession;
-(BOOL)_notificationsEnabled;
-(void)set_notificationsEnabled:(BOOL)arg1 ;
@end

