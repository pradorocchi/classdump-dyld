/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:09 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary, NSDictionary, TLAccessQueue;

@interface TLToneManager : NSObject {

	NSMutableDictionary* _iTunesTonesByIdentifier;
	NSMutableDictionary* _textTonesByIdentifier;
	NSMutableDictionary* _iTunesIdentifiersByPID;
	NSDictionary* _previewBehaviorForDefaultIdentifier;
	NSDictionary* _identifierAliasMap;
	id _accessQueue;
	id _delegate;

}

@property (setter=_setAccessQueue:,retain) TLAccessQueue * _accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
+(id)sharedRingtoneManager;
+(BOOL)identifierIsTextTone:(id)arg1 ;
+(BOOL)migrateLegacyToneSettings;
-(BOOL)toneWithIdentifierIsValid:(id)arg1 ;
-(id)copyNameOfRingtoneWithIdentifier:(id)arg1 ;
-(id)rootDirectory;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)currentTextToneIdentifier;
-(BOOL)toneWithIdentifierIsNone:(id)arg1 ;
-(void)_performBlockOnMainThread:(/*^block*/ id)arg1 ;
-(id)_accessQueue;
-(id)copyNameOfIdentifier:(id)arg1 isValid:(BOOL*)arg2 ;
-(id)defaultIdentifierForContext:(int)arg1 ;
-(id)aliasForIdentifier:(id)arg1 ;
-(id)copyIdentifierForRingtoneAtPath:(id)arg1 isValid:(BOOL*)arg2 ;
-(id)iTunesRingtoneDirectory;
-(id)deviceITunesRingtoneDirectory;
-(BOOL)isTonePrivateWithIdentifier:(id)arg1 ;
-(unsigned)durationOfToneWithIdentifier:(id)arg1 ;
-(BOOL)isToneProtectedWithIdentifier:(id)arg1 ;
-(BOOL)isAlertTone:(id)arg1 ;
-(BOOL)isRingtonePurchased:(id)arg1 ;
-(id)defaultRingtoneIdentifier;
-(id)currentIdentifierForContext:(int)arg1 ;
-(id)copyCurrentRingtoneName;
-(id)copyCurrentRingtoneIdentifier;
-(id)copyCurrentTextToneName;
-(id)copyCurrentTextToneIdentifier;
-(unsigned long)createPreviewSoundIDForToneIdentifier:(id)arg1 ;
-(unsigned long)previewBehaviorForDefaultIdentifier:(id)arg1 ;
-(id)newAVItemWithRingtoneIdentifier:(id)arg1 ;
-(id)initWithGraphicsServicesInitialization:(BOOL)arg1 ;
-(id)initWithITunesRingtonePlistAtPath:(id)arg1 shouldInitializeGraphicsServices:(BOOL)arg2 ;
-(void)_setAccessQueue:(id)arg1 ;
-(void)loadITunesRingtoneInfoPlistAtPath:(id)arg1 ;
-(void)loadTextToneInfo;
-(void)_performBlockInAccessQueue:(/*^block*/ id)arg1 ;
-(id)_copyITunesRingtonesFromManifestPath:(id)arg1 mediaDirectoryPath:(id)arg2 ;
-(void)_reloadITunesRingtonesAfterExternalChange;
-(id)defaultRingtoneName;
-(id)currentToneIdentifierForAlertType:(int)arg1 ;
-(id)_defaultToneIdentifierForAlertType:(int)arg1 ;
-(id)localizedNameWithIdentifier:(id)arg1 ;
-(id)copyNameOfRingtoneWithIdentifier:(id)arg1 isValid:(BOOL*)arg2 ;
-(id)copyPathOfRingtoneWithIdentifier:(id)arg1 isValid:(BOOL*)arg2 ;
-(id)defaultRingtonePath;
-(id)pathFromIdentifier:(id)arg1 withPrefix:(id)arg2 ;
-(id)systemRingtoneDirectory;
-(id)systemSoundDirectory;
-(id)systemNewSoundDirectory;
-(id)systemModernSoundDirectory;
-(id)copyNameOfTextToneWithIdentifier:(id)arg1 isValid:(BOOL*)arg2 ;
-(id)localizedRingtoneNameWithIdentifier:(id)arg1 ;
-(BOOL)_toneWithIdentifierIsValid:(id)arg1 ;
-(id)copyPathOfRingtoneWithIdentifier:(id)arg1 ;
-(id)_copySystemWideTonePreferenceKeyForAlertType:(int)arg1 accountIdentifier:(id)arg2 ;
-(id)_currentToneIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2 ;
-(id)currentToneIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2 ;
-(void)setCurrentToneIdentifier:(id)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3 ;
-(void)setCurrentToneIdentifier:(id)arg1 forAlertType:(int)arg2 ;
-(id)_defaultToneNameForAlertType:(int)arg1 ;
-(id)defaultTextToneIdentifier;
-(unsigned long)_currentToneSoundID:(id)arg1 defaultIdentifier:(id)arg2 ;
-(id)nullTextToneName;
-(unsigned long)soundIDForToneIdentifier:(id)arg1 isValid:(BOOL*)arg2 ;
-(unsigned long)_soundIDForSystemTone:(id)arg1 isValid:(BOOL*)arg2 ;
-(unsigned long)previewSoundIDForTextToneIdentifier:(id)arg1 ;
-(unsigned long)soundIDForToneIdentifier:(id)arg1 ;
-(BOOL)_addToneToManifest:(id)arg1 metadata:(id)arg2 fileName:(id)arg3 mediaDirectory:(id)arg4 ;
-(BOOL)_removeToneFromManifest:(id)arg1 fileName:(id)arg2 deletedMetadata:(id*)arg3 ;
-(int)_lockManifest:(id)arg1 ;
-(id)installedTones;
-(id)initWithITunesRingtonePlistAtPath:(id)arg1 ;
-(BOOL)shouldShowRingtones;
-(BOOL)shouldShowAlarmSounds;
-(void)_deviceRingtonesChangedNotification;
-(id)currentRingtoneIdentifier;
-(id)currentRingtoneName;
-(id)deviceITunesRingtoneInformationPlist;
-(id)ITunesRingtoneInformationPlist;
-(void)setCurrentTextToneIdentifier:(id)arg1 ;
-(void)setCurrentRingtoneIdentifier:(id)arg1 ;
-(id)defaultTextToneName;
-(unsigned long)currentTextToneSoundID;
-(unsigned long)soundIDForTextToneIdentifier:(id)arg1 ;
-(unsigned long)soundIDForTextToneIdentifier:(id)arg1 isValid:(BOOL*)arg2 ;
-(BOOL)insertSyncedToneMetadata:(id)arg1 filename:(id)arg2 ;
-(BOOL)insertPurchasedToneMetadata:(id)arg1 filename:(id)arg2 ;
-(BOOL)deleteSyncedToneByPID:(id)arg1 ;
-(void)importTone:(id)arg1 metadata:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)removeImportedToneWithIdentifier:(id)arg1 ;
-(id)iTunesToneForPID:(id)arg1 ;
-(void)deleteAllSyncedData;
-(unsigned long long)installedTonesSize;
-(BOOL)transferPurchasedToITunes:(id)arg1 ;
-(id)currentNewMailToneIdentifier;
-(id)defaultNewMailToneIdentifier;
-(id)currentNewMailToneIdentifierForAccount:(id)arg1 ;
-(id)currentSentMailToneIdentifier;
-(id)defaultSentMailToneIdentifier;
-(id)currentNewVoicemailToneIdentifier;
-(id)defaultNewVoicemailToneIdentifier;
-(id)currentCalendarAlertToneIdentifier;
-(id)defaultCalendarAlertToneIdentifier;
-(id)currentReminderAlertToneIdentifier;
-(id)defaultReminderAlertToneIdentifier;
-(id)currentSentTweetToneIdentifier;
-(id)defaultSentTweetToneIdentifier;
-(id)currentFacebookPostToneIdentifier;
-(id)defaultFacebookPostToneIdentifier;
-(id)currentPhotoStreamPostToneIdentifier;
-(id)defaultPhotoStreamPostToneIdentifier;
-(id)currentAirDropInvitationToneIdentifier;
-(id)defaultAirDropInvitationToneIdentifier;
-(id)newMailPreferenceKeyForAccount:(id)arg1 ;
-(id)defaultAlarmToneIdentifier;
-(unsigned long)currentNewMailToneSoundID;
-(unsigned long)currentNewMailToneSoundIDForAccount:(id)arg1 ;
-(unsigned long)currentSentMailToneSoundID;
-(unsigned long)currentNewVoicemailToneSoundID;
-(unsigned long)currentNewCalendarAlertToneSoundID;
-(unsigned long)currentNewReminderAlertToneSoundID;
-(unsigned long)currentSentTweetToneSoundID;
-(unsigned long)currentFacebookPostToneSoundID;
-(unsigned long)currentPhotoStreamPostToneSoundID;
-(unsigned long)currentAirDropInvitationToneSoundID;
-(void)removeNewMailToneForAccount:(id)arg1 ;
-(BOOL)ensureDirectoryExists:(id)arg1 ;
@end

