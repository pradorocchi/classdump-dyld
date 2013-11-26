/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue, OS_dispatch_group, MCProfileServiceServerDelegate;
#import <profiled/profiled-Structs.h>
@class CPDistributedMessagingCenter, NSObject, , MCTimerContext;

@interface MCProfileServiceServer : NSObject {

	CPDistributedMessagingCenter* _messageCenter;
	CPDistributedMessagingCenter* _publicMessageCenter;
	NSObject<OS_dispatch_queue>* _workerQueue;
	NSObject<OS_dispatch_group>* _workerGroup;
	BOOL _memberQueueNeedToRecomputeNagMetadata;
	<MCProfileServiceServerDelegate>* _delegate;
	NSObject<OS_dispatch_queue>* _memberQueue;
	MCTimerContext* _memberQueueTimerContext;
	int _powerAssertionAssertedNotificationToken;
	int _powerAssertionDeassertedNotificationToken;
	int _mobileKeybagLockStateChangeNotificationToken;
	double _memberQueueIdleTimeInterval;

}

@property (assign,nonatomic,__weak) <MCProfileServiceServerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double idleTimeInterval; 
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * memberQueue;                       //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) MCTimerContext * memberQueueTimerContext;                        //@synthesize memberQueueTimerContext=_memberQueueTimerContext - In the implementation block
@property (assign,nonatomic) double memberQueueIdleTimeInterval;                              //@synthesize memberQueueIdleTimeInterval=_memberQueueIdleTimeInterval - In the implementation block
@property (assign,nonatomic) BOOL memberQueueNeedToRecomputeNagMetadata;                      //@synthesize memberQueueNeedToRecomputeNagMetadata=_memberQueueNeedToRecomputeNagMetadata - In the implementation block
@property (assign,nonatomic) int powerAssertionAssertedNotificationToken;                     //@synthesize powerAssertionAssertedNotificationToken=_powerAssertionAssertedNotificationToken - In the implementation block
@property (assign,nonatomic) int powerAssertionDeassertedNotificationToken;                   //@synthesize powerAssertionDeassertedNotificationToken=_powerAssertionDeassertedNotificationToken - In the implementation block
@property (assign,nonatomic) int mobileKeybagLockStateChangeNotificationToken;                //@synthesize mobileKeybagLockStateChangeNotificationToken=_mobileKeybagLockStateChangeNotificationToken - In the implementation block
-(id)memberQueueTimerContext;
-(void)setMemberQueueTimerContext:(id)arg1 ;
-(void)setIdleTimeInterval:(double)arg1 ;
-(void)popProfileDataFromHeadOfInstallationQueue:(id)arg1 params:(id)arg2 ;
-(void)queueProfileDataForInstallation:(id)arg1 params:(id)arg2 ;
-(void)installProfileData:(id)arg1 params:(id)arg2 ;
-(void)updateProfileIdentifier:(id)arg1 params:(id)arg2 ;
-(void)updateProfileIdentifierInteractive:(id)arg1 params:(id)arg2 ;
-(void)installProfileDataInteractive:(id)arg1 params:(id)arg2 ;
-(void)removeProfileWithIdentifier:(id)arg1 param:(id)arg2 ;
-(void)removeProfileAsyncWithIdentifier:(id)arg1 param:(id)arg2 ;
-(id)applyRestrictionDictionary:(id)arg1 params:(id)arg2 ;
-(void)changePasscode:(id)arg1 params:(id)arg2 ;
-(void)clearPasscode:(id)arg1 params:(id)arg2 ;
-(void)removeOrphanedClientTruths:(id)arg1 params:(id)arg2 ;
-(id)managedSystemConfigurationServiceIDs:(id)arg1 params:(id)arg2 ;
-(id)managedWiFiNetworkNames:(id)arg1 params:(id)arg2 ;
-(void)processProfilesPostRestore:(id)arg1 params:(id)arg2 ;
-(void)processProfilesPostMigrate:(id)arg1 params:(id)arg2 ;
-(void)migratePostDataMigrator:(id)arg1 params:(id)arg2 ;
-(void)setParametersForSettingsByType:(id)arg1 params:(id)arg2 ;
-(void)removeBoolSetting:(id)arg1 params:(id)arg2 ;
-(void)removeValueSetting:(id)arg1 params:(id)arg2 ;
-(void)openSensitiveURL:(id)arg1 params:(id)arg2 ;
-(void)storeCertificateDataForHostIdentifier:(id)arg1 params:(id)arg2 ;
-(void)installProvisioningProfileData:(id)arg1 params:(id)arg2 ;
-(void)removeProvisioningProfile:(id)arg1 params:(id)arg2 ;
-(void)popProvisioningProfileFromHeadOfInstallationQueue:(id)arg1 params:(id)arg2 ;
-(void)crashDetection:(id)arg1 params:(id)arg2 ;
-(void)notifyStartComplianceTimer:(id)arg1 params:(id)arg2 ;
-(void)notifyHaveSeenComplianceMessage:(id)arg1 params:(id)arg2 ;
-(void)removeProfilesFromInstallationQueue:(id)arg1 params:(id)arg2 ;
-(void)recomputeNagMetadata:(id)arg1 params:(id)arg2 ;
-(void)recomputeNagMetadataSynchronously:(id)arg1 params:(id)arg2 ;
-(void)recomputeClientCompliance:(id)arg1 params:(id)arg2 ;
-(void)resetAllSettingsToDefaults:(id)arg1 params:(id)arg2 ;
-(id)setUserInfoForClientUUID:(id)arg1 params:(id)arg2 ;
-(id)managedAppIDsWithFlags:(id)arg1 params:(id)arg2 ;
-(void)removeExpiredProfiles:(id)arg1 params:(id)arg2 ;
-(id)storeProfileData:(id)arg1 params:(id)arg2 ;
-(id)profileStoredForPurpose:(id)arg1 params:(id)arg2 ;
-(id)markStoredProfileAsInstalled:(id)arg1 params:(id)arg2 ;
-(void)rereadManagedAppAttributes:(id)arg1 params:(id)arg2 ;
-(id)cloudConfigurationMachineInfoData:(id)arg1 params:(id)arg2 ;
-(void)cloudConfigurationStoreDetails:(id)arg1 params:(id)arg2 ;
-(void)storeActivationRecord:(id)arg1 params:(id)arg2 ;
-(void)setUserBookmarks:(id)arg1 params:(id)arg2 ;
-(void)stashUserBookmarks:(id)arg1 params:(id)arg2 ;
-(void)unstashUserBookmarks:(id)arg1 params:(id)arg2 ;
-(void)checkIn:(id)arg1 params:(id)arg2 ;
-(void)checkCarrierProfile:(id)arg1 params:(id)arg2 ;
-(void)performBootTimeChecks:(id)arg1 params:(id)arg2 ;
-(void)shutDown:(id)arg1 params:(id)arg2 ;
-(id)allowedOpenInAppBundleIDs:(id)arg1 params:(id)arg2 auditToken:(SCD_Struct_MC0*)arg3 ;
-(id)setAllowedURLStrings:(id)arg1 params:(id)arg2 ;
-(id)addAllowedURLString:(id)arg1 params:(id)arg2 ;
-(id)addBookmark:(id)arg1 params:(id)arg2 ;
-(BOOL)memberQueueNeedToRecomputeNagMetadata;
-(double)memberQueueIdleTimeInterval;
-(void)_startIdleTimerWithTimeInterval:(double)arg1 context:(id)arg2 ;
-(void)didReceiveKeybagLockStateChangeNotification;
-(void)_workerQueuePrepareForService;
-(void)workerQueueRecomputeNagMessage;
-(void)_idleTimeout;
-(void)setMemberQueueIdleTimeInterval:(double)arg1 ;
-(void)setMemberQueueNeedToRecomputeNagMetadata:(BOOL)arg1 ;
-(void)workerQueueDidRecomputeNagMessageWithResult:(BOOL)arg1 ;
-(void)_startCrashDetection;
-(void)_stopCrashDetiction;
-(void)_sendRestrictionChangedNotification;
-(void)_sendEffectiveSettingsChangedNotification;
-(id)bookmarkDictsFromBookmarks:(id)arg1 ;
-(void)setURLsFromUserBookmarkDictsAsSettings:(id)arg1 ;
-(void)_removeAllCarrierProfiles;
-(void)_checkCarrierProfileForceReinstallation:(BOOL)arg1 ;
-(id)_badProvisioningProfileError;
-(void)workerQueueRemoveExpiredProfiles;
-(id)bookmarksFromBookmarkDicts:(id)arg1 ;
-(double)idleTimeInterval;
-(int)powerAssertionAssertedNotificationToken;
-(void)setPowerAssertionAssertedNotificationToken:(int)arg1 ;
-(int)powerAssertionDeassertedNotificationToken;
-(void)setPowerAssertionDeassertedNotificationToken:(int)arg1 ;
-(int)mobileKeybagLockStateChangeNotificationToken;
-(void)setMobileKeybagLockStateChangeNotificationToken:(int)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)start;
-(void)stop;
-(id)memberQueue;
-(void)setMemberQueue:(id)arg1 ;
-(void)removeExpiredProfiles;
-(void)storeCloudConfigurationDetails:(id)arg1 ;
-(void)fetchConfigurationWithCompletionBlock:(/*^block*/ id)arg1 ;
-(BOOL)mayOpenFromManagedToUnmanaged;
-(BOOL)mayOpenFromUnmanagedToManaged;
-(BOOL)isOpenInRestrictionInEffect;
-(void).cxx_destruct;
@end

