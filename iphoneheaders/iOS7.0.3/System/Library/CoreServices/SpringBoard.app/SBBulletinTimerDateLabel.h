/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UILabel.h>
#import <SpringBoard/SBBulletinDateLabel.h>

@protocol SBDateLabelDelegate;
@class NSTimer, ;

@interface SBBulletinTimerDateLabel : UILabel <SBBulletinDateLabel> {

	double _fireTime;
	NSTimer* _tickTimer;
	BOOL _allDay;
	<SBDateLabelDelegate>* _delegate;
	int _labelType;

}

@property (assign,getter=isAllDay,nonatomic) BOOL allDay;                   //@synthesize allDay=_allDay - In the implementation block
@property (assign,nonatomic) <SBDateLabelDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int labelType;                                 //@synthesize labelType=_labelType - In the implementation block
@property (assign,nonatomic) BOOL isTimestamp; 
+(id)digitFont;
+(id)unitFont;
-(void)_updateText;
-(id)_formatDuration:(double)arg1 ;
-(void)_tickTimerFired:(id)arg1 ;
-(void)setStartDate:(id)arg1 withTimeZone:(id)arg2 ;
-(void)setEndDate:(id)arg1 withTimeZone:(id)arg2 ;
-(void)startCoalescingUpdates;
-(void)stopCoalescingUpdates;
-(int)labelType;
-(void)setLabelType:(int)arg1 ;
-(BOOL)isTimestamp;
-(void)setIsTimestamp:(BOOL)arg1 ;
-(void)_invalidateTimer;
-(BOOL)isAllDay;
-(void)setAllDay:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)prepareForReuse;
@end

