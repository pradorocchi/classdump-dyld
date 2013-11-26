/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface MBBackupScheduler : NSObject {

	double _backupPeriod;
	BOOL _enabled;
	NSObject<OS_dispatch_queue>* _stateQueue;
	NSObject<OS_dispatch_source>* _backupTimer;
	BOOL _initiatedBackup;
	int _backupStateToken;
	void* _reachabilityRef;
	unsigned _powerNotification;
	int _lockToken;
	BOOL _isPowered;
	BOOL _isLocked;
	BOOL _isOnWiFi;
	BOOL _ignorePowerState;
	double _initialBackupWarningPeriod;
	double _backupWarningPeriod;
	double _recuringBackupWarningPeriod;

}

@property (assign,nonatomic) double backupPeriod;              //@synthesize backupPeriod=_backupPeriod - In the implementation block
@property (assign,nonatomic) BOOL enabled;                     //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL isPowered; 
@property (assign,nonatomic) BOOL isLocked; 
@property (assign,nonatomic) BOOL isOnWiFi; 
+(id)sharedScheduler;
-(BOOL)isPowered;
-(void)setIsLocked:(BOOL)arg1 ;
-(void)accountChanged:(id)arg1 ;
-(double)backupPeriod;
-(void)_warnUserOfUnverifiedAccount;
-(void)_installMonitors;
-(void)_managerDidFailBackupWithError:(id)arg1 ;
-(void)_managerDidFinishBackup;
-(unsigned)_failureCount;
-(id)_retryAfterDate;
-(id)_minimumRetryAfterDate:(BOOL)arg1 ;
-(void)_updateRetryAfterDateWithDate:(id)arg1 ;
-(void)_clearFailureCount;
-(void)_clearRetryAfterDate;
-(void)_cancelScheduledBackup;
-(void)_stateDidChange;
-(void)_incrementFailureCount;
-(void)_warnUserOfLateBackupIfNecessary;
-(id)_filteredSnapshotsFromCache;
-(id)_dateOfSnapshot:(id)arg1 ;
-(id)_dateOfNextDesiredBackup;
-(void)_scheduleBackupAtDate:(id)arg1 ;
-(void)_rescheduleForSoftCancel;
-(void)setIsPowered:(BOOL)arg1 ;
-(BOOL)isOnWiFi;
-(void)setIsOnWiFi:(BOOL)arg1 ;
-(void)setBackupPeriod:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isLocked;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)enabled;
-(id)dateOfLastBackup;
-(id)dateOfNextScheduledBackup;
@end

