/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Social/Social-Structs.h>
#import <UIKit/UIView.h>

@protocol SLSheetPreviewView;
@class SLSheetTextComposeView, NSMutableArray, NSMutableDictionary, UIView, UITextView, UILabel;

@interface SLSheetContentView : UIView {

	SLSheetTextComposeView* _textComposeView;
	NSMutableArray* _constraints;
	NSMutableDictionary* _intrinsicSizes;
	float _previewTopMargin;
	float _textViewTopMargin;
	UIView* _bottomSeparator;
	UIView* _autoCompletionModeSeparator;
	int _currentBarMetrics;
	BOOL _autoCompletionMode;
	float _autoCompletionTextViewHeight;
	UIView<SLSheetPreviewView>* _previewView;
	UIView* _accessoryView;

}

@property (nonatomic,retain) UIView<SLSheetPreviewView> * previewView;              //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,readonly) UITextView * textView; 
@property (nonatomic,readonly) UILabel * placeholderLabel; 
@property (nonatomic,retain) UIView * accessoryView;                                //@synthesize accessoryView=_accessoryView - In the implementation block
-(void)setCurrentBarMetrics:(int)arg1 ;
-(void)resetPreview;
-(void)setPreviewView:(id)arg1 ;
-(void)preflightAutoCompletionModeWithApparentHeight:(float)arg1 ;
-(void)beginAutoCompletionMode;
-(void)endAutoCompletionMode;
-(void)setIntrinsicSize:(CGSize)arg1 forBarMetrics:(int)arg2 ;
-(void)_setupView;
-(void)_setupConstraints;
-(void)_setConstraints;
-(void)_resetAccessoryView;
-(float)_previewMarginForContentSize:(CGSize)arg1 ;
-(float)_textTopMarginForContentSize:(CGSize)arg1 ;
-(void)updatePreviewMargin;
-(void)updateTextViewMargin;
-(void)adjustComposeViewForPreview;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(void)updateConstraints;
-(void)setAccessoryView:(id)arg1 ;
-(id)accessoryView;
-(id)textView;
-(id)placeholderLabel;
-(id)previewView;
-(void).cxx_destruct;
@end

