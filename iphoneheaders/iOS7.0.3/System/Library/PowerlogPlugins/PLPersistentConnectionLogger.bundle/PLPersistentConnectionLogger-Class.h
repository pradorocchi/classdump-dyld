/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:32:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PowerlogPlugins/PLPersistentConnectionLogger.bundle/PLPersistentConnectionLogger
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PowerlogLoggerSupport/PLLogger.h>

@interface PLPersistentConnectionLogger : PLLogger

@property (nonatomic,readonly) BOOL pushEnabled; 
@property (nonatomic,readonly) int pollingInterval; 
-(BOOL)pushEnabled;
-(void)dealloc;
-(id)init;
-(void)log;
-(int)pollingInterval;
@end

