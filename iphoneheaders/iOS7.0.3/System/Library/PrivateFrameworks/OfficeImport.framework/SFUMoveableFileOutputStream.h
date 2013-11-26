/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/SFUOutputStream.h>

@class NSString;

@interface SFUMoveableFileOutputStream : NSObject <SFUOutputStream> {

	int mFd;
	NSString* mPath;

}
-(void)dealloc;
-(void)flush;
-(id)path;
-(long long)offset;
-(void)close;
-(id)initWithPath:(id)arg1 ;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long)arg2 ;
-(BOOL)canSeek;
-(id)closeLocalStream;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2 ;
-(BOOL)canCreateInputStream;
-(id)inputStream;
-(id)initWithTemporaryFile:(id)arg1 ;
-(BOOL)moveToPath:(id)arg1 ;
-(void)truncateToLength:(long long)arg1 ;
@end

