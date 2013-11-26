/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol AVCaptureFileOutputRecordingDelegateAVCaptureFileOutputPauseResumeDelegate;
@class , NSURL, NSArray;

@interface AVCaptureFileOutputDelegateWrapper : NSObject {

	<AVCaptureFileOutputRecordingDelegate><AVCaptureFileOutputPauseResumeDelegate>* _delegate;
	NSURL* _outputFileURL;
	BOOL _receivedDidStartRecording;
	BOOL _receivedDidStopRecording;
	long _didStopRecordingError;
	NSArray* _metadata;
	NSArray* _connections;

}

@property (readonly) NSURL * outputFileURL;                                                                                  //@synthesize outputFileURL=_outputFileURL - In the implementation block
@property (retain) NSArray * metadata;                                                                                       //@synthesize metadata=_metadata - In the implementation block
@property (readonly) <AVCaptureFileOutputRecordingDelegate><AVCaptureFileOutputPauseResumeDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSArray * connections;                                                                                  //@synthesize connections=_connections - In the implementation block
@property (assign) BOOL receivedDidStartRecording;                                                                           //@synthesize receivedDidStartRecording=_receivedDidStartRecording - In the implementation block
@property (assign) BOOL receivedDidStopRecording;                                                                            //@synthesize receivedDidStopRecording=_receivedDidStopRecording - In the implementation block
@property (assign) long didStopRecordingError;                                                                               //@synthesize didStopRecordingError=_didStopRecordingError - In the implementation block
+(id)wrapperWithURL:(id)arg1 delegate:(id)arg2 connections:(id)arg3 ;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 connections:(id)arg3 ;
-(id)outputFileURL;
-(BOOL)receivedDidStartRecording;
-(void)setReceivedDidStartRecording:(BOOL)arg1 ;
-(BOOL)receivedDidStopRecording;
-(void)setReceivedDidStopRecording:(BOOL)arg1 ;
-(long)didStopRecordingError;
-(void)setDidStopRecordingError:(long)arg1 ;
-(id)connections;
-(void)dealloc;
-(id)delegate;
-(void)setMetadata:(id)arg1 ;
-(id)metadata;
@end

