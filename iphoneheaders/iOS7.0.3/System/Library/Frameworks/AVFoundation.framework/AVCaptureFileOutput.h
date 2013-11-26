/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureFileOutputInternal, NSURL;

@interface AVCaptureFileOutput : AVCaptureOutput {

	AVCaptureFileOutputInternal* _fileOutputInternal;

}

@property (nonatomic,readonly) NSURL * outputFileURL; 
@property (getter=isRecording,nonatomic,readonly) BOOL recording; 
@property (nonatomic,readonly) SCD_Struct_CM4 recordedDuration; 
@property (nonatomic,readonly) long long recordedFileSize; 
@property (assign,nonatomic) SCD_Struct_CM4 maxRecordedDuration; 
@property (assign,nonatomic) long long maxRecordedFileSize; 
@property (assign,nonatomic) long long minFreeDiskSpaceLimit; 
+(void)initialize;
-(id)outputFileURL;
-(SCD_Struct_CM4)maxRecordedDuration;
-(long long)maxRecordedFileSize;
-(long long)minFreeDiskSpaceLimit;
-(BOOL)pausesRecordingOnInterruption;
-(BOOL)isRecording;
-(void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2 ;
-(BOOL)isRecordingPaused;
-(void)pauseRecording;
-(void)resumeRecording;
-(void)setPausesRecordingOnInterruption:(BOOL)arg1 ;
-(SCD_Struct_CM4)recordedDuration;
-(long long)recordedFileSize;
-(void)setMaxRecordedDuration:(SCD_Struct_CM4)arg1 ;
-(void)setMaxRecordedFileSize:(long long)arg1 ;
-(void)setMinFreeDiskSpaceLimit:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)stopRecording;
@end

