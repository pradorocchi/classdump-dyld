/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSObject, NSMutableSet, NSMutableDictionary, NSArray, NSSet, NSDictionary, NSNumber, NSString, NSDate;

@interface AXSettings : NSObject {

	NSObject<OS_dispatch_queue>* _axFeatureQueue;
	NSMutableSet* _registeredNotifications;
	NSMutableDictionary* _synchronizeDomains;
	NSMutableDictionary* _updateBlocks;

}

@property (assign,nonatomic) BOOL assistiveTouchAlwaysShowMenuEnabled; 
@property (assign,nonatomic) BOOL assistiveTouchOpenMenuSwaggleEnabled; 
@property (assign,nonatomic) double assistiveTouchSpeed; 
@property (nonatomic,retain) NSArray * assistiveTouchCustomGestures; 
@property (nonatomic,retain) NSArray * assistiveTouchRecentGestures; 
@property (nonatomic,retain) NSArray * assistiveTouchSavedGestures; 
@property (assign,nonatomic) int assistiveTouchScanningMode; 
@property (assign,nonatomic) int assistiveTouchPreferredPointPicker; 
@property (assign,nonatomic) BOOL assistiveTouchAutoScanningEnabled; 
@property (assign,nonatomic) BOOL assistiveTouchGroupElementsEnabled; 
@property (assign,nonatomic) BOOL assistiveTouchScannerCompactMenuEnabled; 
@property (assign,nonatomic) BOOL assistiveTouchScannerMenuLabelsEnabled; 
@property (assign,nonatomic) double assistiveTouchStepInterval; 
@property (assign,nonatomic) double assistiveTouchSelectTimeout; 
@property (assign,nonatomic) BOOL assistiveTouchSelectTimeoutEnabled; 
@property (assign,nonatomic) double assistiveTouchInputCoalescingDuration; 
@property (assign,nonatomic) BOOL assistiveTouchInputCoalescingEnabled; 
@property (assign,nonatomic) double assistiveTouchInputHoldDuration; 
@property (assign,nonatomic) BOOL assistiveTouchInputHoldEnabled; 
@property (assign,nonatomic) double assistiveTouchDelayAfterInput; 
@property (assign,nonatomic) BOOL assistiveTouchDelayAfterInputEnabled; 
@property (assign,nonatomic) float assistiveTouchAxisSweepSpeed; 
@property (assign,nonatomic) double assistiveTouchActionRepeatInterval; 
@property (assign,nonatomic) BOOL assistiveTouchActionRepeatEnabled; 
@property (assign,nonatomic) int assistiveTouchScanCycles; 
@property (assign,nonatomic) double assistiveTouchScanTimeout; 
@property (assign,nonatomic) BOOL assistiveTouchScanTimeoutEnabled; 
@property (assign,nonatomic) BOOL assistiveTouchScannerSoundEnabled; 
@property (assign,nonatomic) BOOL assistiveTouchScannerSpeechEnabled; 
@property (assign,nonatomic) double assistiveTouchScannerSpeechRate; 
@property (assign,nonatomic) BOOL assistiveTouchScannerCursorHighVisibilityEnabled; 
@property (assign,nonatomic) BOOL assistiveTouchScannerSpeechIsInterruptedByScanning; 
@property (assign,nonatomic) BOOL assistiveTouchScannerPointPickerDefaultsToRescan; 
@property (assign,nonatomic) int assistiveTouchCursorColor; 
@property (assign,nonatomic) int assistiveTouchHeadMovementSensitivity; 
@property (assign,nonatomic) BOOL assistiveTouchSwitchUsageConfirmed; 
@property (nonatomic,retain) NSSet * assistiveTouchSwitches; 
@property (assign,nonatomic) BOOL assistiveTouchScannerMenuIncludeHomeItem; 
@property (assign,nonatomic) BOOL assistiveTouchScannerMenuIncludeScrollItem; 
@property (assign,nonatomic) BOOL assistiveTouchScannerMenuIncludeDeviceItem; 
@property (assign,nonatomic) BOOL assistiveTouchScannerMenuIncludeGesturesItem; 
@property (assign,nonatomic) BOOL assistiveTouchScannerMenuIncludeSettingsItem; 
@property (nonatomic,readonly) int assistiveTouchScannerIncludedMenuItems; 
@property (assign,nonatomic) BOOL assistiveTouchScannerAddedTripleClickAutomatically; 
@property (assign,nonatomic) int guidedAccessUsageCount; 
@property (assign,nonatomic) BOOL guidedAccessAXFeaturesEnabled; 
@property (nonatomic,retain) NSDictionary * gaxInternalSettingsUserAppProfile; 
@property (nonatomic,retain) NSDictionary * gaxInternalSettingsUserGlobalProfile; 
@property (nonatomic,retain) NSDictionary * gaxInternalSettingsSavedAccessibilityFeatures; 
@property (nonatomic,retain) NSArray * gaxInternalSettingsSavedAccessibilityTripleClickOptions; 
@property (nonatomic,retain) NSArray * gaxInternalSettingsUserConfiguredAppIDs; 
@property (nonatomic,copy) NSNumber * gaxInternalSettingsActiveAppOrientation; 
@property (nonatomic,copy) NSString * gaxInternalSettingsActiveAppID; 
@property (assign,nonatomic) BOOL gaxInternalSettingsIsActiveAppSelfLocked; 
@property (assign,nonatomic) BOOL gaxInternalSettingsSystemDidRestartDueToLowBattery; 
@property (nonatomic,copy) NSString * gaxInternalSettingsDeviceID; 
@property (nonatomic,copy) NSString * gaxInternalSettingsProductBuildVersion; 
@property (nonatomic,retain) NSDate * gaxInternalSettingsLastActivationDate; 
@property (nonatomic,retain) NSDate * gaxInternalSettingsLastPasscodeSetDate; 
@property (assign,nonatomic) BOOL assistiveTouchCameraSwitchPreviewEnabled; 
@property (assign,nonatomic) BOOL assistiveTouchHeadlessModeEnabled; 
@property (assign,nonatomic) int internalLoggingColorTheme; 
@property (assign,nonatomic) BOOL validateSecondPartyApps; 
@property (assign,nonatomic) BOOL includeBacktraceInLogs; 
@property (assign,nonatomic) BOOL writeAXLogsToFile; 
@property (assign,nonatomic) BOOL ignoreAXAssertions; 
@property (assign,nonatomic) BOOL ignoreAXServerEntitlements; 
@property (assign,nonatomic) BOOL logAXNotificationPosting; 
@property (assign,nonatomic) BOOL voiceOverHearingAidRoutingEnabled; 
@property (assign,nonatomic) BOOL skipHearingAidMFiAuth; 
@property (assign,nonatomic) BOOL enableHearingAidReporter; 
@property (assign,nonatomic) BOOL speakCorrectionsEnabled; 
@property (assign,nonatomic) float quickSpeakSpeakingRate; 
@property (assign,nonatomic) BOOL quickSpeakHighlightText; 
@property (assign,nonatomic) float quickSpeakVolume; 
@property (assign,nonatomic) BOOL voiceOverLargeCursorEnabled; 
@property (assign,nonatomic) int voiceOverHelpMode; 
@property (assign,nonatomic) int voiceOverNavigateImagesOption; 
@property (assign,nonatomic) int voiceOverPhoneticsFeedback; 
@property (assign,nonatomic) int voiceOverHardwareTypingFeedback; 
@property (assign,nonatomic) int voiceOverSoftwareTypingFeedback; 
@property (assign,nonatomic) BOOL voiceOverCompactVoiceEnabled; 
@property (nonatomic,readonly) BOOL voiceOverHandwritingEnabled; 
@property (assign,nonatomic) BOOL voiceOverHintsEnabled; 
@property (assign,nonatomic) BOOL voiceOverPitchChangeEnabled; 
@property (assign,nonatomic) BOOL voiceOverSoundEffectsEnabled; 
@property (assign,nonatomic) BOOL voiceOverSpeakingRateInRotorEnabled; 
@property (assign,nonatomic) BOOL voiceOverSpeakNotificationsInLockScreenEnabled; 
@property (nonatomic,copy) NSArray * voiceOverRotorItems; 
@property (nonatomic,copy) NSString * voiceOverBrailleTableIdentifier; 
@property (assign,nonatomic) BOOL voiceOverAlwaysUseNemethCodeForMathEnabled; 
@property (assign,nonatomic) BOOL voiceOverShowSoftwareKeyboardWithBraille; 
@property (nonatomic,copy) NSString * voiceOverDefaultDialect; 
@property (assign,nonatomic) int voiceOverActivationWorkaround; 
@property (assign,nonatomic) BOOL voiceOverShouldOutputToHearingAid; 
@property (nonatomic,retain) NSNumber * voiceOverHandwritingWasNativeAutocorrectEnabled; 
@property (nonatomic,retain) NSNumber * voiceOverHandwritingWasNativeSpellCheckingEnabled; 
@property (assign,nonatomic) BOOL voiceOverBrailleGradeTwoAutoTranslateEnabled; 
@property (assign,nonatomic) BOOL allowHearingAidControlOnLockScreen; 
@property (assign,nonatomic) BOOL shouldStreamToLeftAid; 
@property (assign,nonatomic) BOOL shouldStreamToRightAid; 
@property (nonatomic,retain) NSMutableSet * registeredNotifications;                                         //@synthesize registeredNotifications=_registeredNotifications - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * synchronizeDomains;                                       //@synthesize synchronizeDomains=_synchronizeDomains - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * updateBlocks;                                             //@synthesize updateBlocks=_updateBlocks - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * axFeatureQueue;                                   //@synthesize axFeatureQueue=_axFeatureQueue - In the implementation block
+(id)sharedInstance;
+(void)initialize;
-(void)dealloc;
-(id)init;
-(BOOL)writeAXLogsToFile;
-(BOOL)includeBacktraceInLogs;
-(BOOL)ignoreAXAssertions;
-(BOOL)assistiveTouchAlwaysShowMenuEnabled;
-(BOOL)assistiveTouchOpenMenuSwaggleEnabled;
-(double)assistiveTouchSpeed;
-(id)assistiveTouchCustomGestures;
-(id)assistiveTouchRecentGestures;
-(id)assistiveTouchSavedGestures;
-(int)assistiveTouchScanningMode;
-(int)assistiveTouchPreferredPointPicker;
-(BOOL)assistiveTouchAutoScanningEnabled;
-(BOOL)assistiveTouchGroupElementsEnabled;
-(BOOL)assistiveTouchScannerCompactMenuEnabled;
-(BOOL)assistiveTouchScannerMenuLabelsEnabled;
-(double)assistiveTouchStepInterval;
-(int)assistiveTouchScanCycles;
-(double)assistiveTouchSelectTimeout;
-(BOOL)assistiveTouchSelectTimeoutEnabled;
-(double)assistiveTouchScanTimeout;
-(BOOL)assistiveTouchScannerSoundEnabled;
-(BOOL)assistiveTouchScannerSpeechEnabled;
-(double)assistiveTouchScannerSpeechRate;
-(id)assistiveTouchSwitches;
-(BOOL)assistiveTouchScannerCursorHighVisibilityEnabled;
-(BOOL)assistiveTouchScannerSpeechIsInterruptedByScanning;
-(double)assistiveTouchInputCoalescingDuration;
-(BOOL)assistiveTouchInputCoalescingEnabled;
-(double)assistiveTouchInputHoldDuration;
-(BOOL)assistiveTouchInputHoldEnabled;
-(double)assistiveTouchDelayAfterInput;
-(BOOL)assistiveTouchDelayAfterInputEnabled;
-(float)assistiveTouchAxisSweepSpeed;
-(double)assistiveTouchActionRepeatInterval;
-(BOOL)assistiveTouchActionRepeatEnabled;
-(BOOL)assistiveTouchScannerPointPickerDefaultsToRescan;
-(BOOL)assistiveTouchScanTimeoutEnabled;
-(int)assistiveTouchCursorColor;
-(int)assistiveTouchHeadMovementSensitivity;
-(BOOL)assistiveTouchSwitchUsageConfirmed;
-(BOOL)assistiveTouchScannerMenuIncludeHomeItem;
-(BOOL)assistiveTouchScannerMenuIncludeScrollItem;
-(BOOL)assistiveTouchScannerMenuIncludeDeviceItem;
-(BOOL)assistiveTouchScannerMenuIncludeGesturesItem;
-(BOOL)assistiveTouchScannerMenuIncludeSettingsItem;
-(BOOL)assistiveTouchCameraSwitchPreviewEnabled;
-(BOOL)assistiveTouchHeadlessModeEnabled;
-(BOOL)assistiveTouchScannerAddedTripleClickAutomatically;
-(int)guidedAccessUsageCount;
-(BOOL)guidedAccessAXFeaturesEnabled;
-(id)gaxInternalSettingsUserAppProfile;
-(id)gaxInternalSettingsUserGlobalProfile;
-(id)gaxInternalSettingsSavedAccessibilityFeatures;
-(id)gaxInternalSettingsSavedAccessibilityTripleClickOptions;
-(id)gaxInternalSettingsUserConfiguredAppIDs;
-(id)gaxInternalSettingsActiveAppOrientation;
-(id)gaxInternalSettingsActiveAppID;
-(BOOL)gaxInternalSettingsIsActiveAppSelfLocked;
-(BOOL)gaxInternalSettingsSystemDidRestartDueToLowBattery;
-(id)gaxInternalSettingsDeviceID;
-(id)gaxInternalSettingsProductBuildVersion;
-(id)gaxInternalSettingsLastActivationDate;
-(id)gaxInternalSettingsLastPasscodeSetDate;
-(int)internalLoggingColorTheme;
-(BOOL)validateSecondPartyApps;
-(BOOL)ignoreAXServerEntitlements;
-(BOOL)logAXNotificationPosting;
-(BOOL)voiceOverHearingAidRoutingEnabled;
-(BOOL)skipHearingAidMFiAuth;
-(BOOL)enableHearingAidReporter;
-(BOOL)speakCorrectionsEnabled;
-(float)quickSpeakSpeakingRate;
-(float)quickSpeakSpeakingRateForLanguage:(id)arg1 ;
-(BOOL)quickSpeakHighlightText;
-(float)quickSpeakVolume;
-(BOOL)voiceOverLargeCursorEnabled;
-(int)voiceOverHelpMode;
-(int)voiceOverNavigateImagesOption;
-(int)voiceOverPhoneticsFeedback;
-(int)voiceOverHardwareTypingFeedback;
-(int)voiceOverSoftwareTypingFeedback;
-(BOOL)voiceOverCompactVoiceEnabled;
-(BOOL)voiceOverHintsEnabled;
-(BOOL)voiceOverPitchChangeEnabled;
-(BOOL)voiceOverSoundEffectsEnabled;
-(BOOL)voiceOverSpeakingRateInRotorEnabled;
-(BOOL)voiceOverSpeakNotificationsInLockScreenEnabled;
-(id)voiceOverRotorItems;
-(id)voiceOverBrailleTableIdentifier;
-(BOOL)voiceOverAlwaysUseNemethCodeForMathEnabled;
-(id)voiceOverDefaultDialect;
-(id)voiceOverHandwritingWasNativeAutocorrectEnabled;
-(id)voiceOverHandwritingWasNativeSpellCheckingEnabled;
-(float)voiceOverSpeakingRateForLanguage:(id)arg1 ;
-(int)voiceOverActivationWorkaround;
-(BOOL)voiceOverShowSoftwareKeyboardWithBraille;
-(BOOL)voiceOverBrailleGradeTwoAutoTranslateEnabled;
-(BOOL)voiceOverShouldOutputToHearingAid;
-(BOOL)allowHearingAidControlOnLockScreen;
-(BOOL)shouldStreamToLeftAid;
-(BOOL)shouldStreamToRightAid;
-(CFStringRef)_domainNameForDomain:(int)arg1 ;
-(void)_setValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(BOOL)_switchFromRootUserIfNecessary:(/*^block*/ id)arg1 ;
-(int)_domainForPreferenceKey:(id)arg1 ;
-(id)_notificationForPreferenceKey:(id)arg1 ;
-(void)_synchronizeIfNecessary:(id)arg1 domain:(int)arg2 ;
-(void)_registerForNotification:(id)arg1 ;
-(id)_migratePreferenceIfNecessary:(id)arg1 ;
-(id)synchronizeDomains;
-(void)setAxFeatureQueue:(id)arg1 ;
-(id)updateBlocks;
-(id)registeredNotifications;
-(id)_preferenceKeyForSelector:(SEL)arg1 ;
-(id)_valueForPreferenceKey:(id)arg1 ;
-(id)_featureIDForTripleClickOption:(int)arg1 ;
-(id)axFeatureQueue;
-(void)_setAXFeature:(id)arg1 enabled:(BOOL)arg2 ;
-(id)accessibilityFeatureIDs;
-(id)_tripleClickOptionForAXFeatureID:(id)arg1 ;
-(void)_handlePreferenceChanged:(id)arg1 ;
-(void)registerUpdateBlock:(/*^block*/ id)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3 ;
-(void)setAssistiveTouchAlwaysShowMenuEnabled:(BOOL)arg1 ;
-(void)setAssistiveTouchOpenMenuSwaggleEnabled:(BOOL)arg1 ;
-(void)setAssistiveTouchSpeed:(double)arg1 ;
-(void)setAssistiveTouchCustomGestures:(id)arg1 ;
-(void)setAssistiveTouchRecentGestures:(id)arg1 ;
-(void)setAssistiveTouchSavedGestures:(id)arg1 ;
-(void)setAssistiveTouchPreferredPointPicker:(int)arg1 ;
-(void)setAssistiveTouchScannerSpeechIsInterruptedByScanning:(BOOL)arg1 ;
-(void)setAssistiveTouchScannerCursorHighVisibilityEnabled:(BOOL)arg1 ;
-(void)setAssistiveTouchScanningMode:(int)arg1 ;
-(void)setAssistiveTouchAutoScanningEnabled:(BOOL)arg1 ;
-(void)setAssistiveTouchScannerPointPickerDefaultsToRescan:(BOOL)arg1 ;
-(void)setAssistiveTouchGroupElementsEnabled:(BOOL)arg1 ;
-(void)setAssistiveTouchScannerCompactMenuEnabled:(BOOL)arg1 ;
-(void)setAssistiveTouchScannerMenuLabelsEnabled:(BOOL)arg1 ;
-(void)setAssistiveTouchScannerMenuIncludeHomeItem:(BOOL)arg1 ;
-(void)setAssistiveTouchScannerMenuIncludeScrollItem:(BOOL)arg1 ;
-(void)setAssistiveTouchScannerMenuIncludeDeviceItem:(BOOL)arg1 ;
-(void)setAssistiveTouchScannerMenuIncludeGesturesItem:(BOOL)arg1 ;
-(void)setAssistiveTouchScannerMenuIncludeSettingsItem:(BOOL)arg1 ;
-(int)assistiveTouchScannerIncludedMenuItems;
-(void)setAssistiveTouchAxisSweepSpeed:(float)arg1 ;
-(void)setAssistiveTouchActionRepeatInterval:(double)arg1 ;
-(void)setAssistiveTouchActionRepeatEnabled:(BOOL)arg1 ;
-(void)setAssistiveTouchDelayAfterInput:(double)arg1 ;
-(void)setAssistiveTouchDelayAfterInputEnabled:(BOOL)arg1 ;
-(void)setAssistiveTouchInputHoldDuration:(double)arg1 ;
-(void)setAssistiveTouchInputHoldEnabled:(BOOL)arg1 ;
-(void)setAssistiveTouchInputCoalescingDuration:(double)arg1 ;
-(void)setAssistiveTouchInputCoalescingEnabled:(BOOL)arg1 ;
-(void)setAssistiveTouchStepInterval:(double)arg1 ;
-(void)setAssistiveTouchSelectTimeout:(double)arg1 ;
-(void)setAssistiveTouchSelectTimeoutEnabled:(BOOL)arg1 ;
-(void)setAssistiveTouchScanTimeoutEnabled:(BOOL)arg1 ;
-(void)setAssistiveTouchScanTimeout:(double)arg1 ;
-(void)setAssistiveTouchScanCycles:(int)arg1 ;
-(void)setAssistiveTouchScannerSoundEnabled:(BOOL)arg1 ;
-(void)setAssistiveTouchScannerSpeechEnabled:(BOOL)arg1 ;
-(void)setAssistiveTouchScannerSpeechRate:(double)arg1 ;
-(void)setAssistiveTouchSwitches:(id)arg1 ;
-(void)setAssistiveTouchCursorColor:(int)arg1 ;
-(void)setAssistiveTouchHeadMovementSensitivity:(int)arg1 ;
-(void)setAssistiveTouchSwitchUsageConfirmed:(BOOL)arg1 ;
-(void)setAssistiveTouchScannerAddedTripleClickAutomatically:(BOOL)arg1 ;
-(void)setGuidedAccessUsageCount:(int)arg1 ;
-(void)setGuidedAccessAXFeaturesEnabled:(BOOL)arg1 ;
-(void)setGaxInternalSettingsUserAppProfile:(id)arg1 ;
-(void)setGaxInternalSettingsUserGlobalProfile:(id)arg1 ;
-(void)setGaxInternalSettingsSavedAccessibilityFeatures:(id)arg1 ;
-(void)setGaxInternalSettingsSavedAccessibilityTripleClickOptions:(id)arg1 ;
-(void)setGaxInternalSettingsUserConfiguredAppIDs:(id)arg1 ;
-(void)setGaxInternalSettingsActiveAppOrientation:(id)arg1 ;
-(void)setGaxInternalSettingsActiveAppID:(id)arg1 ;
-(void)setGaxInternalSettingsIsActiveAppSelfLocked:(BOOL)arg1 ;
-(void)setGaxInternalSettingsSystemDidRestartDueToLowBattery:(BOOL)arg1 ;
-(void)setGaxInternalSettingsDeviceID:(id)arg1 ;
-(void)setGaxInternalSettingsProductBuildVersion:(id)arg1 ;
-(void)setGaxInternalSettingsLastActivationDate:(id)arg1 ;
-(void)setGaxInternalSettingsLastPasscodeSetDate:(id)arg1 ;
-(void)setAssistiveTouchCameraSwitchPreviewEnabled:(BOOL)arg1 ;
-(void)setAssistiveTouchHeadlessModeEnabled:(BOOL)arg1 ;
-(void)setValidateSecondPartyApps:(BOOL)arg1 ;
-(void)setIncludeBacktraceInLogs:(BOOL)arg1 ;
-(void)setWriteAXLogsToFile:(BOOL)arg1 ;
-(void)setIgnoreAXAssertions:(BOOL)arg1 ;
-(void)setIgnoreAXServerEntitlements:(BOOL)arg1 ;
-(void)setLogAXNotificationPosting:(BOOL)arg1 ;
-(void)setInternalLoggingColorTheme:(int)arg1 ;
-(void)setVoiceOverHearingAidRoutingEnabled:(BOOL)arg1 ;
-(void)setSkipHearingAidMFiAuth:(BOOL)arg1 ;
-(void)setEnableHearingAidReporter:(BOOL)arg1 ;
-(void)setSpeakCorrectionsEnabled:(BOOL)arg1 ;
-(void)setQuickSpeakVolume:(float)arg1 ;
-(void)setQuickSpeakHighlightText:(BOOL)arg1 ;
-(void)setQuickSpeakSpeakingRate:(float)arg1 ;
-(void)setQuickSpeakSpeakingRate:(float)arg1 forLanguage:(id)arg2 ;
-(void)setVoiceOverLargeCursorEnabled:(BOOL)arg1 ;
-(void)setVoiceOverHelpMode:(int)arg1 ;
-(void)setVoiceOverNavigateImagesOption:(int)arg1 ;
-(void)setVoiceOverPhoneticsFeedback:(int)arg1 ;
-(void)setVoiceOverHardwareTypingFeedback:(int)arg1 ;
-(void)setVoiceOverSoftwareTypingFeedback:(int)arg1 ;
-(void)setVoiceOverActivationWorkaround:(int)arg1 ;
-(void)setVoiceOverCompactVoiceEnabled:(BOOL)arg1 ;
-(BOOL)voiceOverHandwritingEnabled;
-(void)setVoiceOverHintsEnabled:(BOOL)arg1 ;
-(void)setVoiceOverPitchChangeEnabled:(BOOL)arg1 ;
-(void)setVoiceOverSoundEffectsEnabled:(BOOL)arg1 ;
-(void)setVoiceOverSpeakingRateInRotorEnabled:(BOOL)arg1 ;
-(void)setVoiceOverSpeakNotificationsInLockScreenEnabled:(BOOL)arg1 ;
-(void)setVoiceOverRotorItems:(id)arg1 ;
-(void)setVoiceOverBrailleTableIdentifier:(id)arg1 ;
-(void)setVoiceOverAlwaysUseNemethCodeForMathEnabled:(BOOL)arg1 ;
-(void)setVoiceOverDefaultDialect:(id)arg1 ;
-(void)setVoiceOverHandwritingWasNativeAutocorrectEnabled:(id)arg1 ;
-(void)setVoiceOverHandwritingWasNativeSpellCheckingEnabled:(id)arg1 ;
-(void)setVoiceOverBrailleGradeTwoAutoTranslateEnabled:(BOOL)arg1 ;
-(void)setVoiceOverShowSoftwareKeyboardWithBraille:(BOOL)arg1 ;
-(void)setVoiceOverSpeakingRate:(float)arg1 forLanguage:(id)arg2 ;
-(void)setVoiceOverShouldOutputToHearingAid:(BOOL)arg1 ;
-(void)setAllowHearingAidControlOnLockScreen:(BOOL)arg1 ;
-(void)setShouldStreamToLeftAid:(BOOL)arg1 ;
-(void)setShouldStreamToRightAid:(BOOL)arg1 ;
-(id)accessibilityFeatureStatus;
-(id)accessibilityTripleClickOptions;
-(id)accessibilityFeatureIDsForTripleClickOptions:(id)arg1 ;
-(void)enableAccessibilityFeatures:(id)arg1 staggerTime:(double)arg2 ;
-(void)enableOnlyAccessibilityFeatures:(id)arg1 staggerTime:(double)arg2 ;
-(void)disableAccessibilityFeatures:(id)arg1 staggerTime:(double)arg2 ;
-(void)enableAccessibilityTripleClickOptionsForFeatures:(id)arg1 ;
-(void)disableAccessibilityTripleClickOptionsForFeatures:(id)arg1 ;
-(void)setRegisteredNotifications:(id)arg1 ;
-(void)setSynchronizeDomains:(id)arg1 ;
-(void)setUpdateBlocks:(id)arg1 ;
@end

