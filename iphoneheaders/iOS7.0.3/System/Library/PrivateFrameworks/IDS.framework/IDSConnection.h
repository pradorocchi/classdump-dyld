/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:40 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class _IDSConnection, IDSAccount;

@interface IDSConnection : NSObject {

	_IDSConnection* _internal;

}

@property (nonatomic,readonly) IDSAccount * account; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) _IDSConnection * _internal; 
-(id)_internal;
-(void)dealloc;
-(BOOL)isActive;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)requestKeepAlive;
-(id)initWithAccount:(id)arg1 commands:(id)arg2 ;
-(BOOL)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(int)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(id)_initWithAccount:(id)arg1 commands:(id)arg2 ;
-(BOOL)sendMessage:(id)arg1 toDestinations:(id)arg2 options:(id)arg3 identifier:(id*)arg4 error:(id*)arg5 ;
-(id)account;
-(id)initWithAccount:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
@end

