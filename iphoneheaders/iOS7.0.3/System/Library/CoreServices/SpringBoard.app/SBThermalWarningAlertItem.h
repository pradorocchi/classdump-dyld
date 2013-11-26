/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardUI/SBAlertItem.h>

@protocol SBThermalWarningAlertItemDelegate;
@class ;

@interface SBThermalWarningAlertItem : SBAlertItem {

	<SBThermalWarningAlertItemDelegate>* _delegate;
	int _actionTaken;

}

@property (getter=isWaitingForResponse,nonatomic,readonly) BOOL waitingForResponse; 
-(void)_tryToSendAction:(int)arg1 ;
-(void)_autoCoolDown;
-(BOOL)unlocksScreen;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)_playPresentationSound;
-(BOOL)undimsScreen;
-(void)willActivate;
-(void)didDeactivateForReason:(int)arg1 ;
-(BOOL)isWaitingForResponse;
@end

