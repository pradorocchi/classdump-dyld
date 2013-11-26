/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:11 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterTerminalHelper.h>

@class NSError;

@interface AVAssetWriterFailedTerminalHelper : AVAssetWriterTerminalHelper {

	NSError* _terminalError;

}
-(void)startSessionAtSourceTime:(SCD_Struct_CM4)arg1 ;
-(void)endSessionAtSourceTime:(SCD_Struct_CM4)arg1 ;
-(void)finishWriting;
-(void)finishWritingWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)initWithConfigurationState:(id)arg1 ;
-(id)initWithConfigurationState:(id)arg1 terminalError:(id)arg2 ;
-(void)dealloc;
-(int)status;
-(id)error;
@end

