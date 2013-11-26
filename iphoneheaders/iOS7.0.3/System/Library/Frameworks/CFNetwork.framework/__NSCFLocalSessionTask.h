/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/__NSCFURLSessionTask.h>

@protocol OS_dispatch_data, OS_dispatch_source;
@class NSURL, NSData, NSInputStream, NSObject, __NSCFLocalSessionBridge, __NSCFURLSession, NSString;

@interface __NSCFLocalSessionTask : __NSCFURLSessionTask {

	BOOL _pendingResponseDisposition;
	BOOL _pendingResponseDisposition_didFinish;
	BOOL _duetAccountingIsDiscretionary;
	BOOL _didIssueDidFinish;
	CFURLConnectionRef _cfConn;
	NSURL* _uploadFile;
	NSData* _uploadData;
	NSInputStream* _uploadDataStream;
	NSObject<OS_dispatch_data>* _dataTaskData;
	/*^block*/ id _dataTaskCompletion;
	NSObject<OS_dispatch_data>* _pendingResponseBytes;
	__NSCFLocalSessionBridge* _bridge;
	__NSCFURLSession* _session;
	unsigned _suspendCount;
	/*^block*/ id _async_initialization;
	NSObject<OS_dispatch_source>* _resourceTimeout;
	NSString* _duetAccountedBundleID;

}

@property (retain) CFURLConnectionRef cfConn;                                      //@synthesize cfConn=_cfConn - In the implementation block
@property (retain) NSURL * uploadFile;                                             //@synthesize uploadFile=_uploadFile - In the implementation block
@property (retain) NSData * uploadData;                                            //@synthesize uploadData=_uploadData - In the implementation block
@property (retain) NSInputStream * uploadDataStream;                               //@synthesize uploadDataStream=_uploadDataStream - In the implementation block
@property (retain) NSObject<OS_dispatch_data> * dataTaskData;                      //@synthesize dataTaskData=_dataTaskData - In the implementation block
@property (copy) id dataTaskCompletion;                                            //@synthesize dataTaskCompletion=_dataTaskCompletion - In the implementation block
@property (assign) BOOL pendingResponseDisposition;                                //@synthesize pendingResponseDisposition=_pendingResponseDisposition - In the implementation block
@property (assign) BOOL pendingResponseDisposition_didFinish;                      //@synthesize pendingResponseDisposition_didFinish=_pendingResponseDisposition_didFinish - In the implementation block
@property (retain) NSObject<OS_dispatch_data> * pendingResponseBytes;              //@synthesize pendingResponseBytes=_pendingResponseBytes - In the implementation block
@property (retain) __NSCFLocalSessionBridge * bridge;                              //@synthesize bridge=_bridge - In the implementation block
@property (retain) __NSCFURLSession * session;                                     //@synthesize session=_session - In the implementation block
@property (assign) unsigned suspendCount;                                          //@synthesize suspendCount=_suspendCount - In the implementation block
@property (copy) id async_initialization;                                          //@synthesize async_initialization=_async_initialization - In the implementation block
@property (retain) NSObject<OS_dispatch_source> * resourceTimeout;                 //@synthesize resourceTimeout=_resourceTimeout - In the implementation block
@property (retain) NSString * duetAccountedBundleID;                               //@synthesize duetAccountedBundleID=_duetAccountedBundleID - In the implementation block
@property (assign) BOOL duetAccountingIsDiscretionary;                             //@synthesize duetAccountingIsDiscretionary=_duetAccountingIsDiscretionary - In the implementation block
@property (assign) BOOL didIssueDidFinish;                                         //@synthesize didIssueDidFinish=_didIssueDidFinish - In the implementation block
-(id)session;
-(void)setSession:(id)arg1 ;
-(void)_onqueue_didReceiveResponse:(id)arg1 ;
-(/*^block*/ id)dataTaskCompletion;
-(void)_onqueue_connection_suspend;
-(void)setPendingResponseDisposition:(BOOL)arg1 ;
-(void)_private_onqueue_didReceiveResponseDisposition:(int)arg1 ;
-(id)initWithTask:(id)arg1 ;
-(id)bridge;
-(CFURLConnectionRef)cfConn;
-(void)setCfConn:(CFURLConnectionRef)arg1 ;
-(void)setUploadFile:(id)arg1 ;
-(void)setUploadData:(id)arg1 ;
-(void)setUploadDataStream:(id)arg1 ;
-(void)setDataTaskData:(id)arg1 ;
-(void)setDataTaskCompletion:(/*^block*/ id)arg1 ;
-(void)setPendingResponseBytes:(id)arg1 ;
-(void)setBridge:(id)arg1 ;
-(void)setSuspendCount:(unsigned)arg1 ;
-(void)setAsync_initialization:(/*^block*/ id)arg1 ;
-(void)_onqueue_connection_cancel;
-(void)_task_onqueue_didReceiveDispatchData:(id)arg1 ;
-(void)_onqueue_connection_resume;
-(void)_task_onqueue_didFinish;
-(id)pendingResponseBytes;
-(id)canceledError;
-(void)_onqueue_didFinishWithError:(id)arg1 ;
-(void)_onqueue_issue_cancel_error:(id)arg1 ;
-(/*^block*/ id)async_initialization;
-(void)cancel0:(bool)arg1 forcedError:(id)arg2 ;
-(id)error:(id)arg1 code:(int)arg2 ;
-(id)timeoutError;
-(void)cancel_with_error:(id)arg1 ;
-(id)duetAccountedBundleID;
-(void)setDuetAccountedBundleID:(id)arg1 ;
-(void)setDuetAccountingIsDiscretionary:(BOOL)arg1 ;
-(BOOL)duetAccountingIsDiscretionary;
-(id)initWithSession:(id)arg1 request:(id)arg2 ident:(unsigned)arg3 bridge:(id)arg4 ;
-(id)_onqueue_strippedMutableRequest;
-(void)_onqueue_didReceiveResponse:(id)arg1 redirectRequest:(id)arg2 withCompletion:(/*^block*/ id)arg3 ;
-(void)_onqueue_didReceiveChallenge:(id)arg1 request:(id)arg2 withCompletion:(/*^block*/ id)arg3 ;
-(void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)_onqueue_didReceiveDispatchData:(id)arg1 ;
-(void)_onqueue_needNewBodyStream:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)_onqueue_didSendBodyBytes:(long long)arg1 totalBytesSent:(long long)arg2 totalBytesExpectedToSend:(long long)arg3 ;
-(void)cancel_without_error;
-(void)_onqueue_completeInitialization;
-(id)nsurlError:(int)arg1 ;
-(id)posixError:(int)arg1 ;
-(void)startDuetAccountingForBundleID:(id)arg1 isDiscretionary:(BOOL)arg2 ;
-(void)stopDuetAccounting;
-(id)uploadFile;
-(id)uploadData;
-(id)uploadDataStream;
-(id)dataTaskData;
-(BOOL)pendingResponseDisposition;
-(BOOL)pendingResponseDisposition_didFinish;
-(void)setPendingResponseDisposition_didFinish:(BOOL)arg1 ;
-(id)resourceTimeout;
-(void)setResourceTimeout:(id)arg1 ;
-(BOOL)didIssueDidFinish;
-(void)setDidIssueDidFinish:(BOOL)arg1 ;
-(unsigned)suspendCount;
-(void)dealloc;
-(id)description;
-(void)suspend;
-(void)cancel;
-(void)resume;
-(void)setConnection:(CFURLConnectionRef)arg1 ;
@end

