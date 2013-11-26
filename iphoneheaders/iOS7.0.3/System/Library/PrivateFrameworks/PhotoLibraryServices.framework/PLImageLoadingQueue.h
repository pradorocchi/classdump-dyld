/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol PLImageLoadingQueueDelegate;
@class , PLImageCache, NSLock;

@interface PLImageLoadingQueue : NSObject {

	<PLImageLoadingQueueDelegate>* _delegate;
	PLImageCache* _cache;
	NSLock* _lock;

}

@property (assign,nonatomic) <PLImageLoadingQueueDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)stopLoading;
-(id)initWithImageCache:(id)arg1 ;
-(void)pauseLoading;
-(void)resumeLoading;
-(id)loadImageSynchronously:(BOOL)arg1 fromSource:(id)arg2 forAsset:(id)arg3 loadIfNeeded:(BOOL)arg4 ;
-(id)loadImageSynchronously:(BOOL)arg1 fromSource:(id)arg2 forAsset:(id)arg3 ;
-(id)loadImageSynchronously:(BOOL)arg1 fromSource:(id)arg2 forAsset:(id)arg3 priority:(int)arg4 ;
-(id)loadImageSynchronously:(BOOL)arg1 fromSource:(id)arg2 forAsset:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(id)loadImageSynchronously:(BOOL)arg1 fromSource:(id)arg2 forAsset:(id)arg3 priority:(int)arg4 completion:(/*^block*/ id)arg5 ;
-(void)cancelLoadFromSource:(id)arg1 forAsset:(id)arg2 ;
-(void)invalidateImageFromSource:(id)arg1 forAsset:(id)arg2 ;
-(void)imageIsAvailable:(id)arg1 forAsset:(id)arg2 fromSource:(id)arg3 completionBlocks:(id)arg4 ;
@end

