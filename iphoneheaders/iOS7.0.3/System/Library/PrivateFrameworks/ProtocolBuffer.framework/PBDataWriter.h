/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:19 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableData;

@interface PBDataWriter : NSObject {

	NSMutableData* _data;

}
-(unsigned)write:(const char*)arg1 maxLength:(unsigned)arg2 ;
-(void)dealloc;
-(id)init;
-(id)data;
-(void)writeDouble:(double)arg1 forTag:(unsigned short)arg2 ;
-(void)writeSfixed32:(int)arg1 forTag:(unsigned short)arg2 ;
-(void)writeInt64:(long long)arg1 forTag:(unsigned short)arg2 ;
-(void)writeBigEndianFixed16:(unsigned short)arg1 ;
-(void)writeBigEndianShortThenString:(id)arg1 ;
-(void)writeSfixed64:(long long)arg1 forTag:(unsigned short)arg2 ;
-(void)writeUint8:(unsigned char)arg1 ;
-(void)writeBigEndianFixed32:(unsigned)arg1 ;
-(void)writeProtoBuffer:(id)arg1 ;
-(void)writeInt8:(BOOL)arg1 ;
-(void)writeSint64:(long long)arg1 forTag:(unsigned short)arg2 ;
-(void)writeFixed64:(unsigned long long)arg1 forTag:(unsigned short)arg2 ;
-(void)writeData:(id)arg1 forTag:(unsigned short)arg2 ;
-(void)writeUint32:(unsigned)arg1 forTag:(unsigned short)arg2 ;
-(void)writeTag:(unsigned short)arg1 andType:(unsigned char)arg2 ;
-(void)writeBareVarint:(unsigned long long)arg1 ;
-(void)writeString:(id)arg1 forTag:(unsigned short)arg2 ;
-(void)writeBOOL:(BOOL)arg1 forTag:(unsigned short)arg2 ;
-(void)writeFixed32:(unsigned)arg1 forTag:(unsigned short)arg2 ;
-(void)writeFloat:(float)arg1 forTag:(unsigned short)arg2 ;
-(void)writeInt32:(int)arg1 forTag:(unsigned short)arg2 ;
-(void)writeSint32:(int)arg1 forTag:(unsigned short)arg2 ;
-(BOOL)writeData:(id)arg1 ;
-(void)writeUint64:(unsigned long long)arg1 forTag:(unsigned short)arg2 ;
@end

