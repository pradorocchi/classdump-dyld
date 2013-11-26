/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:14 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetInspectorLoader.h>

@protocol OS_dispatch_queue;
@class AVWeakReference, NSDictionary, AVAssetInspector, NSObject, NSMutableArray, AVAssetCache, NSURL;

@interface AVFigAssetInspectorLoader : AVAssetInspectorLoader {

	AVWeakReference* _weakReferenceToAsset;
	NSDictionary* _initializationOptions;
	OpaqueFigAssetRef _figAsset;
	long _figAssetCreationStatus;
	AVAssetInspector* _assetInspector;
	long _assetInspectorOnce;
	NSObject<OS_dispatch_queue>* _completionHandlerQueue;
	OpaqueFigSimpleMutexRef _loadingMutex;
	OpaqueFigSimpleMutexRef _playabilityMutex;
	OpaqueFigSimpleMutexRef _savedPhotosAlbumValidationMutex;
	OpaqueFigSemaphoreRef _playabilityValidationSemaphore;
	int _playableStatus;
	long _playableResult;
	BOOL _playable;
	OpaqueFigSemaphoreRef _cameraRollValidationSemaphore;
	int _compatibleWithSavedPhotosAlbumStatus;
	long _compatibleWithSavedPhotosAlbumResult;
	BOOL _compatibleWithSavedPhotosAlbum;
	NSMutableArray* _loadingBatches;
	BOOL _loadingCanceled;
	AVAssetCache* _assetCache;
	BOOL _shouldMatchDataInCacheByURLPathComponentOnly;
	BOOL _shouldMatchDataInCacheByURLWithoutQueryComponent;
	NSURL* _downloadDestinationURL;
	NSDictionary* _validationPlist;
	unsigned _referenceRestrictions;
	NSURL* _URL;
	BOOL _shouldOptimizeAccessForLinearMoviePlayback;

}

@property (nonatomic,readonly) NSDictionary * validationPlist;              //@synthesize validationPlist=_validationPlist - In the implementation block
+(void)_mapAssetKeys:(id)arg1 toFigAssetPropertySet:(id)arg2 figAssetTrackPropertySet:(id)arg3 callerName:(id)arg4 ;
+(id)_figAssetPropertiesForKeys;
+(id)_figAssetTrackPropertiesForKeys;
-(void)cancelLoading;
-(OpaqueFigAssetRef)_figAsset;
-(void)_addFigAssetNotifications;
-(void)_removeFigAssetNotifications;
-(void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1 ;
-(unsigned)referenceRestrictions;
-(BOOL)isExportable;
-(BOOL)isComposable;
-(OpaqueFigFormatReaderRef)_formatReader;
-(id)initWithURL:(id)arg1 options:(id)arg2 forAsset:(id)arg3 ;
-(id)assetInspector;
-(id)chapterGroupInfo;
-(BOOL)shouldMatchDataInCacheByURLPathComponentOnly;
-(BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;
-(id)downloadDestinationURL;
-(BOOL)_shouldOptimizeAccessForLinearMoviePlayback;
-(OpaqueFigSimpleMutexRef)_loadingMutex;
-(void)_createFigAsset;
-(int)_loadStatusForProperty:(id)arg1 figAsset:(OpaqueFigAssetRef)arg2 returningError:(int*)arg3 ;
-(BOOL)_loadValueOfPlayableByWaitingForAsyncValidationIfNeeded:(BOOL)arg1 ;
-(BOOL)_loadValueOfCompatibleWithSavedPhotosAlbumlByWaitingForAsyncValidationIfNeeded:(BOOL)arg1 ;
-(id)_completionHandlerQueue;
-(id)_loadingBatches;
-(OpaqueFigSemaphoreRef)_playabilityValidationSemaphore;
-(OpaqueFigSemaphoreRef)_cameraRollValidationSemaphore;
-(void)_invokeCompletionHandlerForLoadingBatches:(id)arg1 ;
-(id)validationPlist;
-(id)resolvedURL;
-(id)lyrics;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(id)assetCache;
-(BOOL)_isStreaming;
-(BOOL)isPlayable;
-(unsigned long long)downloadToken;
-(void)dealloc;
-(SCD_Struct_CM4)duration;
-(id)URL;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(int)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(BOOL)hasProtectedContent;
-(BOOL)isReadable;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(void)finalize;
@end

