/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIViewController.h>
#import <EventKitUI/EKEventViewDelegate.h>
#import <AddressBookUI/ABPersonViewControllerDelegate.h>
#import <EventKitUI/EKDayTimeViewDelegate.h>
#import <MobileCal/MainViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <MobileCal/WeekViewDataSource.h>
#import <MobileCal/WeekGroupViewDelegate.h>
#import <EventKitUI/EKEventGestureControllerDelegate.h>

@protocol WeekViewControllerDelegate;
@class CalendarModel, EKCalendarDate, UIScrollView, UIView, NSTimer, , EKEventGestureController, NSMutableArray, WeekTimeView;

@interface WeekViewController : UIViewController <EKEventViewDelegate, ABPersonViewControllerDelegate, EKDayTimeViewDelegate, MainViewController, UIScrollViewDelegate, WeekViewDataSource, WeekGroupViewDelegate, EKEventGestureControllerDelegate> {

	CalendarModel* _model;
	EKCalendarDate* _displayedDate;
	EKCalendarDate* _referenceWeekStart;
	float _weekWidth;
	NSRange _visibleRange;
	CGSize _lastBoundsSize;
	BOOL _viewIsVisible;
	BOOL _initialShow;
	BOOL _updatingHeaderHeights;
	BOOL _updatingAllDayContentOffset;
	int _lastScrollPositionSecond;
	float _cachedHeaderHeight;
	int _currentlyDisplayedMonth;
	BOOL _isInspectingEvent;
	UIScrollView* _weekScroller;
	UIView* _allDayDividerLineView;
	NSTimer* _timeMarkerTimer;
	BOOL _receiveTapsInHeader;
	BOOL _displaysDatesSnappedToWeekBoundaries;
	<WeekViewControllerDelegate>* _delegate;
	EKEventGestureController* _eventGestureController;
	NSMutableArray* _visibleWeeks;
	NSMutableArray* _reusableViews;
	WeekTimeView* _timeView;

}

@property (nonatomic,copy) EKCalendarDate * displayedDate; 
@property (assign,nonatomic,__weak) <WeekViewControllerDelegate> * delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL receiveTapsInHeader;                                         //@synthesize receiveTapsInHeader=_receiveTapsInHeader - In the implementation block
@property (assign,nonatomic) int firstVisibleSecond; 
@property (nonatomic,readonly) CalendarModel * model; 
@property (nonatomic,readonly) EKEventGestureController * eventGestureController;              //@synthesize eventGestureController=_eventGestureController - In the implementation block
@property (nonatomic,retain) NSMutableArray * visibleWeeks;                                    //@synthesize visibleWeeks=_visibleWeeks - In the implementation block
@property (nonatomic,retain) NSMutableArray * reusableViews;                                   //@synthesize reusableViews=_reusableViews - In the implementation block
@property (nonatomic,retain) WeekTimeView * timeView;                                          //@synthesize timeView=_timeView - In the implementation block
@property (assign,nonatomic) BOOL displaysDatesSnappedToWeekBoundaries;                        //@synthesize displaysDatesSnappedToWeekBoundaries=_displaysDatesSnappedToWeekBoundaries - In the implementation block
-(void)_selectedDateChanged:(id)arg1 ;
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 showDetails:(BOOL)arg3 ;
-(void)_updateBackButtonOnBackViewControllerToDate:(id)arg1 ;
-(BOOL)allowsOverriddenRightNavigationBarItems;
-(BOOL)allowsOverriddenToolbarItems;
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 ;
-(void)selectDate:(id)arg1 animated:(BOOL)arg2 ;
-(id)bestDateForNewEvent;
-(id)timeView;
-(void)setDisplayedDate:(id)arg1 ;
-(id)weekView:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3 ;
-(id)viewForEvent:(id)arg1 ;
-(void)emptySpaceClickedOnDate:(id)arg1 ;
-(void)weekAllDayView:(id)arg1 occurrenceClicked:(id)arg2 onDay:(double)arg3 ;
-(void)weekGroupDidScroll:(id)arg1 ;
-(void)weekGroupAllDaySectionDidScroll:(id)arg1 ;
-(void)weekGroup:(id)arg1 didReceiveTapForDate:(id)arg2 ;
-(id)weekGroupForWeekBefore:(id)arg1 ;
-(id)weekGroupForWeekAfter:(id)arg1 ;
-(void)weekGroup:(id)arg1 didSelectEvent:(id)arg2 ;
-(void)emptySpaceClick;
-(void)weekGroupViewDidLayout:(id)arg1 ;
-(float)headerVerticalOffset;
-(id)displayedDate;
-(BOOL)displaysDatesSnappedToWeekBoundaries;
-(void)_scrollToDisplayedDateAnimated:(BOOL)arg1 shouldSnapToWeeks:(BOOL)arg2 ;
-(void)layoutCells;
-(void)resizeWeekGroupsIfNeededForOrientation:(int)arg1 ;
-(void)_occurrencesChanged:(id)arg1 ;
-(void)_significantTimeChanged:(id)arg1 ;
-(void)_scrollToCurrentTimeOfDayAnimated:(BOOL)arg1 ;
-(void)_adjustVisibleOccurrenceLabelsAnimated:(BOOL)arg1 ;
-(id)_viewForEvent:(id)arg1 ;
-(void)scrollEventIntoView:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/ id)arg3 ;
-(void)setDisplayedDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)occurrenceClicked:(id)arg1 onDay:(double)arg2 ;
-(CGRect)_boundsForWeek:(int)arg1 ;
-(id)_dateForWeek:(int)arg1 ;
-(BOOL)receiveTapsInHeader;
-(void)setReceiveTapsInHeader:(BOOL)arg1 ;
-(void)customizeWeekGroupView:(id)arg1 ;
-(NSRange)_visibleRangeForOffset:(float)arg1 ;
-(void)_reuseWeekView:(id)arg1 ;
-(id)_createPreparedViewForWeek:(int)arg1 ;
-(void)_updateHeaderHeights;
-(id)dayDateAtPoint:(CGPoint)arg1 ;
-(id)_snapDateForOffset:(CGPoint)arg1 snapToWeeks:(BOOL)arg2 ;
-(float)_xOffsetForDate:(id)arg1 ;
-(void)_draggingDone;
-(id)leftmostDateComponents;
-(id)centerDateComponents;
-(void)dimOccurrence:(id)arg1 ;
-(void)synchronizeWeekGroupScrollingToWeek:(id)arg1 ;
-(id)_weekGroupForEvent:(id)arg1 ;
-(void)_scrollToSecond:(int)arg1 animated:(BOOL)arg2 completion:(/*^block*/ id)arg3 ;
-(id)_weekGroupForPoint:(CGPoint)arg1 ;
-(void)highlightDayViewCalendarDate:(id)arg1 isAllDay:(BOOL)arg2 ;
-(id)_firstWeekGroup;
-(void)didEditEvent:(id)arg1 ;
-(void)_removeDateHighlight;
-(float)_widthForDayAtPoint:(CGPoint)arg1 isMovingRight:(BOOL)arg2 ;
-(void)tappedOnDate:(id)arg1 ;
-(id)_onScreenWeekGroupView;
-(void)snapTargetScrollOffset:(inout CGPoint*)arg1 withVelocity:(CGPoint)arg2 snapToWeeksOnFlicks:(BOOL)arg3 ;
-(void)undimOccurrence:(id)arg1 ;
-(void)eventGestureControllerDidMoveAfterEditorChange:(id)arg1 ;
-(void)updateTimeViewMonthString;
-(BOOL)dateIsVisible:(id)arg1 ;
-(id)eventGestureController;
-(id)visibleWeeks;
-(void)setVisibleWeeks:(id)arg1 ;
-(id)reusableViews;
-(void)setReusableViews:(id)arg1 ;
-(void)setTimeView:(id)arg1 ;
-(void)setDisplaysDatesSnappedToWeekBoundaries:(BOOL)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)eventViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(void)setFirstVisibleSecond:(int)arg1 ;
-(void)_startMarkerTimer;
-(void)_invalidateMarkerTimer;
-(int)firstVisibleSecond;
-(id)dateAtPoint:(CGPoint)arg1 isAllDay:(BOOL*)arg2 requireAllDayRegionInsistence:(BOOL)arg3 ;
-(CGRect)currentTimeRectInView:(id)arg1 ;
-(id)occurrenceViewAtPoint:(CGPoint)arg1 ;
-(id)dateAtPoint:(CGPoint)arg1 isAllDay:(BOOL*)arg2 ;
-(CGPoint)pointAtDate:(double)arg1 isAllDay:(BOOL)arg2 ;
-(void)_highlightDayViewDate:(double)arg1 isAllDay:(BOOL)arg2 ;
-(id)touchTrackingViewForEventGestureController:(id)arg1 ;
-(id)occurrenceViewSuperviewForEventGestureController:(id)arg1 ;
-(float)timedRegionOriginForEventGestureController:(id)arg1 ;
-(float)computeXDragOffsetForEventGestureController:(id)arg1 currentX:(float)arg2 startX:(float)arg3 ;
-(BOOL)moreThanOneDayVisibleForEventGestureController:(id)arg1 ;
-(id)createOccurrenceViewForEventGestureController:(id)arg1 ;
-(void)eventGestureController:(id)arg1 adjustDraggingViewForAllDay:(BOOL)arg2 ;
-(id)createEventForEventGestureController:(id)arg1 ;
-(id)eventGestureController:(id)arg1 occurrenceViewAtPoint:(CGPoint)arg2 ;
-(float)eventGestureController:(id)arg1 yPositionPerhapsMatchingAllDayOccurrence:(id)arg2 atPoint:(CGPoint)arg3 ;
-(void)eventGestureController:(id)arg1 addViewToScroller:(id)arg2 isAllDay:(BOOL)arg3 ;
-(BOOL)eventGestureController:(id)arg1 isAllDayAtPoint:(CGPoint)arg2 requireInsistence:(BOOL)arg3 ;
-(double)eventGestureController:(id)arg1 dateAtPoint:(CGPoint)arg2 ;
-(CGPoint)eventGestureController:(id)arg1 pointAtDate:(double)arg2 isAllDay:(BOOL)arg3 ;
-(float)eventGestureController:(id)arg1 widthForOccurrenceViewOfDays:(unsigned)arg2 ;
-(float)eventGestureController:(id)arg1 heightForOccurrenceViewOfDuration:(double)arg2 allDay:(BOOL)arg3 ;
-(void)eventGestureController:(id)arg1 didSetUpAtDate:(double)arg2 isAllDay:(BOOL)arg3 ;
-(void)eventGestureController:(id)arg1 didMoveToDate:(double)arg2 isAllDay:(BOOL)arg3 ;
-(BOOL)eventGestureControllerShouldAllowLongPress:(id)arg1 ;
-(float)eventGestureController:(id)arg1 convertXForMargin:(float)arg2 ;
-(CGRect)marginFrameForEventGestureController:(id)arg1 ;
-(BOOL)eventGestureController:(id)arg1 didCommitOccurrence:(id)arg2 toDate:(double)arg3 isAllDay:(BOOL)arg4 span:(int)arg5 ;
-(void)eventGestureController:(id)arg1 didCancelEditingOccurrence:(id)arg2 fadedOut:(BOOL)arg3 ;
-(void)eventGestureController:(id)arg1 didSingleTapOccurrence:(id)arg2 ;
-(BOOL)didScrollWhenEventGestureController:(id)arg1 scrollTimerFiredToMoveLeft:(BOOL)arg2 right:(BOOL)arg3 vertically:(BOOL)arg4 towardPoint:(CGPoint)arg5 ;
-(void)editorDidSaveEvent:(id)arg1 ;
-(void)editorDidDeleteEvent:(id)arg1 ;
-(void)editorDidCancelEditingEvent:(id)arg1 ;
-(void)_updateTimeMarker;
-(void)tapReceived:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id)delegate;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(id)model;
-(void)_reloadData;
-(void)_localeChanged:(id)arg1 ;
-(void).cxx_destruct;
@end

