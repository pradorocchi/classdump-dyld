/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:11 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterFinishWritingHelperDelegate.h>

@interface AVAssetWriterDoNothingFinishWritingDelegate : NSObject <AVAssetWriterFinishWritingHelperDelegate> {

	/*^block*/ id _handler;
	int _handlerCalled;

}
-(id)initWithHandler:(/*^block*/ id)arg1 ;
-(BOOL)shouldHelperPrepareInputs;
-(void)finishWritingHelper:(id)arg1 didInitiateFinishWritingForFigAssetWriter:(OpaqueFigAssetWriterRef)arg2 ;
-(void)finishWritingHelperDidFail:(id)arg1 ;
-(void)finishWritingHelperDidCancelFinishWriting:(id)arg1 ;
-(void)_callHandlerIfNotCalled;
-(void)dealloc;
@end

