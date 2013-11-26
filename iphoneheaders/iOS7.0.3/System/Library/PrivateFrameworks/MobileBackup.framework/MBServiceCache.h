/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <backupd/backupd-Structs.h>
@class NSString, MBServiceConfiguration, MBDomainManager, NSMutableSet, NSMutableDictionary;

@interface MBServiceCache : NSObject {

	NSString* _path;
	sqlite3Ref _db;
	int _openCount;
	BOOL _corrupt;
	MBServiceConfiguration* _configuration;
	BOOL _configurationUpToDate;
	MBDomainManager* _domainManager;
	NSMutableSet* _disabledDomainNames;
	NSMutableDictionary* _stmtsBySQL;
	NSMutableDictionary* _countAndTimeBySQL;
	NSMutableSet* _upToDateBackpuUDIDs;

}

@property (nonatomic,retain) MBDomainManager * domainManager;              //@synthesize domainManager=_domainManager - In the implementation block
+(id)systemPath;
+(id)cacheWithPath:(id)arg1 ;
-(void)_remove;
-(void)setDisabledDomainNames:(id)arg1 restrictedDomainNames:(id)arg2 ;
-(id)backupForUDID:(id)arg1 lastModified:(int*)arg2 ;
-(id)restoreFailuresForDataClass:(id)arg1 assetType:(id)arg2 range:(NSRange)arg3 ;
-(void)removeAccount;
-(void)removeBackupforUDID:(id)arg1 ;
-(void)removeSnapshotForID:(unsigned)arg1 backupUDID:(id)arg2 lastModified:(long)arg3 ;
-(void)setLastModified:(long)arg1 forBackupUDID:(id)arg2 ;
-(id)filesToRestoreForDomainName:(id)arg1 relativePath:(id)arg2 pendingOnly:(BOOL)arg3 backupUDID:(id)arg4 range:(NSRange)arg5 ;
-(BOOL)restoreFileExistsWithDomainName:(id)arg1 relativePath:(id)arg2 backupUDID:(id)arg3 ;
-(BOOL)restoreFilesExistForDomainName:(id)arg1 backupUDID:(id)arg2 size:(unsigned long long*)arg3 ;
-(void)prioritizeRestoreFileWithFileID:(id)arg1 ;
-(unsigned long long)nextBackupSizeWithUDID:(id)arg1 ;
-(id)domainInfoForName:(id)arg1 backupUDID:(id)arg2 ;
-(id)domainNamesForBackupUDID:(id)arg1 ;
-(void)removeDomainName:(id)arg1 backupUDID:(id)arg2 lastModified:(long)arg3 ;
-(void)updateFileChangesAfterRemovingDomainName:(id)arg1 ;
-(void)addDisabledDomainNames:(id)arg1 restricted:(BOOL)arg2 ;
-(void)fileChangeCount:(unsigned*)arg1 size:(unsigned long long*)arg2 ;
-(void)removeDisabledDomainNames:(id)arg1 ;
-(void)mergeSnapshotForID:(unsigned)arg1 backupUDID:(id)arg2 lastModified:(long)arg3 ;
-(BOOL)areAllFilesCommittedForSnapshotID:(unsigned)arg1 backupUDID:(id)arg2 ;
-(void)analyze;
-(id)snapshotForSnapshotID:(unsigned)arg1 backupUDID:(id)arg2 ;
-(BOOL)refreshForBackupUDID:(id)arg1 service:(id)arg2 deleted:(BOOL*)arg3 error:(id*)arg4 ;
-(void)verifyBackupUDID:(id)arg1 service:(id)arg2 ;
-(void)forceRefreshForBackupUDID:(id)arg1 ;
-(id)keybagUUIDForBackupUDID:(id)arg1 ;
-(void)removeAllFileChanges;
-(void)removeAllFilesMissingEncryptionKey;
-(BOOL)areFilesMissingEncryptionKey;
-(id)fileForID:(id)arg1 backupUDID:(id)arg2 ;
-(id)encryptionKeyForFileWithInodeNumber:(unsigned long long)arg1 ;
-(void)addFileMissingEncryptionKeyWithPath:(id)arg1 ;
-(void)setFileEncryptionKey:(id)arg1 forInodeNumber:(unsigned long long)arg2 ;
-(void)addFileChange:(id)arg1 ;
-(id)deletedFileIDEnumeratorForBackupUDID:(id)arg1 ;
-(void)addBackup:(id)arg1 lastModified:(long)arg2 ;
-(void)addSnapshot:(id)arg1 backupUDID:(id)arg2 ;
-(id)fileChangeEnumeratorWithOffset:(unsigned)arg1 limit:(unsigned)arg2 ;
-(void)removeFileEncryptionKeyForInodeNumber:(unsigned long long)arg1 ;
-(id)fileForID:(id)arg1 snapshotID:(unsigned)arg2 backupUDID:(id)arg3 ;
-(void)setStale:(BOOL)arg1 forSnapshotID:(unsigned)arg2 backupUDID:(id)arg3 ;
-(void)addFile:(id)arg1 snapshotID:(unsigned)arg2 backupUDID:(id)arg3 committed:(BOOL)arg4 ;
-(void)setLastModified:(long)arg1 forSnapshotID:(unsigned)arg2 backupUDID:(id)arg3 ;
-(void)setCommitted:(BOOL)arg1 forFileID:(id)arg2 snapshotID:(unsigned)arg3 backupUDID:(id)arg4 ;
-(void)setResult:(int)arg1 forFileChangeID:(id)arg2 ;
-(id)fileChangeIDsWithResult:(int)arg1 offset:(unsigned)arg2 limit:(unsigned)arg3 ;
-(void)removeFileID:(id)arg1 forSnapshotID:(unsigned)arg2 backupUDID:(id)arg3 ;
-(void)setCommitted:(long)arg1 forSnapshotID:(unsigned)arg2 backupUDID:(id)arg3 ;
-(void)setLocalCommitted:(long)arg1 snapshotID:(unsigned)arg2 backupUDID:(id)arg3 ;
-(void)updateFileChangesAfterCommittingSnapshot;
-(void)removeAllFileEncryptionKeys;
-(void)_raise:(id)arg1 ;
-(void)_profile:(id)arg1 time:(double)arg2 ;
-(void)_exec:(id)arg1 ;
-(void)_finalizeAll;
-(void)_logProfile;
-(id)_prepare:(id)arg1 ;
-(void)removeAllBackups;
-(void)removeAllDisabledDomains;
-(void)removeAllRestores;
-(id)snapshotsForBackupUDID:(id)arg1 ;
-(id)_snapshotWithStmt:(id)arg1 ;
-(void)_removeSnapshotForID:(unsigned)arg1 backupUDID:(id)arg2 ;
-(long)localCommittedForSnapshotID:(unsigned)arg1 backupUDID:(id)arg2 ;
-(id)_fileWithStmt:(id)arg1 ;
-(long long)_lastInsertRowID;
-(id)_fileIDEnumeratorWithStmt:(id)arg1 ;
-(id)_disabledDomainNames;
-(id)_lastRefreshPropertyKeyForBackupUDID:(id)arg1 ;
-(BOOL)isStaleSnapshotID:(unsigned)arg1 backupUDID:(id)arg2 ;
-(BOOL)_rebuildSnapshot:(id)arg1 backupUDID:(id)arg2 service:(id)arg3 error:(id*)arg4 ;
-(void)setDomainManager:(id)arg1 ;
-(id)_fileChangeFromStmt:(id)arg1 ;
-(id)_restoreFileWithStmt:(id)arg1 ;
-(id)_restoreFilesWithStmt:(id)arg1 ;
-(BOOL)encryptedFilesExistForBackupUDID:(id)arg1 ;
-(id)fileIDEnumeratorForSnapshotID:(unsigned)arg1 backupUDID:(id)arg2 ;
-(id)activeDomainNamesForBackupUDID:(id)arg1 ;
-(id)dateOfLastRefreshForBackupUDID:(id)arg1 ;
-(BOOL)isRefreshNeededForBackupUDID:(id)arg1 ;
-(id)pathsForFilesMissingEncryptionKeyWithOffset:(unsigned)arg1 limit:(unsigned)arg2 ;
-(void)removeFileMissingEncryptionKeyWithPath:(id)arg1 ;
-(unsigned)restoreIDForMode:(id)arg1 ;
-(void)removeRestoreForID:(unsigned)arg1 ;
-(id)restoreBackupUDID;
-(void)setRestoreBackupUDID:(id)arg1 ;
-(int)restoreSnapshotID;
-(void)setRestoreSnapshotID:(int)arg1 ;
-(long)restoreBackupLastModified;
-(void)setRestoreBackupLastModified:(long)arg1 ;
-(BOOL)containsRestoreFilesForRestoreID:(unsigned)arg1 ;
-(BOOL)containsFailedRestoreFilesForRestoreID:(unsigned)arg1 ;
-(void)restoreFilesCount:(unsigned*)arg1 size:(unsigned long long*)arg2 forRestoreID:(unsigned)arg3 backupUDID:(id)arg4 ;
-(id)restoreFilesForBackupUDID:(id)arg1 offset:(unsigned)arg2 limit:(unsigned)arg3 ;
-(id)restoreFilesForSnapshotID:(unsigned)arg1 backupUDID:(id)arg2 restoreID:(unsigned)arg3 offset:(unsigned)arg4 limit:(unsigned)arg5 ;
-(id)restoreFileForFileID:(id)arg1 ;
-(id)restoreFileForItemID:(unsigned long long)arg1 ;
-(void)addRestoreFile:(id)arg1 ;
-(void)setRestoreID:(unsigned)arg1 forRestoreFile:(id)arg2 ;
-(void)setRestoreID:(unsigned)arg1 forDomainName:(id)arg2 relativePath:(id)arg3 backupUDID:(id)arg4 ;
-(void)setState:(int)arg1 forFileID:(id)arg2 restoreID:(unsigned)arg3 ;
-(void)setState:(int)arg1 forRestoreID:(unsigned)arg2 ;
-(id)protectionClassesToRestoreByPathWithOffset:(unsigned)arg1 limit:(unsigned)arg2 ;
-(void)setProtectionClass:(int)arg1 toRestoreForPath:(id)arg2 ;
-(void)removeAllProtectionClassesToRetore;
-(void)addRestoreFailure:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(void)begin;
-(void)end;
-(void)close;
-(id)initWithPath:(id)arg1 ;
-(id)configuration;
-(void)setConfiguration:(id)arg1 ;
-(BOOL)isDomainNameEnabled:(id)arg1 ;
-(id)relativePathsOfPlaceholderResourcesWithBundleID:(id)arg1 lastModified:(long)arg2 ;
-(void)setPlaceholderResourceRelativePaths:(id)arg1 lastModfied:(long)arg2 forBundleID:(id)arg3 ;
-(unsigned)countOfRestoreFailuresForDataclass:(id)arg1 assetType:(id)arg2 ;
-(void)repair;
-(id)domainManager;
-(void)rollback;
-(id)creationDate;
-(void)removePropertyForKey:(id)arg1 ;
-(void)vacuum;
-(void)open;
@end

