/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKit/EKCalendarNotification.h>

@interface EKCalendarSharedCalendarNotification : EKCalendarNotification {

	int _sharingInvitationResponse;

}

@property (assign,nonatomic) int sharingInvitationResponse;              //@synthesize sharingInvitationResponse=_sharingInvitationResponse - In the implementation block
-(id)calendarFromEventStore:(id)arg1 ;
-(void)setSharingInvitationResponse:(int)arg1 ;
-(int)sharingInvitationResponse;
-(BOOL)needsAlert;
-(id)initWithType:(int)arg1 ;
@end

