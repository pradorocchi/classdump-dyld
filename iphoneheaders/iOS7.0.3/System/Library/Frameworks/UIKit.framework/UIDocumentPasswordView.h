/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:16 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol UIDocumentPasswordViewDelegate;
@class UIImageView, UIDocumentPasswordField, UILabel, NSObject, UITextField;

@interface UIDocumentPasswordView : UIView <UITextFieldDelegate> {

	UIImageView* _iconView;
	UIDocumentPasswordField* _passwordTextField;
	UILabel* _label;
	NSObject<UIDocumentPasswordViewDelegate>* passwordDelegate;

}

@property (assign,nonatomic) NSObject<UIDocumentPasswordViewDelegate> * passwordDelegate; 
@property (nonatomic,readonly) UITextField * passwordField;                                            //@synthesize passwordTextField=_passwordTextField - In the implementation block
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)_canDrawContent;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id)passwordField;
-(id)initWithDocumentName:(id)arg1 ;
-(void)setPasswordDelegate:(id)arg1 ;
-(id)_labelFont;
-(id)_labelTextColor;
-(void)_passwordEntered:(id)arg1 ;
-(CGRect)_iconRectForContainerRect:(CGRect)arg1 ;
-(float)_labelHorizontalOffset;
-(float)_textFieldWidth;
-(id)passwordDelegate;
@end

