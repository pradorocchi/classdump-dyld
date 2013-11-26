/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:02 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSXPCConnection;

@interface MCTeslaConfiguration : NSObject {

	BOOL _fetching;
	/*^block*/ id _callback;
	NSXPCConnection* _connection;

}

@property (nonatomic,copy) id callback;                                    //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                 //@synthesize connection=_connection - In the implementation block
@property (assign,getter=isFetching,nonatomic) BOOL fetching;              //@synthesize fetching=_fetching - In the implementation block
-(/*^block*/ id)callback;
-(void)setCallback:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)connection;
-(void)setConnection:(id)arg1 ;
-(void)fetchConfigurationWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)fetchDidFailWithError:(id)arg1 ;
-(void)setFetching:(BOOL)arg1 ;
-(id)connectionError;
-(BOOL)isFetching;
-(void).cxx_destruct;
@end

