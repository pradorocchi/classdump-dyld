/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:34 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
#import <VoiceMemos/VoiceMemos-Structs.h>
@class NSObject, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSError;

@interface RCWaveformGenerator : NSObject {

	int _state;
	NSObject<OS_dispatch_queue>* _queue;
	NSObject<OS_dispatch_queue>* _notificationQueue;
	double _totalDigestedTime;
	double _totalFlushedTime;
	NSMutableArray* _weakObservers;
	NSMutableDictionary* _internalFinishedLoadingBlocksByUUID;
	NSOperationQueue* _loadingQueue;
	PowerMeter _samplePowerMeter;
	BOOL _isSampleRateKnown;
	vector<float, std::__1::allocator<float> >* _powerLevelBuffer;
	unsigned _framesConsumedSinceLastFlush;
	int _framesNeededForNextDB;
	int _framesNeededForNextFlush;
	NSError* _loadingError;
	BOOL _canceled;
	int _overviewUnitsPerSecond;
	double _segmentFlushInterval;

}

@property (nonatomic,readonly) double segmentFlushInterval;              //@synthesize segmentFlushInterval=_segmentFlushInterval - In the implementation block
@property (assign,nonatomic) int overviewUnitsPerSecond;                 //@synthesize overviewUnitsPerSecond=_overviewUnitsPerSecond - In the implementation block
@property (nonatomic,readonly) int state;                                //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL canceled;                            //@synthesize canceled=_canceled - In the implementation block
@property (nonatomic,readonly) double totalDigestedTime; 
@property (nonatomic,readonly) double totalFlushedTime; 
-(BOOL)_isCanceled;
-(int)state;
-(id).cxx_construct;
-(BOOL)canceled;
-(void)_appendPowerMeterValuesFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_appendAveragePowerLevel:(float)arg1 ;
-(void)_appendPowerMeterValuesFromDataInAudioFile:(id)arg1 ;
-(void)_appendAveragePowerLevelsByDigestingWaveform:(id)arg1 ;
-(void)_performObserversBlock:(/*^block*/ id)arg1 ;
-(void)_finishLoadingByTerminating:(BOOL)arg1 beforeDate:(id)arg2 loadingFinishedBlock:(/*^block*/ id)arg3 ;
-(void)_performLoadingFinishedBlock:(/*^block*/ id)arg1 internalBlockUUID:(id)arg2 isTimeout:(BOOL)arg3 ;
-(void)_performInternalFinishedLoadingBlocksAndFinishObservers;
-(id)_onQueueCopySegmentOutputObservers;
-(void)_onLoadingQueue_appendAveragePowerLevel:(float)arg1 ;
-(void)_onLoadingQueue_appendPowerMeterValuesFromRawAudioData:(void*)arg1 frameCount:(int)arg2 format:(const AudioStreamBasicDescription*)arg3 ;
-(void)_onLoadingQueue_flushRemainingData;
-(void)_onLoadingQueue_appendSegment:(id)arg1 ;
-(void)_onLoadingQueue_flushWithNextSegmentWithEndTime:(double)arg1 ;
-(void)_onLoadingQueue_flushWaveformSegment:(id)arg1 ;
-(id)initWithSegmentFlushInterval:(double)arg1 ;
-(void)addSegmentOutputObserver:(id)arg1 ;
-(void)removeSegmentOutputObserver:(id)arg1 ;
-(BOOL)appendAveragePowerLevelsByDigestingSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)appendAveragePowerLevel:(float)arg1 ;
-(BOOL)appendAveragePowerLevelsByDigestingContentsAudioFileURL:(id)arg1 ;
-(BOOL)appendAveragePowerLevelsByDigestingWaveform:(id)arg1 ;
-(void)beginLoading;
-(void)terminateLoadingImmediately;
-(void)finishLoadingBeforeDate:(id)arg1 loadingFinishedBlock:(/*^block*/ id)arg2 ;
-(double)totalFlushedTime;
-(double)totalDigestedTime;
-(double)segmentFlushInterval;
-(int)overviewUnitsPerSecond;
-(void)setOverviewUnitsPerSecond:(int)arg1 ;
-(void).cxx_destruct;
@end

