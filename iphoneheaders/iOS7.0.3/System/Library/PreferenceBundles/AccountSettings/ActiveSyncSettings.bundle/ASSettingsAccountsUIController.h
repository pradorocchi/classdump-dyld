/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/ActiveSyncSettings.bundle/ActiveSyncSettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DataAccessUI/DASettingsAccountsUIController.h>
#import <ActiveSyncSettings/DAAutoDiscoveryConsumer.h>

@interface ASSettingsAccountsUIController : DASettingsAccountsUIController <DAAutoDiscoveryConsumer> {

	int _autodiscoveryState;
	unsigned _diagsVisibleValue;

}
+(BOOL)isHotmailAccount;
-(void)doneButtonTapped:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_specifiersForMinimalAutodiscovery;
-(id)_specifiersForOptionalServerAutodiscovery;
-(id)_specifiersForCompletedAutodiscovery;
-(id)localizedAccountTitleString;
-(void)_transitionToOptionalServerAutodiscovery;
-(void)_transitionToCompletedAutodiscovery;
-(BOOL)autodiscoverAccount;
-(void)_tryUpdatingCompositeValueWithId:(id)arg1 fromValue:(id)arg2 forKey:(id)arg3 ;
-(id)localizedValidationFailureTitleString;
-(id)newDefaultAccount;
-(BOOL)transitionsAfterInitialSetup;
-(id)_defaultAccountDescription;
-(id)localizedConfirmSaveUnvalidatedAccountTitleString;
-(id)localizedConfirmSaveUnvalidatedAccountMessageString;
-(id)localizedAccountSetupTitleString;
-(void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountPropertyWithSpecifier:(id)arg1 ;
-(BOOL)validateAccount;
-(BOOL)haveEnoughValues;
-(id)accountSpecifiers;
-(void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3 ;
-(void)account:(id)arg1 wasAutoDiscovered:(BOOL)arg2 error:(id)arg3 ;
-(id)account;
@end

