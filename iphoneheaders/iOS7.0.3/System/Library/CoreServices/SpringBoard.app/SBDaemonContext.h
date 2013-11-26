/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_source;
@class NSObject, NSMutableDictionary;

@interface SBDaemonContext : NSObject {

	NSObject<OS_dispatch_source>* _dispatchSource;
	NSMutableDictionary* _daemonRequests;
	int _pid;

}
-(id)initWithPid:(int)arg1 queue:(id)arg2 ;
-(void)addRequest:(id)arg1 forKey:(id)arg2 ;
-(void)removeRequestForKey:(id)arg1 ;
-(id)_newDispatchSourceForPid:(int)arg1 queue:(id)arg2 ;
-(void)_handleCancelation;
-(void)dealloc;
-(id)description;
-(int)pid;
@end

