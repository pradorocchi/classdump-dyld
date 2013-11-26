/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/UserEventPlugins/MobileBackupUEA.plugin/MobileBackupUEA
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Setup/MBManagerDelegate.h>

@protocol OS_dispatch_queue;
@class PCPersistentTimer, NSObject, MBManager;

@interface MBUEAPlugin : NSObject <MBManagerDelegate> {

	void* _reachabilityRef;
	int _screenLockedToken;
	int _powerToken;
	int _profilesToken;
	int _keybagToken;
	int _appleAccountToken;
	PCPersistentTimer* _pcTimer;
	NSObject<OS_dispatch_queue>* _eventQueue;
	BOOL _isPowered;
	BOOL _isScreenLocked;
	BOOL _isOnWiFi;
	BOOL _ignorePowerState;
	BOOL _enabled;
	MBManager* _manager;

}

@property (assign) BOOL isPowered; 
@property (assign) BOOL isScreenLocked; 
@property (assign) BOOL isOnWiFi; 
@property (assign) BOOL enabled; 
-(BOOL)isPowered;
-(void)_stateDidChange;
-(void)setIsPowered:(BOOL)arg1 ;
-(BOOL)isOnWiFi;
-(void)setIsOnWiFi:(BOOL)arg1 ;
-(void)_pcTimerFired;
-(void)_updatePCTimer;
-(void)notifyDaemonThatKeyBagIsLocking;
-(void)setIsScreenLocked:(BOOL)arg1 ;
-(id)initWithEventQueue:(id)arg1 ;
-(void)notifyDaemonThatKeyBagIsUnlocked;
-(void)notifyDaemonOfAccountChange;
-(void)_updateEnabledState;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(void)cancel;
-(BOOL)enabled;
-(BOOL)isScreenLocked;
-(void)managerDidLoseConnectionToService:(id)arg1 ;
-(void)_install;
@end

