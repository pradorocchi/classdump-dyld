/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:01 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextInputTraits.h>

@protocol UITextInputTraits <NSObject>
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardType; 
@property (assign,nonatomic) int keyboardAppearance; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@optional
-(int)keyboardAppearance;
-(void)setSecureTextEntry:(BOOL)arg1;
-(BOOL)isSecureTextEntry;
-(int)autocapitalizationType;
-(void)setAutocapitalizationType:(int)arg1;
-(int)autocorrectionType;
-(void)setAutocorrectionType:(int)arg1;
-(int)spellCheckingType;
-(void)setSpellCheckingType:(int)arg1;
-(int)keyboardType;
-(void)setKeyboardType:(int)arg1;
-(void)setKeyboardAppearance:(int)arg1;
-(int)returnKeyType;
-(void)setReturnKeyType:(int)arg1;
-(BOOL)enablesReturnKeyAutomatically;
-(void)setEnablesReturnKeyAutomatically:(BOOL)arg1;
@end

#import <UIKit/UITextInputTraits_Private.h>
#import <CoreFoundation/NSCopying.h>

@class UIColor, UIImage;

@interface UITextInputTraits : NSObject <UITextInputTraits, UITextInputTraits_Private, NSCopying> {

	int autocapitalizationType;
	int autocorrectionType;
	int spellCheckingType;
	unsigned keyboardType : 8;
	unsigned keyboardAppearance : 8;
	int returnKeyType;
	BOOL enablesReturnKeyAutomatically;
	BOOL secureTextEntry;
	CFCharacterSetRef textTrimmingSet;
	UIColor* insertionPointColor;
	UIColor* selectionBarColor;
	UIColor* selectionHighlightColor;
	UIImage* selectionDragDotImage;
	unsigned insertionPointWidth;
	int textLoupeVisibility;
	int textSelectionBehavior;
	id textSuggestionDelegate;
	BOOL isSingleLineDocument;
	BOOL contentsIsSingleValue;
	BOOL acceptsEmoji;
	BOOL returnKeyGoesToNextResponder;
	BOOL acceptsFloatingKeyboard;
	BOOL acceptsSplitKeyboard;
	BOOL displaySecureTextUsingPlainText;
	BOOL learnsCorrections;
	int emptyContentReturnKeyType;
	int shortcutConversionType;
	BOOL suppressReturnKeyStyling;
	BOOL forceEnableDictation;
	BOOL useInterfaceLanguageForLocalization;
	BOOL deferBecomingResponder;
	BOOL enablesReturnKeyOnNonWhiteSpaceContent;

}

@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardType; 
@property (assign,nonatomic) int keyboardAppearance; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (assign,nonatomic,@dynamic) CFCharacterSetRef textTrimmingSet; 
@property (nonatomic,retain) UIColor * insertionPointColor; 
@property (nonatomic,retain) UIColor * selectionBarColor; 
@property (nonatomic,retain) UIColor * selectionHighlightColor; 
@property (nonatomic,retain) UIImage * selectionDragDotImage; 
@property (assign,nonatomic) unsigned insertionPointWidth; 
@property (assign,nonatomic) int textLoupeVisibility; 
@property (assign,nonatomic) int textSelectionBehavior; 
@property (assign,nonatomic,@dynamic) id textSuggestionDelegate; 
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
@property (assign,nonatomic) BOOL deferBecomingResponder; 
@property (assign,nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent; 
+(BOOL)keyboardTypeRequiresASCIICapable:(int)arg1 ;
+(id)traitsByAdoptingTraits:(id)arg1 ;
+(id)defaultTextInputTraits;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setToDefaultValues;
-(void)takeTraitsFrom:(id)arg1 ;
-(int)textSelectionBehavior;
-(int)keyboardAppearance;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(BOOL)isSecureTextEntry;
-(BOOL)displaySecureTextUsingPlainText;
-(int)autocapitalizationType;
-(void)setAutocapitalizationType:(int)arg1 ;
-(int)autocorrectionType;
-(void)setAutocorrectionType:(int)arg1 ;
-(int)spellCheckingType;
-(void)setSpellCheckingType:(int)arg1 ;
-(int)keyboardType;
-(void)setKeyboardType:(int)arg1 ;
-(void)setKeyboardAppearance:(int)arg1 ;
-(int)returnKeyType;
-(void)setReturnKeyType:(int)arg1 ;
-(BOOL)enablesReturnKeyAutomatically;
-(void)setEnablesReturnKeyAutomatically:(BOOL)arg1 ;
-(CFCharacterSetRef)textTrimmingSet;
-(BOOL)acceptsSplitKeyboard;
-(int)shortcutConversionType;
-(BOOL)acceptsFloatingKeyboard;
-(BOOL)learnsCorrections;
-(void)setLearnsCorrections:(BOOL)arg1 ;
-(void)setTextTrimmingSet:(CFCharacterSetRef)arg1 ;
-(id)insertionPointColor;
-(void)setInsertionPointColor:(id)arg1 ;
-(id)selectionBarColor;
-(void)setSelectionBarColor:(id)arg1 ;
-(id)selectionHighlightColor;
-(void)setSelectionHighlightColor:(id)arg1 ;
-(id)selectionDragDotImage;
-(void)setSelectionDragDotImage:(id)arg1 ;
-(unsigned)insertionPointWidth;
-(void)setInsertionPointWidth:(unsigned)arg1 ;
-(int)textLoupeVisibility;
-(void)setTextLoupeVisibility:(int)arg1 ;
-(void)setTextSelectionBehavior:(int)arg1 ;
-(id)textSuggestionDelegate;
-(void)setTextSuggestionDelegate:(id)arg1 ;
-(BOOL)isSingleLineDocument;
-(void)setIsSingleLineDocument:(BOOL)arg1 ;
-(BOOL)contentsIsSingleValue;
-(void)setContentsIsSingleValue:(BOOL)arg1 ;
-(BOOL)acceptsEmoji;
-(void)setAcceptsEmoji:(BOOL)arg1 ;
-(int)emptyContentReturnKeyType;
-(void)setEmptyContentReturnKeyType:(int)arg1 ;
-(BOOL)returnKeyGoesToNextResponder;
-(void)setReturnKeyGoesToNextResponder:(BOOL)arg1 ;
-(void)setAcceptsFloatingKeyboard:(BOOL)arg1 ;
-(void)setAcceptsSplitKeyboard:(BOOL)arg1 ;
-(void)setDisplaySecureTextUsingPlainText:(BOOL)arg1 ;
-(void)setShortcutConversionType:(int)arg1 ;
-(BOOL)suppressReturnKeyStyling;
-(void)setSuppressReturnKeyStyling:(BOOL)arg1 ;
-(BOOL)forceEnableDictation;
-(void)setForceEnableDictation:(BOOL)arg1 ;
-(BOOL)useInterfaceLanguageForLocalization;
-(void)setUseInterfaceLanguageForLocalization:(BOOL)arg1 ;
-(BOOL)deferBecomingResponder;
-(void)setDeferBecomingResponder:(BOOL)arg1 ;
-(BOOL)enablesReturnKeyOnNonWhiteSpaceContent;
-(void)setEnablesReturnKeyOnNonWhiteSpaceContent:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(void)setToSecureValues;
-(BOOL)publicTraitsMatchTraits:(id)arg1 ;
-(void)_setColorsToMatchTintColor:(id)arg1 ;
@end

