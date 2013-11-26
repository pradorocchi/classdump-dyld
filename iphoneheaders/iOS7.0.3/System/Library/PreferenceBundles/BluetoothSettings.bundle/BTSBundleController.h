/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSBundleController.h>

@class PSSpecifier, NSString;

@interface BTSBundleController : PSBundleController {

	PSSpecifier* _specifier;
	int _initialState;
	NSString* _unavailableStr;
	NSString* _offStr;
	NSString* _onStr;
	BOOL _displayedInRootMenu;

}
-(void)dealloc;
-(id)bundle;
-(void)powerChanged:(id)arg1 ;
-(void)setBluetoothValue:(id)arg1 specifier:(id)arg2 ;
-(id)bluetoothValue:(id)arg1 ;
-(id)initWithParentListController:(id)arg1 ;
-(id)specifiersWithSpecifier:(id)arg1 ;
@end

