/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:56 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSDownloadManagerObserverPrivate.h>

@class SSDownloadManager, NSSet, NSArray;

@interface SSDownloadQueue : NSObject <SSDownloadManagerObserverPrivate> {

	BOOL _autoFinishDownloads;
	SSDownloadManager* _downloadManager;
	CFSetRef _observers;

}

@property (readonly) NSSet * downloadKinds; 
@property (readonly) SSDownloadManager * downloadManager; 
@property (nonatomic,readonly) NSArray * downloads; 
@property (assign,nonatomic) BOOL shouldAutomaticallyFinishDownloads;              //@synthesize autoFinishDownloads=_autoFinishDownloads - In the implementation block
@property (getter=isUsingNetwork,readonly) BOOL usingNetwork; 
@property (nonatomic,readonly) NSArray * placeholderDownloads; 
@property (nonatomic,readonly) NSArray * preorders; 
+(id)mediaDownloadKinds;
+(id)softwareApplicationDownloadKinds;
+(id)cachedArtworkForDownload:(id)arg1 ;
+(void)cancelLoadArtworkForDownload:(id)arg1 ;
+(void)loadArtworkForDownload:(id)arg1 ;
+(void)setCachedArtwork:(id)arg1 forDownload:(id)arg2 ;
-(void)getDownloadsUsingBlock:(/*^block*/ id)arg1 ;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)downloadManagerDownloadsDidChange:(id)arg1 ;
-(void)downloadManagerNetworkUsageDidChange:(id)arg1 ;
-(id)downloads;
-(void)downloadManager:(id)arg1 downloadsDidChange:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)_handleDownloadsDidChange:(id)arg1 ;
-(id)initWithDownloadKinds:(id)arg1 ;
-(id)_initWithDownloadManagerOptions:(id)arg1 ;
-(void)_sendDownloadStatusChangedAtIndex:(int)arg1 ;
-(void)_handleDownloadsRemoved:(id)arg1 ;
-(void)_sendQueueNetworkUsageChanged;
-(void)_messageObserversWithFunction:(/*function pointer*/ void*)arg1 context:(void*)arg2 ;
-(void)_sendQueueChangedWithRemovals:(id)arg1 ;
-(id)initWithDownloadManagerOptions:(id)arg1 ;
-(BOOL)addDownload:(id)arg1 ;
-(void)addPlaceholderDownloads:(id)arg1 ;
-(id)downloadForItemIdentifier:(unsigned long long)arg1 ;
-(id)placeholderDownloads;
-(id)preorders;
-(void)removePlaceholderDownload:(id)arg1 ;
-(BOOL)startPreOrderDownload:(id)arg1 ;
-(void)_sendQueuePreOrdersChanged;
-(BOOL)shouldAutomaticallyFinishDownloads;
-(void)setShouldAutomaticallyFinishDownloads:(BOOL)arg1 ;
-(BOOL)cancelDownload:(id)arg1 ;
-(BOOL)isUsingNetwork;
-(id)downloadKinds;
-(id)downloadManager;
-(BOOL)reloadFromServer;
-(BOOL)canCancelDownload:(id)arg1 ;
@end

