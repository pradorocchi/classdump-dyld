/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:05:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/Support/calaccessd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <calaccessd/calaccessd-Structs.h>
#import <Foundation/NSOperation.h>
#import <MobileCal/CalSearchDataSink.h>

@protocol OS_dispatch_semaphore;
@class ClientConnection, CalSearch, NSObject;

@interface CADCalSearchOperation : NSOperation <CalSearchDataSink> {

	ClientConnection* _connection;
	CalSearch* _search;
	NSObject<OS_dispatch_semaphore>* _finishedSemaphore;
	unsigned _replyID;
	long _lastIndex;

}
+(id)operationWithConnection:(id)arg1 filter:(CalFilterRef)arg2 replyID:(unsigned)arg3 ;
-(unsigned)replyID;
-(id)initWithConnection:(id)arg1 filter:(CalFilterRef)arg2 replyID:(unsigned)arg3 ;
-(bool)calSearchShouldStopSearching:(id)arg1 ;
-(void)calSearchComplete:(id)arg1 ;
-(void)calSearch:(id)arg1 foundOccurrences:(CFArrayRef)arg2 cachedDays:(CFArrayRef)arg3 cachedDaysIndexes:(CFArrayRef)arg4 ;
-(void)calSearch:(id)arg1 showResultsStartingOnDate:(double)arg2 ;
-(void)dealloc;
-(void)main;
@end

