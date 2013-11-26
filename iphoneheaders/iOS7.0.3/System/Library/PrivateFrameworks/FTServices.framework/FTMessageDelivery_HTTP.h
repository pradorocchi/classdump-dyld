/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <FTServices/FTMessageDelivery.h>
#import <FTServices/FTMessageQueueDelegate.h>

@class IMRemoteURLConnection;

@interface FTMessageDelivery_HTTP : FTMessageDelivery <FTMessageQueueDelegate> {

	IMRemoteURLConnection* _remoteConnection;
	BOOL _pendingRetryAfterAirplaneMode;
	double _retryTimeAfterAirplaneMode;

}
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)networkStateChanged;
-(void)_clearRetryTimer;
-(BOOL)_sendMessageAsynchronously:(id)arg1 error:(id*)arg2 ;
-(void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2 ;
-(void)_serverBagLoaded:(id)arg1 ;
-(void)_cleanupURLConnection;
-(void)_dequeueIfNeeded;
-(id)_urlRequestWithURL:(id)arg1 andData:(id)arg2 message:(id)arg3 ;
-(BOOL)_tryRetryMessageWithTimeInterval:(double)arg1 ;
-(id)_processResultData:(id)arg1 forMessage:(id)arg2 error:(id*)arg3 ;
-(void)_notifyDelegateAboutError:(id)arg1 forMessage:(id)arg2 ;
-(void)_updateWiFiAssertions;
-(BOOL)sendMessage:(id)arg1 ;
-(void)cancelMessage:(id)arg1 ;
-(BOOL)busy;
@end

