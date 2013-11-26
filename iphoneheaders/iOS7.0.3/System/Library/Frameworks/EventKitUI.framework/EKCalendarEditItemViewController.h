/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:49 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>
#import <EventKitUI/EKCalendarChooserDelegate.h>

@class EKEventStore, EKCalendarChooser, EKCalendar;

@interface EKCalendarEditItemViewController : EKEditItemViewController <EKCalendarChooserDelegate> {

	EKEventStore* _store;
	EKCalendarChooser* _chooser;
	EKCalendar* _selectedCalendar;
	unsigned _entityType;
	BOOL _limitToSource;

}

@property (nonatomic,retain) EKCalendar * selectedCalendar; 
@property (assign,nonatomic) BOOL limitToSource;                         //@synthesize limitToSource=_limitToSource - In the implementation block
-(id)initWithFrame:(CGRect)arg1 store:(id)arg2 styleProvider:(id)arg3 entityType:(unsigned)arg4 ;
-(void)setSelectedCalendar:(id)arg1 ;
-(id)selectedCalendar;
-(id)initWithFrame:(CGRect)arg1 store:(id)arg2 styleProvider:(id)arg3 ;
-(void)calendarChooserSelectionDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 store:(id)arg2 ;
-(BOOL)limitToSource;
-(void)setLimitToSource:(BOOL)arg1 ;
-(CGSize)preferredContentSize;
-(void)loadView;
-(void).cxx_destruct;
@end

