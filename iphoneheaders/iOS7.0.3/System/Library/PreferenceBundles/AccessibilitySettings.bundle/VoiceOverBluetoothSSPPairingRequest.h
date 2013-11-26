/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:06:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class VoiceOverBluetoothDevice, PSSpecifier, UIAlertView;

@interface VoiceOverBluetoothSSPPairingRequest : NSObject {

	VoiceOverBluetoothDevice* _device;
	PSSpecifier* _specifier;
	UIAlertView* _alert;
	id _delegate;
	int _pairingStyle;

}
-(id)_sanitizeNameForAlert:(id)arg1 ;
-(id)initWithDevice:(id)arg1 andSpecifier:(id)arg2 ;
-(void)setPairingStyle:(int)arg1 andPasskey:(id)arg2 ;
-(int)pairingStyle;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)show;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)dismiss;
-(void)hidPairingResult:(id)arg1 ;
@end

