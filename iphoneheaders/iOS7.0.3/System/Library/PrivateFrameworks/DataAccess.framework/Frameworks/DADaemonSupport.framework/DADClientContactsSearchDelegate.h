/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:17 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DADaemonSupport/DADClientDelegate.h>
#import <DADaemonSupport/DASearchQueryConsumer.h>

@class DASearchQuery, NSData;

@interface DADClientContactsSearchDelegate : DADClientDelegate <DASearchQueryConsumer> {

	DASearchQuery* _query;
	NSData* _queryResultData;

}
-(void)finishWithError:(id)arg1 ;
-(void)dealloc;
-(void)disable;
-(id)initWithAccountID:(id)arg1 queryDictionary:(id)arg2 client:(id)arg3 ;
-(void)beginQuery;
-(void)searchQuery:(id)arg1 returnedResults:(id)arg2 ;
-(void)searchQuery:(id)arg1 finishedWithError:(id)arg2 ;
@end

