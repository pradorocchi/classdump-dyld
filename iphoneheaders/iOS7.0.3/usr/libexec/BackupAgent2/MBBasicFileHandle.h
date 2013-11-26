/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/BackupAgent2
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BackupAgent2/BackupAgent2-Structs.h>
#import <backupd/MBFileHandle.h>

@class NSString;

@interface MBBasicFileHandle : MBFileHandle {

	NSString* _path;
	int _fd;

}
+(id)basicFileHandleWithPath:(id)arg1 flags:(int)arg2 mode:(unsigned short)arg3 error:(id*)arg4 ;
-(id)encryptionKeyWithError:(id*)arg1 ;
-(BOOL)closeWithError:(id*)arg1 ;
-(BOOL)statWithBuffer:(stat*)arg1 error:(id*)arg2 ;
-(int)writeWithBytes:(const void*)arg1 length:(unsigned)arg2 error:(id*)arg3 ;
-(int)readWithBytes:(void*)arg1 length:(unsigned)arg2 error:(id*)arg3 ;
-(id)initWithPath:(id)arg1 fd:(int)arg2 ;
-(int)fd;
-(void)dealloc;
-(id)path;
@end

