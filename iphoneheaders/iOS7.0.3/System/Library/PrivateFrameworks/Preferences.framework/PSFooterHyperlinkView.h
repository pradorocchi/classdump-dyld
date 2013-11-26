/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:18 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKit/UIView.h>
#import <Preferences/PSHeaderFooterView.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, NSString, NSURL;

@interface PSFooterHyperlinkView : UIView <PSHeaderFooterView, UITextViewDelegate> {

	UITextView* _textView;
	NSString* _text;
	NSURL* _URL;
	NSRange _linkRange;
	id _target;
	SEL _action;

}

@property (retain) NSString * text; 
@property (assign) NSRange linkRange; 
@property (assign) id target;                      //@synthesize target=_target - In the implementation block
@property (assign) SEL action;                     //@synthesize action=_action - In the implementation block
@property (retain) NSURL * URL; 
-(id)initWithSpecifier:(id)arg1 ;
-(float)preferredHeightForWidth:(float)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)text;
-(id)target;
-(void)setText:(id)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(id)URL;
-(void)setURL:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(void)setLinkRange:(NSRange)arg1 ;
-(void)_linkify;
-(NSRange)linkRange;
@end

