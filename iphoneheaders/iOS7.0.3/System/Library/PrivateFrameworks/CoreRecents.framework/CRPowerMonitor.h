/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/recentsd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface CRPowerMonitor : NSObject {

	int _lockNotifyToken;
	BOOL _deviceIsLocked;
	NSObject<OS_dispatch_queue>* _queue;

}
+(id)sharedMonitor;
-(void)dealloc;
-(id)init;
@end

