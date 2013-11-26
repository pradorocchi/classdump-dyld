/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:22 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>

@class UILabel, UIButton;

@interface _UITextEditingController : UIViewController {

	UILabel* _title;
	UILabel* _smallTitle;
	UILabel* _description;
	UIButton* _doneButton;

}
+(id)sharedEditingController;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(void)configureForTextControl:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)loadView;
-(void)_doneButtonClicked;
-(void)_layoutEditingViews;
@end

