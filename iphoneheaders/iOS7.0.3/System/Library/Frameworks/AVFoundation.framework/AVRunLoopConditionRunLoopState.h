/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@interface AVRunLoopConditionRunLoopState : NSObject {

	CFRunLoopRef _runLoop;
	CFRunLoopSourceRef _signalSource;
	BOOL _signaled;

}

@property (nonatomic,readonly) CFRunLoopRef runLoop;                       //@synthesize runLoop=_runLoop - In the implementation block
@property (assign,nonatomic) CFRunLoopSourceRef signalSource;              //@synthesize signalSource=_signalSource - In the implementation block
@property (assign,nonatomic) BOOL signaled;                                //@synthesize signaled=_signaled - In the implementation block
+(id)runLoopStateWithRunLoop:(CFRunLoopRef)arg1 ;
-(id)initWithRunLoop:(CFRunLoopRef)arg1 ;
-(CFRunLoopSourceRef)signalSource;
-(void)setSignalSource:(CFRunLoopSourceRef)arg1 ;
-(BOOL)signaled;
-(void)setSignaled:(BOOL)arg1 ;
-(CFRunLoopRef)runLoop;
-(void)dealloc;
@end

