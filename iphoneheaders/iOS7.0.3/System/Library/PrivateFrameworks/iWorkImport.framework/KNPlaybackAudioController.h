/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSKAVPlayerControllerDelegate.h>

@class KNSoundtrack, AVQueuePlayer, TSKAVQueuePlayerController;

@interface KNPlaybackAudioController : NSObject <TSKAVPlayerControllerDelegate> {

	KNSoundtrack* mSoundtrack;
	AVQueuePlayer* mAudioPlayer;
	TSKAVQueuePlayerController* mPlayerController;
	unsigned mAudioPlaybackIsQueued : 1;
	unsigned mIsObservingPlayerItemStatus : 1;
	BOOL mIsPlaying;
	BOOL mIsPaused;

}

@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
-(void)playerController:(id)arg1 playbackDidFailWithError:(id)arg2 ;
-(void)playbackDidStopForPlayerController:(id)arg1 ;
-(void)interruptAndReset;
-(id)initWithSoundtrack:(id)arg1 ;
-(void)startAtMediaIndex:(unsigned)arg1 time:(double)arg2 ;
-(void)p_initAudioPlaybackAtMediaIndex:(unsigned)arg1 ;
-(void)p_startAudioPlayback;
-(void)p_stopAudioPlayback;
-(void)p_tearDownAudioPlayback;
-(BOOL)isPlaying;
-(void)dealloc;
-(void)start;
-(void)resume;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)stop;
-(void)pause;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
@end

