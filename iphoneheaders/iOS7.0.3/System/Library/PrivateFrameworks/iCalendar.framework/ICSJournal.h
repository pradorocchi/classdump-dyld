/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:50 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iCalendar/ICSComponent.h>

@class NSArray, ICSDate, NSString, ICSUserAddress, NSURL;

@interface ICSJournal : ICSComponent

@property (@dynamic,retain) NSArray * attach; 
@property (@dynamic,retain) NSArray * attendee; 
@property (@dynamic) int classification; 
@property (@dynamic,retain) ICSDate * created; 
@property (@dynamic,retain) NSString * description; 
@property (@dynamic,retain) ICSDate * dtstamp; 
@property (@dynamic,retain) ICSDate * dtstart; 
@property (@dynamic,retain) NSArray * exdate; 
@property (@dynamic,retain) NSArray * exrule; 
@property (@dynamic,retain) ICSDate * last_modified; 
@property (@dynamic,retain) ICSUserAddress * organizer; 
@property (@dynamic,retain) NSArray * rdate; 
@property (@dynamic,retain) ICSDate * recurrence_id; 
@property (@dynamic,retain) NSArray * rrule; 
@property (@dynamic) unsigned sequence; 
@property (@dynamic) int status; 
@property (@dynamic,retain) NSString * summary; 
@property (@dynamic,retain) NSString * uid; 
@property (@dynamic,retain) NSURL * url; 
+(id)name;
-(BOOL)validate:(id*)arg1 ;
@end

