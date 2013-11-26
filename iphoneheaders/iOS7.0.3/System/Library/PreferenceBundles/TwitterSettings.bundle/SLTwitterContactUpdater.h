/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:06:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/TwitterSettings.bundle/TwitterSettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SLTwitterContactUpdaterDelegate;
@class ACAccount, ACAccountStore, NSMutableDictionary, NSOperationQueue, NSMutableSet, ;

@interface SLTwitterContactUpdater : NSObject {

	void* _addressBook;
	ACAccount* _account;
	ACAccountStore* _accountStore;
	NSMutableDictionary* _personDictionary;
	NSOperationQueue* _operationQueue;
	NSMutableSet* _updatedPeople;
	int _expectedBatchJobs;
	int _completedBatchJobs;
	float _partialBatchJobsCompleted;
	int _expectedPhotoJobs;
	int _completedPhotoJobs;
	BOOL _warnedOfFailure;
	<SLTwitterContactUpdaterDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <SLTwitterContactUpdaterDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)updateContacts;
-(void)updatePhotos;
-(void)batchLookupProgress:(id)arg1 ;
-(void)batchLookupFinished:(id)arg1 ;
-(id)initWithAccount:(id)arg1 store:(id)arg2 ;
-(void)photoLookupFinished:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)cancel;
-(void).cxx_destruct;
@end

