/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SBRelativeDateTimerDelegate;
@class NSCalendar, NSTimer, NSDate, ;

@interface SBRelativeDateTimer : NSObject {

	NSCalendar* _gregorian;
	NSTimer* _timer;
	NSDate* _date;
	<SBRelativeDateTimerDelegate>* _delegate;
	int _currResolution;
	int _currValue;

}
+(void)invalidateTimer:(id)arg1 ;
+(void)addTimerToMainRunLoop:(id)arg1 ;
+(void)initialize;
-(void)_fireForEvent:(id)arg1 ;
-(void)_fireForLocaleEvent:(id)arg1 ;
-(void)fireAndSchedule;
-(void)_fireAndUpdateTimerIfNecessary;
-(id)_timeDifferenceFromDate:(id)arg1 ;
-(double)_nextFireInterval:(id)arg1 resolution:(int)arg2 comparedToNow:(int)arg3 ;
-(double)nextFireInterval;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)invalidate;
-(id)date;
-(void)setDate:(id)arg1 ;
@end

