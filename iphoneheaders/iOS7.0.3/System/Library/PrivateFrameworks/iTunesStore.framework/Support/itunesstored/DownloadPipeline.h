/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISOperationDelegate.h>

@protocol DownloadPipelineDelegate;
@class DownloadApplicationObserver, DownloadsDatabase, , NSMutableDictionary, ISOperationQueue, NSMutableArray, NSOrderedSet;

@interface DownloadPipeline : NSObject <ISOperationDelegate> {

	DownloadApplicationObserver* _applicationObserver;
	DownloadsDatabase* _database;
	<DownloadPipelineDelegate>* _delegate;
	NSMutableDictionary* _downloads;
	BOOL _holdsKeepAliveAssertion;
	BOOL _holdsPowerAssertion;
	ISOperationQueue* _queues[4];
	NSMutableArray* _orderedDownloads;
	NSMutableArray* _slots[4];

}

@property (nonatomic,readonly) DownloadsDatabase * downloadsDatabase;                   //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * activeDownloadIdentifiers; 
@property (assign,nonatomic,__weak) <DownloadPipelineDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithDownloadsDatabase:(id)arg1 applicationObserver:(id)arg2 ;
-(void)sortPipeline;
-(void)updateAfterSessionsChanged:(id)arg1 ;
-(void)fillPipelineWithReason:(int)arg1 ;
-(void)updateAfterDownloadStep:(id)arg1 withResults:(id)arg2 ;
-(id)pipelineDownloadForDownloadID:(long long)arg1 ;
-(BOOL)applyPolicyChangeset:(id)arg1 usingTransaction:(id)arg2 ;
-(void)insertDownloadsWithDownloadIdentifiers:(id)arg1 ;
-(id)reloadPoliciesForDownloadsWithIdentifiers:(id)arg1 ;
-(void)enumeratePipelineDownloadsUsingBlock:(/*^block*/ id)arg1 ;
-(id)setDownloadProgress:(id)arg1 forDownloadStep:(id)arg2 ;
-(id)downloadsDatabase;
-(id)stopDownloadWithIdentifier:(long long)arg1 downloadPhase:(id)arg2 ;
-(id)reloadPositionOfDownloadWithIdentifier:(long long)arg1 ;
-(id)retryDownloadWithIdentifier:(long long)arg1 ;
-(id)activeDownloadIdentifiers;
-(id)updatePolicyForDownloadWithIdentifier:(long long)arg1 policyManager:(id)arg2 ;
-(void)_showDialogForStoppedDownload:(id)arg1 policyManager:(id)arg2 changeset:(id)arg3 ;
-(int)_indexForDownloadStep:(id)arg1 slotType:(int)arg2 ;
-(id)_newPipelineQueryPredicates;
-(id)_reloadDownloadForDownloadID:(long long)arg1 session:(id)arg2 ;
-(void)_setAssetsForDownload:(id)arg1 database:(id)arg2 ;
-(BOOL)_canAddDownloadToPipeline:(id)arg1 withSession:(id)arg2 ;
-(void)fillPipelineSlots;
-(BOOL)_pipelineIsFull;
-(BOOL)_addNextDownloadStepToPipelineForDownload:(id)arg1 ;
-(void)_reloadAssertions;
-(void)_sortPipelineWithOptions:(unsigned)arg1 ;
-(id)_updatePipelineAfterOrderingChangeForDownload:(id)arg1 ;
-(id)_pipelineSlotForDownload:(id)arg1 ;
-(void)_cancelPipelineSlot:(id)arg1 withResultType:(int)arg2 ;
-(id)_removeDownloadForDownloadID:(id)arg1 ;
-(void)_removeSlotForDownloadStep:(id)arg1 ;
-(void)_showDialogForFailedDownload:(id)arg1 error:(id)arg2 ;
-(BOOL)_containsUnblockedAutoUpdates;
-(void)_updateHandlerSessionProgress:(id)arg1 ;
-(void)_disavowHandlerSession:(id)arg1 ;
-(void)_endHandlerSession:(id)arg1 withResultType:(int)arg2 ;
-(void)_releaseHandlerSession:(id)arg1 ;
-(void)_sendDidFinishDownloadStep:(id)arg1 withResultsSet:(id)arg2 ;
-(BOOL)containsDownloadStep:(id)arg1 ;
-(id)_newHandlerSessionPropertiesForDownload:(id)arg1 downloadStep:(id)arg2 ;
-(BOOL)_containsPrepareSteps;
-(void)_willPerformDownloadStep:(id)arg1 ;
-(void)_addDownloadStepToPipeline:(id)arg1 withSession:(id)arg2 ;
-(void)_addDownloadStepToPipeline:(id)arg1 withOperation:(id)arg2 ;
-(void)_sendDidFinishDownloadStep:(id)arg1 withResults:(id)arg2 ;
-(void)_cancelOperation:(id)arg1 withResultType:(int)arg2 ;
-(id)_pipelineSlotForHandlerSession:(id)arg1 ;
-(void)_removeTimeLimitedPolicyForStep:(id)arg1 ;
-(int)_insertionIndexForDownload:(id)arg1 afterIndex:(int)arg2 ;
-(int)_indexOfDownloadWithIdentifier:(long long)arg1 ;
-(void)_addTimeLimitedPolicyForStep:(id)arg1 ;
-(void)_sendWillPerformDownloadStep:(id)arg1 ;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)operation:(id)arg1 updatedProgress:(id)arg2 ;
-(void)operationFinished:(id)arg1 ;
@end

