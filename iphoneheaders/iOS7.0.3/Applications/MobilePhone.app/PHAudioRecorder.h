/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibrary/AVCaptureFileOutputRecordingDelegate.h>

@protocol PHAudioRecorderDelegate;
@class AVCaptureSession, AVCaptureMovieFileOutput, AVCaptureConnection, NSError, NSTimer, NSString, ;

@interface PHAudioRecorder : NSObject <AVCaptureFileOutputRecordingDelegate> {

	AVCaptureSession* _captureSession;
	AVCaptureMovieFileOutput* _captureFileOutput;
	AVCaptureConnection* _captureConnection;
	NSError* _buildCaptureSessionError;
	NSTimer* _updateTimer;
	BOOL _isRecording;
	BOOL _handlingStop;
	NSString* _outputFile;
	<PHAudioRecorderDelegate>* _audioRecorderDelegate;
	double _maxRecordedDuration;

}

@property (nonatomic,retain) NSString * outputFile;                                //@synthesize outputFile=_outputFile - In the implementation block
@property (assign,nonatomic) double maxRecordedDuration;                           //@synthesize maxRecordedDuration=_maxRecordedDuration - In the implementation block
@property (assign) <PHAudioRecorderDelegate> * audioRecorderDelegate;              //@synthesize audioRecorderDelegate=_audioRecorderDelegate - In the implementation block
@property (assign) BOOL isRecording;                                               //@synthesize isRecording=_isRecording - In the implementation block
@property (@dynamic,readonly) AVCaptureSession * captureSession; 
@property (readonly) AVCaptureMovieFileOutput * captureFileOutput; 
@property (readonly) AVCaptureConnection * captureConnection; 
@property (readonly) NSError * buildCaptureSessionError;                           //@synthesize buildCaptureSessionError=_buildCaptureSessionError - In the implementation block
@property (assign) BOOL handlingStop;                                              //@synthesize handlingStop=_handlingStop - In the implementation block
@property (nonatomic,retain) NSTimer * updateTimer;                                //@synthesize updateTimer=_updateTimer - In the implementation block
-(void)setAudioRecorderDelegate:(id)arg1 ;
-(void)setOutputFile:(id)arg1 ;
-(BOOL)startWithError:(id*)arg1 ;
-(id)outputFile;
-(void)setIsRecording:(BOOL)arg1 ;
-(id)audioRecorderDelegate;
-(id)captureFileOutput;
-(void)_updateRecordProgress:(id)arg1 ;
-(void)setUpdateTimer:(id)arg1 ;
-(void)_stopWithError:(id)arg1 ;
-(void)_buildCaptureSessionAndOutputIfNecessary;
-(void)_captureSessionWasInterrupted:(id)arg1 ;
-(void)_captureSessionErrored:(id)arg1 ;
-(BOOL)handlingStop;
-(void)setHandlingStop:(BOOL)arg1 ;
-(id)captureConnection;
-(id)updateTimer;
-(id)buildCaptureSessionError;
-(double)maxRecordedDuration;
-(BOOL)isRecording;
-(void)setMaxRecordedDuration:(double)arg1 ;
-(void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4 ;
-(void)dealloc;
-(id)init;
-(void)stop;
-(id)captureSession;
@end

