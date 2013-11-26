/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:17 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSListController.h>
#import <Preferences/KeychainSyncViewControllerDelegate.h>
#import <Preferences/KeychainSyncPhoneSettingsFragmentDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class PSSpecifier, NSArray, PSSetupController, KeychainSyncDevicePINController, KeychainSyncPhoneSettingsFragment, NSString, KeychainSyncCountryInfo, PSKeychainSyncManager, UIAlertView;

@interface PSAccountSecurityController : PSListController <KeychainSyncViewControllerDelegate, KeychainSyncPhoneSettingsFragmentDelegate, UIAlertViewDelegate> {

	PSSpecifier* _recoverySwitch;
	NSArray* _passcodeSpecifiers;
	PSSetupController* _devicePasscodeChangeSetupController;
	KeychainSyncDevicePINController* _devicePINController;
	KeychainSyncPhoneSettingsFragment* _phoneSettingsFragment;
	NSString* _SMSTarget;
	KeychainSyncCountryInfo* _SMSTargetCountryInfo;
	BOOL _secureBackupEnabled;
	PSKeychainSyncManager* _manager;
	UIAlertView* _invalidPhoneNumberAlert;
	UIAlertView* _changeDevicePasscodeAlert;
	UIAlertView* _disableRecoveryConfirmationAlert;
	BOOL _usesSimpleSecurityCode;
	NSString* _securityCode;

}

@property (assign,nonatomic) BOOL usesSimpleSecurityCode;              //@synthesize usesSimpleSecurityCode=_usesSimpleSecurityCode - In the implementation block
@property (nonatomic,retain) NSString * securityCode;                  //@synthesize securityCode=_securityCode - In the implementation block
-(void)dealloc;
-(id)init;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)phoneSettingsFragment:(id)arg1 didChangePhoneNumber:(id)arg2 countryInfo:(id)arg3 ;
-(id)specifiers;
-(void)reloadSpecifiers;
-(void)cancelPressed;
-(void)keychainSyncController:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3 ;
-(void)handleBurnedRecord;
-(void)changeSecurityCode:(id)arg1 ;
-(void)setUseRecovery:(id)arg1 specifier:(id)arg2 ;
-(id)useRecoveryForSepecifier:(id)arg1 ;
-(id)passcodeSpecifiers;
-(void)_setShowsDoneButton:(BOOL)arg1 ;
-(void)setSecurityCode:(id)arg1 ;
-(void)_showSecurityCodeChangeSheetOnSpecifier:(id)arg1 ;
-(id)securityCode;
-(void)saveSMSTargetChanges;
-(void)navCancelPressed;
-(void)navDonePressed;
-(void)disableRecovery;
-(id)useSimpleSecurityCodeForSpecifier:(id)arg1 ;
-(BOOL)usesSimpleSecurityCode;
-(void)setUsesSimpleSecurityCode:(BOOL)arg1 ;
@end

