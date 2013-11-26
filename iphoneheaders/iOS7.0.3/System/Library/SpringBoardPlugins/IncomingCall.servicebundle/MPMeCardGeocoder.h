/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/IncomingCall.servicebundle/IncomingCall
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, PCPersistentTimer;

@interface MPMeCardGeocoder : NSObject {

	void* _addressBook;
	NSObject<OS_dispatch_queue>* _workQueue;
	NSMutableArray* _addresses;
	PCPersistentTimer* _networkPreferencesTimeoutTimer;

}

@property (assign) BOOL isActivelyUsing; 
+(id)sharedMeCardGeocoder;
-(void)_saveGeoCache;
-(BOOL)isActivelyUsing;
-(void)_doWork;
-(id)currentValidLocations;
-(void)setIsActivelyUsing:(BOOL)arg1 ;
-(BOOL)_unschedulePerformGeocodesWakeTaskIfEarlierThan:(id)arg1 ;
-(BOOL)_isNetworkAvailable;
-(void)_scheduleNextGeocode;
-(void)_unscheduleLongTermRebuild;
-(void)_rebuildAddressArray;
-(void)_networkPreferencesLoaded;
-(void)scheduleNextGeocode;
-(void)_schedulePerformGeocodesTaskWithStartWakeTime:(id)arg1 dropDeadWakeTime:(id)arg2 ;
-(id)_dateOfOldestAddress;
-(void)_scheduleLongTermRebuild;
-(void)scheduleImmediateGeocode;
-(void)dealloc;
-(id)init;
-(void)_addressBookChanged;
-(void*)addressBook;
@end

