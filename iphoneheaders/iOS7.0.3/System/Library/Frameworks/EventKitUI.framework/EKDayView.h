/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:49 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <EventKitUI/EKDayAllDayViewDelegate.h>
#import <EventKitUI/EKDayViewContentDelegate.h>
#import <EventKitUI/EKDayTimeViewDelegate.h>

@protocol EKDayViewDelegate, EKDayViewDataSource;
@class UIImageView, UIView, NSArray, NSDate, EKDayAllDayView, EKDayViewContent, EKDayTimeView, UIScrollAnimation, UIScrollView, NSTimer, , NSDateComponents, NSCalendar, UIColor, EKEvent;

@interface EKDayView : UIView <UIScrollViewDelegate, EKDayAllDayViewDelegate, EKDayViewContentDelegate, EKDayTimeViewDelegate> {

	int _orientation;
	double _dayStart;
	double _dayEnd;
	double _nextDSTTransition;
	BOOL _scrollbarShowsInside;
	BOOL _scrollingToOccurrence;
	BOOL _settingDate;
	BOOL _userScrolling;
	BOOL _scrollToOccurrencesOnNextReload;
	UIImageView* _topVerticalGridExtension;
	UIImageView* _bottomVerticalGridExtension;
	UIView* _bottomLine;
	NSArray* _existingTimedOcurrences;
	NSDate* _lastInspectedOccurrenceOnDate;
	CGSize _scrolledToFirstVisibleSecondForSize;
	EKDayAllDayView* _allDayView;
	EKDayViewContent* _dayContent;
	EKDayTimeView* _timeView;
	UIScrollAnimation* _scrollAnimation;
	UIScrollView* _scroller;
	NSTimer* _timeMarkerTimer;
	BOOL _allowsOccurrenceSelection;
	BOOL _alignsMidnightToTop;
	BOOL _shouldEverShowTimeIndicators;
	BOOL _usesVibrantGridDrawing;
	<EKDayViewDelegate>* _delegate;
	<EKDayViewDataSource>* _dataSource;
	NSDateComponents* _displayDate;
	NSCalendar* _calendar;
	int _outlineStyle;
	UIColor* _occurrenceTextBackgroundColor;

}

@property (assign,nonatomic,__weak) <EKDayViewDelegate> * delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) <EKDayViewDataSource> * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy) NSDateComponents * displayDate;                           //@synthesize displayDate=_displayDate - In the implementation block
@property (nonatomic,copy) NSCalendar * calendar;                                    //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) double dayStart;                                      //@synthesize dayStart=_dayStart - In the implementation block
@property (nonatomic,readonly) double dayEnd;                                        //@synthesize dayEnd=_dayEnd - In the implementation block
@property (assign,nonatomic) int firstVisibleSecond; 
@property (assign,nonatomic) BOOL allowsOccurrenceSelection;                         //@synthesize allowsOccurrenceSelection=_allowsOccurrenceSelection - In the implementation block
@property (assign,nonatomic) BOOL alignsMidnightToTop;                               //@synthesize alignsMidnightToTop=_alignsMidnightToTop - In the implementation block
@property (nonatomic,readonly) float scrollBarOffset; 
@property (nonatomic,readonly) NSArray * occurrenceViews; 
@property (nonatomic,retain) EKEvent * dimmedOccurrence; 
@property (nonatomic,readonly) EKDayAllDayView * allDayView; 
@property (nonatomic,readonly) float leftContentInset; 
@property (assign,nonatomic) BOOL shouldEverShowTimeIndicators;                      //@synthesize shouldEverShowTimeIndicators=_shouldEverShowTimeIndicators - In the implementation block
@property (assign,nonatomic) BOOL showsTimeLine; 
@property (assign,nonatomic) BOOL showsTimeMarker; 
@property (assign,nonatomic) BOOL eventsFillGrid; 
@property (assign,nonatomic) BOOL showsLeftBorder; 
@property (assign,nonatomic) BOOL allowsScrolling; 
@property (assign,nonatomic) int outlineStyle;                                       //@synthesize outlineStyle=_outlineStyle - In the implementation block
@property (assign,nonatomic) int occurrenceBackgroundStyle; 
@property (assign,nonatomic) NSRange hoursToRender; 
@property (nonatomic,retain) UIColor * timeViewTextColor; 
@property (nonatomic,retain) UIColor * gridLineColor; 
@property (nonatomic,retain) UIColor * occurrenceTitleColor; 
@property (nonatomic,retain) UIColor * occurrenceLocationColor; 
@property (nonatomic,retain) UIColor * occurrenceTextBackgroundColor;                //@synthesize occurrenceTextBackgroundColor=_occurrenceTextBackgroundColor - In the implementation block
@property (assign,nonatomic) BOOL usesVibrantGridDrawing;                            //@synthesize usesVibrantGridDrawing=_usesVibrantGridDrawing - In the implementation block
@property (nonatomic,readonly) float scrollOffset; 
@property (assign,nonatomic) CGPoint normalizedContentOffset; 
-(void)setAllowsOccurrenceSelection:(BOOL)arg1 ;
-(void)setEventsFillGrid:(BOOL)arg1 ;
-(id)occurrenceViews;
-(void)setShowsLeftBorder:(BOOL)arg1 ;
-(BOOL)showsLeftBorder;
-(void)dayViewContent:(id)arg1 didSelectEvent:(id)arg2 ;
-(id)occurrenceTitleColor;
-(id)occurrenceLocationColor;
-(id)occurrenceTextBackgroundColor;
-(int)occurrenceBackgroundStyle;
-(void)setOccurrenceBackgroundStyle:(int)arg1 ;
-(void)dayViewContent:(id)arg1 didTapPinnedOccurrence:(id)arg2 ;
-(void)dayViewContent:(id)arg1 didTapInEmptySpaceOnDay:(double)arg2 ;
-(id)selectedEvent;
-(void)selectEvent:(id)arg1 ;
-(void)setDimmedOccurrence:(id)arg1 ;
-(void)setOccurrenceTitleColor:(id)arg1 ;
-(void)setOccurrenceLocationColor:(id)arg1 ;
-(void)setOccurrenceTextBackgroundColor:(id)arg1 ;
-(void)dayOccurrenceViewClicked:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)occurrenceViewForEvent:(id)arg1 ;
-(BOOL)allowsOccurrenceSelection;
-(BOOL)eventsFillGrid;
-(id)dimmedOccurrence;
-(void)_localeChanged;
-(CGRect)_scrollerRect;
-(void)_timeViewTapped:(id)arg1 ;
-(void)setShowsTimeMarker:(BOOL)arg1 ;
-(void)_createAllDayView;
-(void)_adjustForDateOrCalendarChange;
-(void)setFirstVisibleSecond:(int)arg1 ;
-(BOOL)showsTimeLine;
-(void)_startMarkerTimer;
-(void)_invalidateMarkerTimer;
-(float)scrollBarOffset;
-(float)_verticalOffset;
-(void)updateMarkerPosition;
-(void)_disposeAllDayView;
-(void)_stopScrolling;
-(void)setShowsTimeLine:(BOOL)arg1 ;
-(BOOL)showsTimeMarker;
-(int)_secondAtPosition:(float)arg1 ;
-(int)firstVisibleSecond;
-(float)_positionOfSecond:(int)arg1 ;
-(void)firstVisibleSecondChanged;
-(NSRange)hoursToRender;
-(void)setHoursToRender:(NSRange)arg1 ;
-(void)setUsesVibrantGridDrawing:(BOOL)arg1 ;
-(void)_scrollToSecond:(int)arg1 animated:(BOOL)arg2 whenFinished:(/*^block*/ id)arg3 ;
-(void)_finishedScrollToSecond;
-(BOOL)alignsMidnightToTop;
-(void)_clearVerticalGridExtensionImageCache;
-(id)_generateVerticalGridExtensionImage;
-(void)scrollEventsIntoViewAnimated:(BOOL)arg1 ;
-(void)scrollToEvent:(id)arg1 animated:(BOOL)arg2 ;
-(double)dateAtPoint:(CGPoint)arg1 isAllDay:(BOOL*)arg2 requireAllDayRegionInsistence:(BOOL)arg3 ;
-(double)_adjustSecondForwardForDSTHole:(double)arg1 ;
-(double)_adjustSecondBackwardForDSTHole:(double)arg1 ;
-(double)highlightedHour;
-(void)setAllDayLabelHighlighted:(BOOL)arg1 ;
-(BOOL)isAllDayLabelHighlighted;
-(void)allDayView:(id)arg1 didSelectEvent:(id)arg2 ;
-(void)allDayViewDidLayoutSubviews:(id)arg1 ;
-(void)dayViewContent:(id)arg1 didCreateOccurrenceViews:(id)arg2 ;
-(void)occurrencePressed:(id)arg1 onDay:(double)arg2 ;
-(CGRect)currentTimeRectInView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 orientation:(int)arg2 displayDate:(id)arg3 backgroundColor:(id)arg4 opaque:(BOOL)arg5 scrollbarShowsInside:(BOOL)arg6 ;
-(void)adjustFrameToSpanToMidnightFromStartDate:(id)arg1 ;
-(void)setDisplayDate:(id)arg1 ;
-(void)setShouldEverShowTimeIndicators:(BOOL)arg1 ;
-(void)adjustForSignificantTimeChange;
-(BOOL)allowsScrolling;
-(id)timeViewTextColor;
-(void)setTimeViewTextColor:(id)arg1 ;
-(id)gridLineColor;
-(void)setGridLineColor:(id)arg1 ;
-(id)allDayView;
-(float)scrollOffset;
-(CGPoint)normalizedContentOffset;
-(void)setNormalizedContentOffset:(CGPoint)arg1 ;
-(void)scrollToDate:(id)arg1 animated:(BOOL)arg2 whenFinished:(/*^block*/ id)arg3 ;
-(SCD_Struct_EK5)_selectedDate;
-(void)dayContentView:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)dayAllDayView:(id)arg1 occurrenceViewClicked:(id)arg2 ;
-(void)bringEventToFront:(id)arg1 ;
-(void)insertViewForEvent:(id)arg1 belowViewForOtherEvent:(id)arg2 ;
-(void)setAlignsMidnightToTop:(BOOL)arg1 ;
-(void)resetLastSelectedOccurrencePoint;
-(float)yPositionPerhapsMatchingAllDayOccurrence:(id)arg1 ;
-(CGRect)rectForEvent:(id)arg1 ;
-(void)_notifyDelegateOfFinishedScrollingToOccurrence;
-(void)setScrollerYInset:(float)arg1 keepingYPointVisible:(float)arg2 ;
-(void)relayoutExistingTimedOccurrences;
-(id)occurrenceViewAtPoint:(CGPoint)arg1 ;
-(double)dateAtPoint:(CGPoint)arg1 isAllDay:(BOOL*)arg2 ;
-(CGPoint)pointAtDate:(double)arg1 isAllDay:(BOOL)arg2 ;
-(BOOL)scrollTowardPoint:(CGPoint)arg1 ;
-(float)allDayRegionHeight;
-(void)highlightHour:(double)arg1 ;
-(void)addViewToScroller:(id)arg1 isAllDay:(BOOL)arg2 ;
-(id)displayDate;
-(double)dayStart;
-(double)dayEnd;
-(BOOL)shouldEverShowTimeIndicators;
-(BOOL)usesVibrantGridDrawing;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(id)description;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id)dataSource;
-(id)delegate;
-(void)setTimeZone:(id)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setAllowsScrolling:(BOOL)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(void)setCalendar:(id)arg1 ;
-(id)calendar;
-(float)leftContentInset;
-(void).cxx_destruct;
-(int)outlineStyle;
-(void)setOutlineStyle:(int)arg1 ;
@end

