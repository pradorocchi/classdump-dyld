/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardUIServices/SBUIEmergencyCallServiceViewController.h>
#import <FaceTime/PhoneBaseViewController.h>
#import <SpringBoardUI/TPDialerKeypadDelegate.h>
#import <FaceTime/DialerViewDelegate.h>

@class PHHandsetDialerLCDView, PHHandsetDialerView, NSTimer, UIButton;

@interface PHEmergencyDialerViewController : SBUIEmergencyCallServiceViewController <PhoneBaseViewController, TPDialerKeypadDelegate, DialerViewDelegate> {

	BOOL _inApplicationMode;
	BOOL _callEnding;
	short _currentState;
	PHHandsetDialerLCDView* _lcdView;
	PHHandsetDialerView* _dialerView;
	NSTimer* _callDurationTimer;
	UIButton* _backButton;
	UIButton* _endButton;

}

@property (assign) BOOL inApplicationMode;                        //@synthesize inApplicationMode=_inApplicationMode - In the implementation block
@property (retain) PHHandsetDialerLCDView * lcdView;              //@synthesize lcdView=_lcdView - In the implementation block
@property (retain) PHHandsetDialerView * dialerView;              //@synthesize dialerView=_dialerView - In the implementation block
@property (assign) NSTimer * callDurationTimer;                   //@synthesize callDurationTimer=_callDurationTimer - In the implementation block
@property (retain) UIButton * backButton;                         //@synthesize backButton=_backButton - In the implementation block
@property (retain) UIButton * endButton;                          //@synthesize endButton=_endButton - In the implementation block
@property (assign,nonatomic) short currentState;                  //@synthesize currentState=_currentState - In the implementation block
@property (assign) BOOL callEnding;                               //@synthesize callEnding=_callEnding - In the implementation block
+(int)statusBarStyle;
+(id)defaultPNGName;
+(int)viewType;
-(BOOL)shouldSnapshot;
-(void)prepareForSnapshot;
-(BOOL)inApplicationMode;
-(void)prepareToHandleURL:(id)arg1 ;
-(void)prepareForTransitionInFromViewType:(int)arg1 animated:(BOOL)arg2 ;
-(void)transitionInFromViewType:(int)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)setLcdView:(id)arg1 ;
-(id)lcdView;
-(id)dialerView;
-(void)callStatusChangedNotification:(id)arg1 ;
-(void)callButtonTapped:(id)arg1 ;
-(void)backButtonTapped:(id)arg1 ;
-(void)setBackButton:(id)arg1 ;
-(void)endButtonTapped:(id)arg1 ;
-(void)continueCyclingEmergencyTitleLabel;
-(void)setCallEnding:(BOOL)arg1 ;
-(void)updateEmergencyTitleLabelForCallDuration;
-(void)dialEmergencyCall;
-(id)callDurationTimer;
-(void)setCallDurationTimer:(id)arg1 ;
-(void)setCurrentState:(short)arg1 animated:(BOOL)arg2 ;
-(void)setInApplicationMode:(BOOL)arg1 ;
-(void)setDialerView:(id)arg1 ;
-(BOOL)callEnding;
-(void)dealloc;
-(short)currentState;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setCurrentState:(short)arg1 ;
-(void)handleURL:(id)arg1 ;
-(void)deleteButtonTapped:(id)arg1 ;
-(BOOL)shouldDisableEdgeClip;
-(void)updateViewControllerForOrientation:(int)arg1 ;
-(id)backButton;
-(void)phonePad:(id)arg1 appendString:(id)arg2 ;
-(void)phonePad:(id)arg1 keyDown:(BOOL)arg2 ;
-(void)phonePad:(id)arg1 keyUp:(BOOL)arg2 ;
-(void)phonePadWillBeginSounds:(id)arg1 ;
-(void)phonePadDidEndSounds:(id)arg1 ;
-(void)phonePad:(id)arg1 replaceLastDigitWithString:(id)arg2 ;
-(void)phonePadDeleteLastDigit:(id)arg1 ;
-(void)phonePad:(id)arg1 dialerCharacterButtonWasHeld:(unsigned)arg2 ;
-(id)currentCallStatusStringForDisplay;
-(id)endButton;
-(void)setEndButton:(id)arg1 ;
@end

