/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIEvent.h>

@interface UIInternalEvent : UIEvent {

	GSEventRef _gsEvent;
	IOHIDEventRef _hidEvent;

}
-(void)dealloc;
-(id)_screen;
-(GSEventRef)_gsEvent;
-(IOHIDEventRef)_hidEvent;
-(void)_setHIDEvent:(IOHIDEventRef)arg1 ;
-(void)_setGSEvent:(GSEventRef)arg1 ;
@end

