/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <assistivetouchd/HNDDevice.h>

@class AXDispatchTimer;

@interface HNDJoystickDevice : HNDDevice {

	AXDispatchTimer* _repeatTimer;

}
-(void)handleReportCallback:(int)arg1 report:(char*)arg2 reportLength:(long)arg3 ;
-(void)dealloc;
@end

