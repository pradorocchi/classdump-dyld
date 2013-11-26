/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
#import <Search/Search-Structs.h>
@class SPXPCConnection, NSObject;

@interface SPDaemonConnection : NSObject {

	SPXPCConnection* _connection;
	NSObject<OS_dispatch_queue>* _connectionQueue;

}
+(id)sharedConnection;
-(void)dealloc;
-(id)init;
-(id)_connection;
-(void)preheat;
-(void)_resetConnection;
-(void)_sendMessage:(id)arg1 info:(id)arg2 reply:(/*^block*/ id)arg3 ;
-(void)cancelQuery:(id)arg1 ;
-(id)startQuery:(id)arg1 ;
-(void)startRecordUpdatesForApplication:(id)arg1 andCategory:(id)arg2 ;
-(void)requestRecordUpdatesForApplication:(id)arg1 category:(id)arg2 andIDs:(id)arg3 ;
-(void)endRecordUpdatesForApplication:(id)arg1 andCategory:(id)arg2 ;
-(void)registerApplication:(id)arg1 withCategories:(id)arg2 ;
-(void)retrieveImageDataForResult:(id)arg1 searchDomain:(unsigned)arg2 size:(CGSize)arg3 completion:(/*^block*/ id)arg4 ;
-(BOOL)retrieveUpdateList:(id*)arg1 forDisplayIdentifier:(id)arg2 category:(id)arg3 ;
-(void)indexUpdatedContent:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)searchResultWasSelected:(id)arg1 inDomain:(unsigned)arg2 queryString:(id)arg3 ;
@end

