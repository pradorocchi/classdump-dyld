/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface GKRingBuffer : NSObject {

	void* ringBufRef;
	unsigned long endTime;
	unsigned long capacity;
	unsigned long bytesPerFrame;

}
-(void)dealloc;
-(id)init;
-(id)initWithCapacity:(unsigned long)arg1 bytesPerFrame:(unsigned long)arg2 ;
-(void)increaseCapacity:(unsigned long)arg1 ;
-(BOOL)store:(char*)arg1 numSamples:(unsigned long)arg2 timestamp:(unsigned long)arg3 ;
-(long)needsNewNumSamples:(unsigned long)arg1 timestamp:(unsigned long)arg2 ;
-(long)fetch:(char*)arg1 numSamples:(unsigned long)arg2 timestamp:(unsigned long)arg3 ;
@end

