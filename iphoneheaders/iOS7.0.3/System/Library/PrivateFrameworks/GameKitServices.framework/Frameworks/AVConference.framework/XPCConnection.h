/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_xpc_object;
@class NSObject, NSData;

@interface XPCConnection : NSObject {

	NSObject<OS_xpc_object>* connection;
	int pid;
	id context;
	NSData* tokenData;

}

@property (assign) NSObject<OS_xpc_object> * connection; 
@property (assign) int pid; 
@property (nonatomic,retain) id context; 
@property (nonatomic,retain) NSData * tokenData; 
-(void)dealloc;
-(id)init;
-(id)description;
-(id)context;
-(void)setContext:(id)arg1 ;
-(id)connection;
-(void)setConnection:(id)arg1 ;
-(void)setTokenData:(id)arg1 ;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(id)tokenData;
@end

