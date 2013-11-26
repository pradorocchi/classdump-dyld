/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSString, AVCaptureInput, AVMetadataObject;

@interface AVMetadataObjectInternal : NSObject {

	NSString* type;
	AVCaptureInput* input;
	AVMetadataObject* originalMetadataObject;
	CGRect bounds;
	SCD_Struct_CM4 time;
	SCD_Struct_CM4 duration;

}

@property (assign) SCD_Struct_CM4 time; 
@property (assign) SCD_Struct_CM4 duration; 
@property (assign) CGRect bounds; 
@property (retain) NSString * type; 
@property (retain) AVCaptureInput * input; 
@property (retain) AVMetadataObject * originalMetadataObject; 
-(id)originalMetadataObject;
-(void)setInput:(id)arg1 ;
-(void)setOriginalMetadataObject:(id)arg1 ;
-(void)dealloc;
-(CGRect)bounds;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(SCD_Struct_CM4)duration;
-(void)setDuration:(SCD_Struct_CM4)arg1 ;
-(void)setType:(id)arg1 ;
-(id)type;
-(id)input;
-(void)setTime:(SCD_Struct_CM4)arg1 ;
-(SCD_Struct_CM4)time;
@end

