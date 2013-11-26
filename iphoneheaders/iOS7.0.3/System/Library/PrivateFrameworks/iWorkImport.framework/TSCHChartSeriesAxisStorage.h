/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCHChartGridAdapter, TSCHChartAxisID;

@interface TSCHChartSeriesAxisStorage : NSObject {

	TSCHChartGridAdapter* adapter;
	TSCHChartAxisID* axisID;

}

@property (nonatomic,retain) TSCHChartGridAdapter * adapter; 
@property (nonatomic,retain) TSCHChartAxisID * axisID; 
-(id)axisID;
-(id)valueAtIndex:(unsigned)arg1 multiDataSetIndex:(unsigned)arg2 ;
-(id*)valuesAtIndexes:(NSRange)arg1 multiDataSetIndex:(unsigned)arg2 ;
-(void)setValue:(id)arg1 atIndex:(unsigned)arg2 multiDataSetIndex:(unsigned)arg3 ;
-(void)setAdapter:(id)arg1 ;
-(void)setAxisID:(id)arg1 ;
-(id)adapter;
-(void)dealloc;
-(unsigned)numberOfValues;
@end

