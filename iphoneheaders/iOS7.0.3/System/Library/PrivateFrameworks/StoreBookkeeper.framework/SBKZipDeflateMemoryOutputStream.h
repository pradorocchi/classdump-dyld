/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <StoreBookkeeper/StoreBookkeeper-Structs.h>
@class NSMutableData;

@interface SBKZipDeflateMemoryOutputStream : NSObject {

	NSMutableData* deflatedData;
	z_stream_s* zstream;
	char* _outputBuffer;
	int _bufferingSize;

}
+(id)dataByDeflatingData:(id)arg1 ;
-(void)dealloc;
-(id)close;
-(BOOL)writeBuffer:(const char*)arg1 size:(unsigned long)arg2 ;
-(id)initWithBufferingSize:(int)arg1 compressionType:(unsigned)arg2 ;
-(void).cxx_destruct;
@end

