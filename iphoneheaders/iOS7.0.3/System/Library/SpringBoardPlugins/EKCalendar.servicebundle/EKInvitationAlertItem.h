/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/EKCalendar.servicebundle/EKCalendar
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EKCalendar/EKAlertItem.h>

@interface EKInvitationAlertItem : EKAlertItem {

	int _count;

}
+(id)_activeItems;
-(id)urlForReveal;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(id)initWithCount:(int)arg1 ;
-(int)count;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(int)status;
-(void)performUnlockAction;
@end

