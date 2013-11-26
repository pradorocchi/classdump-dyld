/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileCoreServices/NSXPCListenerDelegate.h>

@class CPDistributedNotificationCenter;

@interface GKDistributedNotificationCenter : NSObject <NSXPCListenerDelegate> {

	id _internal;

}

@property (retain) CPDistributedNotificationCenter * notificationCenter;              //@synthesize internal=_internal - In the implementation block
+(id)defaultCenter;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 ;
-(void)setNotificationCenter:(id)arg1 ;
-(void)postNotificationName:(id)arg1 userInfo:(id)arg2 toBundleIdentifier:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(id)notificationCenter;
-(void)postNotificationName:(id)arg1 ;
-(void)postNotificationName:(id)arg1 userInfo:(id)arg2 ;
@end

