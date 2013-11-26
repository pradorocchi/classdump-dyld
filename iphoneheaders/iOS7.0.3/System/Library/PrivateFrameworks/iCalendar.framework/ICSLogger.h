/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:50 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol ICSLoggingDelegate;
@class ;

@interface ICSLogger : NSObject {

	int _logCount;
	<ICSLoggingDelegate>* _loggingDelegate;

}
+(void)setDelegate:(id)arg1 ;
+(id)sharedInstance;
+(void)logAtLevel:(int)arg1 forTokenizer:(id)arg2 message:(id)arg3 ;
-(void)setDelegate:(id)arg1 ;
-(void)logAtLevel:(int)arg1 forTokenizer:(id)arg2 format:(id)arg3 args:(void*)arg4 ;
@end

