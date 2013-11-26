/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:34 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_source;
#import <VoiceMemos/VoiceMemos-Structs.h>
@class AVQueue, NSMutableArray, NSTimer, NSObject, AVItem;

@interface RCAVPreviewController : NSObject {

	AVQueue* _avQueue;
	double _currentTimeTarget;
	NSMutableArray* _weakObservers;
	NSTimer* _updateTimer;
	NSObject<OS_dispatch_source>* _monitorUnderlyingAssetSource;
	BOOL _preparingToPlay;
	AVItem* _avItem;
	double _currentTimeDelegateUpdateRate;

}

@property (assign,nonatomic) double currentTimeDelegateUpdateRate;                         //@synthesize currentTimeDelegateUpdateRate=_currentTimeDelegateUpdateRate - In the implementation block
@property (setter=setAVItem:,nonatomic,retain) AVItem * avItem;                            //@synthesize avItem=_avItem - In the implementation block
@property (assign,nonatomic) double currentTime; 
@property (nonatomic,readonly) float rate; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (getter=isPreparingToPlay,nonatomic,readonly) BOOL preparingToPlay;              //@synthesize preparingToPlay=_preparingToPlay - In the implementation block
-(double)currentTime;
-(void)setCurrentTime:(double)arg1 ;
-(BOOL)isPlaying;
-(void)setAVItem:(id)arg1 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)stop;
-(void)pause;
-(void)addObserver:(id)arg1 ;
-(id)avItem;
-(void)_updateTimerFired:(id)arg1 ;
-(float)rate;
-(void)_controllerConnectionInvalidatedNotification:(id)arg1 ;
-(void)_controllerPlaybackRateDidChangeNotification:(id)arg1 ;
-(void)_controllerPlaybackTimeDidJumpNotification:(id)arg1 ;
-(void)_itemPlaybackFailedNotification:(id)arg1 ;
-(void)_removeTimerForced:(BOOL)arg1 ;
-(void)_stopMonitoringUnderylingAssetPath;
-(void)_handleUnderlyingAssetDisappeared;
-(BOOL)_monitorUnderlyingAssetPath:(id)arg1 assetDisappearedBlock:(/*^block*/ id)arg2 ;
-(void)reloadItem;
-(void)_prepareQueueWithPlaybackTimeRange:(SCD_Struct_RC0)arg1 ;
-(void)playOrRestart;
-(id)_avControllerMakeActive;
-(SCD_Struct_RC0)_assetPlaybackTimeRange;
-(void)_handleDidStopPlaybackWithError:(id)arg1 ;
-(void)_addTimerForced:(BOOL)arg1 ;
-(id)_avControllerIfActive;
-(void)_performWithObserversBlock:(/*^block*/ id)arg1 ;
-(void)_postDelegateUpdate;
-(void)playWithTimeRange:(SCD_Struct_RC0)arg1 startTime:(double)arg2 ;
-(void)setPreparingToPlay:(BOOL)arg1 notifyObservers:(BOOL)arg2 ;
-(double)currentTimeDelegateUpdateRate;
-(void)setCurrentTimeDelegateUpdateRate:(double)arg1 ;
-(BOOL)isPreparingToPlay;
-(void).cxx_destruct;
@end

