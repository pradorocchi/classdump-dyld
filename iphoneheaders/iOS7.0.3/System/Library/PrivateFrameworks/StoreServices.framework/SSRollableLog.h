/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSFileHandle, SSLogFileOptions;

@interface SSRollableLog : NSObject {

	NSObject<OS_dispatch_queue>* _dispatchQueue;
	double _lastFileStatTime;
	NSFileHandle* _fileHandle;
	NSObject<OS_dispatch_source>* _fileObserverSource;
	SSLogFileOptions* _options;

}

@property (readonly) SSLogFileOptions * logOptions; 
-(void)dealloc;
-(void)writeString:(id)arg1 ;
-(id)initWithLogOptions:(id)arg1 ;
-(void)_openLogFile;
-(void)_checkLogFileSize;
-(void)_closeLogFile;
-(id)_logFilePathWithIndex:(int)arg1 ;
-(id)_activeLogFilePath;
-(void)_rollLogFiles;
-(id)logOptions;
@end

