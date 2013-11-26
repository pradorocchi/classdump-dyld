/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISOperation.h>
#import <iTunesStore/ISStoreURLOperationDelegate.h>

@class NSDate, MicroPaymentQueueRequest, NSString;

@interface LoadMicroPaymentQueueCountOperation : ISOperation <ISStoreURLOperationDelegate> {

	NSDate* _lastQueueCheckDate;
	int _queueItemCount;
	MicroPaymentQueueRequest* _request;
	NSString* _urlBagKey;

}

@property (retain) NSDate * lastQueueCheckDate;                   //@synthesize lastQueueCheckDate=_lastQueueCheckDate - In the implementation block
@property (copy) MicroPaymentQueueRequest * request;              //@synthesize request=_request - In the implementation block
@property (retain) NSString * URLBagKey;                          //@synthesize urlBagKey=_urlBagKey - In the implementation block
@property (assign) int queueItemCount;                            //@synthesize queueItemCount=_queueItemCount - In the implementation block
-(id)lastQueueCheckDate;
-(BOOL)_loadCountReturningError:(id*)arg1 ;
-(BOOL)_setCountWithResponse:(id)arg1 error:(id*)arg2 ;
-(void)setQueueItemCount:(int)arg1 ;
-(void)setLastQueueCheckDate:(id)arg1 ;
-(int)queueItemCount;
-(void)setRequest:(id)arg1 ;
-(void)setURLBagKey:(id)arg1 ;
-(void)dealloc;
-(void)run;
-(id)request;
-(id)URLBagKey;
-(BOOL)operation:(id)arg1 processData:(id)arg2 error:(id*)arg3 ;
-(void)operation:(id)arg1 willSendRequest:(id)arg2 ;
@end

