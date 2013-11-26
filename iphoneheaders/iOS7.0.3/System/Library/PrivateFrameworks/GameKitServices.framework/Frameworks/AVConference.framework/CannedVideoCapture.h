/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VideoCaptureProtocol.h>

@protocol CannedVideoFrameFeeder;
@class ;

@interface CannedVideoCapture : NSObject <VideoCaptureProtocol> {

	CannedVideoCapturePrivate* _pimpl;
	<CannedVideoFrameFeeder>* _frameFeeder;

}

@property (nonatomic,readonly) CannedVideoCapturePrivate* pimpl;                  //@synthesize pimpl=_pimpl - In the implementation block
@property (nonatomic,retain) <CannedVideoFrameFeeder> * frameFeeder;              //@synthesize frameFeeder=_frameFeeder - In the implementation block
+(int)cannedVideoTypeForPath:(id)arg1 ;
+(int)createPixelBufferPool:(_CVPixelBufferPool*)arg1 withWidth:(int)arg2 height:(int)arg3 ;
-(void)dealloc;
-(long)setCamera:(unsigned long)arg1 ;
-(long)startPreview;
-(long)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(long)stop:(bool)arg1 ;
-(long)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 ;
-(long)copyColorInfo:(const _CFDictionary*)arg1 ;
-(BOOL)isPreviewRunning;
-(long)getCamera:(unsigned*)arg1 ;
-(long)setCameraType:(int)arg1 ;
-(long)getCameraType:(int*)arg1 ;
-(id)initWithOptions:(void*)arg1 callback:(/*function pointer*/ void*)arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 cameraType:(int)arg6 folder:(id)arg7 withError:(int*)arg8 ;
-(void)stopThreads;
-(long)startThreads;
-(CannedVideoCapturePrivate*)pimpl;
-(id)frameFeeder;
-(void)setFrameFeeder:(id)arg1 ;
@end

