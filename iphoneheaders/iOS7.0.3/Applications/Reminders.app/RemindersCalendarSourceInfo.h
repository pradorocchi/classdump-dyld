/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Reminders.app/Reminders
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class EKSource, NSMutableArray;

@interface RemindersCalendarSourceInfo : NSObject {

	EKSource* _source;
	NSMutableArray* _array;

}

@property (readonly) NSMutableArray * calendarArray;              //@synthesize array=_array - In the implementation block
+(id)sortedGroupsOfCalendarsInEventStore:(id)arg1 ;
-(id)calendarArray;
-(BOOL)canAddList;
-(BOOL)_isNonEmpty;
-(BOOL)canDeleteList;
-(BOOL)shouldShowWhenEditingLists;
-(BOOL)shouldShowWhenViewingLists;
-(int)sortOrder;
-(id)initWithSource:(id)arg1 ;
-(id)title;
-(id)source;
-(void).cxx_destruct;
@end

