/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:02 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol NSDeserializerStream
@required
-(id)initFromMemoryNoCopy:(const void*)arg1 length:(unsigned)arg2 freeWhenDone:(BOOL)arg3;
-(int)readInt;
-(unsigned)readAlignedDataSize;
-(void)readData:(void*)arg1 length:(unsigned)arg2;
@end

