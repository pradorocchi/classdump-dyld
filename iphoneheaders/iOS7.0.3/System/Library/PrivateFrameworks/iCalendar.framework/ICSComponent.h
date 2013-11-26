/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:49 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iCalendar/ICSWriting.h>

@class NSMutableDictionary, NSMutableArray, NSArray, ICSDate, NSString, ICSDuration, ICSUserAddress, ICSTrigger, NSURL, ICSStructuredLocation;

@interface ICSComponent : NSObject <ICSWriting> {

	NSMutableDictionary* _properties;
	NSMutableArray* _components;

}

@property (retain) NSArray * attach; 
@property (retain) NSArray * attendee; 
@property (assign) int classification; 
@property (retain) ICSDate * created; 
@property (retain) NSString * description; 
@property (retain) ICSDate * dtstamp; 
@property (retain) ICSDate * dtstart; 
@property (readonly) BOOL isAllDay; 
@property (retain) ICSDate * dtend; 
@property (retain) ICSDuration * duration; 
@property (retain) NSArray * exdate; 
@property (retain) NSArray * exrule; 
@property (retain) ICSDate * last_modified; 
@property (retain) NSString * location; 
@property (retain) ICSUserAddress * organizer; 
@property (retain) NSArray * rdate; 
@property (retain) ICSDate * recurrence_id; 
@property (retain) NSArray * rrule; 
@property (assign) unsigned sequence; 
@property (assign) int status; 
@property (retain) NSString * summary; 
@property (retain) ICSTrigger * trigger; 
@property (retain) NSString * uid; 
@property (retain) NSURL * url; 
@property (assign) unsigned priority; 
@property (assign) int x_calendarserver_access; 
@property (retain) NSString * x_apple_dropbox; 
@property (retain) NSString * x_apple_ews_changekey; 
@property (retain) NSString * x_apple_ews_itemid; 
@property (assign) BOOL x_apple_ews_needsserverconfirmation; 
@property (retain) NSString * x_apple_ews_permission; 
@property (assign) BOOL x_apple_ignore_on_restore; 
@property (retain) NSString * x_apple_etag; 
@property (retain) NSString * x_apple_scheduletag; 
@property (retain) NSString * x_apple_serverFilename; 
@property (retain) ICSStructuredLocation * x_apple_structured_location; 
@property (retain) NSArray * conferences; 
@property (retain) NSArray * components;                                             //@synthesize components=_components - In the implementation block
+(id)makeUID;
+(id)name;
+(id)stringFromStatus:(int)arg1 ;
+(int)statusFromString:(id)arg1 ;
+(id)inheritanceKeywords;
-(id)trigger;
-(void)setTrigger:(id)arg1 ;
-(id)recurrence_id;
-(id)dtstart;
-(unsigned)sequence;
-(id)last_modified;
-(id)attendee;
-(void)setAttendee:(id)arg1 ;
-(void)setDtstart:(id)arg1 ;
-(void)setDtend:(id)arg1 ;
-(BOOL)isAllDay;
-(id)dtend;
-(void)setRecurrence_id:(id)arg1 ;
-(void)setAttach:(id)arg1 ;
-(id)x_apple_structured_location;
-(int)classification;
-(void)setProperties:(id)arg1 forName:(id)arg2 ;
-(void)setProperty:(id)arg1 forName:(id)arg2 ;
-(BOOL)validate:(id*)arg1 ;
-(id)organizer;
-(void)setOrganizer:(id)arg1 ;
-(id)propertiesForName:(id)arg1 ;
-(id)dtstamp;
-(id)created;
-(void)setDtstamp:(id)arg1 ;
-(void)setLast_modified:(id)arg1 ;
-(void)setCreated:(id)arg1 ;
-(void)setSequence:(unsigned)arg1 ;
-(void)removePropertiesForName:(id)arg1 ;
-(void)setExdate:(id)arg1 ;
-(void)setRrule:(id)arg1 ;
-(void)setComponents:(id)arg1 ;
-(id)exdate;
-(id)rrule;
-(void)setX_apple_structured_location:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)duration;
-(void)setDuration:(id)arg1 ;
-(id)attach;
-(id)location;
-(id)url;
-(void)setUrl:(id)arg1 ;
-(id)uid;
-(id)properties;
-(unsigned)priority;
-(id)components;
-(void)setPriority:(unsigned)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setPropertyValue:(id)arg1 type:(int)arg2 forName:(id)arg3 ;
-(id)ICSStringWithOptions:(unsigned)arg1 ;
-(void)setForcedAllDay:(BOOL)arg1 ;
-(void)setUid:(id)arg1 ;
-(id)allProperties;
-(void)setClassification:(int)arg1 ;
-(void)setDescription:(id)arg1 ;
-(void)setLocation:(id)arg1 ;
-(id)summary;
-(void)setSummary:(id)arg1 ;
-(id)propertiesToIncludeForChecksumVersion:(int)arg1 ;
-(id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1 ;
-(BOOL)ignorePropertyWithName:(id)arg1 ;
-(void)ICSStringWithOptions:(unsigned)arg1 appendingToString:(id)arg2 ;
-(id)parametersToIncludeForChecksumVersion:(int)arg1 ;
-(void)addComponent:(id)arg1 ;
-(void)removeComponent:(id)arg1 ;
-(void)setPropertyValue:(id)arg1 forName:(id)arg2 ;
-(void)addProperty:(id)arg1 withValue:(id)arg2 ;
-(BOOL)forcedAllDay;
-(void)setExrule:(id)arg1 ;
-(id)exrule;
-(void)setRdate:(id)arg1 ;
-(id)rdate;
-(int)x_calendarserver_access;
-(void)setX_calendarserver_access:(int)arg1 ;
-(id)x_apple_dropbox;
-(void)setX_apple_dropbox:(id)arg1 ;
-(id)x_apple_ews_changekey;
-(void)setX_apple_ews_changekey:(id)arg1 ;
-(id)x_apple_ews_itemid;
-(void)setX_apple_ews_itemid:(id)arg1 ;
-(id)x_apple_ews_permission;
-(void)setX_apple_ews_permission:(id)arg1 ;
-(BOOL)x_apple_ews_needsserverconfirmation;
-(void)setX_apple_ews_needsserverconfirmation:(BOOL)arg1 ;
-(void)setX_apple_ignore_on_restore:(BOOL)arg1 ;
-(BOOL)x_apple_ignore_on_restore;
-(void)setX_apple_etag:(id)arg1 ;
-(id)x_apple_etag;
-(void)setX_apple_scheduletag:(id)arg1 ;
-(id)x_apple_scheduletag;
-(void)setX_apple_serverFilename:(id)arg1 ;
-(id)x_apple_serverFilename;
-(void)setConferences:(id)arg1 ;
-(id)conferences;
-(id)x_apple_travel_duration;
-(void)setX_apple_travel_duration:(id)arg1 ;
-(void)setX_apple_travel_start:(id)arg1 ;
-(id)x_apple_travel_start;
-(void)fixPropertiesInheritance:(id)arg1 ;
-(void)fixComponent;
-(void)fixAlarms;
-(void)fixAttendees;
-(void)fixAttachments;
-(void)fixRecurrenceRules;
-(void)fixRecurrenceDates;
-(void)fixExceptionRules;
-(void)fixExceptionDates;
@end

