/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:42 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface IDSEncryptionHelpers : NSObject
+(id)encryptMessage:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forService:(id)arg4 forToken:(id)arg5 encryptionType:(int*)arg6 error:(int*)arg7 ;
+(id)decryptMessage:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forService:(id)arg4 fromToken:(id)arg5 encryptionType:(int)arg6 error:(int*)arg7 ;
+(void)noteEncryptionErrorForToken:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 forService:(id)arg4 messageData:(id)arg5 type:(int)arg6 encrypt:(BOOL)arg7 remote:(BOOL)arg8 ;
@end

