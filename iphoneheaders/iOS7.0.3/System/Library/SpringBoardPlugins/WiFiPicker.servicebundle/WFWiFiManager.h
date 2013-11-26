/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/WiFiPicker.servicebundle/WiFiPicker
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WiFiPicker/WiFiPicker-Structs.h>
#import <SpringBoardUI/SBPluginBundleController.h>

@protocol SBUIUserAgent;
@class NSRecursiveLock, WFWiFiAlertItem, NSDictionary, ;

@interface WFWiFiManager : NSObject <SBPluginBundleController> {

	NSRecursiveLock* _lock;
	WiFiManagerClientRef _manager;
	WiFiDeviceClientRef _device;
	CFRunLoopRef _callbackRunLoop;
	int _rssiThreshold;
	BOOL _joining;
	BOOL _bluetoothTethered;
	BOOL _delayedForBTScan;
	WFWiFiAlertItem* _alertItem;
	NSDictionary* _lastWifiScanDictionary;
	unsigned _notificationID;
	<SBUIUserAgent>* _sbUserAgent;

}

@property (assign,nonatomic) WFWiFiAlertItem * currentAlertItem;              //@synthesize alertItem=_alertItem - In the implementation block
+(id)sharedInstance;
+(void)awakeFromBundle;
-(id)currentAlertItem;
-(void)dismissAlerts;
-(void)cancelTrust:(BOOL)arg1 ;
-(BOOL)joining;
-(void)scan;
-(void)_appLaunched:(id)arg1 ;
-(void)acceptTrust:(id)arg1 ;
-(WiFiManagerClientRef)_managerLocked;
-(void)_scanFailed;
-(void)_bluetoothScanComplete:(id)arg1 ;
-(void)setCurrentAlertItem:(id)arg1 ;
-(void)userChoseNetwork:(id)arg1 ;
-(void)joinNetwork:(id)arg1 password:(id)arg2 ;
-(void)setLastWifiScanDictionary:(id)arg1 ;
-(id)lastWifiScanDictionary;
-(void)_appDeactivated:(id)arg1 ;
-(void)_appFlagsChanged:(id)arg1 ;
-(void)_lockButtonPressed:(id)arg1 ;
-(void)_bluetoothConnectionChanged:(id)arg1 ;
-(void)_runManagerCallbackThread;
-(BOOL)_shouldShowPicker;
-(void)_wifiScanComplete:(CFArrayRef)arg1 ;
-(void)_joinComplete:(int)arg1 network:(WiFiNetworkRef)arg2 ;
-(void)_askToJoinWithID:(unsigned)arg1 ;
-(void)_trustCallbackWithID:(unsigned)arg1 type:(int)arg2 network:(WiFiNetworkRef)arg3 data:(id)arg4 ;
-(void)setDevice:(WiFiDeviceClientRef)arg1 ;
-(void)cancelPicker:(BOOL)arg1 ;
-(id)init;
-(id)knownNetworks;
@end

