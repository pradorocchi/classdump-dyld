/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreBookkeeper/SBKRequest.h>

@class SBKSyncTransaction;

@interface SBKSyncRequest : SBKRequest {

	SBKSyncTransaction* _transaction;

}

@property (nonatomic,retain) SBKSyncTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
+(id)requestForTransaction:(id)arg1 ;
+(int)bodyContentEncodingType;
+(int)bodyContentType;
-(void)setTransaction:(id)arg1 ;
-(id)transaction;
-(id)newURLOperation;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(void).cxx_destruct;
@end

