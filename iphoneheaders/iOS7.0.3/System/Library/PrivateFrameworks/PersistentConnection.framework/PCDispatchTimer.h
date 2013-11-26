/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:48 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <PersistentConnection/PersistentConnection-Structs.h>
@class NSDate, CUTWeakReference;

@interface PCDispatchTimer : NSObject {

	dispatch_source_sRef _timerSource;
	dispatch_queue_sRef _queue;
	unsigned long long _fireTime;
	NSDate* _fireDate;
	CUTWeakReference* _target;
	SEL _selector;
	BOOL _isValid;

}

@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,retain) NSDate * fireDate; 
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(void)setFireDate:(id)arg1 ;
-(void)start;
-(id)fireDate;
-(void)_cleanupTimer;
-(id)initWithQueue:(dispatch_queue_sRef)arg1 target:(id)arg2 selector:(SEL)arg3 fireTime:(unsigned long long)arg4 ;
-(void)_callTarget;
@end

