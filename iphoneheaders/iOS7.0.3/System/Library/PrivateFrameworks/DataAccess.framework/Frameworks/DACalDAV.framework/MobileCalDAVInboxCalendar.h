/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DACalDAV/MobileCalDAVCalendar.h>

@class CalDiagInboxCollectionSync;

@interface MobileCalDAVInboxCalendar : MobileCalDAVCalendar {

	CalDiagInboxCollectionSync* _inboxCollectionSyncDiagnostics;

}

@property (nonatomic,readonly) CalDiagInboxCollectionSync * inboxCollectionSyncDiagnostics;              //@synthesize inboxCollectionSyncDiagnostics=_inboxCollectionSyncDiagnostics - In the implementation block
-(void)dealloc;
-(id)initWithCalendarURL:(id)arg1 calendar:(void*)arg2 principal:(id)arg3 title:(id)arg4 ;
-(id)etagsForItemURLs:(id)arg1 ;
-(BOOL)updateResourcesFromServer:(id)arg1 ;
-(BOOL)deleteResourcesAtURLs:(id)arg1 ;
-(BOOL)isScheduleInbox;
-(id)allItemURLs;
-(void)recordDiagnosticsForAccountSync:(id)arg1 ;
-(void*)_copyEventActionWithURL:(id)arg1 ;
-(void)setETag:(id)arg1 forInvitationAtURL:(id)arg2 uniqueIdentifier:(id)arg3 ;
-(id)inboxCollectionSyncDiagnostics;
-(BOOL)_removeInvitationWithURL:(id)arg1 ;
@end

