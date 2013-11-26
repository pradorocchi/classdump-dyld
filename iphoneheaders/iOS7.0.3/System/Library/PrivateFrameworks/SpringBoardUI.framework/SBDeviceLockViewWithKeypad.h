/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardUI/SBDeviceLockView.h>
#import <SpringBoardUI/TPDialerKeypadDelegate.h>

@class SBDeviceLockKeypad;

@interface SBDeviceLockViewWithKeypad : SBDeviceLockView <TPDialerKeypadDelegate> {

	SBDeviceLockKeypad* _keypad;
	BOOL _cancelingTouches;

}
-(void)dealloc;
-(void)setPlaysKeyboardClicks:(BOOL)arg1 ;
-(BOOL)playsKeyboardClicks;
-(BOOL)showsEmergencyCallButton;
-(void)setShowsEmergencyCallButton:(BOOL)arg1 ;
-(id)_initWithStyle:(int)arg1 interfaceOrientation:(int)arg2 showsEmergencyCall:(BOOL)arg3 ;
-(void)setPasscode:(id)arg1 ;
-(void)deviceLockEntryFieldTextDidChange:(id)arg1 ;
-(void)deviceLockEntryFieldDidAcceptEntry:(id)arg1 ;
-(id)keypadView;
-(void)phonePad:(id)arg1 keyDown:(BOOL)arg2 ;
-(void)phonePad:(id)arg1 keyUp:(BOOL)arg2 ;
@end

