/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/DownloadApplicationObserverDelegate.h>
#import <itunesstored/DownloadHandlerObserver.h>
#import <itunesstored/DownloadPipelineDelegate.h>
#import <itunesstored/DownloadPolicyObserver.h>

@protocol OS_dispatch_source;
@class DownloadApplicationObserver, SSSQLiteDatabase, NSMutableDictionary, NSObject, ExternalDownloadState, DownloadPipeline, DownloadPolicyManager;

@interface DownloadsDatabase : NSObject <DownloadApplicationObserverDelegate, DownloadHandlerObserver, DownloadPipelineDelegate, DownloadPolicyObserver> {

	DownloadApplicationObserver* _applicationObserver;
	SSSQLiteDatabase* _database;
	NSMutableDictionary* _dirtyProgressByID;
	NSObject<OS_dispatch_source>* _dirtyProgressTimer;
	ExternalDownloadState* _externalState;
	NSMutableDictionary* _pendingPipelineResults;
	DownloadPipeline* _pipeline;
	DownloadPolicyManager* _policyManager;
	NSObject<OS_dispatch_source>* _progressTickTimer;

}
+(id)downloadsDatabase;
+(void)_setupDatabase:(id)arg1 ;
-(void)_notifyProgressTickTimer;
-(id)modifyUsingPurchaseTransactionBlock:(/*^block*/ id)arg1 ;
-(id)modifyExternalUsingTransactionBlock:(/*^block*/ id)arg1 ;
-(id)_newSessionDescription;
-(void)_addPendingPipelineResults:(id)arg1 ;
-(id)_modifyUsingTransaction:(id)arg1 block:(/*^block*/ id)arg2 ;
-(void)_setProgress:(id)arg1 forDownloadStep:(id)arg2 ;
-(void)_commitDirtyProgressUsingTransaction:(id)arg1 ;
-(void)_adjustPendingPipelineResultsForPipelineAdditions:(id)arg1 ;
-(void)_commitExternalChangesForChangeset:(id)arg1 ;
-(void)_commitDirtyProgressTimer:(id)arg1 ;
-(void)downloadApplicationObserverActiveClientIdentifierDidChange:(id)arg1 ;
-(void)downloadHandlerManagerHandlersDidChange:(id)arg1 ;
-(void)downloadHandlerManager:(id)arg1 sessionsDidChange:(id)arg2 ;
-(void)downloadPipeline:(id)arg1 didFinishDownloadStep:(id)arg2 withResults:(id)arg3 ;
-(void)downloadPipeline:(id)arg1 didUpdateProgress:(id)arg2 forDownloadStep:(id)arg3 ;
-(void)downloadPipeline:(id)arg1 willPerformDownloadStep:(id)arg2 ;
-(void)downloadPolicyManager:(id)arg1 policiesChanged:(id)arg2 ;
-(void)modifyAsyncUsingPurchaseTransactionBlock:(/*^block*/ id)arg1 ;
-(void)modifyExternalAsyncUsingTransactionBlock:(/*^block*/ id)arg1 ;
-(void)modifyUsingUpdatesTransactionBlock:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)modifyUsingTransactionBlock:(/*^block*/ id)arg1 ;
-(void)modifyAsyncUsingTransactionBlock:(/*^block*/ id)arg1 ;
-(void)dispatchBlockAsync:(/*^block*/ id)arg1 ;
-(void)dispatchAfter:(unsigned long long)arg1 block:(/*^block*/ id)arg2 ;
-(void)dispatchBlockSync:(/*^block*/ id)arg1 ;
-(id)newDispatchSourceWithType:(dispatch_source_type_sRef)arg1 ;
-(void)readUsingTransactionBlock:(/*^block*/ id)arg1 ;
@end

