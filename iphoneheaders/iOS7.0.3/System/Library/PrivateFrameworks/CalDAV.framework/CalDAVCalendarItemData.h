/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:50 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreDAV/CoreDAVLeafDataPayload.h>
#import <CalDAV/CalDAVCalendarItemProtocol.h>

@class NSString, CalDAVCalendarServerScheduleChangesItem, CalDAVUpdateOwnerItem;

@interface CalDAVCalendarItemData : CoreDAVLeafDataPayload <CalDAVCalendarItemProtocol> {

	NSString* _scheduleTag;
	CalDAVCalendarServerScheduleChangesItem* _scheduleChanges;
	CalDAVUpdateOwnerItem* _createdBy;
	CalDAVUpdateOwnerItem* _updatedBy;

}

@property (retain) NSString * scheduleTag;                                                 //@synthesize scheduleTag=_scheduleTag - In the implementation block
@property (retain) CalDAVCalendarServerScheduleChangesItem * scheduleChanges;              //@synthesize scheduleChanges=_scheduleChanges - In the implementation block
@property (retain) CalDAVUpdateOwnerItem * createdBy;                                      //@synthesize createdBy=_createdBy - In the implementation block
@property (retain) CalDAVUpdateOwnerItem * updatedBy;                                      //@synthesize updatedBy=_updatedBy - In the implementation block
-(void)dealloc;
-(id)scheduleTag;
-(void)setScheduleTag:(id)arg1 ;
-(id)scheduleChanges;
-(void)setScheduleChanges:(id)arg1 ;
-(id)createdBy;
-(void)setCreatedBy:(id)arg1 ;
-(id)updatedBy;
-(void)setUpdatedBy:(id)arg1 ;
@end

