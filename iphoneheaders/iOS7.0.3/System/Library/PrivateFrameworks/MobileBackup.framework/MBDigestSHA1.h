/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <MobileBackup/MBDigest.h>

@interface MBDigestSHA1 : MBDigest {

	CC_SHA1state_st _context;

}
-(id)init;
-(void)finalWithBytes:(void*)arg1 length:(unsigned)arg2 ;
-(id)final;
-(void)updateWithBytes:(const void*)arg1 length:(unsigned)arg2 ;
@end

