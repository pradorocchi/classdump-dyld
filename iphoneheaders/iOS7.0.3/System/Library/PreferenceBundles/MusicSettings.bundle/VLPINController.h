/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/MusicSettings.bundle/MusicSettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicSettings/MusicSettings-Structs.h>
#import <Preferences/DevicePINController.h>

@interface VLPINController : DevicePINController
+(BOOL)settingEnabled;
-(BOOL)requiresKeyboard;
-(BOOL)useProgressiveDelays;
-(CFStringRef)defaultsID;
-(BOOL)validatePIN:(id)arg1 ;
-(CFStringRef)failedAttemptsKey;
-(CFStringRef)blockTimeIntervalKey;
-(CFStringRef)blockedStateKey;
-(id)stringsTable;
-(BOOL)simplePIN;
-(BOOL)pinIsAcceptable:(id)arg1 outError:(id*)arg2 ;
-(void)setPIN:(id)arg1 ;
-(void)performActionAfterPINSet;
-(void)performActionAfterPINRemove;
-(void)performActionAfterPINEntry;
@end

