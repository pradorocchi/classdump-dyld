/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Calculator.app/Calculator
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Calculator/Calculator-Structs.h>
#import <UIKit/UIViewController.h>
#import <Calculator/CalcKeypadViewDelegate.h>
#import <Calculator/CalcDisplayViewDelegate.h>

@class CalcKeypadView, UIView, CalcDisplayView, NSConditionLock, UIImage, NSMutableArray, NSString, NSDictionary;

@interface CalculatorController : UIViewController <CalcKeypadViewDelegate, CalcDisplayViewDelegate> {

	int _orientation;
	int _pendingOrientation;
	CalcKeypadView* _portraitBasicKeypad;
	CalcKeypadView* _landscapeBasicKeypad;
	CalcKeypadView* _scientificKeypad;
	UIView* _pressedButtonView;
	UIView* _fadingPressedButtonView;
	UIView* _basicContainerView;
	UIView* _advancedContainerView;
	CalcDisplayView* _displayView;
	NSConditionLock* _landscapeImageLoadingLock;
	UIImage* _landscapeBasicImage;
	UIImage* _scientificImage;
	unsigned _landscapeMode;
	NSMutableArray* _stack;
	NSMutableArray* _backupStack;
	NSString* _displayVal;
	NSString* _backupVal;
	NSString* _repeatVal;
	NSString* _memoryVal;
	NSString* _soundsPreferencesDomain;
	unsigned _lastOperator;
	unsigned _repeatButtonTag;
	unsigned _digitEntryCount;
	unsigned _afterDecimalDigitEntryCount;
	unsigned _openParenthesisCount;
	BOOL _shift;
	BOOL _isRotating;
	BOOL _soundsEnabled;
	BOOL _enteringDecimal;
	BOOL _clearKeyPressed;
	BOOL _equalsKeyPressed;
	BOOL _operatorKeyPressed;
	BOOL _openParenthesisPressed;
	BOOL _usingCommaForDecimal;
	BOOL _usingRadians;
	BOOL _showingCalloutBar;
	NSDictionary* _buttonAdjustments;

}
+(id)sharedCalculatorController;
-(void)savePrefs;
-(float)_displayHeightForOrientation:(int)arg1 maxValueHeight:(float*)arg2 ;
-(void)_finalizeDisplayForCurrentOrientation;
-(void)_setLandscapeMode:(unsigned)arg1 ;
-(void)_showActiveState:(BOOL)arg1 forOperator:(unsigned)arg2 ;
-(void)_showActiveState:(BOOL)arg1 onTag:(int)arg2 ;
-(void)_setShowingAlternateButton:(BOOL)arg1 withTag:(int)arg2 inKeypad:(id)arg3 ;
-(void)_initFrameAdjustments;
-(void)_setDisplayVal:(id)arg1 ;
-(void)resetSounds;
-(void)_resetLocale;
-(void)_handleStatusBarHeightChange:(id)arg1 ;
-(void)displayCancelCalloutBar;
-(void)_loadLandscapeImages;
-(void)_setCalcValueViewValues:(id)arg1 userEntered:(BOOL)arg2 ;
-(void)_layoutPortraitSubviews;
-(void)_layoutLandscapeSubviews;
-(void)_unpressLastOperator;
-(id)_formattedPasteboardValue;
-(void)_setShowingCalloutBar:(BOOL)arg1 ;
-(void)_setUserEnteredDisplayVal:(id)arg1 ;
-(void)_basicButtonPress:(int)arg1 ;
-(void)_showCalloutBar;
-(void)_clearDisplay;
-(id)_evaluateStackToPrecedence:(unsigned)arg1 withNumber:(id)arg2 ;
-(void)_advancedButtonPress:(int)arg1 ;
-(void)_allClearPress;
-(void)_clearIfOperatorOrEqualsKeyPressed;
-(int)_maxDigitsForCurrentOrientation;
-(void)_digitPress:(id)arg1 ;
-(void)_operatorButtonPress:(int)arg1 ;
-(void)_equals;
-(id)_stringForTag:(int)arg1 forceAlternate:(BOOL)arg2 ;
-(void)_showPressedStateForTag:(int)arg1 inFrame:(CGRect)arg2 ;
-(void)_hidePressedState:(BOOL)arg1 ;
-(id)_advancedKeypadView;
-(void)_initLandscape;
-(void)_layoutLandscapeForAnimation;
-(void)_rotateToOrientation:(int)arg1 ;
-(void)touchDownOnKeypad:(id)arg1 tag:(int)arg2 frame:(CGRect)arg3 playSound:(BOOL)arg4 ;
-(void)touchCancelledOnKeypad:(id)arg1 ;
-(void)touchUpOnKeypad:(id)arg1 tag:(int)arg2 ;
-(id)modeLabelString;
-(BOOL)isShowingCalloutBar;
-(BOOL)displayCanPaste;
-(void)displayCopy;
-(void)displayPaste;
-(void)displayShowCalloutBar;
-(void)displaySwiped;
-(unsigned)landscapeMode;
-(void)dealloc;
-(id)init;
-(int)orientation;
-(void)_handleDeviceOrientationChange:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(double)durationForTransition:(int)arg1 ;
-(void)loadView;
@end

