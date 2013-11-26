/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardUIServices/SBUIPasscodeLockViewBase.h>
#import <SpringBoardUIServices/SBUIPasscodeLockNumberPadDelegate.h>
#import <SpringBoardUIServices/SBUIPasscodeEntryFieldDelegate.h>

@class UILabel, UIView, SBUIPasscodeLockNumberPad, NSString;

@interface SBUIPasscodeLockViewWithKeypad : SBUIPasscodeLockViewBase <SBUIPasscodeLockNumberPadDelegate, SBUIPasscodeEntryFieldDelegate> {

	UILabel* _statusTitleView;
	UIView* _statusBackgroundView;
	SBUIPasscodeLockNumberPad* _numberPad;
	UIView* _topToStatusFieldOrEntryFieldFiller;
	UIView* _entryFieldToNumberPadFiller;
	UIView* _leftToNumberPadFiller;
	UIView* _rightToNumberPadFiller;
	UIView* _bottomToNumberPadFiller;
	NSString* _lastCharacterBeforeBackspace;
	BOOL _undoInputOnTouchCancellation;

}

@property (assign,setter=_setUndoInputOnTouchCancellation:,getter=_undoInputOnTouchCancellation,nonatomic) BOOL undoInputOnTouchCancellation;              //@synthesize undoInputOnTouchCancellation=_undoInputOnTouchCancellation - In the implementation block
@property (nonatomic,retain) NSString * lastCharacterBeforeBackspace;                                                                                      //@synthesize lastCharacterBeforeBackspace=_lastCharacterBeforeBackspace - In the implementation block
@property (nonatomic,retain) UILabel * statusTitleView;                                                                                                    //@synthesize statusTitleView=_statusTitleView - In the implementation block
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)reset;
-(void)setBackgroundAlpha:(float)arg1 ;
-(float)backgroundAlpha;
-(void)setCustomBackgroundColor:(id)arg1 ;
-(void)setShowsEmergencyCallButton:(BOOL)arg1 ;
-(void)setShowsStatusField:(BOOL)arg1 ;
-(void)_luminanceBoostDidChange;
-(void)_updateStatusText:(id)arg1 animated:(BOOL)arg2 ;
-(void)resetForFailedPasscode;
-(void)_toggleForStatusField;
-(void)_notifyDelegatePasscodeEntered;
-(void)_notifyDelegatePasscodeCancelled;
-(float)_statusTitleWidth;
-(void)passcodeEntryFieldDidAcceptEntry:(id)arg1 ;
-(void)passcodeEntryFieldDidCancelEntry:(id)arg1 ;
-(BOOL)passcodeEntryField:(id)arg1 shouldInsertText:(id)arg2 ;
-(void)passcodeEntryFieldTextDidChange:(id)arg1 ;
-(void)passcodeLockNumberPad:(id)arg1 keyDown:(id)arg2 ;
-(void)passcodeLockNumberPad:(id)arg1 keyUp:(id)arg2 ;
-(void)passcodeLockNumberPad:(id)arg1 keyCancelled:(id)arg2 ;
-(void)passcodeLockNumberPadCancelButtonHit:(id)arg1 ;
-(void)passcodeLockNumberPadBackspaceButtonHit:(id)arg1 ;
-(void)passcodeLockNumberPadEmergencyCallButtonHit:(id)arg1 ;
-(id)_numberPad;
-(BOOL)_includesStatusView;
-(id)_newStatusTitleView;
-(void)setStatusTitleView:(id)arg1 ;
-(id)statusTitleView;
-(id)_newEntryField;
-(void)_setHasInput:(BOOL)arg1 ;
-(float)_numberPadOffsetFromTopOfScreen;
-(float)_entryFieldBottomYDistanceFromNumberPadTopButton;
-(void)_layoutStatusView;
-(void)setLastCharacterBeforeBackspace:(id)arg1 ;
-(void)_layoutStatusView:(id)arg1 ;
-(id)_statusTitleViewTitleFont;
-(float)_statusTitleViewHeight;
-(id)_numericEntryFieldIfExists;
-(void)_noteBackspaceHit;
-(void)_noteStringEntered:(id)arg1 eligibleForPlayingSounds:(BOOL)arg2 ;
-(void)_noteKeyUp:(id)arg1 ;
-(id)_statusTitleView;
-(id)_statusBackgroundView;
-(BOOL)_undoInputOnTouchCancellation;
-(void)_setUndoInputOnTouchCancellation:(BOOL)arg1 ;
-(id)lastCharacterBeforeBackspace;
-(id)passcode;
@end

