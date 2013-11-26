/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:51 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, CoreDAVHrefItem, CoreDAVItemWithNoChildren, CalDAVCalendarServerAccessItem, CoreDAVItemWithHrefChildItem, CalDAVCalendarServerOrganizerItem, CalDAVSupportedCalendarComponentSet;

@interface CalDAVCalendarServerInviteNotificationItem : CoreDAVItem {

	CoreDAVLeafItem* _uid;
	CoreDAVHrefItem* _href;
	CoreDAVItemWithNoChildren* _inviteStatus;
	CoreDAVItemWithNoChildren* _calendarPublic;
	CalDAVCalendarServerAccessItem* _access;
	CoreDAVItemWithHrefChildItem* _hostURL;
	CalDAVCalendarServerOrganizerItem* _organizer;
	CoreDAVLeafItem* _summary;
	CalDAVSupportedCalendarComponentSet* _supportedCalendarComponentSet;

}

@property (retain) CoreDAVLeafItem * uid;                                                            //@synthesize uid=_uid - In the implementation block
@property (retain) CoreDAVHrefItem * href;                                                           //@synthesize href=_href - In the implementation block
@property (retain) CoreDAVItemWithNoChildren * inviteStatus;                                         //@synthesize inviteStatus=_inviteStatus - In the implementation block
@property (retain) CoreDAVItemWithNoChildren * calendarPublic;                                       //@synthesize calendarPublic=_calendarPublic - In the implementation block
@property (retain) CalDAVCalendarServerAccessItem * access;                                          //@synthesize access=_access - In the implementation block
@property (retain) CoreDAVItemWithHrefChildItem * hostURL;                                           //@synthesize hostURL=_hostURL - In the implementation block
@property (retain) CalDAVCalendarServerOrganizerItem * organizer;                                    //@synthesize organizer=_organizer - In the implementation block
@property (retain) CoreDAVLeafItem * summary;                                                        //@synthesize summary=_summary - In the implementation block
@property (retain) CalDAVSupportedCalendarComponentSet * supportedCalendarComponentSet;              //@synthesize supportedCalendarComponentSet=_supportedCalendarComponentSet - In the implementation block
-(id)organizer;
-(void)setOrganizer:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)uid;
-(void)setSupportedCalendarComponentSet:(id)arg1 ;
-(void)setHostURL:(id)arg1 ;
-(void)setInviteStatus:(id)arg1 ;
-(void)setCalendarPublic:(id)arg1 ;
-(void)setAccess:(id)arg1 ;
-(id)initForReplyWithUID:(id)arg1 href:(id)arg2 hostURL:(id)arg3 summary:(id)arg4 ;
-(BOOL)isComponentSupportedForString:(id)arg1 ;
-(id)calendarPublic;
-(id)copyParseRules;
-(id)inviteStatus;
-(id)hostURL;
-(id)supportedCalendarComponentSet;
-(id)access;
-(void)setUid:(id)arg1 ;
-(id)href;
-(void)setHref:(id)arg1 ;
-(id)summary;
-(void)setSummary:(id)arg1 ;
@end

