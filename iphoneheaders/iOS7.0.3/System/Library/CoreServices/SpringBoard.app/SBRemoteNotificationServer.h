/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <IDSFoundation/APSConnectionDelegate.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface SBRemoteNotificationServer : NSObject <APSConnectionDelegate> {

	NSMutableDictionary* _bundleIdentifiersToClients;
	NSMutableDictionary* _environmentsToConnections;
	NSMutableSet* _bundleIdentifiersNeedingToken;
	NSString* _lastNotificationReceivedBundleIdentifier;
	NSMutableDictionary* _appImportanceTracker;

}
+(id)sharedInstance;
-(void)postSettingsChangedNotificationForBundleIdentifier:(id)arg1 ;
-(id)lastNotificationReceivedBundleIdentifier;
-(void)_appStateDidChange:(id)arg1 ;
-(void)_appDebugStateDidChange:(id)arg1 ;
-(void)calculateTopics;
-(id)_allTopicsForApplication:(id)arg1 ;
-(void)_moveTopicsForApp:(id)arg1 fromList:(unsigned)arg2 toList:(unsigned)arg3 ;
-(void)_appImportanceIncreased:(id)arg1 ;
-(void)_appImportanceDecreased:(id)arg1 ;
-(id)_cloudDatabaseTopicsForApplication:(id)arg1 ;
-(void)registerApplication:(id)arg1 forEnvironment:(id)arg2 withTypes:(unsigned)arg3 ;
-(id)allAppEnabledTypeValues;
-(void)setSettingsTypes:(unsigned)arg1 forBundleIdentifier:(id)arg2 ;
-(id)getMessageUserInfoForToken:(int)arg1 forBundleIdentifier:(id)arg2 ;
-(id)allSettingsEnabledTypeValues;
-(unsigned)getEffectiveEnabledTypesForApplication:(id)arg1 ;
-(void)notePermissionAlertAcceptedTypes:(unsigned)arg1 forBundleIdentifier:(id)arg2 ;
-(unsigned)appEnabledTypesForBundleIdentifier:(id)arg1 ;
-(unsigned)settingsEnabledTypesForBundleIdentifier:(id)arg1 ;
-(void)setMessageUserInfo:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)setMessageUserInfo:(id)arg1 forToken:(int)arg2 forBundleIdentifier:(id)arg3 ;
-(id)getMessageUserInfoForBundleIdentifier:(id)arg1 ;
-(void)clearMessageUserInfoForToken:(int)arg1 forBundleIdentifier:(id)arg2 ;
-(id)_allPushRegisteredThirdPartyBundleIDs;
-(void)unregisterApplication:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)run;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(BOOL)isSystemwideEnabled;
-(void)setSystemwideEnabled:(BOOL)arg1 ;
-(BOOL)hasRegisteredBundleIdentifiers;
@end

