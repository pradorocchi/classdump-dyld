/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:39 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SiriUI/SiriUIObjectPickerViewController.h>
#import <UIKit/ABPeoplePickerNavigationControllerDelegate.h>

@class UIViewController;

@interface SiriUIPersonPickerViewController : SiriUIObjectPickerViewController <ABPeoplePickerNavigationControllerDelegate> {

	UIViewController* _presentingViewController;

}
-(void)viewDidLoad;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)_pickerButtonTapped:(id)arg1 ;
-(void)_dismissPicker;
-(id)_abAssistantManager;
-(id)_pickerResponseForPerson:(void*)arg1 ;
-(void).cxx_destruct;
@end

