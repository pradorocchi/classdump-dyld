/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:28:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PowerlogMain.framework/PowerlogMain
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <PowerlogMain/PowerlogMain-Structs.h>
@class PLEntry, NSDateFormatter, NSString;

@interface PowerlogMain : NSObject {

	PLEntry* _loggerList;
	_sFILE* logFile;
	NSDateFormatter* logTimestampFormatter;
	NSString* linkedLogPath;
	id rolloverTimer;
	int kQueue;
	int crashReportDirectoryDescriptor;
	int currentLogDirectoryDescriptor;
	CFRunLoopSourceRef kqueueDescriptorSource;
	CFFileDescriptorRef kqueueDescriptorRef;
	BOOL rotateDebugLogging;
	BOOL runLoopDebugLogging;
	BOOL _logToFile;
	BOOL _shouldKeepRunning;
	BOOL _bbPostProcessing;
	BOOL _bbPostProcessingNotify;
	BOOL _setupComplete;
	BOOL _exitRequested;
	NSString* _fileGUID;

}

@property (retain) NSString * fileGUID;                            //@synthesize fileGUID=_fileGUID - In the implementation block
@property (assign) BOOL setupComplete;                             //@synthesize setupComplete=_setupComplete - In the implementation block
@property (readonly) PLEntry * loggerList;                         //@synthesize loggerList=_loggerList - In the implementation block
@property (assign) BOOL logToFile;                                 //@synthesize logToFile=_logToFile - In the implementation block
@property (assign) BOOL shouldKeepRunning;                         //@synthesize shouldKeepRunning=_shouldKeepRunning - In the implementation block
@property (assign) BOOL exitRequested;                             //@synthesize exitRequested=_exitRequested - In the implementation block
@property (assign) BOOL basebandPostProcessing;                    //@synthesize bbPostProcessing=_bbPostProcessing - In the implementation block
@property (assign) BOOL basebandPostProcessingNotify;              //@synthesize bbPostProcessingNotify=_bbPostProcessingNotify - In the implementation block
+(void)stopSharedPowerlogMain;
+(id)sharedPowerlogMain;
+(BOOL)shouldRunPowerlogDependant;
+(BOOL)haveSharedPowerlogMain;
-(void)stopNotifications;
-(void)setupNotifications;
-(void)dealloc;
-(id)init;
-(void)run;
-(BOOL)setupComplete;
-(void)setSetupComplete:(BOOL)arg1 ;
-(void)setExitRequested:(BOOL)arg1 ;
-(void)setBasebandPostProcessing:(BOOL)arg1 ;
-(void)setBasebandPostProcessingNotify:(BOOL)arg1 ;
-(BOOL)setFileProtectionForPath:(id)arg1 withIdentifier:(id)arg2 ;
-(BOOL)shouldKeepRunning;
-(BOOL)exitRequested;
-(void)setupLoggers;
-(void)startLoggingToFile;
-(BOOL)logToFile;
-(void)watchCrashReportDirectories:(BOOL)arg1 ;
-(void)logFileCheck;
-(id)loggerList;
-(void)stopLoggingAndCloseFile;
-(void)runThread:(id)arg1 ;
-(short)currentLoggerMode;
-(void)fatalError:(id)arg1 withReason:(id)arg2 ;
-(id)currentLoggingModeString;
-(BOOL)fileIsUnlockedAtPath:(id)arg1 withIdentifier:(id)arg2 ;
-(BOOL)shouldLinkToCrashreporter;
-(BOOL)isFileDescripterMultiLinked:(_sFILE*)arg1 ;
-(BOOL)doesFileAtPathExist:(id)arg1 ;
-(id)fileGUID;
-(void)setFileGUID:(id)arg1 ;
-(id)rotatePowerlogDefaultStringValue;
-(BOOL)deleteFileAtPath:(id)arg1 ;
-(id)remainingStringFrom:(id)arg1 byRemovingPrefix:(id)arg2 byRemovingSuffix:(id)arg3 ;
-(void)setRolloverTimer:(id)arg1 ;
-(int)ComputeTimeFromNowFromDefaults:(id)arg1 ;
-(BOOL)archiveLogFile:(id)arg1 toFile:(id)arg2 atDir:(id)arg3 ;
-(void)DeleteOldFiles;
-(BOOL)basebandPostProcessing;
-(BOOL)basebandPostProcessingNotify;
-(id)logFileNameForTimestamp:(id)arg1 ;
-(BOOL)isSameHardLinkedFileAtPath:(id)arg1 asAtPath:(id)arg2 ;
-(BOOL)moveFileAtPath:(id)arg1 ;
-(BOOL)shouldRotateLogFilesWithPeriodStart:(id*)arg1 withRolloverDate:(id*)arg2 ;
-(BOOL)readLogFilePrefix:(id)arg1 buildVersion:(id*)arg2 logDate:(id*)arg3 ;
-(BOOL)dateInRange:(id)arg1 startInclusive:(id)arg2 endExclusive:(id)arg3 ;
-(void)logStateEvent:(id)arg1 existingLogDate:(id)arg2 periodStart:(id)arg3 rolloverDate:(id)arg4 ;
-(void)startLoggingToCurrentLog:(id)arg1 ;
-(void)generateLogGatheringFiles:(id)arg1 ;
-(BOOL)moveFileFromPath:(id)arg1 toPath:(id)arg2 ;
-(void)createNewCurrentLogWithTimestamp:(id)arg1 ;
-(void)blackListTodayAsFullMode;
-(void)rolloverTimerFired:(id)arg1 ;
-(void)addLoggerByName:(id)arg1 ;
-(void)setShouldKeepRunning:(BOOL)arg1 ;
-(void)logFileCheckFired:(id)arg1 ;
-(void)triggerAllLoggers:(id)arg1 ;
-(short)currentRunningMode;
-(void)generatePListForLog:(id)arg1 InCrashReporter:(id)arg2 ;
-(void)logDirectoryEventForFileDescriptor:(CFFileDescriptorRef)arg1 ;
-(void)powerlogExitRequested;
-(void)logStatusRequestFired:(id)arg1 ;
-(void)setLogToFile:(BOOL)arg1 ;
@end

