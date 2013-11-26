/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:49 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableArray, NSString, EKSource, NSArray, NSSet;

@interface EKGroupInfo : NSObject {

	NSMutableArray* _calendars;
	int _customGroupType;
	NSString* _customTitle;
	NSString* _customTitleAtBeginningOfSentence;
	NSString* _typeTitle;
	NSString* _title;
	NSString* _titleForBeginningOfSentence;
	BOOL _selected;
	BOOL _showSelectAllButton;
	EKSource* _source;

}

@property (nonatomic,retain) EKSource * source;                              //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL selected;                                  //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL showSelectAllButton;                       //@synthesize showSelectAllButton=_showSelectAllButton - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * typeTitle; 
@property (nonatomic,readonly) NSArray * calendarInfos; 
@property (nonatomic,readonly) NSSet * calendarSet; 
@property (nonatomic,readonly) NSSet * selectedCalendarSet; 
@property (nonatomic,readonly) unsigned numCalendars; 
@property (nonatomic,readonly) unsigned numSelectableCalendars; 
@property (nonatomic,readonly) unsigned numSelectedCalendars; 
@property (nonatomic,readonly) BOOL showAddCalendarButton; 
@property (nonatomic,readonly) BOOL showCalendarNameIfSolitary; 
@property (nonatomic,readonly) int sortOrder; 
@property (nonatomic,readonly) BOOL isSubscribed; 
-(BOOL)isSubscribed;
-(int)sortOrder;
-(id)calendarInfos;
-(BOOL)showSelectAllButton;
-(BOOL)showAddCalendarButton;
-(id)initWithSource:(id)arg1 ;
-(id)initWithCustomGroupType:(int)arg1 ;
-(id)calendarSet;
-(unsigned)numSelectedCalendars;
-(unsigned)numSelectableCalendars;
-(void)insertCalendarInfo:(id)arg1 ;
-(unsigned)numCalendars;
-(id)titleForBeginningOfSentence:(BOOL)arg1 ;
-(void)selectNone;
-(BOOL)showCalendarNameIfSolitary;
-(id)selectedCalendarSet;
-(void)setShowSelectAllButton:(BOOL)arg1 ;
-(void)setCustomTitle:(id)arg1 forBeginningOfSentence:(id)arg2 ;
-(void)removeCalendar:(id)arg1 ;
-(void)insertDeclinedEventsItem;
-(id)typeTitle;
-(id)calendarAtIndex:(unsigned)arg1 ;
-(id)copyCalendars;
-(id)init;
-(id)description;
-(id)title;
-(void)setSelected:(BOOL)arg1 ;
-(void)selectAll;
-(id)source;
-(void)setSource:(id)arg1 ;
-(BOOL)selected;
-(void).cxx_destruct;
@end

