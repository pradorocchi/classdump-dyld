/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <backupd/backupd-Structs.h>
#import <MobileBackup/MBManager.h>
#import <backupd/MBServiceAccountDelegate.h>
#import <backupd/MBServiceDelegate.h>
#import <backupd/MBServiceLockManagerDelegate.h>
#import <backupd/MBServiceReachabilityMonitorDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_group, OS_dispatch_source;
@class NSObject, MBStateInfo, NSMutableArray, NSMapTable, MBServiceRestoreSession, MBKeyBag, MBServiceLockManager, MBServiceReachabilityMonitor;

@interface MBServiceManager : MBManager <MBServiceAccountDelegate, MBServiceDelegate, MBServiceLockManagerDelegate, MBServiceReachabilityMonitorDelegate> {

	int _serviceState;
	NSObject<OS_dispatch_queue>* _stateQueue;
	NSObject<OS_dispatch_group>* _serviceGroup;
	MBStateInfo* _backupState;
	MBStateInfo* _restoreState;
	NSMutableArray* _engines;
	NSMapTable* _enginesByContext;
	BOOL _scheduled;
	MBServiceRestoreSession* _restoreSession;
	MBKeyBag* _restoreKeyBag;
	MBServiceLockManager* _lockManager;
	int _obliterateToken;
	MBServiceReachabilityMonitor* _reachabilityMonitor;
	BOOL _notifyDisplayWifiTimerArmed;
	NSObject<OS_dispatch_queue>* _userNotificationQueue;
	CFRunLoopTimerRef _warnTimerRef;
	NSObject<OS_dispatch_source>* _lowDiskSource;
	BOOL _serverLoggingOverride;

}

@property (readonly) int serviceState;              //@synthesize serviceState=_serviceState - In the implementation block
+(id)sharedServiceManager;
-(BOOL)startBackupWithError:(id*)arg1 scheduled:(BOOL)arg2 ;
-(void)cancelEngineForContext:(id)arg1 ;
-(void)accountChanged:(id)arg1 ;
-(void)cancelRestoreForContext:(id)arg1 ;
-(void)_loadBackupStateInfo;
-(void)_loadRestoreSession;
-(void)_cleanupStaleState;
-(void)_obliterating;
-(void)_cancelAllBackgroundRestoreEngines;
-(id)_settingsContextForBackupUDID:(id)arg1 ;
-(id)_encryptionManager;
-(void)_notifyRestoreCompleted;
-(id)_settingsContextForForegroundRestoreWithBackupUDID:(id)arg1 snapshotID:(unsigned)arg2 ;
-(void)_runScanWithMode:(int)arg1 context:(id)arg2 ;
-(id)_service;
-(void)_updateLockdownKeysForAccountState:(id)arg1 ;
-(void)_finishedRestore;
-(BOOL)_setBackupDisabledIfMissingFromAccount;
-(void)_runBackupWithContext:(id)arg1 reason:(int)arg2 ;
-(void)_runRestoreWithSettingsContext:(id)arg1 delegateContext:(id)arg2 ;
-(id)_settingsContextForBackgroundFileRestoreWithPath:(id)arg1 ;
-(BOOL)_startBackgroundRestoreWithSettingsContext:(id)arg1 delegateContext:(id)arg2 error:(id*)arg3 ;
-(id)_settingsContextForBackgroundAppRestoreWithBundleID:(id)arg1 errorCode:(int)arg2 ;
-(id)_debugContext;
-(void)_finishRestore:(BOOL)arg1 ;
-(void)_clearRestoreSession;
-(void)_disableHyperLogging;
-(id)_domainInfoForName:(id)arg1 cache:(id)arg2 appManager:(id)arg3 ;
-(BOOL)_removeDomainName:(id)arg1 service:(id)arg2 error:(id*)arg3 ;
-(id)_deviceBackupFromCache;
-(void)_saveFailedBackupShadowState;
-(BOOL)_coalesceSnapshotsWithService:(id)arg1 error:(id*)arg2 ;
-(void)_notifyUserOfQuotaDepletionForContext:(id)arg1 ;
-(void)_saveBackupStateInfo;
-(void)_cleanupRestoreDirectory;
-(void)_enableForegroundHyperLogging;
-(void)_enableBackgroundHyperLogging;
-(void)_prepareForBackgroundRestore;
-(void)_finalizeRestoreDirectory;
-(void)_alertUserOfIncompleteRestore;
-(void)_notifyDisplayWifi;
-(void)_performToolWithBackupUDID:(id)arg1 snapshotID:(unsigned)arg2 block:(/*^block*/ id)arg3 ;
-(BOOL)_shouldEnableHyperLogging;
-(void)serviceDidHoldLock:(id)arg1 ;
-(void)lockManagerDidReleaseLock:(id)arg1 ;
-(void)lockManager:(id)arg1 failedToReleaseLockWithError:(id)arg2 ;
-(void)reachabilityMonitor:(id)arg1 didDetectWifiStatusChange:(BOOL)arg2 ;
-(id)deviceBackup;
-(int)serviceState;
-(void)setLogLevel:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(BOOL)arg3 range:(NSRange)arg4 error:(id*)arg5 ;
-(BOOL)setupBackupWithPasscode:(id)arg1 error:(id*)arg2 ;
-(BOOL)isBackupEnabled;
-(void)setBackupEnabled:(BOOL)arg1 ;
-(void)syncBackupEnabled;
-(id)backupState;
-(id)getBackupListWithFiltering:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)restoreFileExistsWithPath:(id)arg1 ;
-(BOOL)restoreDataExistsForApplicationWithBundleID:(id)arg1 size:(unsigned long long*)arg2 ;
-(void)prioritizeRestoreFileWithPath:(id)arg1 ;
-(BOOL)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)restoreFileWithPath:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(BOOL)restoreApplicationWithBundleID:(id)arg1 failed:(BOOL)arg2 context:(id)arg3 error:(id*)arg4 ;
-(BOOL)cancelApplicationRestoreWithBundleID:(id)arg1 error:(id*)arg2 ;
-(void)finishRestore;
-(void)insufficientFreeSpaceToRestore;
-(void)cancelRestore;
-(BOOL)deleteBackupUDID:(id)arg1 error:(id*)arg2 ;
-(BOOL)startScanWithError:(id*)arg1 ;
-(unsigned long long)nextBackupSize;
-(id)domainInfoForName:(id)arg1 ;
-(id)domainInfoList;
-(BOOL)removeDomainName:(id)arg1 error:(id*)arg2 ;
-(BOOL)isBackupEnabledForDomainName:(id)arg1 ;
-(void)setBackupEnabled:(BOOL)arg1 forDomainName:(id)arg2 ;
-(BOOL)extractItemFromBackupUDID:(id)arg1 snapshotID:(unsigned)arg2 domainName:(id)arg3 relativePath:(id)arg4 toPath:(id)arg5 error:(id*)arg6 ;
-(BOOL)addFileToBackupUDID:(id)arg1 snapshotID:(unsigned)arg2 domainName:(id)arg3 relativePath:(id)arg4 fromPath:(id)arg5 error:(id*)arg6 ;
-(BOOL)deleteItemFromBackupUDID:(id)arg1 snapshotID:(unsigned)arg2 domainName:(id)arg3 relativePath:(id)arg4 error:(id*)arg5 ;
-(id)getAppleIDsForBackupUDID:(id)arg1 snapshotID:(unsigned)arg2 error:(id*)arg3 ;
-(int)getLogLevel;
-(void)setAllowiTunesBackup:(BOOL)arg1 ;
-(BOOL)allowiTunesBackup;
-(void)keyBagIsLocking;
-(void)keyBagIsUnlocked;
-(BOOL)deleteAccountWithError:(id*)arg1 ;
-(BOOL)deleteSnapshotID:(unsigned)arg1 fromBackupUDID:(id)arg2 error:(id*)arg3 ;
-(BOOL)acquireLockWithBackupUDID:(id)arg1 owner:(id)arg2 timeout:(double)arg3 error:(id*)arg4 ;
-(BOOL)releaseLockWithBackupUDID:(id)arg1 owner:(id)arg2 error:(id*)arg3 ;
-(void)repair;
-(id)_account;
-(id)restoreState;
@end

