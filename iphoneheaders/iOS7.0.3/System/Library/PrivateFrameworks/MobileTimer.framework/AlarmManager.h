/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSMutableArray, NSDate, NSArray;

@interface AlarmManager : NSObject {

	NSString* _defaultSound;
	int _defaultSoundType;
	BOOL _dirty;
	NSMutableArray* _alarms;
	BOOL invalidAlarmsDetected;
	NSMutableArray* logMessageList;
	NSDate* lastModified;

}

@property (nonatomic,retain) NSMutableArray * logMessageList; 
@property (assign,nonatomic) BOOL invalidAlarmsDetected; 
@property (nonatomic,readonly) int defaultSoundType; 
@property (nonatomic,readonly) NSString * defaultSound; 
@property (nonatomic,readonly) NSArray * alarms;                           //@synthesize alarms=_alarms - In the implementation block
@property (nonatomic,retain) NSDate * lastModified; 
+(id)copyReadAlarmsFromPreferences;
+(void)writeAlarmsToPreferences:(id)arg1 ;
+(BOOL)isAlarmNotification:(id)arg1 ;
+(BOOL)upgrade;
+(BOOL)discardOldVersion;
+(id)sharedManager;
-(id)alarms;
-(void)removeAlarm:(id)arg1 ;
-(void)setLastModified:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setLogMessageList:(id)arg1 ;
-(void)loadDefaultSoundAndType;
-(void)unloadAlarms;
-(void)countAlarmsInAggregateDictionary;
-(void)updateAlarm:(id)arg1 active:(BOOL)arg2 ;
-(void)saveAlarms;
-(void)handleAlarm:(id)arg1 stoppedUsingSong:(id)arg2 ;
-(void)loadScheduledNotificationsWithCancelUnused:(BOOL)arg1 ;
-(void)reloadScheduledNotificationsWithRefreshActive:(BOOL)arg1 cancelUnused:(BOOL)arg2 ;
-(void)handleNotificationFired:(id)arg1 ;
-(void)handleNotificationSnoozed:(id)arg1 ;
-(id)defaultSound;
-(int)defaultSoundType;
-(void)setDefaultSound:(id)arg1 ofType:(int)arg2 ;
-(void)loadAlarms;
-(BOOL)checkIfAlarmsModified;
-(id)alarmWithId:(id)arg1 ;
-(id)alarmWithIdUrl:(id)arg1 ;
-(id)nextAlarmForDate:(id)arg1 activeOnly:(BOOL)arg2 allowRepeating:(BOOL)arg3 ;
-(void)addAlarm:(id)arg1 active:(BOOL)arg2 ;
-(void)setAlarm:(id)arg1 active:(BOOL)arg2 ;
-(void)handleAlarm:(id)arg1 startedUsingSong:(id)arg2 ;
-(void)loadScheduledNotifications;
-(void)reloadScheduledNotifications;
-(void)handleAnyNotificationChanges;
-(void)handleExpiredOrSnoozedNotificationsOnly:(id)arg1 ;
-(id)logMessageList;
-(BOOL)invalidAlarmsDetected;
-(void)setInvalidAlarmsDetected:(BOOL)arg1 ;
-(id)lastModified;
@end

