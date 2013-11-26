/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/backboardd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BackBoardServices/BKSBasicServerClient.h>

@protocol OS_dispatch_queue;
@class NSSet, NSMutableDictionary, NSObject;

@interface BKApplicationDataStoreRepositoryServerClient : BKSBasicServerClient {

	NSSet* _prefetchedKeys;
	NSMutableDictionary* _prefetchedKeysPendingChangesByBundleID;
	NSObject<OS_dispatch_queue>* _queue;

}
-(void)_repositoryInvalidated:(id)arg1 ;
-(BOOL)_checkPendingChangeForKey:(id)arg1 application:(id)arg2 ;
-(void)_sendValueChangedForObject:(id)arg1 key:(id)arg2 bundleID:(id)arg3 ;
-(void)_sendMessageWithPacker:(/*^block*/ id)arg1 ;
-(void)setPrefetchedKeys:(id)arg1 withDataStore:(id)arg2 resultHandler:(/*^block*/ id)arg3 ;
-(void)setPendingChangeForKey:(id)arg1 application:(id)arg2 ;
-(void)clearPendingChangeForKey:(id)arg1 application:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)_valueChanged:(id)arg1 ;
@end

