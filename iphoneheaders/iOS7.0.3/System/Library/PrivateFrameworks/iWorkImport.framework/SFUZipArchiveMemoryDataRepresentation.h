/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OISFUDataRepresentation.h>
#import <OfficeImport/SFUZipArchiveDataRepresentation.h>

@class NSData;

@interface SFUZipArchiveMemoryDataRepresentation : OISFUDataRepresentation <SFUZipArchiveDataRepresentation> {

	NSData* mData;

}
-(void)dealloc;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(long long)dataLength;
-(id)inputStream;
-(id)bufferedInputStream;
-(BOOL)isReadable;
-(BOOL)hasSameLocationAs:(id)arg1 ;
-(id)bufferedInputStreamWithBufferSize:(unsigned long)arg1 ;
-(id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2 ;
-(id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2 ;
@end

