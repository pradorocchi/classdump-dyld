/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol AVCaptureVideoDataOutputSampleBufferDelegate, OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSObject, NSDictionary;

@interface AVCaptureVideoDataOutputInternal : NSObject {

	<AVCaptureVideoDataOutputSampleBufferDelegate>* delegate;
	NSObject<OS_dispatch_queue>* clientQueue;
	NSDictionary* videoSettings;
	SCD_Struct_CM4 deprecatedMinFrameDuration;
	BOOL alwaysDiscardsLateVideoFrames;

}
-(void)dealloc;
-(id)init;
@end
