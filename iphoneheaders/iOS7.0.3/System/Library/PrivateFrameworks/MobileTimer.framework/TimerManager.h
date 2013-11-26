/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class UILocalNotification, NSString;

@interface TimerManager : NSObject {

	int _state;
	UILocalNotification* _notification;
	double _remainingTime;

}

@property (assign,nonatomic) double defaultDuration; 
@property (nonatomic,readonly) NSString * defaultSound; 
@property (nonatomic,readonly) int state; 
@property (nonatomic,readonly) double fireTime; 
@property (nonatomic,readonly) double remainingTime; 
+(BOOL)isTimerNotification:(id)arg1 ;
+(BOOL)upgrade;
+(BOOL)discardOldVersion;
+(id)copyFetchScheduledNotification;
+(id)newNotificationAt:(double)arg1 withSound:(id)arg2 ;
+(id)sharedManager;
-(double)fireTime;
-(void)setDefaultDuration:(double)arg1 ;
-(int)state;
-(BOOL)cancel;
-(BOOL)resume;
-(BOOL)pause;
-(id)defaultSound;
-(void)setDefaultSound:(id)arg1 ;
-(double)defaultDuration;
-(double)remainingTime;
-(void)reloadState;
-(void)scheduleAt:(double)arg1 withSound:(id)arg2 ;
-(void)changeSound:(id)arg1 ;
@end

