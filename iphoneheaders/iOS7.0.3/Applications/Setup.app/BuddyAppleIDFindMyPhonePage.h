/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Setup.app/Setup
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Setup/SetupChoiceController.h>

@protocol AASetupAssistantDelegateService;
@class UIAlertView, NSObject, SetupChoice;

@interface BuddyAppleIDFindMyPhonePage : SetupChoiceController {

	UIAlertView* _enableAlert;
	UIAlertView* _accountChangeAlert;
	UIAlertView* _secondaryAccountDisableAlert;
	NSObject<AASetupAssistantDelegateService>* _iCloudAssistantDelegate;
	SetupChoice* _enableChoice;
	SetupChoice* _disableChoice;

}

@property (assign,nonatomic) id delegate; 
@property (assign,nonatomic) NSObject<AASetupAssistantDelegateService> * iCloudAssistantDelegate;              //@synthesize iCloudAssistantDelegate=_iCloudAssistantDelegate - In the implementation block
@property (nonatomic,retain) SetupChoice * enableChoice;                                                       //@synthesize enableChoice=_enableChoice - In the implementation block
@property (nonatomic,retain) SetupChoice * disableChoice;                                                      //@synthesize disableChoice=_disableChoice - In the implementation block
-(void)choice:(id)arg1 resultWasValid:(BOOL)arg2 ;
-(BOOL)wantsNextButton;
-(id)footerDetailText;
-(BOOL)shouldAllowStartOver;
-(id)footerIconName;
-(id)footerTitleText;
-(id)learnMoreButtonText;
-(void)learnMoreButtonTapped:(id)arg1 ;
-(void)setICloudAssistantDelegate:(id)arg1 ;
-(void)setEnableChoice:(id)arg1 ;
-(void)setDisableChoice:(id)arg1 ;
-(void)whatIsPressed;
-(id)enableChoice;
-(id)disableChoice;
-(void)setDeviceLocatorEnabled:(BOOL)arg1 showAlertIfAccountChange:(BOOL)arg2 ;
-(id)iCloudAssistantDelegate;
-(id)init;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(id)titleText;
@end

