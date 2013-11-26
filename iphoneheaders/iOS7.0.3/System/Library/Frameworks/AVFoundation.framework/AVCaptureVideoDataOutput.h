/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureVideoDataOutputInternal, NSDictionary, NSArray;

@interface AVCaptureVideoDataOutput : AVCaptureOutput {

	AVCaptureVideoDataOutputInternal* _internal;

}

@property (nonatomic,readonly) <AVCaptureVideoDataOutputSampleBufferDelegate> * sampleBufferDelegate; 
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * sampleBufferCallbackQueue; 
@property (nonatomic,copy) NSDictionary * videoSettings; 
@property (nonatomic,readonly) NSArray * availableVideoCVPixelFormatTypes; 
@property (nonatomic,readonly) NSArray * availableVideoCodecTypes; 
@property (assign,nonatomic) SCD_Struct_CM4 minFrameDuration; 
@property (assign,nonatomic) BOOL alwaysDiscardsLateVideoFrames; 
+(id)supportedVideoSettingsKeys;
+(void)initialize;
-(SCD_Struct_CM4)minFrameDuration;
-(id)videoSettings;
-(BOOL)isTheOnlyDataOutput;
-(void)setSession:(id)arg1 ;
-(id)supportedAssetWriterOutputFileTypes;
-(void)_applyOverridesToCaptureOptions:(id)arg1 ;
-(id)sampleBufferDelegate;
-(id)sampleBufferCallbackQueue;
-(void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2 ;
-(id)connectionMediaTypes;
-(void)handleEnabledChangedForConnection:(id)arg1 ;
-(void)didStopForSession:(id)arg1 error:(id)arg2 ;
-(void)didStartForSession:(id)arg1 ;
-(CGSize)outputSizeForCaptureOptions:(id)arg1 ;
-(BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)arg1 ;
-(BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)arg1 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(BOOL)alwaysDiscardsLateVideoFrames;
-(id)vettedVideoSettingsForSettingsDictionary:(id)arg1 ;
-(id)availableVideoCVPixelFormatTypes;
-(id)availableVideoCodecTypes;
-(void)_setMinFrameDuration:(SCD_Struct_CM4)arg1 ;
-(void)setVideoSettings:(id)arg1 ;
-(id)recommendedVideoSettingsForAssetWriterWithOutputFileType:(id)arg1 ;
-(void)setMinFrameDuration:(SCD_Struct_CM4)arg1 ;
-(void)setAlwaysDiscardsLateVideoFrames:(BOOL)arg1 ;
-(void)_AVCaptureVideoDataOutput_VideoDataBecameReady;
-(void)dealloc;
-(id)init;
@end

