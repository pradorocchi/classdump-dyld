/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <AddressBookUI/ABPeoplePickerNavigationController.h>
#import <FaceTime/PhoneTabViewController.h>
#import <UIKit/ABPeoplePickerNavigationControllerDelegate.h>

@interface PHAddressBookController : ABPeoplePickerNavigationController <PhoneTabViewController, ABPeoplePickerNavigationControllerDelegate> {

	int _abuiStyle;

}

@property (assign) int abuiStyle;                                          //@synthesize abuiStyle=_abuiStyle - In the implementation block
@property (@dynamic,readonly) BOOL shouldSaveAndRestoreState; 
@property (@dynamic) void* savedPerson; 
+(int)tabBarSystemItem;
+(id)tabBarIconName;
+(int)tabViewType;
+(id)defaultPNGName;
+(SCD_Struct_Ph0)badge;
-(BOOL)shouldSnapshot;
-(void)prepareForSnapshot;
-(BOOL)tabBarControllerShouldSelectViewController:(id)arg1 ;
-(void)setAbuiStyle:(int)arg1 ;
-(void)_updatePickerPhoneNumber:(id)arg1 ;
-(void)_updatePickerBanner:(id)arg1 ;
-(void)_applicationDeactivated;
-(void)_restoreState;
-(void)_saveState;
-(BOOL)shouldSaveAndRestoreState;
-(void)setSavedPerson:(void*)arg1 ;
-(void*)savedPerson;
-(int)abuiStyle;
-(void)dealloc;
-(void)applicationWillSuspend;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/ id)arg3 ;
-(id)initWithStyle:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)handleURL:(id)arg1 ;
@end

