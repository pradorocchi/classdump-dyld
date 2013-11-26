/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel, NSArray, NSString;

@interface MFSecureMIMEPersonHeaderView : UIView {

	UIView* _backgroundView;
	UIView* _signedLabel;
	UIView* _secureLabel;
	UIView* _warningLabel;
	UILabel* _label;
	NSArray* _buttons;
	unsigned _editing : 1;

}

@property (nonatomic,copy) NSString * signedLabelText; 
@property (nonatomic,copy) NSString * secureLabelText; 
@property (nonatomic,copy) NSString * warningLabelText; 
@property (nonatomic,copy) NSString * explanationText; 
@property (nonatomic,copy) NSArray * buttons;                        //@synthesize buttons=_buttons - In the implementation block
@property (assign,nonatomic) BOOL editing; 
+(id)_explanationLabelDefaultAttributes;
-(void)setSecureLabelText:(id)arg1 ;
-(void)setWarningLabelText:(id)arg1 ;
-(id)_signedLabel;
-(void)_setText:(id)arg1 forLabel:(id)arg2 ;
-(id)_secureLabel;
-(id)_warningLabel;
-(void)_insert:(BOOL)arg1 subview:(id)arg2 ;
-(void)setSignedLabelText:(id)arg1 ;
-(id)signedLabelText;
-(id)secureLabelText;
-(id)warningLabelText;
-(id)explanationText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(BOOL)editing;
-(void)setEditing:(BOOL)arg1 ;
-(id)buttons;
-(void)setExplanationText:(id)arg1 ;
-(void)setButtons:(id)arg1 ;
@end

