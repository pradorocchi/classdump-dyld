/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <IDSFoundation/APSConnectionDelegate.h>

@class APSConnection;

@interface CLPushServiceState : NSObject <APSConnectionDelegate> {

	APSConnection* apsConnection;
	/*^block*/ id connectionStatusBlock;

}

@property (nonatomic,retain) APSConnection * apsConnection; 
@property (nonatomic,copy) id connectionStatusBlock; 
-(void)setApsConnection:(id)arg1 ;
-(id)apsConnection;
-(id)initWithStatusBlock:(/*^block*/ id)arg1 ;
-(void)setConnectionStatusBlock:(/*^block*/ id)arg1 ;
-(/*^block*/ id)connectionStatusBlock;
-(bool)isConnected;
-(void)dealloc;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2 ;
@end

