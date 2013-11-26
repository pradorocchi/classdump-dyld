/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSString;

@interface TSUPerformanceTest : NSObject {

	NSString* mName;
	SEL mSelector;
	id mTarget;
	double mGoalTime;
	double mPrecision;
	BOOL mQuiet;
	TSUOpstat_s mTiming;
	BOOL mPassed;

}

@property (nonatomic,readonly) NSString * name; 
@property (assign,nonatomic) TSUOpstat_s timing; 
@property (assign,nonatomic) double goalTime; 
@property (assign,nonatomic) double precision; 
@property (assign,nonatomic) BOOL quiet; 
@property (nonatomic,readonly) BOOL passed; 
+(id)csvHeader;
-(id)initWithName:(id)arg1 selector:(SEL)arg2 target:(id)arg3 goalTime:(double)arg4 ;
-(void)setQuiet:(BOOL)arg1 ;
-(BOOL)passed;
-(BOOL)quiet;
-(id)csvString;
-(double)goalTime;
-(void)setGoalTime:(double)arg1 ;
-(double)precision;
-(void)setPrecision:(double)arg1 ;
-(void)dealloc;
-(id)name;
-(void)run;
-(void)report;
-(TSUOpstat_s)timing;
-(void)setTiming:(TSUOpstat_s)arg1 ;
@end

