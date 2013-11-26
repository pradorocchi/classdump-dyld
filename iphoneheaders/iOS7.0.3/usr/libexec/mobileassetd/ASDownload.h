/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/mobileassetd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <mobileassetd/mobileassetd-Structs.h>
#import <mobileassetd/ASDownload.h>

@protocol ASDownload <NSObject>
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled; 
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,getter=isStalled,nonatomic) BOOL stalled; 
@property (assign,nonatomic) BOOL downloadDidEnd; 
@property (nonatomic,readonly) _MobileAsset* mobileAsset; 
@property (nonatomic,readonly) NSURL * archiveURL; 
@property (nonatomic,readonly) NSURL * remoteURL; 
@property (nonatomic,readonly) NSURL * localCacheServerURL; 
@property (nonatomic,readonly) ASAssetRepository * assetRepository; 
@required
-(BOOL)isStalled;
-(id)assetRepository;
-(void)fireProgressWithOperation:(id)arg1 progress:(float)arg2 callbackState:(id)arg3;
-(int)resumeAfterDownload;
-(void)fireErrorWithError:(id)arg1;
-(void)downloadDidFinish;
-(void)downloadDidFail:(id)arg1;
-(void)fireErrorInDomain:(id)arg1 errorCode:(long)arg2 userInfo:(id)arg3;
-(BOOL)verifyFreeDiskSpace:(long long)arg1 error:(id*)arg2;
-(void)setStalled:(BOOL)arg1;
-(BOOL)downloadDidEnd;
-(void)setDownloadDidEnd:(BOOL)arg1;
-(id)archiveURL;
-(id)localCacheServerURL;
-(BOOL)isPaused;
-(void)setCancelled:(BOOL)arg1;
-(BOOL)isCancelled;
-(void)setPaused:(BOOL)arg1;
-(_MobileAsset*)mobileAsset;
-(id)remoteURL;
@end


@protocol OS_dispatch_semaphore, ASDownloadDelegate, OS_dispatch_queue;
@class NSURL, ASAssetRepository, NSDictionary, NSString, MobileAssetReport, NSObject, ;

@interface ASDownload : NSObject <ASDownload> {

	_MobileAsset* _asset;
	NSURL* _remoteURL;
	NSURL* _archiveURL;
	NSURL* _assetURL;
	NSURL* _localCacheServerURL;
	NSDictionary* _downloadOptions;
	NSString* _currentOperationString;
	float _lastProgressUpdate;
	bool _checkedForLocalCache;
	BOOL _downloadDidEnd;
	BOOL _cancelled;
	BOOL _paused;
	MobileAssetReport* _report;
	NSObject<OS_dispatch_semaphore>* _pauseSemaphore;
	<ASDownloadDelegate>* _delegate;
	/*^block*/ id _progressHandler;
	/*^block*/ id _pauseCompletion;
	/*^block*/ id _resumeCompletion;
	/*^block*/ id _cancelCompletion;
	NSObject<OS_dispatch_queue>* _queue;
	BOOL stalled;
	BOOL downloadDidEnd;
	BOOL _isPreinstalled;
	bool _isBackgrounded;
	ASAssetRepository* _assetRepository;
	NSString* _assetType;

}

@property (assign,nonatomic) BOOL isPreinstalled;                              //@synthesize isPreinstalled=_isPreinstalled - In the implementation block
@property (nonatomic,retain) <ASDownloadDelegate> * delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id progressHandler;                                 //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id pauseCompletion;                                 //@synthesize pauseCompletion=_pauseCompletion - In the implementation block
@property (nonatomic,copy) id resumeCompletion;                                //@synthesize resumeCompletion=_resumeCompletion - In the implementation block
@property (nonatomic,copy) id cancelCompletion;                                //@synthesize cancelCompletion=_cancelCompletion - In the implementation block
@property (nonatomic,retain) NSDictionary * downloadOptions;                   //@synthesize downloadOptions=_downloadOptions - In the implementation block
@property (nonatomic,retain) NSString * currentOperationString;                //@synthesize currentOperationString=_currentOperationString - In the implementation block
@property (nonatomic,retain) ASAssetRepository * assetRepository;              //@synthesize assetRepository=_assetRepository - In the implementation block
@property (nonatomic,retain) NSString * assetType;                             //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,readonly) NSDictionary * assetAttributes; 
@property (assign,nonatomic) bool isBackgrounded;                              //@synthesize isBackgrounded=_isBackgrounded - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                      //@synthesize paused=_paused - In the implementation block
@property (assign,getter=isStalled,nonatomic) BOOL stalled; 
@property (assign,nonatomic) BOOL downloadDidEnd; 
@property (nonatomic,readonly) _MobileAsset* mobileAsset;                      //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) NSURL * archiveURL;                             //@synthesize archiveURL=_archiveURL - In the implementation block
@property (nonatomic,readonly) NSURL * remoteURL;                              //@synthesize remoteURL=_remoteURL - In the implementation block
@property (nonatomic,readonly) NSURL * localCacheServerURL;                    //@synthesize localCacheServerURL=_localCacheServerURL - In the implementation block
+(id)downloadWithAsset:(_MobileAsset*)arg1 downloadOptions:(id)arg2 downloadDelegate:(id)arg3 assetRepository:(id)arg4 ;
+(id)downloadsDictQueue;
+(id)downloadsDict;
-(void)startBackgroundedDownload:(/*^block*/ id)arg1 ;
-(BOOL)isStalled;
-(void)pause:(/*^block*/ id)arg1 ;
-(id)initWithAsset:(_MobileAsset*)arg1 downloadOptions:(id)arg2 downloadDelegate:(id)arg3 assetRepository:(id)arg4 ;
-(void)_populatelocalCacheServerURL;
-(void)_startDownload:(/*^block*/ id)arg1 ;
-(id)assetRepository;
-(id)assetAttributes;
-(bool)isBackgrounded;
-(void)setIsBackgrounded:(bool)arg1 ;
-(void)fireProgressWithOperation:(id)arg1 progress:(float)arg2 callbackState:(id)arg3 ;
-(void)stopObservingDownload;
-(int)resumeAfterDownload;
-(int)populateURLs;
-(void)resetProgressWithOperation:(id)arg1 ;
-(void)logDownload:(BOOL)arg1 ;
-(void)fireErrorWithError:(id)arg1 ;
-(void)downloadDidFinish;
-(void)notifyPauseClients:(int)arg1 ;
-(void)setPauseCompletion:(/*^block*/ id)arg1 ;
-(void)pauseDidFinish:(int)arg1 ;
-(void)_pause:(/*^block*/ id)arg1 ;
-(void)resumeDidFinish:(int)arg1 ;
-(void)notifyResumeClients:(int)arg1 ;
-(void)setResumeCompletion:(/*^block*/ id)arg1 ;
-(void)notifyCancelClients:(int)arg1 ;
-(void)setCancelCompletion:(/*^block*/ id)arg1 ;
-(void)cancellationDidFinish:(int)arg1 ;
-(void)waitForUnpause;
-(int)verifyArchiveHash;
-(BOOL)isPreinstalled;
-(void)downloadDidFail:(id)arg1 ;
-(void)setCurrentOperationString:(id)arg1 ;
-(id)currentOperationString;
-(/*^block*/ id)cancelCompletion;
-(/*^block*/ id)pauseCompletion;
-(/*^block*/ id)resumeCompletion;
-(void)fireErrorInDomain:(id)arg1 errorCode:(long)arg2 userInfo:(id)arg3 ;
-(BOOL)verifyFreeDiskSpace:(long long)arg1 error:(id*)arg2 ;
-(void)setStalled:(BOOL)arg1 ;
-(BOOL)downloadDidEnd;
-(void)setDownloadDidEnd:(BOOL)arg1 ;
-(id)archiveURL;
-(id)localCacheServerURL;
-(void)usePreinstalledAssetArchive:(id)arg1 ;
-(void)setIsPreinstalled:(BOOL)arg1 ;
-(void)setAssetRepository:(id)arg1 ;
-(void)_cancel:(/*^block*/ id)arg1 ;
-(BOOL)isPaused;
-(/*^block*/ id)progressHandler;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)isCancelled;
-(void)setPaused:(BOOL)arg1 ;
-(void)setProgressHandler:(/*^block*/ id)arg1 ;
-(void)_resume:(/*^block*/ id)arg1 ;
-(_MobileAsset*)mobileAsset;
-(void)setDownloadOptions:(id)arg1 ;
-(id)downloadOptions;
-(void)cancel:(/*^block*/ id)arg1 ;
-(void)resume:(/*^block*/ id)arg1 ;
-(id)remoteURL;
-(void)startDownload:(/*^block*/ id)arg1 ;
-(id)assetType;
-(void)_downloadDidFail:(id)arg1 ;
-(void)setAssetType:(id)arg1 ;
@end

