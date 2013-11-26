/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:06 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
@class NSDictionary, NSString;

@interface GKPreferences : NSObject {

	BOOL _webKitInspectElementEnabled;
	BOOL __shouldSynchronizeOnNextRead;
	NSDictionary* _overrideValues;

}

@property (assign,nonatomic) <GKPreferencesDelegate> * preferencesDelegate; 
@property (getter=isStoreDemoModeEnabled,nonatomic,readonly) BOOL storeDemoModeEnabled; 
@property (getter=isAddingFriendsRestricted,nonatomic,readonly) BOOL addingFriendsRestricted; 
@property (getter=isMultiplayerGamingRestricted,nonatomic,readonly) BOOL multiplayerGamingRestricted; 
@property (getter=isAppInstallationRestricted,nonatomic,readonly) BOOL appInstallationRestricted; 
@property (getter=isAccountModificationRestricted,nonatomic,readonly) BOOL accountModificationRestricted; 
@property (getter=isGameCenterRestricted,nonatomic,readonly) BOOL gameCenterRestricted; 
@property (copy) NSDictionary * overrideValues;                                                                        //@synthesize overrideValues=_overrideValues - In the implementation block
@property (assign,nonatomic) int environment; 
@property (nonatomic,retain) NSString * storeBagURL; 
@property (assign,nonatomic) unsigned mescalSetupRetries; 
@property (assign,nonatomic) BOOL ignoreSandbox; 
@property (assign,nonatomic) unsigned loginDisableThreshold; 
@property (assign,nonatomic) BOOL allowUnsignedBag; 
@property (assign,nonatomic) BOOL useTestProtocols; 
@property (assign,nonatomic) double terminationInterval; 
@property (assign,nonatomic) double garbageCollectionInterval; 
@property (assign,nonatomic) double minimumCacheTTL; 
@property (assign,nonatomic) double cacheTTLOverride; 
@property (assign,nonatomic) double operationTimeout; 
@property (assign,nonatomic) double operationRetryDelay; 
@property (assign,nonatomic) unsigned operationRetryCount; 
@property (assign,nonatomic) double debugRequestTimeout; 
@property (assign,getter=isNotificationCenterEnabled,nonatomic) BOOL notificationCenterEnabled; 
@property (assign,nonatomic) BOOL notificationBadgesEnabled; 
@property (assign,nonatomic) BOOL notificationSoundsEnabled; 
@property (assign,nonatomic) BOOL notificationAlertsEnabled; 
@property (assign,nonatomic) BOOL verboseLogging; 
@property (assign,nonatomic) unsigned long logFilter; 
@property (assign,nonatomic) BOOL forceRelay; 
@property (assign,nonatomic) BOOL preemptiveRelay; 
@property (assign,nonatomic) int pushEnvironment; 
@property (assign,nonatomic) int pipeliningSetting; 
@property (assign,nonatomic) unsigned maxPlayersP2P; 
@property (assign,nonatomic) unsigned maxPlayersHosted; 
@property (assign,nonatomic) unsigned maxPlayersTurnBased; 
@property (assign,nonatomic) unsigned maxGameStateSizeTurnBased; 
@property (assign,nonatomic) unsigned exchangeDataMaximumSize; 
@property (assign,nonatomic) unsigned exchangeMaxInitiatedExchangesPerPlayer; 
@property (nonatomic,readonly) BOOL HTTPShouldUsePipelining; 
@property (nonatomic,readonly) unsigned maxDefaultPlayersP2P; 
@property (nonatomic,readonly) unsigned maxDefaultPlayersHosted; 
@property (nonatomic,readonly) unsigned maxDefaultPlayersTurnBased; 
@property (nonatomic,readonly) unsigned maxDefaultGameStateSizeTurnBased; 
@property (nonatomic,readonly) unsigned exchangeDataDefaultMaximumSize; 
@property (nonatomic,readonly) unsigned exchangeDefaultMaxInitiatedExchangesPerPlayer; 
@property (assign,nonatomic) BOOL useInternalHeader; 
@property (assign,getter=isWebKitInspectElementEnabled,nonatomic) BOOL webKitInspectElementEnabled;                    //@synthesize webKitInspectElementEnabled=_webKitInspectElementEnabled - In the implementation block
@property (assign,nonatomic) BOOL shouldAnnotateImageUsage; 
@property (assign,nonatomic) BOOL shouldTrackAtlasImageUsage; 
@property (assign,nonatomic) BOOL shouldUseTestIcons; 
@property (assign,nonatomic) BOOL shouldLinkPlayerToICloud; 
@property (assign,nonatomic) BOOL shouldLinkPlayerToTwitter; 
@property (assign,nonatomic) BOOL shouldLinkPlayerToFacebook; 
@property (nonatomic,readonly) BOOL shouldDisallowInvitesFromStrangers; 
@property (assign,nonatomic) BOOL shouldAllowGameInvites; 
@property (assign,nonatomic) BOOL shouldAllowNearbyMultiplayer; 
@property (assign,nonatomic) BOOL shouldAddPlayerInfoToAddressBook; 
@property (assign,nonatomic) BOOL _shouldSynchronizeOnNextRead;                                                        //@synthesize _shouldSynchronizeOnNextRead=__shouldSynchronizeOnNextRead - In the implementation block
+(id)hostNameForEnvironment:(int)arg1 ;
+(id)displayNameForEnvironment:(int)arg1 ;
+(id)sharedPreferences;
-(void)setEnvironment:(int)arg1 ;
-(BOOL)HTTPShouldUsePipelining;
-(double)minimumCacheTTL;
-(id)initWithoutUIKitNotifications;
-(unsigned long)logFilter;
-(BOOL)useTestProtocols;
-(void)applicationWillEnterBackground:(id)arg1 ;
-(id)initWithUIKitNotifications;
-(BOOL)_shouldSynchronizeOnNextRead;
-(void)set_shouldSynchronizeOnNextRead:(BOOL)arg1 ;
-(void)removeOverrideForKey:(id)arg1 ;
-(id)preferencesValueForKey:(id)arg1 ;
-(BOOL)booleanValueForKey:(CFStringRef)arg1 defaultValue:(BOOL)arg2 ;
-(void)_didWriteKey:(CFStringRef)arg1 ;
-(void)setOverrideValues:(id)arg1 ;
-(int)integerValueForKey:(CFStringRef)arg1 defaultValue:(int)arg2 ;
-(void)setIntegerValue:(int)arg1 forKey:(CFStringRef)arg2 ;
-(BOOL)booleanValueForKey:(CFStringRef)arg1 ;
-(void)setBooleanValue:(BOOL)arg1 forKey:(CFStringRef)arg2 ;
-(int)unsignedIntegerValueForKey:(CFStringRef)arg1 defaultValue:(int)arg2 ;
-(void)setUnsignedIntegerValue:(int)arg1 forKey:(CFStringRef)arg2 ;
-(double)timeIntervalForKey:(CFStringRef)arg1 defaultValue:(double)arg2 ;
-(void)setTimeInterval:(double)arg1 forKey:(CFStringRef)arg2 ;
-(unsigned)maxDefaultPlayersP2P;
-(unsigned)maxDefaultPlayersHosted;
-(unsigned)maxDefaultPlayersTurnBased;
-(unsigned)maxDefaultGameStateSizeTurnBased;
-(unsigned)exchangeDataDefaultMaximumSize;
-(unsigned)exchangeDefaultMaxInitiatedExchangesPerPlayer;
-(id)stringValueForKey:(CFStringRef)arg1 defaultValue:(id)arg2 ;
-(void)setStringValue:(id)arg1 forKey:(CFStringRef)arg2 ;
-(id)storeBagURL;
-(void)setStoreBagURL:(id)arg1 ;
-(BOOL)allowUnsignedBag;
-(void)setAllowUnsignedBag:(BOOL)arg1 ;
-(void)setUseTestProtocols:(BOOL)arg1 ;
-(unsigned)mescalSetupRetries;
-(void)setMescalSetupRetries:(unsigned)arg1 ;
-(BOOL)ignoreSandbox;
-(void)setIgnoreSandbox:(BOOL)arg1 ;
-(unsigned)loginDisableThreshold;
-(void)setLoginDisableThreshold:(unsigned)arg1 ;
-(double)operationTimeout;
-(void)setOperationTimeout:(double)arg1 ;
-(double)operationRetryDelay;
-(void)setOperationRetryDelay:(double)arg1 ;
-(unsigned)operationRetryCount;
-(void)setOperationRetryCount:(unsigned)arg1 ;
-(double)debugRequestTimeout;
-(void)setDebugRequestTimeout:(double)arg1 ;
-(BOOL)verboseLogging;
-(void)setVerboseLogging:(BOOL)arg1 ;
-(void)setLogFilter:(unsigned long)arg1 ;
-(BOOL)forceRelay;
-(void)setForceRelay:(BOOL)arg1 ;
-(BOOL)preemptiveRelay;
-(void)setPreemptiveRelay:(BOOL)arg1 ;
-(int)pushEnvironment;
-(void)setPushEnvironment:(int)arg1 ;
-(int)pipeliningSetting;
-(void)setPipeliningSetting:(int)arg1 ;
-(unsigned)maxPlayersP2P;
-(void)setMaxPlayersP2P:(unsigned)arg1 ;
-(unsigned)maxPlayersHosted;
-(void)setMaxPlayersHosted:(unsigned)arg1 ;
-(unsigned)maxPlayersTurnBased;
-(void)setMaxPlayersTurnBased:(unsigned)arg1 ;
-(unsigned)maxGameStateSizeTurnBased;
-(void)setMaxGameStateSizeTurnBased:(unsigned)arg1 ;
-(unsigned)exchangeDataMaximumSize;
-(void)setExchangeDataMaximumSize:(unsigned)arg1 ;
-(unsigned)exchangeMaxInitiatedExchangesPerPlayer;
-(void)setExchangeMaxInitiatedExchangesPerPlayer:(unsigned)arg1 ;
-(BOOL)useInternalHeader;
-(void)setUseInternalHeader:(BOOL)arg1 ;
-(double)terminationInterval;
-(void)setTerminationInterval:(double)arg1 ;
-(double)garbageCollectionInterval;
-(void)setGarbageCollectionInterval:(double)arg1 ;
-(void)setMinimumCacheTTL:(double)arg1 ;
-(double)cacheTTLOverride;
-(void)setCacheTTLOverride:(double)arg1 ;
-(void)setShouldAnnotateImageUsage:(BOOL)arg1 ;
-(BOOL)shouldTrackAtlasImageUsage;
-(void)setShouldTrackAtlasImageUsage:(BOOL)arg1 ;
-(void)setShouldUseTestIcons:(BOOL)arg1 ;
-(BOOL)shouldLinkPlayerToICloud;
-(void)setShouldLinkPlayerToICloud:(BOOL)arg1 ;
-(BOOL)shouldLinkPlayerToTwitter;
-(void)setShouldLinkPlayerToTwitter:(BOOL)arg1 ;
-(BOOL)shouldLinkPlayerToFacebook;
-(void)setShouldLinkPlayerToFacebook:(BOOL)arg1 ;
-(BOOL)shouldAllowGameInvites;
-(BOOL)shouldDisallowInvitesFromStrangers;
-(BOOL)shouldAddPlayerInfoToAddressBook;
-(void)setShouldAddPlayerInfoToAddressBook:(BOOL)arg1 ;
-(id)overrideValues;
-(BOOL)isWebKitInspectElementEnabled;
-(void)setWebKitInspectElementEnabled:(BOOL)arg1 ;
-(id)preferencesDelegate;
-(BOOL)restrictionEnabledForKey:(id)arg1 ;
-(void)setPreferencesDelegate:(id)arg1 ;
-(BOOL)executionAllowedForBundleID:(id)arg1 ;
-(BOOL)isAppInstallationRestricted;
-(void)setShouldAllowGameInvites:(BOOL)arg1 ;
-(void)setShouldAllowNearbyMultiplayer:(BOOL)arg1 ;
-(BOOL)shouldAllowNearbyMultiplayer;
-(BOOL)shouldAnnotateImageUsage;
-(BOOL)notificationBadgesEnabled;
-(BOOL)notificationSoundsEnabled;
-(BOOL)notificationAlertsEnabled;
-(void)setNotificationBadgesEnabled:(BOOL)arg1 ;
-(void)setNotificationSoundsEnabled:(BOOL)arg1 ;
-(void)setNotificationAlertsEnabled:(BOOL)arg1 ;
-(BOOL)isNotificationCenterEnabled;
-(void)setNotificationCenterEnabled:(BOOL)arg1 ;
-(BOOL)shouldUseTestIcons;
-(BOOL)isMultiplayerGamingRestricted;
-(BOOL)isAddingFriendsRestricted;
-(BOOL)isGameCenterRestricted;
-(BOOL)isStoreDemoModeEnabled;
-(BOOL)isAccountModificationRestricted;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)synchronize;
-(int)environment;
@end

