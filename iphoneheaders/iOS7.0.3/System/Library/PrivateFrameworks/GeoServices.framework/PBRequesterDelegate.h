/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:29 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol PBRequesterDelegate <NSObject>
@optional
-(void)requester:(id)arg1 didReceiveResponse:(id)arg2 forRequest:(id)arg3;
-(void)requesterDidFinish:(id)arg1;
-(void)requesterDidCancel:(id)arg1;
-(void)requester:(id)arg1 didFailWithError:(id)arg2;
-(void)requesterWillSendRequestForEstablishedConnection:(id)arg1;
@end

