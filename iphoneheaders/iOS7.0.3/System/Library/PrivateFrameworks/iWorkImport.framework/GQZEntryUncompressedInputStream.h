/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/GQZEntryInputStream.h>

@protocol GQZArchiveInputStream;
@class ;

@interface GQZEntryUncompressedInputStream : NSObject <GQZEntryInputStream> {

	long long mOffset;
	long long mEnd;
	<GQZArchiveInputStream>* mInput;

}
-(id)initWithOffset:(long long)arg1 end:(long long)arg2 input:(id)arg3 ;
-(void)dealloc;
-(void)readToOwnBuffer:(const char**)arg1 size:(unsigned*)arg2 ;
-(unsigned long)readToBuffer:(char*)arg1 size:(unsigned long)arg2 ;
@end

