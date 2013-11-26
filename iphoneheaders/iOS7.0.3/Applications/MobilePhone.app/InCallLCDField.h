/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <TelephonyUI/TPLCDView.h>

@class UIButton;

@interface InCallLCDField : TPLCDView {

	UIButton* _button;
	id _delegate;
	unsigned _textIsPlaceholder : 1;
	unsigned _buttonIsDelete : 1;

}
-(void)setPlaceholderText:(id)arg1 animating:(BOOL)arg2 ;
-(BOOL)showsSendButton;
-(id)unformattedText;
-(void)setShowsSendButton:(BOOL)arg1 ;
-(void)_removeButton;
-(void)_sendButtonClicked:(id)arg1 ;
-(void)_showButtonWithTitle:(id)arg1 action:(SEL)arg2 ;
-(void)_deleteButtonClicked:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(CGRect)textFrame;
-(void)_updateButton;
-(void)setShowsDeleteButton:(BOOL)arg1 ;
@end

