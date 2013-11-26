/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:48 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol PCGrowthAlgorithm <PCLoggingDelegate,NSObject>
@property (nonatomic,readonly) double currentKeepAliveInterval; 
@property (assign,nonatomic) double minimumKeepAliveInterval; 
@property (assign,nonatomic) double maximumKeepAliveInterval; 
@property (nonatomic,readonly) unsigned countOfGrowthActions; 
@property (nonatomic,readonly) NSDictionary * cacheInfo; 
@required
-(void)setMinimumKeepAliveInterval:(double)arg1;
-(void)setMaximumKeepAliveInterval:(double)arg1;
-(double)currentKeepAliveInterval;
-(double)minimumKeepAliveInterval;
-(double)maximumKeepAliveInterval;
-(void)processNextAction:(int)arg1;
-(id)initWithCacheInfo:(id)arg1 loggingIdentifier:(id)arg2 algorithmName:(id)arg3;
-(BOOL)useIntervalIfImprovement:(double)arg1;
-(unsigned)countOfGrowthActions;
-(id)cacheInfo;
@end

