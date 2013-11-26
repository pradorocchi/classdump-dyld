/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MCInteractionDelegate, OS_dispatch_queue;
#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
@class CPDistributedMessagingCenter, , NSDictionary, NSData, NSTimer, NSObject, NSMutableArray;

@interface MCProfileConnection : NSObject {

	CPDistributedMessagingCenter* _messageCenter;
	CFBagRef _observers;
	CPDistributedMessagingCenter* _interactionServer;
	<MCInteractionDelegate>* _interactionDelegate;
	id _interactionLockDelayedContext;
	NSDictionary* _preflightResponse;
	NSData* _originalProfileData;
	BOOL _needToRestoreOriginalProfileData;
	int _userInputTimeoutType;
	NSTimer* _userInputTimer;
	NSObject<OS_dispatch_queue>* _notificationSyncQueue;
	NSMutableArray* _notificationTokens;

}
+(id)sharedConnection;
-(BOOL)installConfigurationProfileWithData:(id)arg1 ;
-(int)appWhitelistState;
-(id)effectiveWhitelistedAppBundleIDs;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)_init;
-(BOOL)isAutomaticAppUpdatesAllowed;
-(void)removeObserver:(id)arg1 ;
-(void)setInteractionDelegate:(id)arg1 ;
-(int)effectiveBoolValueForSetting:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)shutDown;
-(id)userInfoForClientUUID:(id)arg1 ;
-(void)setUserInfo:(id)arg1 forClientUUID:(id)arg2 ;
-(void)checkIn;
-(void)_restrictionDidChange;
-(void)_passcodePolicyDidChange;
-(void)_passcodeDidChange;
-(void)_profileListDidChange;
-(void)_effectiveSettingsDidChange:(id)arg1 ;
-(void)_defaultsDidChange;
-(void)_appWhitelistDidChange:(id)arg1 ;
-(void)_applyToObservers:(/*^block*/ id)arg1 ;
-(void)_internalDefaultsDidChange;
-(void)checkInAsynchronously;
-(id)installedProfileWithIdentifier:(id)arg1 ;
-(BOOL)isPasscodeRequired;
-(void)setUserBookmarks:(id)arg1 ;
-(id)userBookmarks;
-(void)stashUserBookmarksWithLabel:(id)arg1 newUserBookmarks:(id)arg2 ;
-(void)unstashUserBookmarksFromLabel:(id)arg1 ;
-(BOOL)isActivationLockAllowed;
-(BOOL)isSupervised;
-(id)defaultValueForSetting:(id)arg1 ;
-(id)_queueDataForAcceptance:(id)arg1 originalFileName:(id)arg2 transitionToUI:(BOOL)arg3 outError:(id*)arg4 ;
-(BOOL)isPasscodeRequiredByProfiles;
-(id)passcodeExpiryDateOutError:(id*)arg1 ;
-(BOOL)unlockDeviceWithPasscode:(id)arg1 outError:(id*)arg2 ;
-(BOOL)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 localizedWarningMessage:(id)arg5 outRestrictionChanged:(BOOL*)arg6 outEffectiveSettingsChanged:(BOOL*)arg7 outError:(id*)arg8 ;
-(int)boolRestrictionForFeature:(id)arg1 ;
-(id)valueRestrictionForFeature:(id)arg1 ;
-(id)objectRestrictionForFeature:(id)arg1 ;
-(id)profileFromProfileData:(id)arg1 outError:(id*)arg2 ;
-(id)queueProfileDataForAcceptance:(id)arg1 outError:(id*)arg2 ;
-(id)queueProfileDataForInstallation:(id)arg1 outError:(id*)arg2 ;
-(id)queueFileDataForProfileInstallation:(id)arg1 originalFileName:(id)arg2 outError:(id*)arg3 ;
-(BOOL)isPasscodeRequiredByPolicy;
-(id)passcodeExpiryDate;
-(BOOL)validatePasscode:(id)arg1 ;
-(BOOL)validatePasscode:(id)arg1 andUnlockContentProtectedDevice:(BOOL)arg2 ;
-(BOOL)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 outRestrictionChanged:(BOOL*)arg4 outEffectiveSettingsChanged:(BOOL*)arg5 outError:(id*)arg6 ;
-(void)setPasscodeWasSetInBackup:(BOOL)arg1 ;
-(int)restrictedBoolValueForFeature:(id)arg1 ;
-(id)valueForFeature:(id)arg1 ;
-(id)objectForFeature:(id)arg1 ;
-(id)installedProfileIdentifiersWithFilterFlags:(int)arg1 ;
-(id)installProfileData:(id)arg1 options:(id)arg2 outError:(id*)arg3 ;
-(void)removeProfileWithIdentifier:(id)arg1 ;
-(BOOL)_openSensitiveURLString:(id)arg1 unlock:(BOOL)arg2 ;
-(BOOL)transitionToProfileAcceptanceUIAndReturnToBundleID:(id)arg1 ;
-(id)installedProfilesWithFilterFlags:(int)arg1 ;
-(void)__checkForProfiledCrash;
-(void)_doMCICDidUpdateStatus:(id)arg1 params:(id)arg2 ;
-(void)_doMCICDidBeginInstallingNextProfileData:(id)arg1 params:(id)arg2 ;
-(void)_doMCICDidFinish:(id)arg1 params:(id)arg2 ;
-(void)_doMCICRequestUserInput:(id)arg1 params:(id)arg2 ;
-(void)_doMCICPreflightResponse:(id)arg1 params:(id)arg2 ;
-(void)_doMCICShowUserWarnings:(id)arg1 params:(id)arg2 ;
-(void)_doMCICDidRequestCurrentPasscode:(id)arg1 params:(id)arg2 ;
-(void)installProfileData:(id)arg1 options:(id)arg2 interactionDelegate:(id)arg3 ;
-(void)_detectProfiledCrashes;
-(void)_registerSelectorsForInteractionServer:(id)arg1 ;
-(void)_userInputTimerFired;
-(void)_cancelUserInputTimeout;
-(void)_setTimeoutWaitingForUserInputType:(int)arg1 ;
-(void)_tearDownInteractionServer;
-(void)__doMCICDidFinish:(id)arg1 ;
-(id)cloudConfigurationDetails;
-(id)installedProfileIdentifiers;
-(id)popProfileDataFromHeadOfInstallationQueue;
-(id)popProvisioningProfileDataFromHeadOfInstallationQueue;
-(id)queueFileDataForAcceptance:(id)arg1 originalFileName:(id)arg2 outError:(id*)arg3 ;
-(void)removeProfilesFromInstallationQueue;
-(id)installProfileData:(id)arg1 outError:(id*)arg2 ;
-(void)removeProfileAsyncWithIdentifier:(id)arg1 ;
-(void)removeProfileWithIdentifier:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(id)updateProfileWithIdentifier:(id)arg1 outError:(id*)arg2 ;
-(id)acceptedMIMETypes;
-(id)acceptedFileExtensions;
-(BOOL)transitionToProfileOverviewUI;
-(BOOL)transitionToProfileAcceptanceUI;
-(BOOL)showProfileErrorUIWithProfileIdentifier:(id)arg1 outError:(id*)arg2 ;
-(BOOL)installProvisioningProfileData:(id)arg1 managingProfileIdentifier:(id)arg2 outError:(id*)arg3 ;
-(BOOL)removeProvisioningProfileWithUUID:(id)arg1 outError:(id*)arg2 ;
-(void)installProfileData:(id)arg1 interactionDelegate:(id)arg2 ;
-(void)updateProfileWithIdentifier:(id)arg1 interactionDelegate:(id)arg2 ;
-(void)preflightUserInputResponses:(id)arg1 forPayloadIndex:(unsigned)arg2 ;
-(void)cancelUserInputResponses;
-(void)submitUserInputResponses:(id)arg1 ;
-(void)respondToWarningsContinueInstallation:(BOOL)arg1 ;
-(void)respondToCurrentPasscodeRequestContinue:(BOOL)arg1 passcode:(id)arg2 ;
-(BOOL)isChaperoned;
-(id)chaperoneOrganization;
-(id)allClientUUIDsForClientType:(id)arg1 ;
-(id)effectiveRestrictions;
-(int)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 localizedWarningMessage:(id)arg5 complianceBlocking:(int)arg6 displayImmediateAlert:(BOOL)arg7 outRestrictionChanged:(BOOL*)arg8 outEffectiveSettingsChanged:(BOOL*)arg9 outError:(id*)arg10 ;
-(void)removeOrphanedClientRestrictions;
-(id)effectiveWhitelistedAppsAndOptions;
-(void)setParametersForSettingsByType:(id)arg1 passcode:(id)arg2 ;
-(void)setParametersForSettingsByType:(id)arg1 ;
-(void)setBoolValue:(BOOL)arg1 forSetting:(id)arg2 passcode:(id)arg3 ;
-(void)setValue:(id)arg1 forSetting:(id)arg2 passcode:(id)arg3 ;
-(id)userSettings;
-(int)defaultBoolValueForSetting:(id)arg1 ;
-(id)defaultParametersForBoolSetting:(id)arg1 ;
-(id)defaultParametersForValueSetting:(id)arg1 ;
-(id)effectiveParametersForBoolSetting:(id)arg1 ;
-(id)effectiveParametersForUnionSetting:(id)arg1 ;
-(id)effectiveParametersForValueSetting:(id)arg1 ;
-(id)effectiveParametersForIntersectionSetting:(id)arg1 ;
-(BOOL)isBoolSettingLockedDownByRestrictions:(id)arg1 ;
-(BOOL)isValueSettingLockedDownByRestrictions:(id)arg1 ;
-(id)effectiveUserSettings;
-(void)setParameters:(id)arg1 forBoolSetting:(id)arg2 ;
-(void)setParameters:(id)arg1 forValueSetting:(id)arg2 ;
-(void)setBoolValue:(BOOL)arg1 forSetting:(id)arg2 ;
-(void)setValue:(id)arg1 forSetting:(id)arg2 ;
-(void)setValues:(id)arg1 forIntersectionSetting:(id)arg2 ;
-(void)setValues:(id)arg1 forUnionSetting:(id)arg2 ;
-(id)parametersForBoolSetting:(id)arg1 ;
-(id)parametersForValueSetting:(id)arg1 ;
-(id)parametersForIntersectionSetting:(id)arg1 ;
-(id)parametersForUnionSetting:(id)arg1 ;
-(id)defaultValuesForIntersectionSetting:(id)arg1 ;
-(id)defaultValuesForUnionSetting:(id)arg1 ;
-(id)defaultParametersForIntersectionSetting:(id)arg1 ;
-(id)defaultParametersForUnionSetting:(id)arg1 ;
-(id)effectiveValuesForIntersectionSetting:(id)arg1 ;
-(id)effectiveValuesForUnionSetting:(id)arg1 ;
-(BOOL)isIntersectionSettingLockedDownByRestrictions:(id)arg1 ;
-(BOOL)isUnionSettingLockedDownByRestrictions:(id)arg1 ;
-(void)removeBoolSetting:(id)arg1 ;
-(void)removeValueSetting:(id)arg1 ;
-(void)resetAllSettingsToDefaults;
-(void)lockDeviceImmediately:(BOOL)arg1 ;
-(BOOL)isPasscodeSet;
-(void)notifyUserHasSeenComplianceMessageWithLastLockDate:(id)arg1 ;
-(void)recomputeUserComplianceWarningSynchronously;
-(int)_getPasscodeComplianceWarningExpiryDate:(id)arg1 lastLockDate:(id)arg2 outLocalizedTitle:(id*)arg3 outLocalizedMessage:(id*)arg4 ;
-(int)newPasscodeEntryScreenType;
-(void)lockDevice;
-(BOOL)changePasscodeFrom:(id)arg1 to:(id)arg2 outError:(id*)arg3 ;
-(BOOL)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 outError:(id*)arg3 ;
-(BOOL)isContentProtectionInEffect;
-(BOOL)passcode:(id)arg1 meetsCurrentConstraintsOutError:(id*)arg2 ;
-(BOOL)currentPasscodeIsCompliantWithGlobalRestrictionsOutError:(id*)arg1 ;
-(BOOL)currentPasscodeIsCompliantWithProfileRestrictionsOutError:(id*)arg1 ;
-(int)getPasscodeComplianceWarningLastLockDate:(id)arg1 outLocalizedTitle:(id*)arg2 outLocalizedMessage:(id*)arg3 ;
-(void)getPasscodeComplianceWarningLastLockDate:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)recomputeUserComplianceWarning;
-(void)notifyClientsToRecomputeCompliance;
-(int)unlockScreenType;
-(id)localizedDescriptionOfCurrentPasscodeConstraints;
-(id)managedAppIDsWithFlags:(int)arg1 ;
-(BOOL)isFingerprintUnlockAllowed;
-(id)managedWiFiNetworkNames;
-(id)managedSystemConfigurationServiceIDs;
-(id)doNotBackupAppIDs;
-(id)doNotDocumentSyncAppIDs;
-(void)processProfilesPostRestore;
-(void)processProfilesPostMigrate;
-(void)migratePostDataMigrator;
-(BOOL)isCloudKeychainSyncAllowed;
-(BOOL)isVehicleUIAllowed;
-(BOOL)isOTAPKIUpdatesAllowed;
-(void)setAutomaticAppUpdatesAllowed:(BOOL)arg1 ;
-(BOOL)isAutomaticAppUpdatesModificationAllowed;
-(BOOL)isWebTextDefineAllowed;
-(BOOL)isAdTrackingLimited;
-(BOOL)isLockScreenWiFiModificationAllowed;
-(BOOL)isAppInstallationAllowed;
-(BOOL)isAppRatingLimitInEffect;
-(BOOL)isAirDropAllowed;
-(BOOL)isLockScreenNotificationsViewAllowed;
-(BOOL)isLockScreenTodayViewAllowed;
-(BOOL)isLockScreenControlCenterAllowed;
-(BOOL)isControlCenterAllowedInApps;
-(BOOL)isAssistantUserGeneratedContentAllowed;
-(BOOL)isFingerprintModificationAllowed;
-(BOOL)isMUAllowed;
-(void)setGracePeriod:(unsigned)arg1 passcode:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(unsigned)gracePeriod;
-(void)setFingerprintUnlockAllowed:(BOOL)arg1 passcode:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)checkCarrierProfileForceInstallation:(BOOL)arg1 ;
-(id)messageCenter;
-(id)publicMessageCenter;
-(void)checkCarrierProfile;
-(void)performBootTimeChecks;
-(void)removeExpiredProfiles;
-(void)storeCertificateData:(id)arg1 forHostIdentifier:(id)arg2 ;
-(void)rereadManagedAppAttributes;
-(id)defaultUserBookmarks;
-(BOOL)isWebFilterUIActive;
-(void)setWebContentFilterAutoPermittedURLStrings:(id)arg1 ;
-(void)addWebContentFilterAutoPermittedURLString:(id)arg1 ;
-(void)addUserBookmark:(id)arg1 ;
-(id)webContentFilterUserBlacklistedURLStrings;
-(id)webContentFilterEffectiveBlacklistedURLStrings;
-(void)setWebContentFilterUserBlacklistedURLStrings:(id)arg1 ;
-(int)hostMayPairWithOptions:(id)arg1 challenge:(id)arg2 ;
-(void)lockdownDidReceiveActivationRecord:(id)arg1 ;
-(BOOL)isInSingleAppMode;
-(BOOL)isPasscodeRequiredToAccessWhitelistedApps;
-(BOOL)mayEnterPasscodeToAccessNonWhitelistedApps;
-(id)parentalControlsAvailableAppBundleIDsForWhitelisting;
-(id)parentalControlsWhitelistedAppBundleIDs;
-(void)setParentalControlsWhitelistedAppBundleIDs:(id)arg1 ;
-(BOOL)isParentalControlsAllowPasscodeAccessToNonWhitelistedAppsUIForcedByRestrictions;
-(BOOL)parentalControlsAllowPasscodeAccessToNonWhitelistedApps;
-(void)parentalControlsSetAllowPasscodeAccessToNonWhitelistedApps:(BOOL)arg1 ;
-(id)autonomousSingleAppModePermittedBundleIDs;
-(id)knownAirPrintIPPURLStrings;
-(void)storeCloudConfigurationDetails:(id)arg1 ;
-(void)retrieveCloudConfigurationDetailsCompletionBlock:(/*^block*/ id)arg1 ;
-(BOOL)isCloudConfigurationAvailable;
-(void)markStoredProfileForPurposeAsInstalled:(int)arg1 ;
-(void)profileDataStoredForPurpose:(int)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)retrieveAndStoreCloudConfigurationDetailsCompletionBlock:(/*^block*/ id)arg1 ;
-(void)retrieveCloudConfigurationFromURL:(id)arg1 username:(id)arg2 password:(id)arg3 anchorCertificates:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(BOOL)wasCloudConfigurationApplied;
-(BOOL)wasTeslaCloudConfigurationApplied;
-(void)cloudConfigurationUIDidCompleteWasApplied:(BOOL)arg1 ;
-(BOOL)shouldSkipSetupPanes;
-(BOOL)isTeslaCloudConfigurationAvailable;
-(BOOL)shouldShowCloudConfigurationUI;
-(void)installProfileDataStoredForPurpose:(int)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)storeProfileData:(id)arg1 configurationSource:(int)arg2 purpose:(int)arg3 ;
-(BOOL)shouldInstallStoredProfileForPurpose:(int)arg1 ;
-(void)setupAssistantDidFinish;
-(BOOL)mayOpenFromManagedToUnmanaged;
-(BOOL)mayOpenFromUnmanagedToManaged;
-(BOOL)isOpenInRestrictionInEffect;
-(BOOL)isAppManaged:(id)arg1 ;
-(id)allowedOpenInAppBundleIDsAfterApplyingFilterToAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingAccountIsManaged:(BOOL)arg3 ;
-(id)filteredMailSheetAccountsForBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
-(id)effectiveValueForSetting:(id)arg1 ;
-(int)effectiveRestrictedBoolValueForSetting:(id)arg1 ;
-(void).cxx_destruct;
@end

