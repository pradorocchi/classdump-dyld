/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:06:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface VoiceOverBluetoothDevice : NSObject <NSCopying> {

	NSString* _name;
	NSString* _address;
	BTDeviceImplRef _device;

}
-(BOOL)isNameCached;
-(unsigned)authorizedServices;
-(void)setDevice:(BTDeviceImplRef)arg1 ;
-(BOOL)isServiceSupported:(unsigned)arg1 ;
-(void)dealloc;
-(id)description;
-(int)type;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)name;
-(int)compare:(id)arg1 ;
-(void)connect;
-(void)disconnect;
-(BTDeviceImplRef)device;
-(void)unpair;
-(id)initWithDevice:(BTDeviceImplRef)arg1 address:(id)arg2 ;
-(void)_clearName;
-(unsigned)majorClass;
-(unsigned)minorClass;
-(BOOL)paired;
-(unsigned)connectedServicesCount;
-(void)connectWithServices:(unsigned)arg1 ;
-(void)acceptSSP:(int)arg1 ;
-(unsigned)connectedServices;
-(BOOL)connected;
-(unsigned)deviceClass;
-(id)address;
-(void)setPIN:(id)arg1 ;
@end

