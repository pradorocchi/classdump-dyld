/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SyncBundles/Books.syncBundle/Books
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/NSProxy.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface ThreadSafeProxy : NSProxy {

	id _object;
	NSObject<OS_dispatch_queue>* _queue;

}
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
@end

