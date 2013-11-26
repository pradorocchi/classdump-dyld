/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileMail/BBObserverDelegate.h>
#import <SpringBoard/SBBulletinBusyClient.h>

@class BBObserver, NSMutableArray, NSMutableDictionary;

@interface SBBulletinSoundController : NSObject <BBObserverDelegate, SBBulletinBusyClient> {

	BBObserver* _observer;
	NSMutableArray* _blockQueue;
	NSMutableDictionary* _playingSounds;
	BOOL _deviceIsLocked;
	BOOL _quietModeEnabled;
	unsigned _quietModeState;

}
+(id)_sharedInstanceCreateIfNecessary:(BOOL)arg1 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(void)_hardwareButtonPressed:(id)arg1 ;
-(void)bulletinWindowStoppedBeingBusy;
-(BOOL)quietModeEnabled;
-(BOOL)_shouldHonorPlaySoundRequestForBulletin:(id)arg1 ;
-(void)_enqueueBlock:(/*^block*/ id)arg1 forBulletin:(id)arg2 ;
-(unsigned)quietModeState;
-(void)dealloc;
-(id)init;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned)arg3 ;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 ;
-(void)observer:(id)arg1 noteAlertBehaviorOverridesChanged:(unsigned)arg2 ;
-(void)observer:(id)arg1 noteAlertBehaviorOverrideStateChanged:(unsigned)arg2 ;
-(void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2 ;
-(void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2 ;
-(void)killSounds;
-(BOOL)playSoundForBulletin:(id)arg1 ;
-(void)killSoundForBulletin:(id)arg1 ;
@end

