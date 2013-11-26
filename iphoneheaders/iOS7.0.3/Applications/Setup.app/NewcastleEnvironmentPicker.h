/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Setup.app/Setup
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSListController.h>
#import <Setup/BuddyController.h>
#import <UIKit/UIAlertViewDelegate.h>

@class SetMobileMeServerSettings, UIActivityIndicatorView;

@interface NewcastleEnvironmentPicker : PSListController <BuddyController, UIAlertViewDelegate> {

	SetMobileMeServerSettings* _serverSettingsController;
	UIActivityIndicatorView* _spinner;
	BOOL _settingUpServer;
	BOOL _environmentSwitchCancelled;
	id _delegate;

}
-(id)envSpecifiersUnderSpecifier:(id)arg1 ;
-(void)_showShouldCancelAlertForEnvironment:(id)arg1 ;
-(void)setEnvironmentConfiguration:(id)arg1 forServiceNamed:(id)arg2 ;
-(id)configurationURLForEnvironmentName:(id)arg1 error:(id*)arg2 ;
-(BOOL)shouldCancelSwitchingToEnvironmentDictionary:(id)arg1 ;
-(void)startSpinnerInCell:(id)arg1 ;
-(void)waitForLaunchdJobToComplete:(id)arg1 ;
-(int)switchToAOSEnvironmentNamed:(id)arg1 error:(id*)arg2 ;
-(void)stopSpinnerInCell:(id)arg1 ;
-(id)setEnvironmentFromSpecifier:(id)arg1 DNSOnly:(BOOL)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)viewDidLoad;
-(id)specifiers;
-(id)controllerForSpecifier:(id)arg1 ;
-(void)controllerDone;
@end

