/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:54 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSData;

@interface PTPEndDataPacket : NSObject {

	unsigned short _operationCode;
	unsigned long _transactionID;
	NSData* _data;

}
-(void)dealloc;
-(id)description;
-(id)data;
-(void)setData:(id)arg1 ;
-(unsigned long)transactionID;
-(id)contentForTCP;
-(id)initWithTCPBuffer:(void*)arg1 ;
-(unsigned short)operationCode;
-(id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 andData:(id)arg3 ;
-(void)setTransactionID:(unsigned long)arg1 ;
-(id)initWithUSBBuffer:(void*)arg1 ;
-(id)contentForUSB;
-(id)contentForUSBUsingBuffer:(void*)arg1 capacity:(unsigned long)arg2 ;
-(void)setOperationCode:(unsigned short)arg1 ;
@end

