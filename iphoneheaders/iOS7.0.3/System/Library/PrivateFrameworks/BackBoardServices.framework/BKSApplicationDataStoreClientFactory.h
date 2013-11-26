/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSObject, BKSApplicationDataStoreRepositoryClient;

@interface BKSApplicationDataStoreClientFactory : NSObject {

	unsigned long long _count;
	NSObject<OS_dispatch_queue>* _queue;
	BKSApplicationDataStoreRepositoryClient* _sharedClient;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)checkin;
-(id)checkout;
@end

