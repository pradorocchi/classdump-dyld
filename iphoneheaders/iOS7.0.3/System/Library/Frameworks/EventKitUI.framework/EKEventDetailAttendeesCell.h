/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:48 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKitUI/EKEventDetailCell.h>

@class EKEventDetailAttendeesListView;

@interface EKEventDetailAttendeesCell : EKEventDetailCell {

	EKEventDetailAttendeesListView* _attendeesListView;

}
-(void)setAttendees:(id)arg1 ;
-(id)initWithEvent:(id)arg1 editable:(BOOL)arg2 ;
-(void)layoutForWidth:(float)arg1 position:(int)arg2 ;
-(id)_attendeesListView;
-(id)viewControllerForCell;
-(BOOL)update;
-(void).cxx_destruct;
@end

