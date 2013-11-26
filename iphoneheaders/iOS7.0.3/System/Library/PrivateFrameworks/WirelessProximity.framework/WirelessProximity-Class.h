/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:28:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WirelessProximity/XPCClientDelegate.h>

@protocol WirelessProximityDelegate, OS_dispatch_queue;
@class , XPCClient, NSObject;

@interface WirelessProximity : NSObject <XPCClientDelegate> {

	int _state;
	<WirelessProximityDelegate>* _delegate;
	XPCClient* _connection;
	NSObject<OS_dispatch_queue>* _queue;

}

@property (assign,nonatomic) int state;                                                  //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) <WirelessProximityDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) XPCClient * connection;                                     //@synthesize connection=_connection - In the implementation block
@property (retain) NSObject<OS_dispatch_queue> * queue;                                  //@synthesize queue=_queue - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)connection;
-(void)setConnection:(id)arg1 ;
-(id)queue;
-(void)setQueue:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void).cxx_destruct;
-(void)updateState:(int)arg1 ;
-(void)messageArrived:(id)arg1 ;
-(void)connectionDied;
-(void)connectionInterrupted;
@end

