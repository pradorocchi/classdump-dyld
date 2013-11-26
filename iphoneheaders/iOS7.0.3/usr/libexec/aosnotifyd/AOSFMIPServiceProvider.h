/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/aosnotifyd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <aosnotifyd/AOSFMIPBaseServiceProvider.h>

@protocol OS_dispatch_queue;
@class AOSUserNotification, BKSApplicationStateMonitor, NSString, NSObject;

@interface AOSFMIPServiceProvider : AOSFMIPBaseServiceProvider {

	BOOL _isMonitoringPendingDeviceIdentity;
	AOSUserNotification* _pendingSecureMessage;
	BKSApplicationStateMonitor* _pendingDeviceIdentityMonitor;
	NSString* _deviceIdentityPendingXpcTransactionName;
	NSObject<OS_dispatch_queue>* _identity_wait_queue;
	int _lockStateNotifyToken;
	NSObject<OS_dispatch_queue>* _secure_message_queue;

}

@property (nonatomic,retain) AOSUserNotification * pendingSecureMessage;                             //@synthesize pendingSecureMessage=_pendingSecureMessage - In the implementation block
@property (assign,nonatomic) BOOL isMonitoringPendingDeviceIdentity;                                 //@synthesize isMonitoringPendingDeviceIdentity=_isMonitoringPendingDeviceIdentity - In the implementation block
@property (nonatomic,retain) BKSApplicationStateMonitor * pendingDeviceIdentityMonitor;              //@synthesize pendingDeviceIdentityMonitor=_pendingDeviceIdentityMonitor - In the implementation block
@property (nonatomic,retain) NSString * deviceIdentityPendingXpcTransactionName;                     //@synthesize deviceIdentityPendingXpcTransactionName=_deviceIdentityPendingXpcTransactionName - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * identity_wait_queue;                      //@synthesize identity_wait_queue=_identity_wait_queue - In the implementation block
@property (assign,nonatomic) int lockStateNotifyToken;                                               //@synthesize lockStateNotifyToken=_lockStateNotifyToken - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * secure_message_queue;                     //@synthesize secure_message_queue=_secure_message_queue - In the implementation block
-(void)accountDidChange;
-(void)setIdentity_wait_queue:(id)arg1 ;
-(void)setSecure_message_queue:(id)arg1 ;
-(void)setLockStateNotifyToken:(int)arg1 ;
-(void)_showUnregisterDeviceErrorForResponseError:(int)arg1 inContext:(int)arg2 ;
-(void)_showActivationUnlockError;
-(void)authorizeFMIPForLocations;
-(void)registerCommonNotifications;
-(void)fmipProviderInitialSetupComplete;
-(void)deinitializeProvider;
-(void)deregisterCommonNotifications;
-(void)stopMonitoringPendingDeviceIdentity;
-(id)deviceIdentityPendingXpcTransactionName;
-(void)setDeviceIdentityPendingXpcTransactionName:(id)arg1 ;
-(void)fmipAppInstalled:(id)arg1 ;
-(void)fmipAppUpdated:(id)arg1 ;
-(void)fmipAppUninstalled:(id)arg1 ;
-(void)lostModeDisabled:(id)arg1 ;
-(void)buddyDidComplete:(id)arg1 ;
-(void)accountDeactivated;
-(void)unregisterDevice;
-(BOOL)isMonitoringPendingDeviceIdentity;
-(void)sendDeviceIdentityIfEligible;
-(void)tryToFetchAuthToken;
-(void)registerDeviceWithCause:(id)arg1 force:(BOOL)arg2 ;
-(void)registerDeviceWithCause:(id)arg1 ;
-(void)sendQueueCheckRequest:(id)arg1 ;
-(id)_constructVolatileFullDeviceInfo;
-(BOOL)isActivationLockEnabled;
-(void)didReceiveAuthFailureForRequest:(id)arg1 ;
-(id)secure_message_queue;
-(id)pendingSecureMessage;
-(int)lockStateNotifyToken;
-(void)_showPendingSecureMessageNow;
-(id)identity_wait_queue;
-(void)_serialQueue_sendDeviceIdentityIfEligible;
-(void)_enqueueIdentityOperation:(/*^block*/ id)arg1 ;
-(BOOL)_canSendDeviceIdentityNow;
-(void)_sendDeviceIdentityNow;
-(void)monitorAndSendDeviceIdentityLater;
-(void)setIsMonitoringPendingDeviceIdentity:(BOOL)arg1 ;
-(void)setPendingDeviceIdentityMonitor:(id)arg1 ;
-(id)pendingDeviceIdentityMonitor;
-(void)checkAndSendPendingDeviceIdentity;
-(void)_serialQueue_checkAndSendPendingDeviceIdentity;
-(id)newLocationManager;
-(void)sendDeviceIdentity;
-(void)ackIdentityCommand:(id)arg1 ;
-(void)sendActivationUnlock;
-(void)setPendingSecureMessage:(id)arg1 ;
-(id)serviceName;
-(id)init;
-(void).cxx_destruct;
@end

