/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:34 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol RCAVPreviewControllerObserver <NSObject>
@optional
-(void)previewControllerDidChangePreparingState:(id)arg1;
-(void)previewController:(id)arg1 playbackTimeDidUpdateToCurrentTime:(double)arg2;

@required
-(void)previewController:(id)arg1 playbackDidStopPlayingWithError:(id)arg2;
-(void)previewController:(id)arg1 playbackDidBeginWithRate:(float)arg2;
-(void)previewController:(id)arg1 playbackTimeDidJumpWithPreviousTime:(double)arg2;
@end

