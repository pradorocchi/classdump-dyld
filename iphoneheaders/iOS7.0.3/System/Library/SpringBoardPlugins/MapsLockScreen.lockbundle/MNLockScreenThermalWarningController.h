/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class MNThermalAlertItem, NSTimer;

@interface MNLockScreenThermalWarningController : NSObject {

	BOOL _enabled;
	BOOL _screenWasForcedLocked;
	MNThermalAlertItem* _alert;
	BOOL _locking;
	NSTimer* _idleTimer;
	NSTimer* _relockTimer;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(void)clearIdleTimer;
-(void)startIdleTimer;
-(void)didReceiveEvent;
-(void)applicationWillActivate:(id)arg1 ;
-(void)checkThermalLevel;
-(void)clearRelockTimer;
-(void)lockUnconditionally;
-(void)relockIfAppropriate;
-(void)startRelockTimer;
-(void)dealloc;
-(id)init;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)lock;
@end

