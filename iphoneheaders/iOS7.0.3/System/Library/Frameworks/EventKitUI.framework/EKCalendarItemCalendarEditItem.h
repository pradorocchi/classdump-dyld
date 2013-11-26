/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:49 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKCalendarItemEditItem.h>

@interface EKCalendarItemCalendarEditItem : EKCalendarItemEditItem {

	unsigned _entityType;

}
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(BOOL)shouldAppearWithVisibility:(int)arg1 ;
-(BOOL)requiresReconfigurationOnCommit;
-(id)cellForSubitemAtIndex:(unsigned)arg1 inSubsection:(unsigned)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned)arg2 inSubsection:(unsigned)arg3 ;
-(BOOL)editItemViewControllerCommit:(id)arg1 ;
-(id)initWithEntityType:(unsigned)arg1 ;
-(BOOL)_shouldShowSourceForCalendar:(id)arg1 ;
-(id)init;
@end

