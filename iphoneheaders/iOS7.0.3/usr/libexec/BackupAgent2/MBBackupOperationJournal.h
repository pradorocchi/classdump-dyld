/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/BackupAgent2
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, MBEncoder, NSMutableArray;

@interface MBBackupOperationJournal : NSObject {

	NSString* _path;
	MBEncoder* _encoder;
	unsigned _countByType[5];
	unsigned long long _sizeByType[5];
	NSMutableArray* _driveOperationsByType[5];
	unsigned _batchCountByType[5];
	unsigned long long _batchSizeByType[5];
	unsigned _batchSize;

}

@property (nonatomic,readonly) NSString * path;                      //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) unsigned batchSize;                   //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,readonly) unsigned long long size; 
+(id)backupOperationJournalWithBatchSize:(unsigned)arg1 ;
+(id)driveOperationWithBackupOperationType:(int)arg1 count:(unsigned)arg2 size:(unsigned long long)arg3 ;
-(id)initWithBatchSize:(unsigned)arg1 ;
-(id)driveOperationsForType:(int)arg1 ;
-(unsigned long long)sizeForType:(int)arg1 ;
-(unsigned)countForType:(int)arg1 ;
-(id)operationEnumeratorWithDomainManager:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)size;
-(id)path;
-(void)commit;
-(void)close;
-(void)addOperation:(id)arg1 ;
-(unsigned)batchSize;
@end

