/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol AVCaptureMetadataOutputObjectsDelegate, OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class , NSObject, NSArray;

@interface AVCaptureMetadataOutputInternal : NSObject {

	<AVCaptureMetadataOutputObjectsDelegate>* delegate;
	NSObject<OS_dispatch_queue>* clientQueue;
	NSArray* metadataObjectTypes;
	CGRect rectOfInterest;

}
-(void)dealloc;
@end

