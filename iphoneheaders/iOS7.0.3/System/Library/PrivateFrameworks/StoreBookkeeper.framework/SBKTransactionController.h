/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISStoreURLOperationDelegate.h>

@protocol SBKTransactionControllerDelegate, OS_dispatch_queue;
@class , NSString, NSURL, SBKStoreAuthenticationController, SSAccount, NSObject, NSOperationQueue, NSMutableArray, SBKTransaction, SBKTaskAssertion;

@interface SBKTransactionController : NSObject <ISStoreURLOperationDelegate> {

	BOOL _enabled;
	BOOL _shouldAuthenticateIfNecessary;
	BOOL _isResolvingError;
	<SBKTransactionControllerDelegate>* _delegate;
	NSString* _domain;
	NSURL* _requestURL;
	SBKStoreAuthenticationController* _authenticationController;
	SSAccount* _account;
	NSObject<OS_dispatch_queue>* _queue;
	NSOperationQueue* _operationQueue;
	NSMutableArray* _pendingTransactions;
	SBKTransaction* _currentTransaction;
	SBKTaskAssertion* _backgroundTaskAssertion;
	id _networkTypeObserver;
	int _conflictResolutionAttempts;

}

@property (__weak) <SBKTransactionControllerDelegate> * delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSString * domain;                                                      //@synthesize domain=_domain - In the implementation block
@property (readonly) NSURL * requestURL;                                                     //@synthesize requestURL=_requestURL - In the implementation block
@property (getter=isEnabled,readonly) BOOL enabled;                                          //@synthesize enabled=_enabled - In the implementation block
@property (getter=isIdle,readonly) BOOL idle; 
@property (retain) SBKStoreAuthenticationController * authenticationController;              //@synthesize authenticationController=_authenticationController - In the implementation block
@property (assign) BOOL shouldAuthenticateIfNecessary;                                       //@synthesize shouldAuthenticateIfNecessary=_shouldAuthenticateIfNecessary - In the implementation block
@property (retain) SSAccount * account;                                                      //@synthesize account=_account - In the implementation block
@property (retain) NSObject<OS_dispatch_queue> * queue;                                      //@synthesize queue=_queue - In the implementation block
@property (retain) NSOperationQueue * operationQueue;                                        //@synthesize operationQueue=_operationQueue - In the implementation block
@property (retain) NSMutableArray * pendingTransactions;                                     //@synthesize pendingTransactions=_pendingTransactions - In the implementation block
@property (retain) SBKTransaction * currentTransaction;                                      //@synthesize currentTransaction=_currentTransaction - In the implementation block
@property (assign) BOOL isResolvingError;                                                    //@synthesize isResolvingError=_isResolvingError - In the implementation block
@property (retain) SBKTaskAssertion * backgroundTaskAssertion;                               //@synthesize backgroundTaskAssertion=_backgroundTaskAssertion - In the implementation block
@property (__weak) id networkTypeObserver;                                                   //@synthesize networkTypeObserver=_networkTypeObserver - In the implementation block
@property (assign) int conflictResolutionAttempts;                                           //@synthesize conflictResolutionAttempts=_conflictResolutionAttempts - In the implementation block
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(id)operationQueue;
-(void)setOperationQueue:(id)arg1 ;
-(void)_endBackgroundTask;
-(BOOL)isIdle;
-(void)_networkTypeChangedNotification:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)domain;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)queue;
-(void)setQueue:(id)arg1 ;
-(id)requestURL;
-(id)account;
-(void)setDomain:(id)arg1 ;
-(void)setAccount:(id)arg1 ;
-(id)_onQueue_clampsController;
-(void)_onQueue_processPendingTransactions;
-(void)_onQueue_cancelAllPendingTransactions:(id)arg1 ;
-(BOOL)_onQueue_isIdle;
-(void)scheduleTransaction:(id)arg1 ;
-(BOOL)_delegateShouldScheduleTransaction:(id)arg1 error:(id*)arg2 ;
-(void)_onQueue_scheduleTransaction:(id)arg1 isRetry:(BOOL)arg2 ;
-(void)_onQueue_transactionDidFail:(id)arg1 withError:(id)arg2 ;
-(void)_onQueue_cancelTransaction:(id)arg1 error:(id)arg2 ;
-(void)_storeOperationDidComplete:(id)arg1 ;
-(void)_onQueue_resolveError:(id)arg1 resolution:(int)arg2 ;
-(void)_onQueue_beginBackgroundTask;
-(void)_onQueue_endBackgroundTask;
-(id)backgroundTaskAssertion;
-(void)_onQueue_transactionDidCancel:(id)arg1 withError:(id)arg2 ;
-(void)_onQueue_processCurrentTransaction;
-(BOOL)_onQueue_authenticationCanProcessTransaction:(id)arg1 error:(id*)arg2 ;
-(void)_enqueueStoreOperation:(id)arg1 ;
-(BOOL)_onQueue_canScheduleTransaction:(id)arg1 error:(id*)arg2 ;
-(void)_onQueue_addPendingTransaction:(id)arg1 ;
-(BOOL)_onQueue_isEnabledForTransaction:(id)arg1 error:(id*)arg2 ;
-(BOOL)_onQueue_isTransactionValid:(id)arg1 error:(id*)arg2 ;
-(BOOL)_onQueue_clampsCanScheduleTransaction:(id)arg1 error:(id*)arg2 ;
-(void)_delegateTransactionDidFinish:(id)arg1 ;
-(BOOL)_delegateTransactionDidFail:(id)arg1 withError:(id)arg2 ;
-(void)_resolveError:(id)arg1 resolution:(int)arg2 ;
-(void)_delegateTransactionDidCancel:(id)arg1 withError:(id)arg2 ;
-(void)_onQueue_currentTransactionDidFinish;
-(void)_processDataInResponse:(id)arg1 ;
-(BOOL)shouldAuthenticateIfNecessary;
-(void)_onQueue_performRetryErrorHandlingForError:(id)arg1 ;
-(void)_onQueue_performCancelErrorHandlingForError:(id)arg1 ;
-(void)_onQueue_performDefaultErrorHandlingForError:(id)arg1 ;
-(BOOL)_sendFinishedBlockForTransaction:(id)arg1 success:(BOOL)arg2 cancelled:(BOOL)arg3 error:(id)arg4 handledAsFinishedBlock:(BOOL*)arg5 ;
-(void)_onQueue_processOperationOutput:(id)arg1 operation:(id)arg2 operationAuthenticated:(BOOL)arg3 ;
-(id)initWithDomain:(id)arg1 requestURL:(id)arg2 ;
-(void)setRequestURL:(id)arg1 ;
-(void)scheduleTransaction:(id)arg1 withTransactionFinishedBlock:(/*^block*/ id)arg2 ;
-(void)cancelScheduledTransaction:(id)arg1 ;
-(void)cancelAllTransactions;
-(void)cancelAllTransactionsCancelCode:(int)arg1 ;
-(id)authenticationController;
-(void)setAuthenticationController:(id)arg1 ;
-(void)setShouldAuthenticateIfNecessary:(BOOL)arg1 ;
-(id)pendingTransactions;
-(void)setPendingTransactions:(id)arg1 ;
-(id)currentTransaction;
-(void)setCurrentTransaction:(id)arg1 ;
-(BOOL)isResolvingError;
-(void)setIsResolvingError:(BOOL)arg1 ;
-(void)setBackgroundTaskAssertion:(id)arg1 ;
-(id)networkTypeObserver;
-(void)setNetworkTypeObserver:(id)arg1 ;
-(int)conflictResolutionAttempts;
-(void)setConflictResolutionAttempts:(int)arg1 ;
-(void)_beginBackgroundTask;
-(void).cxx_destruct;
-(void)operation:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
@end

