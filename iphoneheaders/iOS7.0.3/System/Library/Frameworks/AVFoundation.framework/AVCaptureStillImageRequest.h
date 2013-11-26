/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface AVCaptureStillImageRequest : NSObject <NSCopying> {

	/*^block*/ id _sbufCompletionBlock;
	/*^block*/ id _iosurfaceCompletionBlock;
	int _stillImageOrientation;
	BOOL _stillImageMirrored;
	CGSize _previewImageSize;
	unsigned long _imageDataFormatType;
	int _HDRMode;
	BOOL _chromaNoiseReductionEnabled;
	BOOL _suspendsVideoProcessing;
	unsigned long _shutterSoundID;
	BOOL _jpegQualitySpecified;
	float _jpegQuality;

}

@property (copy) id sbufCompletionBlock;                                      //@synthesize sbufCompletionBlock=_sbufCompletionBlock - In the implementation block
@property (copy) id iosurfaceCompletionBlock;                                 //@synthesize iosurfaceCompletionBlock=_iosurfaceCompletionBlock - In the implementation block
@property (assign) int stillImageOrientation;                                 //@synthesize stillImageOrientation=_stillImageOrientation - In the implementation block
@property (getter=isStillImageMirrored) BOOL stillImageMirrored;              //@synthesize stillImageMirrored=_stillImageMirrored - In the implementation block
@property (assign) CGSize previewImageSize;                                   //@synthesize previewImageSize=_previewImageSize - In the implementation block
@property (assign) unsigned long imageDataFormatType;                         //@synthesize imageDataFormatType=_imageDataFormatType - In the implementation block
@property (assign) float jpegQuality;                                         //@synthesize jpegQuality=_jpegQuality - In the implementation block
@property (assign) BOOL jpegQualitySpecified;                                 //@synthesize jpegQualitySpecified=_jpegQualitySpecified - In the implementation block
@property (assign) int HDRMode;                                               //@synthesize HDRMode=_HDRMode - In the implementation block
@property (assign) BOOL chromaNoiseReductionEnabled;                          //@synthesize chromaNoiseReductionEnabled=_chromaNoiseReductionEnabled - In the implementation block
@property (assign) BOOL suspendsVideoProcessing;                              //@synthesize suspendsVideoProcessing=_suspendsVideoProcessing - In the implementation block
@property (assign) unsigned long shutterSoundID;                              //@synthesize shutterSoundID=_shutterSoundID - In the implementation block
+(id)request;
-(CGSize)previewImageSize;
-(void)setPreviewImageSize:(CGSize)arg1 ;
-(unsigned long)imageDataFormatType;
-(void)setImageDataFormatType:(unsigned long)arg1 ;
-(float)jpegQuality;
-(void)setJpegQuality:(float)arg1 ;
-(BOOL)jpegQualitySpecified;
-(void)setJpegQualitySpecified:(BOOL)arg1 ;
-(BOOL)isStillImageMirrored;
-(void)setStillImageMirrored:(BOOL)arg1 ;
-(int)stillImageOrientation;
-(void)setStillImageOrientation:(int)arg1 ;
-(/*^block*/ id)sbufCompletionBlock;
-(void)setSbufCompletionBlock:(/*^block*/ id)arg1 ;
-(/*^block*/ id)iosurfaceCompletionBlock;
-(void)setIosurfaceCompletionBlock:(/*^block*/ id)arg1 ;
-(int)HDRMode;
-(void)setHDRMode:(int)arg1 ;
-(BOOL)chromaNoiseReductionEnabled;
-(void)setChromaNoiseReductionEnabled:(BOOL)arg1 ;
-(BOOL)suspendsVideoProcessing;
-(void)setSuspendsVideoProcessing:(BOOL)arg1 ;
-(unsigned long)shutterSoundID;
-(void)setShutterSoundID:(unsigned long)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZoneRef)arg1 ;
@end

