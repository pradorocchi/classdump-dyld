/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:01 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/VMUMemoryView_Native.h>

@interface VMUMemoryView_Native64 : VMUMemoryView_Native
+(id)memoryViewWithAddressRange:(VMURange)arg1 data:(char*)arg2 memory:(id)arg3 ;
-(BOOL)isCursorPointerAligned;
-(void)pointerAlignCursor;
@end

