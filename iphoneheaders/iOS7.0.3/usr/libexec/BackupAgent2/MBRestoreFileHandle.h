/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/BackupAgent2
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <backupd/MBFileHandleProxy.h>

@class MBDriveRestoreEngine, MBFile, MBDigest;

@interface MBRestoreFileHandle : MBFileHandleProxy {

	MBDriveRestoreEngine* _engine;
	MBFile* _file;
	MBDigest* _digest;
	double _startTime;

}
-(BOOL)closeWithError:(id*)arg1 ;
-(int)writeWithBytes:(const void*)arg1 length:(unsigned)arg2 error:(id*)arg3 ;
-(id)initWithEngine:(id)arg1 fileHandle:(id)arg2 file:(id)arg3 ;
-(void)dealloc;
@end

