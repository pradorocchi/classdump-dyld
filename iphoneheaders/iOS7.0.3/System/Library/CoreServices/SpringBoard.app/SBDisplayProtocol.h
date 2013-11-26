/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SBDisplayProtocol <NSObject>
@required
-(void)setActivationSetting:(unsigned)arg1 flag:(BOOL)arg2;
-(void)clearDisplaySettings;
-(void)clearActivationSettings;
-(void)setActivationSetting:(unsigned)arg1 value:(id)arg2;
-(BOOL)expectsFaceContact;
-(BOOL)expectsFaceContactInLandscape;
-(void)setDisplaySetting:(unsigned)arg1 flag:(BOOL)arg2;
-(void)setDeactivationSetting:(unsigned)arg1 flag:(BOOL)arg2;
-(id)effectiveStatusBarStyleRequest;
-(id)displayValue:(unsigned)arg1;
-(BOOL)activationFlag:(unsigned)arg1;
-(id)activationValue:(unsigned)arg1;
-(BOOL)deactivationFlag:(unsigned)arg1;
-(void)setDeactivationSetting:(unsigned)arg1 value:(id)arg2;
-(double)autoDimTime;
-(double)autoLockTime;
-(void)clearDeactivationSettings;
-(id)statusBarStyleRequest;
-(BOOL)allowsEventOnlySuspension;
-(id)deactivationValue:(unsigned)arg1;
-(int)starkStatusBarStyle;
-(void)setOrientationChangedEventsEnabled:(BOOL)arg1;
-(BOOL)orientationChangedEventsEnabled;
-(void)setAccelerometerSampleInterval:(double)arg1;
-(double)accelerometerSampleInterval;
-(BOOL)suppressesBanners;
-(BOOL)suppressesNotificationCenter;
-(BOOL)suppressesControlCenter;
-(BOOL)displayFlag:(unsigned)arg1;
-(void)setDisplaySetting:(unsigned)arg1 value:(id)arg2;
-(int)statusBarStyle;
-(void)setExpectsFaceContact:(BOOL)arg1 inLandscape:(BOOL)arg2;
-(void)setExpectsFaceContact:(BOOL)arg1;
-(void)deactivate;
-(void)activate;
@end

