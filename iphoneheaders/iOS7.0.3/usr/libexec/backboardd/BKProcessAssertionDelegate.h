/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/backboardd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol BKProcessAssertionDelegate
@required
-(id)processAssertionDelegateDescription:(id)arg1;
-(void)processAssertion:(id)arg1 preventTaskSuspendChanged:(BOOL)arg2;
-(void)processAssertion:(id)arg1 preventCPUThrottleDownChanged:(BOOL)arg2;
-(void)processAssertion:(id)arg1 preventUIThrottleDownChanged:(BOOL)arg2;
-(void)processAssertion:(id)arg1 preventIdleSleepChanged:(BOOL)arg2;
-(void)processAssertion:(id)arg1 wantsForegroundResourcePriorityCountChange:(BOOL)arg2;
-(void)processAssertion:(id)arg1 preventSuspendOnSleepChanged:(BOOL)arg2;
-(void)processAssertionInvalidated:(id)arg1;
@end

