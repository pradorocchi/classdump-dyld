/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSUReadChannel.h>
#import <iWorkImport/TSUStreamReadChannel.h>

@protocol TSUReadChannel;
@class ;

@interface TSUReadChannelToStreamReadChannelAdapter : NSObject <TSUReadChannel, TSUStreamReadChannel> {

	<TSUReadChannel>* _readChannel;

}
-(void)setLowWater:(unsigned long)arg1 ;
-(void)readFromOffset:(long long)arg1 length:(unsigned long)arg2 queue:(id)arg3 handler:(/*^block*/ id)arg4 ;
-(void)readWithQueue:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)addBarrier:(/*^block*/ id)arg1 ;
-(id)initWithReadChannel:(id)arg1 ;
-(void)close;
-(void).cxx_destruct;
@end

