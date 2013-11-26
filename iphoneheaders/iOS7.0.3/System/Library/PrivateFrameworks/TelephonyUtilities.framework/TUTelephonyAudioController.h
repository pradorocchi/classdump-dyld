/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:05 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <TelephonyUtilities/TUAudioController.h>

@class NSNumber, NSArray;

@interface TUTelephonyAudioController : TUAudioController {

	dispatch_queue_sRef _mutedQueue;
	dispatch_queue_sRef _ttyQueue;
	dispatch_queue_sRef _pickableRoutesQueue;
	NSNumber* _isMutedCached;
	NSNumber* _isTTYCached;
	NSArray* _pickableRoutesForTTY;
	NSArray* _pickableRoutesForNonTTY;
	BOOL _isRequestingMuted;
	BOOL _isRequestingTTY;
	BOOL _isRequestingPickableRoutesForTTY;
	BOOL _isRequestingPickableRoutesForNonTTY;
	unsigned long long _lastMutedRequestScheduleTime;
	unsigned long long _lastTTYRequestScheduleTime;
	unsigned long long _lastTTYPickableRoutesScheduleTime;
	unsigned long long _lastNonTTYPickableRoutesScheduleTime;

}
+(id)sharedSystemController;
+(id)sharedTelephonyAudioController;
-(BOOL)setMuted:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isMuted;
-(void)_handleUplinkMuteDidChangeNotification:(id)arg1 ;
-(void)_pickableRoutesDidChangeNotification:(id)arg1 ;
-(void)_handleCallStatusChanged;
-(BOOL)isTTY;
-(id)pickableRoutes;
-(id)_pickableRoutesForTTYWithForceNewRequest:(BOOL)arg1 ;
-(id)_pickableRoutesForNonTTYWithForceNewRequest:(BOOL)arg1 ;
-(id)pickableRoutesForTTY;
-(id)pickableRoutesForNonTTY;
@end

