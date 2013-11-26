/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:06:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
@class NSMutableDictionary;

@interface VoiceOverBluetoothManager : NSObject {

	BTLocalDeviceImplRef _localDevice;
	BTSessionImplRef _session;
	int _available;
	unsigned _authorizedServices;
	BOOL _audioConnected;
	BOOL _scanningEnabled;
	BTDiscoveryAgentImplRef _discoveryAgent;
	BTPairingAgentImplRef _pairingAgent;
	NSMutableDictionary* _btAddrDict;
	NSMutableDictionary* _btDeviceDict;

}

@property (assign,nonatomic) unsigned authorizedServices;              //@synthesize authorizedServices=_authorizedServices - In the implementation block
+(id)sharedInstance;
+(int)lastInitError;
-(id)deviceForAddressString:(id)arg1 ;
-(unsigned)authorizedServicesForDevice:(id)arg1 ;
-(unsigned)authorizedServices;
-(void)setAuthorizedServices:(unsigned)arg1 ;
-(void)setDevicePairingEnabled:(BOOL)arg1 ;
-(void)setDeviceScanningEnabled:(BOOL)arg1 ;
-(void)resetDeviceScanning;
-(id)pairedDevices;
-(BOOL)isServiceSupported:(unsigned)arg1 ;
-(void)cancelPairing;
-(void)dealloc;
-(id)init;
-(void)postNotificationName:(id)arg1 object:(id)arg2 ;
-(BOOL)setEnabled:(BOOL)arg1 ;
-(void)postNotification:(id)arg1 ;
-(BOOL)enabled;
-(void)_powerChanged;
-(void)connectDevice:(id)arg1 ;
-(void)connectDevice:(id)arg1 withServices:(unsigned)arg2 ;
-(void)setPincode:(id)arg1 forDevice:(id)arg2 ;
-(void)acceptSSP:(int)arg1 forDevice:(id)arg2 ;
-(void)unpairDevice:(id)arg1 ;
-(BOOL)_attach:(id)arg1 ;
-(BOOL)_setup:(BTSessionImplRef)arg1 ;
-(void)_cleanup:(BOOL)arg1 ;
-(void)_postNotificationWithArray:(id)arg1 ;
-(void)_restartScan;
-(id)addDeviceIfNeeded:(BTDeviceImplRef)arg1 ;
-(void)_removeDevice:(id)arg1 ;
-(BOOL)devicePairingEnabled;
-(void)postNotificationName:(id)arg1 object:(id)arg2 error:(id)arg3 ;
-(BOOL)_onlySensorsConnected;
-(void)_connectedStatusChanged;
-(void)_connectabilityChanged;
-(void)_discoveryStateChanged;
-(void)setAudioConnected:(BOOL)arg1 ;
-(BOOL)isAnyoneScanning;
-(BOOL)wasDeviceDiscovered:(id)arg1 ;
-(BOOL)deviceScanningEnabled;
-(BOOL)isDiscoverable;
-(void)setDiscoverable:(BOOL)arg1 ;
-(BOOL)connectable;
-(void)setConnectable:(BOOL)arg1 ;
-(id)connectingDevices;
-(BOOL)audioConnected;
-(BOOL)setPowered:(BOOL)arg1 ;
-(BOOL)available;
-(BOOL)powered;
-(void)_postNotification:(id)arg1 ;
-(BOOL)connected;
-(int)powerState;
@end

