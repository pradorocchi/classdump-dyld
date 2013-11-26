/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UINavigationController.h>

@class UIViewController;

@interface ABVibrationPickerController : UINavigationController {

	UIViewController* _vibrationPicker;

}

@property (assign,nonatomic) <ABPickerControllerDelegate> * delegate; 
@property (nonatomic,readonly) UIViewController * vibrationPicker;                 //@synthesize vibrationPicker=_vibrationPicker - In the implementation block
-(id)initWithAlertType:(int)arg1 selectedAlert:(id)arg2 ;
-(void)doneButton:(id)arg1 ;
-(void)cancelButton:(id)arg1 ;
-(id)vibrationPicker;
-(void)dealloc;
@end

