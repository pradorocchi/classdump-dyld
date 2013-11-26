/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSData;

@interface TSMTraceFileParser : NSObject {

	NSData* mData;
	TSMTraceRecord_s* mRecordBuffer;
	unsigned mOffset;
	unsigned mDataLength;

}
+(BOOL)dataIsTraceFile:(id)arg1 ;
+(id)parserWithData:(id)arg1 ;
-(TSMTraceRecord_s*)nextTraceRecord;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
@end

