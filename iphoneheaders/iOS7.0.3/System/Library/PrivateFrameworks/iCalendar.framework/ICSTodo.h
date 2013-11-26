/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:50 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iCalendar/ICSComponent.h>

@class NSArray, ICSDate, NSString, ICSDuration, ICSUserAddress, NSURL, ICSStructuredLocation;

@interface ICSTodo : ICSComponent

@property (@dynamic,retain) NSArray * attach; 
@property (@dynamic,retain) NSArray * attendee; 
@property (@dynamic) int classification; 
@property (retain) ICSDate * completed; 
@property (assign) int percentComplete; 
@property (@dynamic,retain) ICSDate * created; 
@property (@dynamic,retain) NSString * description; 
@property (@dynamic,retain) ICSDate * dtstamp; 
@property (@dynamic,retain) ICSDate * dtstart; 
@property (retain) ICSDate * due; 
@property (@dynamic,retain) ICSDuration * duration; 
@property (@dynamic,retain) NSArray * exdate; 
@property (@dynamic,retain) NSArray * exrule; 
@property (@dynamic,retain) ICSDate * last_modified; 
@property (@dynamic,retain) NSString * location; 
@property (@dynamic,retain) ICSUserAddress * organizer; 
@property (@dynamic) unsigned priority; 
@property (@dynamic,retain) NSArray * rdate; 
@property (@dynamic,retain) ICSDate * recurrence_id; 
@property (@dynamic,retain) NSArray * rrule; 
@property (@dynamic) unsigned sequence; 
@property (@dynamic) int status; 
@property (@dynamic,retain) NSString * summary; 
@property (@dynamic,retain) NSString * uid; 
@property (@dynamic,retain) NSURL * url; 
@property (@dynamic,retain) NSString * x_apple_ews_changekey; 
@property (@dynamic,retain) NSString * x_apple_ews_itemid; 
@property (@dynamic) BOOL x_apple_ews_needsserverconfirmation; 
@property (@dynamic,retain) NSString * x_apple_ews_permission; 
@property (assign) unsigned x_apple_sort_order; 
@property (@dynamic,retain) ICSStructuredLocation * x_apple_structured_location; 
@property (@dynamic,retain) NSArray * conferences; 
@property (retain) NSArray * x_apple_activity; 
+(id)name;
-(id)due;
-(id)completed;
-(BOOL)validate:(id*)arg1 ;
-(void)setCompleted:(id)arg1 ;
-(id)x_apple_activity;
-(unsigned)x_apple_sort_order;
-(void)setX_apple_activity:(id)arg1 ;
-(void)setDue:(id)arg1 ;
-(void)setX_apple_sort_order:(unsigned)arg1 ;
-(void)setPercentComplete:(int)arg1 ;
-(int)percentComplete;
-(id)propertiesToIncludeForChecksumVersion:(int)arg1 ;
-(void)fixComponent;
@end

