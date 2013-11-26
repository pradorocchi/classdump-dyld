/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:01 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSDictionary;

@interface MCRestrictionManager : NSObject {

	NSMutableDictionary* _memberQueueRestrictions;
	NSMutableDictionary* _memberQueueClientRestrictions;
	NSMutableDictionary* _memberQueueUserSettings;
	NSMutableDictionary* _memberQueueEffectiveUserSettings;
	NSObject<OS_dispatch_queue>* _memberQueue;
	NSMutableDictionary* _memberQueueProfileRestrictions;

}

@property (nonatomic,readonly) NSDictionary * currentRestrictions; 
@property (nonatomic,readonly) NSDictionary * defaultRestrictions; 
@property (nonatomic,readonly) NSDictionary * defaultSettings; 
@property (nonatomic,readonly) NSDictionary * userSettings; 
@property (nonatomic,readonly) NSDictionary * effectiveUserSettings; 
@property (nonatomic,readonly) NSDictionary * profileRestrictions; 
@property (nonatomic,readonly) NSDictionary * combinedProfileRestrictions; 
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * memberQueue;                                   //@synthesize memberQueue=_memberQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueRestrictions;                               //@synthesize memberQueueRestrictions=_memberQueueRestrictions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueProfileRestrictions;                        //@synthesize memberQueueProfileRestrictions=_memberQueueProfileRestrictions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueClientRestrictions;                         //@synthesize memberQueueClientRestrictions=_memberQueueClientRestrictions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueUserSettings;                               //@synthesize memberQueueUserSettings=_memberQueueUserSettings - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * memberQueueEffectiveUserSettings;                      //@synthesize memberQueueEffectiveUserSettings=_memberQueueEffectiveUserSettings - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * memberQueueCombinedProfileRestrictions; 
+(id)defaultSettings;
+(id)defaultValueForSetting:(id)arg1 ;
+(int)restrictedBoolForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2 ;
+(int)boolSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2 ;
+(int)defaultBoolValueForSetting:(id)arg1 ;
+(id)defaultIntersectedValuesForSetting:(id)arg1 ;
+(id)defaultUnionValuesForSetting:(id)arg1 ;
+(id)defaultParametersForBoolSetting:(id)arg1 ;
+(id)defaultParametersForValueSetting:(id)arg1 ;
+(id)defaultParametersForIntersectedValuesSetting:(id)arg1 ;
+(id)defaultParametersForUnionValuesSetting:(id)arg1 ;
+(id)valueSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2 ;
+(BOOL)isWebContentFilterUIActiveWithRestrictionDictionary:(id)arg1 ;
+(id)unionValuesSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2 ;
+(int)appWhitelistStateWithSettingsDictionary:(id)arg1 ;
+(BOOL)isInSingleAppModeWithSettingsDictionary:(id)arg1 ;
+(BOOL)isPasscodeRequiredToAccessWhitelistedAppsWithSettingsDictionary:(id)arg1 ;
+(BOOL)mayEnterPasscodeToAccessNonWhitelistedAppsWithSettingsDictionary:(id)arg1 ;
+(id)defaultRestrictionFilePath;
+(id)restrictionsAfterApplyingRestrictionsDictionary:(id)arg1 toRestrictionsDictionary:(id)arg2 outChangeDetected:(BOOL*)arg3 outError:(id*)arg4 ;
+(id)valueForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2 ;
+(id)objectForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2 ;
+(id)intersectedValuesForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2 ;
+(id)unionValuesForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2 ;
+(id)intersectedValuesSettingForFeature:(id)arg1 withUserSettingDectionary:(id)arg2 ;
+(id)restrictionsWithCurrentRestrictions:(id)arg1 defaultRestrictions:(id)arg2 profileRestrictions:(id)arg3 clientRestrictions:(id)arg4 outRestrictionsChanged:(BOOL*)arg5 outError:(id*)arg6 ;
+(id)filterRestrictionDictionaryForPublicUse:(id)arg1 ;
+(id)filterUserSettingsForPublicUse:(id)arg1 ;
+(BOOL)restrictedBool:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3 ;
+(BOOL)restrictedValue:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3 ;
+(BOOL)intersectedValuesForFeature:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3 ;
+(BOOL)unionValuesForFeature:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3 ;
+(id)newEffectiveSettingsByApplyingRestrictions:(id)arg1 toSettings:(id)arg2 ;
+(BOOL)boolSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3 ;
+(BOOL)valueSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3 ;
+(BOOL)intersectedValuesSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3 ;
+(BOOL)unionValuesSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3 ;
+(id)sharedManager;
-(int)appWhitelistState;
-(id)init;
-(id)description;
-(id)defaultSettings;
-(id)memberQueue;
-(void)setMemberQueue:(id)arg1 ;
-(id)userInfoForClientUUID:(id)arg1 ;
-(void)invalidateRestrictions;
-(void)invalidateSettings;
-(id)defaultRestrictions;
-(int)restrictedBoolForFeature:(id)arg1 ;
-(id)valueForFeature:(id)arg1 ;
-(id)objectForFeature:(id)arg1 ;
-(id)currentRestrictions;
-(id)clientRestrictions;
-(id)allClientUUIDsForClientType:(id)arg1 ;
-(id)userSettings;
-(id)effectiveParametersForBoolSetting:(id)arg1 ;
-(id)effectiveParametersForIntersectedSetting:(id)arg1 ;
-(id)effectiveParametersForUnionSetting:(id)arg1 ;
-(id)effectiveParametersForValueSetting:(id)arg1 ;
-(BOOL)isBoolSettingLockedDownByRestrictions:(id)arg1 ;
-(BOOL)isValueSettingLockedDownByRestrictions:(id)arg1 ;
-(id)effectiveIntersectedValuesForSetting:(id)arg1 ;
-(id)effectiveUnionValuesForSetting:(id)arg1 ;
-(id)effectiveUserSettings;
-(id)profileRestrictions;
-(id)combinedProfileRestrictions;
-(int)effectiveRestrictedBoolForSetting:(id)arg1 ;
-(id)intersectedValuesForFeature:(id)arg1 ;
-(void)setMemberQueueRestrictions:(id)arg1 ;
-(void)setMemberQueueProfileRestrictions:(id)arg1 ;
-(void)setMemberQueueClientRestrictions:(id)arg1 ;
-(void)setMemberQueueUserSettings:(id)arg1 ;
-(void)setMemberQueueEffectiveUserSettings:(id)arg1 ;
-(id)memberQueueRestrictions;
-(id)memberQueueProfileRestrictions;
-(id)memberQueueCombinedProfileRestrictions;
-(id)memberQueueClientRestrictions;
-(id)memberQueueClientRestrictionsForClientUUID:(id)arg1 ;
-(id)memberQueueUserInfoForClientUUID:(id)arg1 ;
-(id)memberQueueUserSettings;
-(id)memberQueueEffectiveUserSettings;
-(id)potentialRestrictionsAfterApplyingRestrictionsDictionary:(id)arg1 outChangeDetected:(BOOL*)arg2 outError:(id*)arg3 ;
-(id)unionValuesForFeature:(id)arg1 ;
-(id)memberQueueClientTypeForClientUUID:(id)arg1 ;
-(id)clientRestrictionsForClientUUID:(id)arg1 ;
-(void)memberQueueCommitUserSettingsToDisk;
-(id)effectiveValueForSetting:(id)arg1 ;
-(void).cxx_destruct;
@end

