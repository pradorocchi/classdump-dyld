/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterFoundation/GKClientProtocol.h>

@protocol OS_dispatch_queue;
@class GKMatchResponse, NSObject, NSXPCConnection, GKEntitlements, NSNumber, NSString, GKEventTuple, GKInviteSession, NSDictionary, NSLocale;

@interface GKClientProxy : NSObject <GKClientProtocol> {

	int _authState;
	GKMatchResponse* _currentMatchResponse;
	BOOL _deniedProductionEnvironment;
	BOOL _initialized;
	NSObject<OS_dispatch_queue>* _authQueue;
	int _pid;
	NSXPCConnection* _connection;
	GKEntitlements* _entitlements;
	NSNumber* _adamID;
	NSNumber* _externalVersion;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSString* _appSession;
	NSString* _language;
	unsigned _applicationState;
	unsigned _previousApplicationState;
	GKEventTuple* _launchEvent;
	GKInviteSession* _inviteSession;

}

@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * authQueue;              //@synthesize authQueue=_authQueue - In the implementation block
@property (assign,nonatomic) int pid;                                                //@synthesize pid=_pid - In the implementation block
@property (assign,nonatomic) NSXPCConnection * connection;                           //@synthesize connection=_connection - In the implementation block
@property (retain) GKEntitlements * entitlements;                                    //@synthesize entitlements=_entitlements - In the implementation block
@property (nonatomic,retain) NSNumber * adamID;                                      //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,retain) NSNumber * externalVersion;                             //@synthesize externalVersion=_externalVersion - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                            //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleVersion;                               //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (assign,nonatomic) BOOL deniedProductionEnvironment;                       //@synthesize deniedProductionEnvironment=_deniedProductionEnvironment - In the implementation block
@property (nonatomic,retain) NSString * appSession;                                  //@synthesize appSession=_appSession - In the implementation block
@property (nonatomic,readonly) NSDictionary * gameDescriptor; 
@property (nonatomic,readonly) NSString * language;                                  //@synthesize language=_language - In the implementation block
@property (nonatomic,@dynamic,readonly) NSLocale * locale; 
@property (assign) BOOL initialized;                                                 //@synthesize initialized=_initialized - In the implementation block
@property (assign) unsigned applicationState;                                        //@synthesize applicationState=_applicationState - In the implementation block
@property (assign) unsigned previousApplicationState;                                //@synthesize previousApplicationState=_previousApplicationState - In the implementation block
@property (nonatomic,retain) GKEventTuple * launchEvent;                             //@synthesize launchEvent=_launchEvent - In the implementation block
@property (retain) GKInviteSession * inviteSession;                                  //@synthesize inviteSession=_inviteSession - In the implementation block
@property (@dynamic) GKMatchResponse * currentMatchResponse; 
+(id)clientForProcessIdentifier:(int)arg1 ;
+(id)clientForBundleID:(id)arg1 createIfNecessary:(BOOL)arg2 ;
+(id)gameCenterClient;
+(id)foregroundClient;
+(id)clientForMatchmakingRID:(id)arg1 ;
+(id)clientForInviteSessionToken:(id)arg1 ;
+(id)clientForBundleID:(id)arg1 bundle:(id)arg2 createIfNecessary:(BOOL)arg3 ;
+(id)factoryQueue;
+(id)_clientLookup;
+(id)_foregroundClient;
+(void)saveAuthenticationState:(int)arg1 forBundleID:(id)arg2 pid:(int)arg3 ;
+(int)lastKnownAuthenticationStateForClientWithBundleID:(id)arg1 pid:(int)arg2 ;
+(id)clientForBundleID:(id)arg1 ;
+(id)syncQueue;
+(id)allClients;
+(id)replyQueue;
+(void)removeClient:(id)arg1 ;
-(void)performAsync:(/*^block*/ id)arg1 ;
-(void)setApplicationState:(unsigned)arg1 ;
-(int)authState;
-(void)setInitialized:(BOOL)arg1 ;
-(void)setEntitlements:(id)arg1 ;
-(BOOL)deniedProductionEnvironment;
-(void)setDeniedProductionEnvironment:(BOOL)arg1 ;
-(BOOL)isUIService;
-(void)setPreviousApplicationState:(unsigned)arg1 ;
-(void)terminateWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)inviteSession;
-(void)setInviteSession:(id)arg1 ;
-(void)checkMatchStatus;
-(id)currentMatchResponse;
-(void)setInvitedPlayerResponded:(id)arg1 ;
-(void)setLaunchEvent:(unsigned)arg1 withContext:(id)arg2 ;
-(id)verifyAuthorized;
-(BOOL)setAuthState:(int)arg1 ;
-(id)appSession;
-(id)initWithBundleIdentifier:(id)arg1 bundleOrNil:(id)arg2 ;
-(id)authQueue;
-(id)serviceClient;
-(id)launchEvent;
-(void)setLaunchEvent:(id)arg1 ;
-(BOOL)processMatchResponse:(id)arg1 error:(out id*)arg2 ;
-(void)cancelInvitationForSession:(id)arg1 playerID:(id)arg2 pushTokens:(id)arg3 handler:(/*^block*/ id)arg4 ;
-(void)setCurrentMatchResponse:(id)arg1 ;
-(void)setAppSession:(id)arg1 ;
-(unsigned)previousApplicationState;
-(void)updateAuthenticationState;
-(id)serviceForClass:(Class)arg1 ;
-(int)requiredStateForTransitionToState:(int)arg1 ;
-(void)didTransitionToNewState:(int)arg1 fromState:(int)arg2 ;
-(void)initializeWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)bgInitializeWithCompletionHandler:(/*^block*/ id)arg1 ;
-(oneway void)setLocalPlayer:(id)arg1 authenticated:(BOOL)arg2 reply:(/*^block*/ id)arg3 ;
-(oneway void)getServicesWithReply:(/*^block*/ id)arg1 ;
-(oneway void)getPrivateServicesWithReply:(/*^block*/ id)arg1 ;
-(oneway void)getAuthenticatedPlayerIDWithHandler:(/*^block*/ id)arg1 ;
-(oneway void)getAccountNameWithHandler:(/*^block*/ id)arg1 ;
-(oneway void)beginNetworkActivity;
-(oneway void)endNetworkActivity;
-(oneway void)resetNetworkActivity;
-(oneway void)receivedChallengeSelected:(id)arg1 ;
-(oneway void)completedChallengeSelected:(id)arg1 ;
-(oneway void)challengeReceived:(id)arg1 ;
-(oneway void)challengeCompleted:(id)arg1 ;
-(oneway void)setBadgeCount:(unsigned)arg1 forType:(unsigned)arg2 ;
-(oneway void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 ;
-(oneway void)setPreferencesValues:(id)arg1 ;
-(oneway void)setCurrentGame:(id)arg1 sandboxed:(BOOL)arg2 reply:(/*^block*/ id)arg3 ;
-(oneway void)respondedToNearbyInvite:(id)arg1 ;
-(oneway void)scoreSelected:(id)arg1 ;
-(oneway void)achievementSelected:(id)arg1 ;
-(oneway void)setLogBits:(unsigned)arg1 ;
-(void)performSync:(/*^block*/ id)arg1 ;
-(void)setExternalVersion:(id)arg1 ;
-(BOOL)isGameCenter;
-(id)gameDescriptor;
-(id)adamID;
-(id)externalVersion;
-(id)bundleVersion;
-(id)entitlements;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)bundleIdentifier;
-(unsigned)applicationState;
-(id)locale;
-(id)language;
-(id)connection;
-(void)setConnection:(id)arg1 ;
-(id)replyQueue;
-(BOOL)initialized;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(void)setAdamID:(id)arg1 ;
-(void)setBundleIdentifier:(id)arg1 ;
-(void)setBundleVersion:(id)arg1 ;
@end

