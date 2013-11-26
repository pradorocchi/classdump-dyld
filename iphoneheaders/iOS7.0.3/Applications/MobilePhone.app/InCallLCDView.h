/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TelephonyUI/TPLCDView.h>

@class TPLCDTextView, UIView, UIButton, NSTimer, NSString;

@interface InCallLCDView : TPLCDView {

	TPLCDTextView* _labelView2;
	TPLCDTextView* _textView2;
	UIView* _activeIndicator;
	int _activePosition;
	int _conferencePosition;
	TPLCDTextView* _oldLabelView;
	TPLCDTextView* _oldLabelView2;
	TPLCDTextView* _oldTextView;
	TPLCDTextView* _oldTextView2;
	UIView* _oldActiveIndicator;
	UIButton* _conferenceButton;
	NSTimer* _alternatingTimer;
	NSString* _originalLabel;
	NSString* _originalLabel2;
	NSString* _alternateLabel;
	NSString* _alternateLabel2;
	id _delegate;
	unsigned _ignoreLayout : 1;
	unsigned _animating : 1;
	unsigned _progress : 1;
	unsigned _dimmedText : 2;
	unsigned _canTruncateLabel : 2;
	unsigned _enableFade : 1;
	unsigned _changingForAlternate : 1;
	BOOL _callerIsAmbiguous;

}

@property (assign,nonatomic) BOOL callerIsAmbiguous;              //@synthesize callerIsAmbiguous=_callerIsAmbiguous - In the implementation block
-(void)animateToActivePosition:(int)arg1 label:(id)arg2 label2:(id)arg3 ;
-(id)originalLabel;
-(id)originalLabel2;
-(void)setTextScrolls:(BOOL)arg1 ;
-(void)setLabel2:(id)arg1 ;
-(void)setActiveIndicatorShowsProgress:(BOOL)arg1 ;
-(void)setActivePosition:(int)arg1 ;
-(void)setCallerIsAmbiguous:(BOOL)arg1 ;
-(void)setLabel:(id)arg1 alternateLabel:(id)arg2 ;
-(void)setCanTruncateLabel:(BOOL)arg1 ;
-(void)setLabel2:(id)arg1 alternateLabel:(id)arg2 ;
-(void)setCanTruncateLabel2:(BOOL)arg1 ;
-(id)text2;
-(void)setText2:(id)arg1 ;
-(void)setText:(id)arg1 animating:(BOOL)arg2 ;
-(void)setText2:(id)arg1 animating:(BOOL)arg2 ;
-(void)setTextChangeFadingEnabled:(BOOL)arg1 ;
-(void)animateLabel;
-(void)animateCallMergeWithDuration:(float)arg1 ;
-(void)popText;
-(void)_stopAlternating;
-(void)performTextFadeWithDuration:(float)arg1 delay:(float)arg2 forView:(id*)arg3 newText:(id)arg4 setter:(SEL)arg5 position:(int)arg6 ;
-(void)_cancelScrollingForTextView:(id)arg1 ;
-(void)_enableScrollingForTextView:(id)arg1 start:(BOOL)arg2 ;
-(void)_updateTextAttributes;
-(void)setAlternateLabel:(id)arg1 ;
-(void)setAlternateLabel2:(id)arg1 ;
-(void)_startAlternating;
-(void)_removeAnimationViews;
-(void)_positionActiveCallIndicator;
-(void)_positionConferenceButton;
-(void)_updateForActivePosition;
-(void)_conferenceButtonClicked:(id)arg1 ;
-(void)_alternate:(id)arg1 ;
-(void)setTextDimmed:(BOOL)arg1 ;
-(void)setText2Dimmed:(BOOL)arg1 ;
-(id)label2;
-(BOOL)callerIsAmbiguous;
-(void)setLabelVisible:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setText:(id)arg1 ;
-(void)setLabel:(id)arg1 ;
-(void)setSubImage:(id)arg1 ;
-(int)conferencePosition;
-(void)setConferencePosition:(int)arg1 ;
-(void)lcdTextViewCompletedScroll:(id)arg1 ;
@end

