/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface MBDigest : NSObject
+(id)sha1;
+(id)sha1ForData:(id)arg1 ;
+(id)sha1ForFileAtPath:(id)arg1 error:(id*)arg2 ;
+(id)sha1ForString:(id)arg1 ;
-(void)updateWithString:(id)arg1 ;
-(void)finalWithBytes:(void*)arg1 length:(unsigned)arg2 ;
-(void)updateWithData:(id)arg1 ;
-(id)final;
-(BOOL)updateWithFile:(id)arg1 error:(id*)arg2 ;
-(void)updateWithBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(void)updateWithInt64:(long long)arg1 ;
-(void)updateWithInt32:(int)arg1 ;
-(void)updateWithDate:(id)arg1 ;
@end

