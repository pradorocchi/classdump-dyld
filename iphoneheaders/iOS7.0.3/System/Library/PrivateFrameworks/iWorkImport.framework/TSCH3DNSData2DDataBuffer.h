/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3D2DDataBuffer.h>

@class NSData, NSMutableData;

@interface TSCH3DNSData2DDataBuffer : TSCH3D2DDataBuffer {

	NSData* mConstData;
	NSMutableData* mMutableData;

}

@property (nonatomic,readonly) NSData * NSData; 
+(id)bufferWithCapacityDimension:(const DataBuffer2DDimension*)arg1 mutableData:(id)arg2 ;
+(id)bufferWithCapacityDimension:(const DataBuffer2DDimension*)arg1 data:(id)arg2 ;
-(id)NSData;
-(unsigned)componentByteSize;
-(void)fillCapacity;
-(id)initWithCapacityDimension:(const DataBuffer2DDimension*)arg1 data:(id)arg2 ;
-(id)initWithCapacityDimension:(const DataBuffer2DDimension*)arg1 ;
-(id)initWithCapacityDimension:(const DataBuffer2DDimension*)arg1 mutableData:(id)arg2 ;
-(void)resizeFillDimension:(const DataBuffer2DDimension*)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(const void*)data;
-(int)componentType;
-(void*)mutableData;
@end

