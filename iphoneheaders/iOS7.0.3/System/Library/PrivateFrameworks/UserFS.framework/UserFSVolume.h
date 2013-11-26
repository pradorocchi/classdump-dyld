/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/UserFS.framework/UserFS
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_xpc_object;
@class NSString, NSObject;

@interface UserFSVolume : NSObject {

	BOOL _isLocked;
	NSString* _deviceName;
	NSObject<OS_xpc_object>* _connection;

}

@property (nonatomic,readonly) NSString * deviceName;                           //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) BOOL isLocked;                                   //@synthesize isLocked=_isLocked - In the implementation block
@property (nonatomic,retain) NSObject<OS_xpc_object> * connection;              //@synthesize connection=_connection - In the implementation block
+(id)volumeWithDeviceName:(id)arg1 error:(id*)arg2 ;
+(BOOL)prepareToAccessDeviceName:(id)arg1 error:(id*)arg2 ;
-(id)itemAtPath:(id)arg1 error:(id*)arg2 ;
-(id)initWithDeviceName:(id)arg1 error:(id*)arg2 ;
-(BOOL)closeAndReturnError:(id*)arg1 ;
-(void)dealloc;
-(BOOL)isLocked;
-(id)connection;
-(void)setConnection:(id)arg1 ;
-(id)deviceName;
-(id)rootDirectoryAndReturnError:(id*)arg1 ;
-(BOOL)deleteFiles:(id)arg1 error:(id*)arg2 ;
-(BOOL)flushAndReturnError:(id*)arg1 ;
-(void).cxx_destruct;
@end

