/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface TSCHMultiDataChartRepElementIndex : NSObject <NSCopying> {

	unsigned mSeriesIndex;
	unsigned mValueIndex;

}

@property (nonatomic,readonly) unsigned seriesIndex; 
@property (nonatomic,readonly) unsigned valueIndex; 
+(id)repElementIndexWithSeriesIndex:(unsigned)arg1 valueIndex:(unsigned)arg2 ;
-(id)initWithSeriesIndex:(unsigned)arg1 valueIndex:(unsigned)arg2 ;
-(id)seriesIndexSet;
-(id)valueIndexSet;
-(unsigned)valueIndex;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(unsigned)seriesIndex;
@end

