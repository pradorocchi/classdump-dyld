/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol UIStatusBarStyleDelegate <NSObject>
@optional
-(void)statusBar:(id)arg1 didTriggerButtonType:(int)arg2 withAction:(int)arg3;

@required
-(int)statusBar:(id)arg1 styleForRequestedStyle:(int)arg2 overrides:(int)arg3;
-(void)statusBar:(id)arg1 willAnimateFromHeight:(float)arg2 toHeight:(float)arg3 duration:(double)arg4 animation:(int)arg5;
-(void)statusBar:(id)arg1 didAnimateFromHeight:(float)arg2 toHeight:(float)arg3 animation:(int)arg4;
@end

