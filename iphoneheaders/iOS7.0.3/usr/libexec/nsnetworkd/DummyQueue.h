/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/nsnetworkd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface DummyQueue : NSObject {

	NSObject<OS_dispatch_queue>* _queue;

}

@property (retain) NSObject<OS_dispatch_queue> * queue;              //@synthesize queue=_queue - In the implementation block
-(id)initWithDispatchQueue:(id)arg1 ;
-(int)maxConcurrentOperationCount;
-(void)addOperationWithBlock:(/*^block*/ id)arg1 ;
-(id)queue;
-(void)setQueue:(id)arg1 ;
-(void).cxx_destruct;
@end

