/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:46 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKit/EKCalendarItem.h>

@class NSDateComponents, NSDate, NSURL, EKObjectID, EKAlarm;

@interface EKReminder : EKCalendarItem {

	BOOL hadRecurrences;

}

@property (nonatomic,copy) NSDateComponents * startDateComponents; 
@property (nonatomic,copy) NSDateComponents * dueDateComponents; 
@property (assign,getter=isCompleted,nonatomic) BOOL completed; 
@property (nonatomic,copy) NSDate * completionDate; 
@property (assign,nonatomic) int priority; 
@property (assign,nonatomic) unsigned displayOrder; 
@property (nonatomic,readonly) NSDate * dueDate; 
@property (nonatomic,copy) NSURL * action; 
@property (nonatomic,readonly) EKObjectID * parentID; 
@property (nonatomic,readonly) EKAlarm * bestDisplayAlarm; 
@property (assign,nonatomic) BOOL hadRecurrences; 
+(void)_removeSnoozedAlarmsFromReminder:(id)arg1 usingDueDate:(id)arg2 ;
+(id)reminderWithEventStore:(id)arg1 ;
-(id)initWithPersistentObject:(id)arg1 ;
-(BOOL)commit:(id*)arg1 ;
-(BOOL)validate:(id*)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(id)_persistentReminder;
-(unsigned)displayOrder;
-(void)setDisplayOrder:(unsigned)arg1 ;
-(id)externalURI;
-(void)_sendModifiedNote;
-(void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2 ;
-(id)dueDate;
-(id)dueDateComponents;
-(id)reminderIdentifier;
-(id)startDateComponents;
-(void)setStartDateComponents:(id)arg1 ;
-(id)completionDate;
-(void)setCompletionDate:(id)arg1 ;
-(id)parentID;
-(void)setDueDateComponents:(id)arg1 ;
-(BOOL)isCompleted;
-(void)clearParentID;
-(id)bestDisplayAlarm;
-(BOOL)hadRecurrences;
-(void)setHadRecurrences:(BOOL)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setTimeZone:(id)arg1 ;
-(int)priority;
-(void)setPriority:(int)arg1 ;
@end

