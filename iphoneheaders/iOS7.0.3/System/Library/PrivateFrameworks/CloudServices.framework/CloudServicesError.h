/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface CloudServicesError : NSObject
+(id)errorWithCode:(int)arg1 format:(id)arg2 ;
+(long)codeForNSError:(id)arg1 ;
+(long)codeForErrno:(long)arg1 ;
+(id)errorWithCode:(int)arg1 URL:(id)arg2 format:(id)arg3 ;
+(id)errorWithCode:(int)arg1 error:(id)arg2 format:(id)arg3 ;
+(id)sanitizedError:(id)arg1 ;
+(id)errorWithCode:(int)arg1 error:(id)arg2 URL:(id)arg3 format:(id)arg4 ;
+(id)errorWithDomain:(id)arg1 code:(int)arg2 format:(id)arg3 ;
+(id)errorForNSError:(id)arg1 path:(id)arg2 format:(id)arg3 ;
+(id)errorForHTTPURLResponse:(id)arg1 error:(id)arg2 ;
@end

