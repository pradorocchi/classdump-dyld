/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:05:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol WDTaskManager <NSObject>
@required
-(void)task:(id)arg1 gotResult:(id)arg2;
-(void)taskSucceeded:(id)arg1;
-(void)taskFailed:(id)arg1;
-(void)task:(id)arg1 encounteredError:(id)arg2;
-(void)taskChangedState:(id)arg1;
@end

