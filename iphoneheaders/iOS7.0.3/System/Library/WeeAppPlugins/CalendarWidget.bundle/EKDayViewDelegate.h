/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/WeeAppPlugins/CalendarWidget.bundle/CalendarWidget
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol EKDayViewDelegate <NSObject>
@optional
-(void)dayViewDidFinishScrollingToOccurrence:(id)arg1;
-(void)dayView:(id)arg1 firstVisibleSecondChanged:(unsigned)arg2;
-(void)dayView:(id)arg1 didSelectEvent:(id)arg2;
-(void)dayView:(id)arg1 didCreateOccurrenceViews:(id)arg2;
-(void)dayViewDidTapEmptySpace:(id)arg1;
@end

