/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:40 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface IDSInternalQueueController : NSObject {

	NSObject<OS_dispatch_queue>* _queue;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)performBlock:(/*^block*/ id)arg1 ;
-(id)queue;
-(void)assertQueueIsCurrent;
-(void)assertQueueIsNotCurrent;
-(void)performBlock:(/*^block*/ id)arg1 waitUntilDone:(BOOL)arg2 ;
@end

