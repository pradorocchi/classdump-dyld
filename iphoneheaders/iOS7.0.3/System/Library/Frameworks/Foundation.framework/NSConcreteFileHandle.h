/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:54 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFileHandle.h>

@protocol OS_dispatch_source, OS_dispatch_data, OS_dispatch_queue;
@class NSObject;

@interface NSConcreteFileHandle : NSFileHandle {

	int _fd;
	unsigned short _flags;
	CFRunLoopSourceRef _source;
	CFRunLoopRef _rl;
	unsigned short _activity;
	int _error;
	int _resultSocket;
	NSObject<OS_dispatch_source>* _dsrc;
	NSObject<OS_dispatch_data>* _resultData;
	NSObject<OS_dispatch_queue>* _fhQueue;
	/*^block*/ id _readabilityHandler;
	/*^block*/ id _writeabilityHandler;
	NSObject<OS_dispatch_source>* _readMonitoringSource;
	NSObject<OS_dispatch_source>* _writeMonitoringSource;
	NSObject<OS_dispatch_queue>* _monitoringQueue;

}
-(id)initWithFileDescriptor:(int)arg1 closeOnDealloc:(BOOL)arg2 ;
-(id)initWithPath:(id)arg1 flags:(int)arg2 createMode:(int)arg3 error:(id*)arg4 ;
-(id)initWithPath:(id)arg1 flags:(int)arg2 createMode:(int)arg3 ;
-(id)initWithURL:(id)arg1 flags:(int)arg2 createMode:(int)arg3 error:(id*)arg4 ;
-(id)availableData;
-(id)readDataToEndOfFile;
-(unsigned long long)offsetInFile;
-(void)truncateFileAtOffset:(unsigned long long)arg1 ;
-(void)synchronizeFile;
-(/*^block*/ id)writeabilityHandler;
-(void)setWriteabilityHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)readabilityHandler;
-(void)setReadabilityHandler:(/*^block*/ id)arg1 ;
-(void)_locked_clearHandler:(/*^block*/ id*)arg1 forSource:(id*)arg2 ;
-(void)_cancelDispatchSources;
-(void)_commonDealloc;
-(void)performActivity:(int)arg1 modes:(id)arg2 ;
-(void)readInBackgroundAndNotifyForModes:(id)arg1 ;
-(void)readToEndOfFileInBackgroundAndNotifyForModes:(id)arg1 ;
-(void)acceptConnectionInBackgroundAndNotifyForModes:(id)arg1 ;
-(void)waitForDataInBackgroundAndNotifyForModes:(id)arg1 ;
-(id)_monitor:(int)arg1 ;
-(unsigned)readDataOfLength:(unsigned)arg1 buffer:(char*)arg2 ;
-(void)setPort:(id)arg1 ;
-(void)readInBackgroundAndNotify;
-(void)readToEndOfFileInBackgroundAndNotify;
-(void)acceptConnectionInBackgroundAndNotify;
-(void)waitForDataInBackgroundAndNotify;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)readDataOfLength:(unsigned)arg1 ;
-(unsigned long long)seekToEndOfFile;
-(id)initWithFileDescriptor:(int)arg1 ;
-(int)fileDescriptor;
-(void)seekToFileOffset:(unsigned long long)arg1 ;
-(void)finalize;
-(id)port;
-(void)writeData:(id)arg1 ;
-(void)closeFile;
@end

