/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSURL, NSDate, NSNumber, NSString;

@interface SACalendarEvent : SADomainObject

@property (nonatomic,copy) NSArray * alerts; 
@property (assign,nonatomic) BOOL allDay; 
@property (nonatomic,copy) NSArray * attendees; 
@property (nonatomic,copy) NSURL * calendarId; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,retain) NSNumber * includeRecurrences; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,copy) NSString * notes; 
@property (nonatomic,copy) NSArray * participants; 
@property (nonatomic,retain) NSNumber * readOnly; 
@property (nonatomic,copy) NSArray * recurrences; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (nonatomic,copy) NSString * title; 
+(id)event;
+(id)eventWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setAllDay:(BOOL)arg1 ;
-(id)attendees;
-(id)notes;
-(void)setNotes:(id)arg1 ;
-(void)setAttendees:(id)arg1 ;
-(BOOL)allDay;
-(id)groupIdentifier;
-(void)setParticipants:(id)arg1 ;
-(id)participants;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)location;
-(id)readOnly;
-(id)recurrences;
-(id)startDate;
-(id)endDate;
-(void)setStartDate:(id)arg1 ;
-(void)setEndDate:(id)arg1 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(id)alerts;
-(void)setAlerts:(id)arg1 ;
-(id)calendarId;
-(void)setCalendarId:(id)arg1 ;
-(id)includeRecurrences;
-(void)setIncludeRecurrences:(id)arg1 ;
-(void)setRecurrences:(id)arg1 ;
-(id)timeZoneId;
-(void)setTimeZoneId:(id)arg1 ;
-(void)setLocation:(id)arg1 ;
-(void)setReadOnly:(id)arg1 ;
@end

