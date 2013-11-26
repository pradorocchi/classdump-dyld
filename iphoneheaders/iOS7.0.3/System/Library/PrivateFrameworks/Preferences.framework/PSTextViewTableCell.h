/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:17 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSTableCell.h>
#import <UIKit/UITextContentViewDelegate.h>

@class PSTextView;

@interface PSTextViewTableCell : PSTableCell <UITextContentViewDelegate> {

	PSTextView* _textView;

}

@property (nonatomic,retain) PSTextView * textView; 
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)setValue:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setTextView:(id)arg1 ;
-(void)textContentViewDidEndEditing:(id)arg1 ;
-(void)textContentViewDidChange:(id)arg1 ;
-(id)textView;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)cellRemovedFromView;
-(void)_adjustTextView:(id)arg1 updateTable:(BOOL)arg2 withSpecifier:(id)arg3 ;
-(void)drawTitleInRect:(CGRect)arg1 selected:(BOOL)arg2 ;
@end

