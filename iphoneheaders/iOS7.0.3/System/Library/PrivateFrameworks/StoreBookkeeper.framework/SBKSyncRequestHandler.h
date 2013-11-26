/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreBookkeeper/SBKRequestHandler.h>
#import <StoreBookkeeper/SBKSyncTransactionProcessing.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, SBKSyncResponseData, NSMutableArray, NSMutableDictionary, SBKSyncBagContext, SBKTransactionController, NSArray;

@interface SBKSyncRequestHandler : SBKRequestHandler <SBKSyncTransactionProcessing> {

	NSObject<OS_dispatch_queue>* _queue;
	NSString* _overrideResponseDomainVersion;
	SBKSyncResponseData* _responseData;
	NSMutableArray* _responseUpdatedKeys;
	NSMutableArray* _responseDeletedKeys;
	NSMutableArray* _responseConflictedKeys;
	NSMutableDictionary* _responseDataByKey;
	SBKSyncBagContext* _bagContext;
	SBKTransactionController* _transactionController;

}

@property (readonly) SBKSyncBagContext * bagContext;                                //@synthesize bagContext=_bagContext - In the implementation block
@property (readonly) SBKTransactionController * transactionController;              //@synthesize transactionController=_transactionController - In the implementation block
@property (copy) NSString * responseDomainVersion; 
@property (readonly) NSArray * responseUpdatedKeys;                                 //@synthesize responseUpdatedKeys=_responseUpdatedKeys - In the implementation block
@property (readonly) NSArray * responseDeletedKeys;                                 //@synthesize responseDeletedKeys=_responseDeletedKeys - In the implementation block
@property (readonly) NSArray * responseConflictedKeys;                              //@synthesize responseConflictedKeys=_responseConflictedKeys - In the implementation block
@property (readonly) SBKSyncResponseData * responseData;                            //@synthesize responseData=_responseData - In the implementation block
+(int)conflictDetectionType;
-(id)responseData;
-(id)responseDomainVersion;
-(void)clearTransactionResponseData;
-(void)transaction:(id)arg1 willProcessResponseData:(id)arg2 ;
-(void)transaction:(id)arg1 didProcessResponseData:(id)arg2 ;
-(void)transaction:(id)arg1 processUpdatedKey:(id)arg2 data:(id)arg3 conflict:(BOOL)arg4 isDirty:(BOOL*)arg5 ;
-(void)transaction:(id)arg1 processDeletedKey:(id)arg2 isDirty:(BOOL*)arg3 ;
-(id)transaction:(id)arg1 keyValuePairForUpdatedKey:(id)arg2 ;
-(id)responseUpdatedKeys;
-(void)startTransactionWithSyncAnchor:(id)arg1 keysToUpdate:(id)arg2 keysToDelete:(id)arg3 finishedBlock:(/*^block*/ id)arg4 ;
-(void)_onQueue_clearTransactionResponseData;
-(void)setResponseDomainVersion:(id)arg1 ;
-(id)responseDeletedKeys;
-(id)responseConflictedKeys;
-(id)responseDataForResponseKey:(id)arg1 ;
-(id)transactionController;
-(void).cxx_destruct;
-(id)bagContext;
-(id)initWithBagContext:(id)arg1 ;
@end

