/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:08:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/Support/vibrationmanagerd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface TLVibrationManagerServiceClient : NSObject
+(void)sendMessage:(id)arg1 asynchronously:(BOOL)arg2 completionBlock:(/*^block*/ id)arg3 ;
+(void)_sendXPCMessage:(id)arg1 asynchronously:(BOOL)arg2 remainingAttempts:(unsigned)arg3 previousError:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
+(id)_sharedConnection;
@end

