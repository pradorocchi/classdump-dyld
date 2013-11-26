/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/backboardd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
#import <backboardd/backboardd-Structs.h>
@class NSObject;

@interface BKHIDServiceNotificationManager : NSObject {

	IOHIDEventSystemRef _hidEventSystem;
	NSObject<OS_dispatch_queue>* _queue;
	CFDictionaryRef _matchingDictionaryToActionMapping;
	CFDictionaryRef _serviceToRemovalNotificationMapping;
	CFDictionaryRef _serviceToRemovalActionsMapping;

}
-(id)initWithHIDEventSystem:(IOHIDEventSystemRef)arg1 ;
-(void)watchServicesMatching:(id)arg1 additionBlock:(/*^block*/ id)arg2 removalBlock:(/*^block*/ id)arg3 ;
-(void)watchServiceForRemoval:(IOHIDServiceRef)arg1 removalBlock:(/*^block*/ id)arg2 ;
-(void)_servicesAdded:(id)arg1 matchingActions:(id)arg2 ;
-(void)_servicesAdded:(id)arg1 matchingDictionary:(id)arg2 ;
-(void)_serviceRemoved:(IOHIDServiceRef)arg1 ;
-(void)dealloc;
@end

