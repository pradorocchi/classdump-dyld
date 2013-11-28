/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface TDLogger : NSObject {

	NSObject<OS_dispatch_queue>* _loggingQueue;
	int _verbosity;

}

@property (assign,nonatomic) int verbosity;              //@synthesize verbosity=_verbosity - In the implementation block
+(id)logger;
-(void)dealloc;
-(id)init;
-(int)verbosity;
-(void)logMessage:(id)arg1 whenVerbosity:(int)arg2 ;
-(void)logExtra:(id)arg1 ;
-(void)logInfo:(id)arg1 ;
-(void)logWarning:(id)arg1 ;
-(void)logExtraWithFormat:(id)arg1 ;
-(void)logInfoWithFormat:(id)arg1 ;
-(void)logWarningWithFormat:(id)arg1 ;
-(void)logErrorWithFormat:(id)arg1 ;
-(BOOL)isVerbosityLogErrorsOnly;
-(BOOL)isVerbosityLogWarningsAndErrors;
-(BOOL)isVerbosityLogEverything;
-(void)waitForLoggingToComplete;
-(void)setVerbosity:(int)arg1 ;
-(void)logError:(id)arg1 ;
@end
