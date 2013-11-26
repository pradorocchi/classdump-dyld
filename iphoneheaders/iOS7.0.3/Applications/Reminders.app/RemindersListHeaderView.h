/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Reminders.app/Reminders
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UIView.h>

@protocol RemindersListHeaderViewDelegate;
@class UITextField, UILabel, UIButton, UIImageView, UIColor, ;

@interface RemindersListHeaderView : UIView {

	int _style;
	UITextField* _mainText;
	UILabel* _accountLabel;
	UILabel* _numberOfItemsLabel;
	UIButton* _editButton;
	UIImageView* _addImageView;
	UIColor* _color;
	CGSize _mainTextSizeAtMinFont;
	<RemindersListHeaderViewDelegate>* _headerDelegate;
	BOOL _showsNumberOfItems;
	BOOL _usesEditButtonAsDoneButton;

}

@property (assign,nonatomic) BOOL showsNumberOfItems;                      //@synthesize showsNumberOfItems=_showsNumberOfItems - In the implementation block
@property (assign,nonatomic) BOOL usesEditButtonAsDoneButton;              //@synthesize usesEditButtonAsDoneButton=_usesEditButtonAsDoneButton - In the implementation block
-(void)setCardIsEditing:(BOOL)arg1 ;
-(void)setHeaderDelegate:(id)arg1 ;
-(void)setUsesEditButtonAsDoneButton:(BOOL)arg1 ;
-(void)setEditButtonAlpha:(float)arg1 ;
-(void)updateEditButtonTitle;
-(void)setCategory:(id)arg1 withColor:(id)arg2 ;
-(void)setAccountHidden:(BOOL)arg1 ;
-(void)setShowsNumberOfItems:(BOOL)arg1 ;
-(id)coloredTextAttributes;
-(void)mainTextDidBeginEditing:(id)arg1 ;
-(id)mainTextAttributes;
-(id)placeholderAttributes;
-(id)newTextButton;
-(void)createEditButtonIfNeeded;
-(void)setEditButtonHidden:(BOOL)arg1 ;
-(void)setCategoryFieldEnabled:(BOOL)arg1 ;
-(void)beginEditingTextField;
-(BOOL)showsNumberOfItems;
-(BOOL)usesEditButtonAsDoneButton;
-(void)editButtonTapped;
-(void)dealloc;
-(void)setStyle:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(void)beginEditing;
-(void)endEditing;
-(void)updateConstraints;
-(void)setColor:(id)arg1 ;
-(void)setAccount:(id)arg1 ;
-(void)setNumberOfItems:(int)arg1 ;
-(void)setPlaceholderText:(id)arg1 ;
-(void)setTextFieldDelegate:(id)arg1 ;
-(void).cxx_destruct;
@end

