/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/BackupAgent2
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BackupAgent2/BackupAgent2-Structs.h>
#import <backupd/MBFileHandleProxy.h>

@class MBFileHandle;

@interface MBSQLiteFileHandle : MBFileHandleProxy {

	MBFileHandle* _originalFileHandle;

}
+(BOOL)isSQLiteFileAtPath:(id)arg1 result:(BOOL*)arg2 error:(id*)arg3 ;
+(long)lastModifiedForSQLiteFileAtPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)copySQLiteFileAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
+(BOOL)isSQLiteFileHandle:(id)arg1 result:(BOOL*)arg2 error:(id*)arg3 ;
+(BOOL)copySQLiteFileAtPath:(id)arg1 toPath:(id)arg2 timeout:(double)arg3 error:(id*)arg4 ;
+(int)_openFlagForProtectionClass:(int)arg1 ;
+(BOOL)_removeJournalsForSQLiteFileAtPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)_removeSQLiteFileAtPath:(id)arg1 error:(id*)arg2 ;
+(id)SQLiteFileHandleWithOriginalFileHandle:(id)arg1 copiedFileHandle:(id)arg2 ;
-(BOOL)closeWithError:(id*)arg1 ;
-(id)initWithOriginalFileHandle:(id)arg1 copiedFileHandle:(id)arg2 ;
-(BOOL)statWithBuffer:(stat*)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

