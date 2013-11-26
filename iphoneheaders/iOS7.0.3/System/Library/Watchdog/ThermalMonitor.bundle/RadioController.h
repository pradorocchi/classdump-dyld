/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/RadioDefaultController.h>

@interface RadioController : RadioDefaultController {

	bool radioTransmitting;
	CFStringRef currentRadioTechnology;
	/*function pointer*/ void* ctCallBack;
	CTServerConnectionRef serverConnection;
	long currentTransmitPowerLevel;
	long transmitPowerCeiling;

}
-(void)initializeRadio;
-(void)setDecay:(long)arg1 :(long)arg2 ;
-(long)set_transmit_power_level:(long)arg1 ;
-(void)initDataCollection;
-(void)release_server_connection;
-(void)createServerConnection;
-(void)setCallDropLimit;
-(void)set_transmit_power_level;
-(void)updatePeriodicUpdateCT:(int)arg1 ;
-(void)updatePowerCeiling:(long)arg1 ;
-(void)enableDataCollection:(bool)arg1 ;
-(CFStringRef)getCurrentRadioTechnology;
-(bool)getTemperature:(long)arg1 :(int*)arg2 :(int*)arg3 ;
-(void)setMaxTransmitPower;
-(void)updateCurrentRadioTechnology;
-(void)registerForNotificationTransmit;
-(void)registerForStatusNotificationChange;
-(void)updatePeriodicUpdateCT;
-(void)setCallDropLimit:(long)arg1 ;
-(long)setMaxTransmitPower:(long)arg1 ;
-(void)registerForNotificationChange;
-(bool)getRadioTransmit;
-(void)dealloc;
-(id)init:(/*function pointer*/ void*)arg1 ;
@end

