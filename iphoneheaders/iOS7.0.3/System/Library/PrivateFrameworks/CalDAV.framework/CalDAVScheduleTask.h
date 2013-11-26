/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:51 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreDAV/CoreDAVPostTask.h>

@class NSArray, NSString, CalDAVScheduleResponseItem;

@interface CalDAVScheduleTask : CoreDAVPostTask {

	NSArray* _attendees;
	NSString* _originator;
	CalDAVScheduleResponseItem* _scheduleResponse;

}

@property (retain) NSArray * attendees;                                        //@synthesize attendees=_attendees - In the implementation block
@property (retain) CalDAVScheduleResponseItem * scheduleResponse;              //@synthesize scheduleResponse=_scheduleResponse - In the implementation block
@property (retain) NSString * originator;                                      //@synthesize originator=_originator - In the implementation block
-(id)attendees;
-(void)setAttendees:(id)arg1 ;
-(id)originator;
-(void)setOriginator:(id)arg1 ;
-(void)dealloc;
-(id)initWithOriginator:(id)arg1 attendees:(id)arg2 outboxURL:(id)arg3 payload:(id)arg4 ;
-(void)setScheduleResponse:(id)arg1 ;
-(id)scheduleResponse;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)additionalHeaderValues;
@end

