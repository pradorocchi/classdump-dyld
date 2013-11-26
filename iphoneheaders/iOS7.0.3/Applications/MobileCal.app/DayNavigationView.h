/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <MobileCal/DayNavigationWeekScrollViewDelegate.h>

@protocol DayNavigationViewDelegate;
@class NSCalendar, NSTimeZone, NSDate, ScrollSpringFactory, DayNavigationWeekScrollView, DayTwoPartLabel, ;

@interface DayNavigationView : UIView <UIScrollViewDelegate, DayNavigationWeekScrollViewDelegate> {

	NSCalendar* _calendar;
	NSTimeZone* _timeZone;
	NSDate* _selectedDate;
	NSDate* _currentWeekDayLabelDate;
	ScrollSpringFactory* _springFactory;
	DayNavigationWeekScrollView* _weekScrollView;
	DayTwoPartLabel* _weekDayLabel;
	DayTwoPartLabel* _fadingWeekDayLabel;
	<DayNavigationViewDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <DayNavigationViewDelegate> * delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) DayNavigationWeekScrollView * weekScrollView; 
@property (nonatomic,readonly) DayTwoPartLabel * weekDayLabel; 
+(id)_weekdayFont;
-(void)pulseToday;
-(id)weekDayLabel;
-(id)_animateView:(id)arg1 toPosition:(CGPoint)arg2 setDelegate:(BOOL)arg3 ;
-(id)weekScrollView;
-(void)setSelectedDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateWeekDayLabelWithDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_stopPulsingToday;
-(BOOL)canAnimateToDate:(id)arg1 ;
-(void)_animateView:(id)arg1 toAlpha:(float)arg2 ;
-(BOOL)dayNavigationWeekScrollViewAllowedToChangeSelectedDate;
-(void)dayNavigationWeekScrollViewFailedToSelectDate;
-(void)dayNavigationWeekScrollView:(id)arg1 selectedDateChanged:(id)arg2 ;
-(id)initWithCalendar:(id)arg1 selectedDate:(id)arg2 cellFactory:(id)arg3 showWeekdayLabel:(BOOL)arg4 ;
-(void)significantTimeChangeOccurred;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(void)setCalendar:(id)arg1 ;
-(void).cxx_destruct;
@end

