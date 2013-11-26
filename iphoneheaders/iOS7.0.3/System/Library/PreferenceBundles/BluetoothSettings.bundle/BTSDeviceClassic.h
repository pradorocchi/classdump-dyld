/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BluetoothSettings/BTSDevice.h>

@class BluetoothDevice;

@interface BTSDeviceClassic : BTSDevice {

	BluetoothDevice* _device;

}

@property (nonatomic,readonly) BluetoothDevice * device;              //@synthesize device=_device - In the implementation block
+(id)deviceWithDevice:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)dealloc;
-(id)name;
-(id)identifier;
-(BOOL)connect;
-(void)disconnect;
-(id)device;
-(id)classicDevice;
-(void)unpair;
-(BOOL)paired;
-(BOOL)connected;
@end

