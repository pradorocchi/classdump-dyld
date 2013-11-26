/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileCoreServices/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSCountedSet, ISOperationQueue, NSMutableDictionary, WorkspaceDownloadObserver;

@interface DownloadController : NSObject <LSApplicationWorkspaceObserverProtocol> {

	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSObject<OS_dispatch_queue>* _externalQueue;
	NSMutableArray* _managerClients;
	NSCountedSet* _networkKinds;
	ISOperationQueue* _thumbnailOperationQueue;
	NSMutableDictionary* _thumbnailRequestsByDownloadID;
	WorkspaceDownloadObserver* _workspaceDownloadObserver;

}
+(id)controller;
-(void)notifyClientsOfExternalPropertyChanges:(id)arg1 forDownloadID:(long long)arg2 downloadKind:(id)arg3 ;
-(void)notifyClientsOfPropertyChanges:(id)arg1 forDownloadID:(long long)arg2 downloadKind:(id)arg3 ;
-(void)notifyClientsOfChangeset:(id)arg1 ;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(void)observeXPCServer:(id)arg1 ;
-(void)_clientDisconnectNotification:(id)arg1 ;
-(void)cancelDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)pauseDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)resumeDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 usingReplyBlock:(/*^block*/ id)arg3 ;
-(void)_sendDownloadKindsUsingNetwork:(id)arg1 ;
-(void)cancelAllDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)finishDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getActiveDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getDownloadAssetPropertiesWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getDownloadAssetsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getDownloadKindsUsingNetworkWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getDownloadPropertiesWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getEntityExistsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)insertDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)loadDownloadThumbnailWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)moveDownloadWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)prioritizeDownloadWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)reevaluateBackgroundDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)registerClientDownloadManager:(id)arg1 connection:(id)arg2 ;
-(void)removePersistenceIDWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)retryRestoreDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)setAssetPropertiesWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)setDownloadHandlerWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)setDownloadPropertiesWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)setDownloadsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getCellularNetworkAllowed:(id)arg1 connection:(id)arg2 ;
-(void)setCellularNetworkAllowed:(id)arg1 connection:(id)arg2 ;
-(void)finishSessionWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)getSessionPropertiesWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)connectDownloadHandlerWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)resetDisavowedSessionsWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)setClientDownloadHandlerWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)setSessionProgressWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)setHandlerPropertiesWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)setSessionPropertiesWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)setSessionStatusDescriptionWithMessage:(id)arg1 connection:(id)arg2 ;
-(id)_downloadPersistentIDsFromBundleIDs:(id)arg1 ;
-(BOOL)_pauseDownloads:(id)arg1 isForced:(BOOL)arg2 client:(id)arg3 ;
-(BOOL)_resumeDownloads:(id)arg1 client:(id)arg2 ;
-(BOOL)_cancelDownloads:(id)arg1 client:(id)arg2 ;
-(void)_retryRestoreIfNecessaryForTransaction:(id)arg1 ;
-(void)_finishLoadThumbnailOperation:(id)arg1 ;
-(BOOL)_prioritizeDownload:(id)arg1 aboveDownload:(id)arg2 client:(id)arg3 error:(id*)arg4 ;
-(void)_handleSessionMessage:(id)arg1 connection:(id)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(void)_handleSessionMessage:(id)arg1 connection:(id)arg2 usingReplyBlock:(/*^block*/ id)arg3 ;
-(id)_managerClientForConnection:(id)arg1 ;
-(void)beginUsingNetworkForDownloadKind:(id)arg1 ;
-(void)endUsingNetworkForDownloadKind:(id)arg1 ;
-(void)retryDuetBlockedDownloads;
-(void)applicationInstallsDidCancel:(id)arg1 ;
-(void)applicationInstallsDidPause:(id)arg1 ;
-(void)applicationInstallsDidPrioritize:(id)arg1 ;
-(void)applicationInstallsDidResume:(id)arg1 ;
-(void)applicationInstallsDidStart:(id)arg1 ;
-(void)applicationInstallsDidUpdateIcon:(id)arg1 ;
-(void)applicationInstallsDidChange:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)start;
-(void)_dispatchAsync:(/*^block*/ id)arg1 ;
@end

