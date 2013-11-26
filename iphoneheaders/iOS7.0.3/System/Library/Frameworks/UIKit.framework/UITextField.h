/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:22 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIKeyboardInput.h>
#import <UIKit/UITextInputTraits_Private.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UITextInput.h>
#import <CoreFoundation/NSCoding.h>

@class _UICascadingTextStorage, UIImage, UIView, UITextInputTraits, UIButton, UITextFieldBorderView, UITextFieldBackgroundView, UITextFieldLabel, UIImageView, UILabel, UITextInteractionAssistant, UITextFieldAtomBackgroundView, NSLayoutConstraint, _UIBaselineLayoutStrut, NSDictionary, NSString, NSAttributedString, UIColor, UIFont, UITextRange, UITextPosition;

@interface UITextField : UIControl <UIKeyboardInput, UITextInputTraits_Private, UIPopoverControllerDelegate, UITextInput, NSCoding> {

	_UICascadingTextStorage* _textStorage;
	int _borderStyle;
	float _minimumFontSize;
	id _delegate;
	UIImage* _background;
	UIImage* _disabledBackground;
	int _clearButtonMode;
	UIView* _leftView;
	int _leftViewMode;
	UIView* _rightView;
	int _rightViewMode;
	UITextInputTraits* _traits;
	UITextInputTraits* _nonAtomTraits;
	float _fullFontSize;
	UIEdgeInsets _padding;
	NSRange _selectionRangeWhenNotEditing;
	int _scrollXOffset;
	int _scrollYOffset;
	float _progress;
	UIButton* _clearButton;
	CGSize _clearButtonOffset;
	CGSize _leftViewOffset;
	CGSize _rightViewOffset;
	UITextFieldBorderView* _backgroundView;
	UITextFieldBorderView* _disabledBackgroundView;
	UITextFieldBackgroundView* _systemBackgroundView;
	UITextFieldLabel* _displayLabel;
	UITextFieldLabel* _placeholderLabel;
	UITextFieldLabel* _suffixLabel;
	UITextFieldLabel* _prefixLabel;
	UIImageView* _iconView;
	UILabel* _label;
	float _labelOffset;
	UITextInteractionAssistant* _interactionAssistant;
	UIView* _inputView;
	UIView* _inputAccessoryView;
	UITextFieldAtomBackgroundView* _atomBackgroundView;
	struct {
		unsigned verticallyCenterText : 1;
		unsigned isAnimating : 4;
		unsigned inactiveHasDimAppearance : 1;
		unsigned becomesFirstResponderOnClearButtonTap : 1;
		unsigned clearsPlaceholderOnBeginEditing : 1;
		unsigned adjustsFontSizeToFitWidth : 1;
		unsigned fieldEditorAttached : 1;
		unsigned canBecomeFirstResponder : 1;
		unsigned shouldSuppressShouldBeginEditing : 1;
		unsigned inResignFirstResponder : 1;
		unsigned undoDisabled : 1;
		unsigned explicitAlignment : 1;
		unsigned implementsCustomDrawing : 1;
		unsigned needsClearing : 1;
		unsigned suppressContentChangedNotification : 1;
		unsigned allowsEditingTextAttributes : 1;
		unsigned usesAttributedText : 1;
		unsigned backgroundViewState : 2;
		unsigned clearingBehavior : 2;
	}  _textFieldFlags;
	BOOL _deferringBecomeFirstResponder;
	BOOL _avoidBecomeFirstResponder;
	BOOL _setSelectionRangeAfterFieldEditorIsAttached;
	BOOL _originFromBaselineLayoutIsInvalid;
	NSLayoutConstraint* _baselineLayoutConstraint;
	_UIBaselineLayoutStrut* _baselineLayoutLabel;
	NSDictionary* _defaultTextAttributes;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) int textAlignment; 
@property (assign,nonatomic) int borderStyle;                                                                                  //@synthesize borderStyle=_borderStyle - In the implementation block
@property (nonatomic,copy) NSDictionary * defaultTextAttributes;                                                               //@synthesize defaultTextAttributes=_defaultTextAttributes - In the implementation block
@property (nonatomic,copy) NSString * placeholder; 
@property (nonatomic,copy) NSAttributedString * attributedPlaceholder; 
@property (assign,nonatomic) BOOL clearsOnBeginEditing; 
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth; 
@property (assign,nonatomic) float minimumFontSize;                                                                            //@synthesize minimumFontSize=_minimumFontSize - In the implementation block
@property (assign,nonatomic) <UITextFieldDelegate> * delegate;                                                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * background;                                                                             //@synthesize background=_background - In the implementation block
@property (nonatomic,retain) UIImage * disabledBackground;                                                                     //@synthesize disabledBackground=_disabledBackground - In the implementation block
@property (getter=isEditing,nonatomic,readonly) BOOL editing; 
@property (assign,nonatomic) BOOL allowsEditingTextAttributes; 
@property (nonatomic,copy) NSDictionary * typingAttributes; 
@property (assign,nonatomic) int clearButtonMode;                                                                              //@synthesize clearButtonMode=_clearButtonMode - In the implementation block
@property (nonatomic,retain) UIView * leftView;                                                                                //@synthesize leftView=_leftView - In the implementation block
@property (assign,nonatomic) int leftViewMode;                                                                                 //@synthesize leftViewMode=_leftViewMode - In the implementation block
@property (nonatomic,retain) UIView * rightView;                                                                               //@synthesize rightView=_rightView - In the implementation block
@property (assign,nonatomic) int rightViewMode;                                                                                //@synthesize rightViewMode=_rightViewMode - In the implementation block
@property (retain) UIView * inputView;                                                                                         //@synthesize inputView=_inputView - In the implementation block
@property (retain) UIView * inputAccessoryView; 
@property (assign,nonatomic) BOOL clearsOnInsertion; 
@property (setter=_setBaselineLayoutConstraint:,nonatomic,retain) NSLayoutConstraint * _baselineLayoutConstraint;              //@synthesize baselineLayoutConstraint=_baselineLayoutConstraint - In the implementation block
@property (setter=_setBaselineLayoutLabel:,nonatomic,retain) _UIBaselineLayoutStrut * _baselineLayoutLabel;                    //@synthesize baselineLayoutLabel=_baselineLayoutLabel - In the implementation block
@property (assign,nonatomic,@dynamic) int autocapitalizationType; 
@property (assign,nonatomic,@dynamic) int autocorrectionType; 
@property (assign,nonatomic,@dynamic) int spellCheckingType; 
@property (assign,nonatomic,@dynamic) int keyboardType; 
@property (assign,nonatomic,@dynamic) int keyboardAppearance; 
@property (assign,nonatomic,@dynamic) int returnKeyType; 
@property (assign,nonatomic,@dynamic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic,@dynamic) BOOL secureTextEntry; 
@property (assign,nonatomic) CFCharacterSetRef textTrimmingSet; 
@property (nonatomic,retain) UIColor * insertionPointColor; 
@property (nonatomic,retain) UIColor * selectionBarColor; 
@property (nonatomic,retain) UIColor * selectionHighlightColor; 
@property (nonatomic,retain) UIImage * selectionDragDotImage; 
@property (assign,nonatomic) unsigned insertionPointWidth; 
@property (assign,nonatomic) int textLoupeVisibility; 
@property (assign,nonatomic) int textSelectionBehavior; 
@property (assign,nonatomic) id textSuggestionDelegate; 
@property (assign,nonatomic) BOOL isSingleLineDocument; 
@property (assign,nonatomic) BOOL contentsIsSingleValue; 
@property (assign,nonatomic) BOOL acceptsEmoji; 
@property (assign,nonatomic) int emptyContentReturnKeyType; 
@property (assign,nonatomic) BOOL returnKeyGoesToNextResponder; 
@property (assign,nonatomic) BOOL acceptsFloatingKeyboard; 
@property (assign,nonatomic) BOOL acceptsSplitKeyboard; 
@property (assign,nonatomic) BOOL displaySecureTextUsingPlainText; 
@property (assign,nonatomic) BOOL learnsCorrections; 
@property (assign,nonatomic) int shortcutConversionType; 
@property (assign,nonatomic) BOOL suppressReturnKeyStyling; 
@property (assign,nonatomic) BOOL forceEnableDictation; 
@property (assign,nonatomic) BOOL useInterfaceLanguageForLocalization; 
@property (assign,nonatomic,@dynamic) BOOL deferBecomingResponder; 
@property (assign,nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent; 
@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,copy) NSDictionary * markedTextStyle; 
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic) <UITextInputDelegate> * inputDelegate; 
@property (nonatomic,readonly) <UITextInputTokenizer> * tokenizer; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (assign,nonatomic) int selectionAffinity; 
+(BOOL)_isDisplayingShortcutViewController;
+(void)_preheatDictationIfNecessary;
+(BOOL)_isCompatibilityTextField;
-(void)configureFromScriptTextField:(id)arg1 ;
-(BOOL)isReallyFirstResponder;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)backgroundColor;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(id)_backgroundView;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)undoManager;
-(BOOL)resignFirstResponder;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)increaseSize:(id)arg1 ;
-(void)decreaseSize:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(BOOL)isEditable;
-(void)setShadowColor:(id)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setCenter:(CGPoint)arg1 ;
-(void)_windowBecameKey;
-(void)_encodeBackgroundColorWithCoder:(id)arg1 ;
-(BOOL)_canDrawContent;
-(BOOL)canBecomeFirstResponder;
-(void)tintColorDidChange;
-(BOOL)_needsOriginRecheckForConstraintsLayout;
-(void)setEnabled:(BOOL)arg1 ;
-(id)text;
-(id)_scriptingInfo;
-(void)setProgress:(float)arg1 ;
-(void)setFont:(id)arg1 ;
-(id)font;
-(CGSize)shadowOffset;
-(void)setAttributedText:(id)arg1 ;
-(id)shadowColor;
-(void)setContentVerticalAlignment:(int)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(id)attributedText;
-(void)_updateLabel;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(BOOL)adjustsFontSizeToFitWidth;
-(void)setTextAlignment:(int)arg1 ;
-(BOOL)isEditing;
-(id)textLabel;
-(id)_fieldEditor;
-(BOOL)_shouldObscureInput;
-(CGPoint)_originForTextFieldLabel:(id)arg1 ;
-(BOOL)_isPasscodeStyle;
-(id)interactionAssistant;
-(id)selectionView;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(BOOL)keyboardInputShouldDelete:(id)arg1 ;
-(BOOL)keyboardInputChanged:(id)arg1 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(void)fieldEditorDidChange:(id)arg1 ;
-(NSRange)fieldEditor:(id)arg1 willChangeSelectionFromCharacterRange:(NSRange)arg2 toCharacterRange:(NSRange)arg3 ;
-(BOOL)fieldEditor:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(NSRange)arg3 ;
-(void)_sanitizeText:(id)arg1 ;
-(void)selectAllFromFieldEditor:(id)arg1 ;
-(id)textInputTraits;
-(id)textColor;
-(CGRect)_selectionClipRect;
-(void)cancelAutoscroll;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(id)textInputView;
-(void)willDetachFieldEditor:(id)arg1 ;
-(void)setTypingAttributes:(id)arg1 ;
-(void)setDefaultAttributes:(id)arg1 ;
-(void)takeTraitsFrom:(id)arg1 ;
-(CGRect)editRect;
-(void)willAttachFieldEditor:(id)arg1 ;
-(void)attachFieldEditor:(id)arg1 ;
-(int)textAlignment;
-(id)typingAttributes;
-(id)beginningOfDocument;
-(id)endOfDocument;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)textInRange:(id)arg1 ;
-(id)inputDelegate;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(void)_scrollRangeToVisible:(NSRange)arg1 animated:(BOOL)arg2 ;
-(BOOL)drawsAsAtom;
-(int)atomStyle;
-(BOOL)hasText;
-(void)clearText;
-(float)_passcodeStyleAlpha;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(void)replaceRange:(id)arg1 withText:(id)arg2 ;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2 ;
-(id)selectedTextRange;
-(void)setSelectedTextRange:(id)arg1 ;
-(id)markedTextRange;
-(id)markedTextStyle;
-(void)setMarkedTextStyle:(id)arg1 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)unmarkText;
-(id)positionFromPosition:(id)arg1 offset:(int)arg2 ;
-(id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3 ;
-(int)comparePosition:(id)arg1 toPosition:(id)arg2 ;
-(int)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2 ;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2 ;
-(void)setInputDelegate:(id)arg1 ;
-(id)tokenizer;
-(int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2 ;
-(void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2 ;
-(CGRect)firstRectForRange:(id)arg1 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2 ;
-(id)characterRangeAtPoint:(CGPoint)arg1 ;
-(void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(id)insertDictationResultPlaceholder;
-(CGRect)frameForDictationResultPlaceholder:(id)arg1 ;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2 ;
-(id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2 ;
-(id)metadataDictionariesForDictationResults;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)textStylingAtPosition:(id)arg1 inDirection:(int)arg2 ;
-(void)setKeyboardAppearance:(int)arg1 ;
-(void)startAutoscroll:(CGPoint)arg1 ;
-(void)selectAll;
-(NSRange)selectionRange;
-(unsigned)characterOffsetAtPoint:(CGPoint)arg1 ;
-(BOOL)hasMarkedText;
-(id)_inputController;
-(void)setPlaceholder:(id)arg1 ;
-(void)updateConstraints;
-(void)setAnimating:(BOOL)arg1 ;
-(void)_becomeFirstResponder;
-(void)_resignFirstResponder;
-(BOOL)canResignFirstResponder;
-(id)inputView;
-(id)inputAccessoryView;
-(BOOL)_requiresKeyboardResetOnReload;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(id)viewForBaselineLayout;
-(void)setLabel:(id)arg1 ;
-(void)setAllowsEditingTextAttributes:(BOOL)arg1 ;
-(BOOL)allowsEditingTextAttributes;
-(id)webView;
-(id)_proxyTextInput;
-(void)setInputView:(id)arg1 ;
-(void)setInputAccessoryView:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)setClearsOnInsertion:(BOOL)arg1 ;
-(void)layoutTilesNow;
-(void)makeTextWritingDirectionRightToLeft:(id)arg1 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg1 ;
-(void)replace:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)_define:(id)arg1 ;
-(void)_addShortcut:(id)arg1 ;
-(void)toggleBoldface:(id)arg1 ;
-(void)toggleItalics:(id)arg1 ;
-(void)toggleUnderline:(id)arg1 ;
-(void)_showTextStyleOptions:(id)arg1 ;
-(BOOL)hasSelection;
-(CGPoint)constrainedPoint:(CGPoint)arg1 ;
-(BOOL)clearsOnInsertion;
-(void)disableClearsOnInsertion;
-(id)selectedText;
-(void)select:(id)arg1 ;
-(void)_promptForReplace:(id)arg1 ;
-(id)supportedPasteboardTypesForCurrentSelection;
-(id)documentFragmentForPasteboardItemAtIndex:(int)arg1 ;
-(id)automaticallySelectedOverlay;
-(BOOL)_isDisplayingReferenceLibraryViewController;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)setMinimumFontSize:(float)arg1 ;
-(float)minimumFontSize;
-(void)setShadowBlur:(float)arg1 ;
-(float)shadowBlur;
-(id)_attributedText;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(void)setIcon:(id)arg1 ;
-(void)setBorderStyle:(int)arg1 ;
-(CGRect)iconRect;
-(CGRect)rightViewRectForBounds:(CGRect)arg1 ;
-(id)_placeholderColor;
-(CGRect)_availableTextRectExcludingButtonsForBounds:(CGRect)arg1 ;
-(void)setPaddingTop:(float)arg1 paddingLeft:(float)arg2 ;
-(BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
-(void)setLeftView:(id)arg1 ;
-(void)setRightView:(id)arg1 ;
-(id)leftView;
-(id)rightView;
-(void)setContinuousSpellCheckingEnabled:(BOOL)arg1 ;
-(void)_startDictation;
-(void)_stopDictation;
-(id)_dictationLanguage;
-(void)_insertAttributedTextWithoutClosingTyping:(id)arg1 ;
-(void)_clearButtonClicked:(id)arg1 ;
-(void)setUndoEnabled:(BOOL)arg1 ;
-(void)setTextCentersVertically:(BOOL)arg1 ;
-(void)setTextCentersHorizontally:(BOOL)arg1 ;
-(id)background;
-(void)setBackground:(id)arg1 ;
-(id)placeholder;
-(CGSize)_leftViewOffset;
-(void)_setLeftViewOffset:(CGSize)arg1 ;
-(CGSize)clearButtonOffset;
-(void)setClearButtonOffset:(CGSize)arg1 ;
-(float)paddingTop;
-(void)setPaddingTop:(float)arg1 ;
-(void)setRightViewMode:(int)arg1 ;
-(void)_setRightViewOffset:(CGSize)arg1 ;
-(BOOL)_partsShouldBeMini;
-(CGRect)leftViewRectForBounds:(CGRect)arg1 ;
-(id)_systemBackgroundView;
-(void)__resumeBecomeFirstResponder;
-(void)_activateSelectionView;
-(id)_placeholderLabel;
-(void)setDisabledBackground:(id)arg1 ;
-(void)setLeftViewMode:(int)arg1 ;
-(void)setClearButtonMode:(int)arg1 ;
-(id)searchText;
-(void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPaddingLeft:(float)arg1 ;
-(id)_clearButton;
-(void)_updateButtons;
-(id)_clearButtonImageForState:(unsigned)arg1 ;
-(float)paddingLeft;
-(BOOL)_showsClearButtonWhenNonEmpty:(BOOL)arg1 ;
-(BOOL)_fieldEditorAttached;
-(CGRect)placeholderRectForBounds:(CGRect)arg1 ;
-(CGSize)_clearButtonSize;
-(CGRect)clearButtonRectForBounds:(CGRect)arg1 ;
-(CGRect)_availableTextRectForBounds:(CGRect)arg1 forEditing:(BOOL)arg2 ;
-(BOOL)_hasSuffixField;
-(CGRect)_suffixFrame;
-(BOOL)_showsLeftView;
-(int)_currentTextAlignment;
-(float)paddingRight;
-(void)_updateBackgroundViewsAnimated:(BOOL)arg1 ;
-(void)_clearBackgroundViews;
-(int)_suffixLabelTextAlignment;
-(Class)_placeholderLabelClass;
-(Class)_systemBackgroundViewClass;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(int)clearingBehavior;
-(void)setDrawsAsAtom:(BOOL)arg1 ;
-(void)setClearingBehavior:(int)arg1 ;
-(BOOL)_useGesturesForEditableContent;
-(id)_textInputViewForAddingGestureRecognizers;
-(void)_setSuffix:(id)arg1 withColor:(id)arg2 ;
-(CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)arg1 ;
-(unsigned)offsetInMarkedTextForSelection:(id)arg1 ;
-(void)setPaddingBottom:(float)arg1 ;
-(void)setPaddingRight:(float)arg1 ;
-(id)_text;
-(float)paddingBottom;
-(void)setClearsOnBeginEditing:(BOOL)arg1 ;
-(CGSize)_textSize;
-(void)_selectionMayChange:(id)arg1 ;
-(void)_drawTextInRect:(CGRect)arg1 forLabel:(id)arg2 ;
-(void)setAtomStyle:(int)arg1 ;
-(void)_setBaselineLayoutConstraint:(id)arg1 ;
-(id)createTextLabelWithTextColor:(id)arg1 ;
-(CGRect)_frameForLabel:(id)arg1 inTextRect:(CGRect)arg2 ;
-(id)createPlaceholderLabelWithFont:(id)arg1 andTextAlignment:(int)arg2 ;
-(void)_updateTextLabel;
-(BOOL)clearsOnBeginEditing;
-(void)_stopObservingFieldEditorScroll;
-(void)_setNeedsStyleRecalc;
-(float)_baselineLayoutConstraintConstant;
-(void)_sizeChanged:(BOOL)arg1 ;
-(CGSize)_textSizeUsingFullFontSize:(BOOL)arg1 ;
-(void)_createBaselineLayoutLabelIfNecessary;
-(int)clearButtonMode;
-(id)clearButton;
-(BOOL)_shouldEndEditing;
-(void)scrollTextFieldToVisible;
-(void)_initialScrollDidFinish:(id)arg1 ;
-(void)setSelectionRange:(NSRange)arg1 ;
-(id)customOverlayContainer;
-(void)_syncTypingAttributesWithDefaultAttribute:(id)arg1 ;
-(float)actualMinimumFontSize;
-(id)_copyFont:(id)arg1 newSize:(float)arg2 maxSize:(float)arg3 ;
-(void)_updateAtomTextColor;
-(CGRect)clearButtonRect;
-(BOOL)_showsClearButton:(BOOL)arg1 ;
-(BOOL)_showsRightView;
-(void)setFont:(id)arg1 fullFontSize:(float)arg2 ;
-(BOOL)_heightShouldBeMini;
-(int)borderStyle;
-(BOOL)_hasContent;
-(BOOL)_showsAtomBackground;
-(CGRect)_atomBackgroundViewFrame;
-(BOOL)_showsClearButtonWhenEmpty;
-(int)leftViewMode;
-(int)rightViewMode;
-(CGRect)_baselineLeftViewRectForBounds:(CGRect)arg1 ;
-(float)_marginTop;
-(void)_setUpBaselineLayoutConstraints;
-(BOOL)_isShowingPlaceholder;
-(void)_updatePlaceholderPosition;
-(void)_updateAtomBackground;
-(void)_updateAutosizeStyleIfNeeded;
-(BOOL)clearsPlaceholderOnBeginEditing;
-(CGRect)_prefixFrame;
-(void)_updateForPasscodeAppearance;
-(CGRect)borderRectForBounds:(CGRect)arg1 ;
-(void)finishedSettingTextOrAttributedText;
-(void)_setAttributedText:(id)arg1 onFieldEditorAndSetCaretSelectionAfterText:(BOOL)arg2 ;
-(void)_invalidateBaselineLayoutConstraints;
-(void)createPlaceholderIfNecessary;
-(void)finishedSettingPlaceholder;
-(void)drawPlaceholderInRect:(CGRect)arg1 ;
-(void)drawSuffixInRect:(CGRect)arg1 ;
-(void)drawPrefixInRect:(CGRect)arg1 ;
-(void)_applicationResuming:(id)arg1 ;
-(void)_endedEditing;
-(void)drawBorder:(CGRect)arg1 ;
-(BOOL)_implementsCustomDrawing;
-(BOOL)isUndoEnabled;
-(CGRect)adjustedCaretRectForCaretRect:(CGRect)arg1 ;
-(BOOL)_isShowingPrefix;
-(id)actualFont;
-(CGPoint)_scrollOffset;
-(CGSize)_rightViewOffset;
-(void)_setSystemBackgroundViewActive:(BOOL)arg1 ;
-(id)_placeholderView;
-(id)_textLabelView;
-(id)defaultTextAttributes;
-(void)setAttributedPlaceholder:(id)arg1 ;
-(id)attributedPlaceholder;
-(void)_updateSuffix:(id)arg1 ;
-(void)_setPrefix:(id)arg1 ;
-(void)setClearsPlaceholderOnBeginEditing:(BOOL)arg1 ;
-(void)fieldEditorDidChangeSelection:(id)arg1 ;
-(id)_dictationInterpretations;
-(void)setAutoresizesTextToFit:(BOOL)arg1 ;
-(void)setTextAutorresizesToFit:(BOOL)arg1 ;
-(void)setClearButtonStyle:(int)arg1 ;
-(CGRect)textRect;
-(void)setInactiveHasDimAppearance:(BOOL)arg1 ;
-(void)_clearSelectionUI;
-(void)_resetSelectionUI;
-(void)setBecomesFirstResponderOnClearButtonTap:(BOOL)arg1 ;
-(void)setLabelOffset:(float)arg1 ;
-(id)selectedAttributedText;
-(void)_setBackgroundStrokeColor:(id)arg1 ;
-(void)_setBackgroundFillColor:(id)arg1 ;
-(void)_setBackgroundStrokeWidth:(float)arg1 ;
-(BOOL)_inPopover;
-(id)_baselineLayoutConstraint;
-(id)_baselineLayoutLabel;
-(void)_setBaselineLayoutLabel:(id)arg1 ;
-(id)disabledBackground;
-(void)setDefaultTextAttributes:(id)arg1 ;
-(void)_setPasscodeStyleAlpha:(float)arg1 ;
@end

