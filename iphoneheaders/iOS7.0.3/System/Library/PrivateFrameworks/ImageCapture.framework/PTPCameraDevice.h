/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:54 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ImageCapture/ICCameraDevice.h>

@class PTPInitiator;

@interface PTPCameraDevice : ICCameraDevice {

	void* _ptpCameraProperties;

}

@property (readonly) PTPInitiator * initiator; 
-(void)dealloc;
-(void)enumerateContent;
-(BOOL)eject;
-(id)initiator;
-(id)initWithUSBLocationID:(unsigned)arg1 ;
-(id)initWithTCPIPInfo:(id)arg1 ;
-(void)addToEventHandlerQ:(id)arg1 ;
-(void)finalize;
@end

