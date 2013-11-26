/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:56 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSTimer, NSString;

@interface UIDelayedAction : NSObject {

	id m_target;
	SEL m_action;
	id m_userInfo;
	double m_delay;
	NSTimer* m_timer;
	BOOL m_canceled;
	NSString* m_runLoopMode;

}
-(void)dealloc;
-(void)setTarget:(id)arg1 ;
-(id)userInfo;
-(id)target;
-(void)touchWithDelay:(double)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3 delay:(double)arg4 mode:(id)arg5 ;
-(void)timerFired:(id)arg1 ;
-(void)unschedule;
-(void)cancel;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3 delay:(double)arg4 ;
-(void)touch;
-(BOOL)scheduled;
-(double)delay;
@end

