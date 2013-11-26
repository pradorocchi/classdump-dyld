/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SPDaemonQueryDelegate;
#import <Search/Search-Structs.h>
@class SPSearchQuery, ;

@interface SPDaemonQueryToken : NSObject {

	CFMachPortRef _callbackPort;
	SPSearchQuery* _query;
	<SPDaemonQueryDelegate>* _delegate;
	unsigned _queryID;

}

@property (assign,nonatomic) <SPDaemonQueryDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned queryID;                              //@synthesize queryID=_queryID - In the implementation block
@property (nonatomic,readonly) SPSearchQuery * query;                         //@synthesize query=_query - In the implementation block
-(void)handleMessage:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)query;
-(unsigned)queryID;
-(id)initWithQuery:(id)arg1 ;
@end

