/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:11 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@protocol UIActionSheetDelegate;
@class , UILabel, NSAttributedString, UIToolbar, UIWindow, NSMutableArray, UIView, UIPopoverController, UIImage, UIImageView, _UIBackdropView, UIGestureRecognizer, NSString;

@interface UIActionSheet : UIView {

	<UIActionSheetDelegate>* _delegate;
	UILabel* _titleLabel;
	NSAttributedString* _attributedTitleString;
	UILabel* _subtitleLabel;
	UILabel* _bodyTextLabel;
	UILabel* _taglineTextLabel;
	float _startY;
	id _context;
	int _cancelButton;
	int _defaultButton;
	int _firstOtherButton;
	UIToolbar* _toolbar;
	UIWindow* _originalWindow;
	UIWindow* _dimWindow;
	int _suspendTag;
	int _dismissButtonIndex;
	float _bodyTextHeight;
	NSMutableArray* _buttons;
	NSMutableArray* _buttonsInTable;
	NSMutableArray* _textFields;
	UIView* _keyboard;
	UIView* _table;
	UIView* _buttonTableView;
	UIView* _dimView;
	UIPopoverController* _popoverController;
	float _fontSizeInTableView;
	float _iconOffset;
	float _labelOffset;
	float _labelWidth;
	float _titleWidth;
	BOOL _oldIgnoreTapsValue;
	struct {
		unsigned numberOfRows : 7;
		unsigned delegateAlertSheetButtonClicked : 1;
		unsigned delegateDidPresentAlertSheet : 1;
		unsigned delegateDidDismissAlertSheet : 1;
		unsigned hideButtonBar : 1;
		unsigned alertStyle : 3;
		unsigned dontDimBackground : 1;
		unsigned dismissSuspended : 1;
		unsigned dontBlockInteraction : 1;
		unsigned sheetWasPoppedUp : 1;
		unsigned sheetWasShown : 1;
		unsigned animating : 1;
		unsigned hideWhenDoneAnimating : 1;
		unsigned layoutWhenDoneAnimating : 1;
		unsigned titleMaxLineCount : 2;
		unsigned bodyTextMaxLineCount : 3;
		unsigned runsModal : 1;
		unsigned runningModal : 1;
		unsigned addedTextView : 1;
		unsigned addedTableShadows : 1;
		unsigned showOverSBAlerts : 1;
		unsigned showMinTableContent : 1;
		unsigned bodyTextTruncated : 1;
		unsigned orientation : 3;
		unsigned popupFromPoint : 1;
		unsigned inPopover : 1;
		unsigned delegateBodyTextAlignment : 1;
		unsigned delegateClickedButtonAtIndex : 1;
		unsigned delegateClickedButtonAtIndex2 : 1;
		unsigned delegateCancel : 1;
		unsigned delegateCancel2 : 1;
		unsigned delegateWillPresent : 1;
		unsigned delegateWillPresent2 : 1;
		unsigned delegateDidPresent : 1;
		unsigned delegateDidPresent2 : 1;
		unsigned delegateWillDismiss : 1;
		unsigned delegateWillDismiss2 : 1;
		unsigned delegateDidDismiss : 1;
		unsigned delegateDidDismiss2 : 1;
		unsigned dontCallDismissDelegate : 1;
		unsigned useAutomaticKB : 1;
		unsigned shouldHandleFirstKeyUpEvent : 1;
		unsigned cancelWhenDoneAnimating : 1;
		unsigned useThreePartButtons : 1;
		unsigned useTwoPartButtons : 1;
		unsigned displaySelectedButtonGlyph : 1;
		unsigned indexOfSelectedButton : 7;
		unsigned useCustomSelectedButtonGlyph : 1;
		unsigned usesNewStyle : 1;
		unsigned isDesaturated : 1;
		unsigned creatingPopoverForDisplay : 1;
	}  _modalViewFlags;
	int _actionSheetStyle;
	UIImage* _selectedButtonGlyphImage;
	UIImage* _selectedButtonGlyphHighlightedImage;
	UIImageView* _shadowImageView;
	_UIBackdropView* _backdropView;
	UIGestureRecognizer* _dimViewGestureRecognizer;
	UIImage* _dimViewImage;
	UIImageView* _dimViewImageView;

}

@property (assign,nonatomic) <UIActionSheetDelegate> * delegate; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) int actionSheetStyle; 
@property (nonatomic,readonly) int numberOfButtons; 
@property (assign,nonatomic) int cancelButtonIndex; 
@property (assign,nonatomic) int destructiveButtonIndex; 
@property (nonatomic,readonly) int firstOtherButtonIndex; 
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
+(id)_popupAlertBackground;
+(CGSize)minimumSize;
+(id)_newFontForButtons;
+(CGRect)_visualAltitudeSensitiveBoundsWithActionAltitudeInfiniteEdges:(unsigned)arg1 view:(id)arg2 ;
+(id)_newCancelButtonFont;
+(Class)_popoverControllerClass;
-(int)mf_addButtonWithTitle:(id)arg1 tag:(id)arg2 ;
-(id)mf_tagForButtonIndex:(int)arg1 ;
-(void)rc_showInView:(id)arg1 dismissHandlerBlock:(/*^block*/ id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)removeFromSuperview;
-(void)setTitle:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)delegate;
-(int)cancelButtonIndex;
-(void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2 ;
-(int)addButtonWithTitle:(id)arg1 ;
-(void)setCancelButtonIndex:(int)arg1 ;
-(BOOL)resignFirstResponder;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(id)context;
-(BOOL)_canDrawContent;
-(id)tintColor;
-(void)setTintColor:(id)arg1 ;
-(id)_normalInheritedTintColor;
-(BOOL)canBecomeFirstResponder;
-(id)title;
-(void)setContext:(id)arg1 ;
-(int)numberOfRows;
-(BOOL)_isAnimating;
-(float)_separatorInset;
-(id)message;
-(int)defaultButtonIndex;
-(void)layout;
-(id)textFieldAtIndex:(int)arg1 ;
-(float)_maxHeight;
-(id)defaultButton;
-(void)setDefaultButton:(id)arg1 ;
-(id)_titleLabel;
-(CGSize)_maxSize;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)showInView:(id)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(void)setMessage:(id)arg1 ;
-(BOOL)isVisible;
-(void)dismiss;
-(id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(int)arg3 delegate:(id)arg4 context:(id)arg5 ;
-(void)setNumberOfRows:(int)arg1 ;
-(void)popupAlertAnimated:(BOOL)arg1 ;
-(void)setActionSheetStyle:(int)arg1 ;
-(void)setTitleMaxLineCount:(int)arg1 ;
-(id)_relinquishPopoverController;
-(int)numberOfButtons;
-(void)setRunsModal:(BOOL)arg1 ;
-(void)setDefaultButtonIndex:(int)arg1 ;
-(id)textField;
-(id)tableView;
-(id)keyboard;
-(id)buttonTitleAtIndex:(int)arg1 ;
-(BOOL)requiresPortraitOrientation;
-(void)setAlertSheetStyle:(int)arg1 ;
-(void)_createBodyTextLabelIfNeeded;
-(void)_createTaglineTextLabelIfNeeded;
-(void)_createSubtitleLabelIfNeeded;
-(void)_alertSheetTextFieldReturn:(id)arg1 ;
-(int)textFieldCount;
-(id)addTextFieldWithValue:(id)arg1 label:(id)arg2 ;
-(void)_buttonClicked:(id)arg1 ;
-(int)_currentOrientation;
-(id)buttons;
-(id)_addButtonWithTitle:(id)arg1 label:(id)arg2 ;
-(BOOL)_needsKeyboard;
-(void)layoutAnimated:(BOOL)arg1 ;
-(void)_cancelAnimated:(BOOL)arg1 ;
-(void)_temporarilyHideAnimated:(BOOL)arg1 ;
-(BOOL)_canShowAlerts;
-(void)_layoutIfNeeded;
-(void)_growAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_cleanupAfterPopupAnimation;
-(void)_bubbleAnimationShrinkDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_bubbleAnimationNormalDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_removeAlertWindowOrShowAnOldAlert;
-(void)_popoutAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_setupInitialFrame;
-(void)_performPopup:(BOOL)arg1 ;
-(void)_repopup;
-(BOOL)_isInsidePopOverContent;
-(BOOL)_isHostedByPopOver;
-(void)_performPopoutAnimationAnimated:(BOOL)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(CGSize)minimumSize;
-(void)_rotatingAnimationDidStop:(id)arg1 ;
-(void)_layoutPopupAlertWithOrientation:(int)arg1 animated:(BOOL)arg2 ;
-(void)_appSuspended:(id)arg1 ;
-(void)popupAlertAnimated:(BOOL)arg1 atOffset:(float)arg2 ;
-(void)_setAlertSheetStyleFromButtonBar:(id)arg1 ;
-(void)_presentSheetStartingFromYCoordinate:(double)arg1 ;
-(void)_presentSheetFromView:(id)arg1 above:(BOOL)arg2 ;
-(id)_dimView;
-(void)_alertSheetAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_setupTitleStyle;
-(float)_titleHorizontalInset;
-(float)_buttonHeight;
-(float)_titleVerticalTopInset;
-(float)_titleVerticalBottomInset;
-(float)_bottomVerticalInset;
-(void)_truncateViewHeight:(id)arg1 toFitInFrame:(CGRect)arg2 withMinimumHeight:(float)arg3 ;
-(void)presentSheetFromAboveView:(id)arg1 ;
-(void)presentSheetFromBehindView:(id)arg1 ;
-(void)_createTitleLabelIfNeeded;
-(void)setBodyText:(id)arg1 ;
-(void)setTaglineText:(id)arg1 ;
-(id)bodyText;
-(int)titleMaxLineCount;
-(void)setBodyTextMaxLineCount:(int)arg1 ;
-(int)bodyMaxLineCount;
-(void)setDestructiveButton:(id)arg1 ;
-(id)destructiveButton;
-(id)addButtonWithTitle:(id)arg1 label:(id)arg2 ;
-(id)_addButtonWithTitle:(id)arg1 ;
-(int)buttonCount;
-(BOOL)_isSBAlert;
-(void)setTableShouldShowMinimumContent:(BOOL)arg1 ;
-(BOOL)tableShouldShowMinimumContent;
-(void)setShowsOverSpringBoardAlerts:(BOOL)arg1 ;
-(BOOL)showsOverSpringBoardAlerts;
-(void)_repopupNoAnimation;
-(BOOL)_dimsBackground;
-(BOOL)isBodyTextTruncated;
-(void)presentSheetInView:(id)arg1 ;
-(void)presentSheetToAboveView:(id)arg1 ;
-(void)setDimView:(id)arg1 ;
-(void)_slideSheetOut:(BOOL)arg1 ;
-(CGSize)backgroundSize;
-(int)alertSheetStyle;
-(void)setDimsBackground:(BOOL)arg1 ;
-(BOOL)dimsBackground;
-(void)setSuspendTag:(int)arg1 ;
-(int)suspendTag;
-(void)setBlocksInteraction:(BOOL)arg1 ;
-(BOOL)blocksInteraction;
-(BOOL)runsModal;
-(CGRect)titleRect;
-(int)numberOfLinesInTitle;
-(void)presentSheetFromButtonBar:(id)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 defaultButton:(id)arg4 cancelButton:(id)arg5 otherButtons:(id)arg6 ;
-(void)_setFirstOtherButtonIndex:(int)arg1 ;
-(int)firstOtherButtonIndex;
-(id)_addButtonWithTitle:(id)arg1 label:(id)arg2 buttonClass:(Class)arg3 ;
-(id)_addMediaButtonWithTitle:(id)arg1 iconView:(id)arg2 andTableIconView:(id)arg3 ;
-(void)_popoverHiddingAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_popoverRepresentationAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_actionSheetHidingAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_actionSheetRepresentingAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)_representHostingPopOverViewAnimated:(BOOL)arg1 ;
-(void)_representActionSheetInsidePopOverAnimated:(BOOL)arg1 ;
-(void)_hideHostingPopOverViewAnimated:(BOOL)arg1 ;
-(void)_hideActionSheetInsidePopOverAnimated:(BOOL)arg1 ;
-(void)_presentViaResponderChainFromYCoordinate:(float)arg1 ;
-(void)presentSheetInContentView:(id)arg1 ;
-(void)_presentSheetStartingFromYCoordinate:(double)arg1 inView:(id)arg2 ;
-(id)_dimViewWithFrame:(CGRect)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(BOOL)_shouldParallax;
-(void)_installGestureRecognizerInDimView;
-(void)_transitionUIInView:(id)arg1 toSaturated:(BOOL)arg2 ;
-(void)_applyParallaxToContentIfNecessary;
-(void)showFromToolbar:(id)arg1 ;
-(void)_transitionToLegacyAppearanceIfNecessary;
-(void)_removeBackdropViewIfNecessary;
-(void)_presentFromBarButtonItem:(id)arg1 orFromRect:(CGRect)arg2 inView:(id)arg3 direction:(unsigned)arg4 allowInteractionWithViews:(id)arg5 backgroundStyle:(int)arg6 animated:(BOOL)arg7 ;
-(void)_presentViaResponderChain:(id)arg1 asPopoverFromBarButtonItem:(id)arg2 orFromRect:(CGRect)arg3 inView:(id)arg4 withPreferredArrowDirections:(unsigned)arg5 passthroughViews:(id)arg6 backgroundStyle:(int)arg7 animated:(BOOL)arg8 ;
-(void)_assertIfValidForView:(id)arg1 ;
-(id)_presentingViewForView:(id)arg1 ;
-(void)presentSheetInPopoverView:(id)arg1 ;
-(void)_presentPopoverInCenterOfWindowForView:(id)arg1 ;
-(void)showFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_shouldHaveBackdropView;
-(void)_setAttributedTitleString:(id)arg1 ;
-(id)_attributedTitleString;
-(id)addButtonWithTitle:(id)arg1 buttonClass:(Class)arg2 ;
-(id)addMediaButtonWithTitle:(id)arg1 iconView:(id)arg2 andTableIconView:(id)arg3 ;
-(id)buttonAtIndex:(int)arg1 ;
-(id)_buttonAtIndex:(int)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)_resizeDimViewAnimatingUp:(BOOL)arg1 ;
-(void)setInPopover:(BOOL)arg1 ;
-(void)setUseThreeColumnsButtonsLayout:(BOOL)arg1 ;
-(BOOL)useThreeColumnsButtonsLayout;
-(void)setIndexOfSelectedButton:(int)arg1 ;
-(void)setSelectedButtonGlyphImage:(id)arg1 ;
-(void)setSelectedButtonGlyphHighlightedImage:(id)arg1 ;
-(id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 ;
-(int)actionSheetStyle;
-(int)destructiveButtonIndex;
-(void)setDestructiveButtonIndex:(int)arg1 ;
-(void)presentFromBarButtonItem:(id)arg1 direction:(unsigned)arg2 allowInteractionWithViews:(id)arg3 backgroundStyle:(int)arg4 animated:(BOOL)arg5 ;
-(void)presentFromRect:(CGRect)arg1 inView:(id)arg2 direction:(unsigned)arg3 allowInteractionWithViews:(id)arg4 backgroundStyle:(int)arg5 animated:(BOOL)arg6 ;
-(void)showFromTabBar:(id)arg1 ;
-(void)showFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 ;
-(void)showFromBarButtonItem:(id)arg1 ;
@end

