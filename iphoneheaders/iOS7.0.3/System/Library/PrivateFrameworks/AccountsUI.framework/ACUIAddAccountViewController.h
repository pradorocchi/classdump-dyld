/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:39 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSListController.h>
#import <AccountsUI/ACUISetupViewControllerDelegate.h>

@class NSArray, ACUIAccountViewProvidersManager;

@interface ACUIAddAccountViewController : PSListController <ACUISetupViewControllerDelegate> {

	BOOL _dontShowSecondLevelOtherAccountTypes;
	NSArray* _preEnabledDataclasses;
	unsigned char _originalWifiFlag;
	unsigned char _originalCellFlag;

}

@property (nonatomic,readonly) ACUIAccountViewProvidersManager * viewProvidersManager; 
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_specifierForiCloudAccount;
-(id)_specifierForExchangeAccount;
-(id)_specifiersForRegionalMailAccounts;
-(id)_specifierForGmailAccount;
-(id)_specifierForYahooAccount;
-(id)_specifierForAOLAccount;
-(id)_specifierForOutlookAccount;
-(id)specifierForOtherAccounts;
-(id)giantSpecifierWithName:(id)arg1 forAccountTypeID:(id)arg2 ;
-(id)_specifierForRegionalAccountType:(id)arg1 ;
-(id)viewProvidersManager;
-(void)setupViewControllerDidDismiss:(id)arg1 ;
-(id)specifiers;
-(void).cxx_destruct;
@end

