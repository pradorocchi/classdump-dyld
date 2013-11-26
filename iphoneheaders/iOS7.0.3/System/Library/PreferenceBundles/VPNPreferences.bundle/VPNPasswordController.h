/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VPNPreferences/VPNPreferences-Structs.h>
#import <Preferences/PSListController.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol VPNPasswordDelegate;
@class UITextField, , NSString;

@interface VPNPasswordController : PSListController <UITextFieldDelegate> {

	UITextField* _passwordField;
	<VPNPasswordDelegate>* _delegate;
	NSString* _ok;
	NSString* _cancel;

}
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)textDidChange:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)loadView;
-(void)doneButtonClicked:(id)arg1 ;
-(void)cancelButtonClicked:(id)arg1 ;
-(id)specifiers;
@end

