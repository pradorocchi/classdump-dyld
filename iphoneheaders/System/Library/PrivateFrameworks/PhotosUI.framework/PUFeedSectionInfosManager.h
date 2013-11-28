/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PLCloudFeedEntriesObserver.h>
#import <PhotoLibrary/PLCloudCommentsChangeObserver.h>
#import <PhotoLibraryServices/PLAssetChangeObserver.h>
#import <PhotosUI/PLPhotoLibraryShouldReloadObserver.h>

@protocol PUFeedSectionInfosManagerDelegate;
@class PLPhotoLibrary, NSMutableArray, NSMapTable, NSDate;

@interface PUFeedSectionInfosManager : NSObject <PLCloudFeedEntriesObserver, PLCloudCommentsChangeObserver, PLAssetChangeObserver, PLPhotoLibraryShouldReloadObserver> {

	PLPhotoLibrary* _photoLibrary;
	NSMutableArray* _sectionInfos;
	NSMapTable* _sectionInfosByCloudFeedEntry;
	NSDate* _earliestDate;
	NSMutableArray* _pendingFeedEntriesChangeNotifications;
	NSMutableArray* _pendingCommentsChangeNotifications;
	NSMutableArray* _pendingAssetsChangeNotifications;
	<PUFeedSectionInfosManagerDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <PUFeedSectionInfosManagerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)cloudCommentsDidChange:(id)arg1 ;
-(void)cloudFeedEntriesDidChange:(id)arg1 ;
-(void)assetsDidChange:(id)arg1 ;
-(void)shouldReload:(id)arg1 ;
-(void)_didFinishPostingNotifications:(id)arg1 ;
-(int)numberOfSectionInfos;
-(id)sectionInfoAtIndex:(int)arg1 ;
-(id)sectionInfosAtIndexes:(id)arg1 ;
-(int)indexOfSectionInfoForCloudFeedEntry:(id)arg1 ;
-(id)indexesOfInvitationsReceivedSectionInfos;
-(BOOL)hasEnoughCloudFeedAssetEntriesToDisplay;
-(int)numberOfInvitationsReceived;
-(void)loadSectionInfosAtIndexes:(id)arg1 ;
-(int)indexOfSectionInfo:(id)arg1 ;
-(void)_rebuildSectionInfos;
-(void)_getEarliestDate:(out id*)arg1 mostRecentEntries:(out id*)arg2 forBatchWithLatestDate:(id)arg3 ;
-(BOOL)_shouldPerformFullReloadForFeedEntriesChangeNotifications:(id)arg1 commentsChangeNotifications:(id)arg2 ;
-(void)_updateSectionInfosForFeedEntriesChangeNotifications:(id)arg1 commentsChangeNotifications:(id)arg2 assetsChangeNotifications:(id)arg3 ;
-(/*^block*/ id)_sectionInfoSortingComparator;
-(void).cxx_destruct;
@end
