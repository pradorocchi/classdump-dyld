/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartAxis.h>

@class NSNumber;

@interface TSCHChartValueAxis : TSCHChartAxis

@property (nonatomic,readonly) NSNumber * userMin; 
@property (nonatomic,readonly) NSNumber * userMax; 
+(id)axisForInfo:(id)arg1 ;
-(pair<TSCH3DAxisLabelEnumerator *, TSCH3DAxisLabelEnumerator *>)labelEnumeratorPair;
-(int)specificPropertyForGeneric:(int)arg1 ;
-(void)updateModelMinMaxInAnalysis:(id)arg1 ;
-(void)adjustMinMaxForDataRangeInAnalysis:(id)arg1 ;
-(id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg1 ;
-(BOOL)editableFormatForValueStrings;
-(id)g_genericToSpecificPropertyMap;
-(void)updateModelMinMaxForTrendLineOnSeries:(id)arg1 axisID:(id)arg2 analysis:(id)arg3 ;
-(void)updateModelMinMaxForErrorBarsOnSeries:(id)arg1 axisID:(id)arg2 analysis:(id)arg3 ;
-(id)userMin;
-(id)userMax;
-(id)p_computeMajorGridlines:(int)arg1 analysis:(id)arg2 ;
-(id)p_computeMajorGridlinesAutomaticallyInAnalysis:(id)arg1 forHorizChart:(BOOL)arg2 ;
-(double)p_calculateAxisDeltaFromSpread:(double)arg1 spreadRanges:(const SCD_Struct_TS447*)arg2 ;
-(SCD_Struct_TS448)p_axisDescFromPositiveMinValue:(double)arg1 positiveMaxValue:(double)arg2 spreadRanges:(const SCD_Struct_TS447*)arg3 ;
-(SCD_Struct_TS448)p_axisDescFromNegativeMinValue:(double)arg1 positiveMaxValue:(double)arg2 spreadRanges:(const SCD_Struct_TS447*)arg3 ;
-(SCD_Struct_TS448)p_axisDescFromFixedPositiveMinValue:(double)arg1 positiveMaxValue:(double)arg2 spreadRanges:(const SCD_Struct_TS447*)arg3 ;
-(SCD_Struct_TS448)p_axisDescFromFixedNegativeMinValue:(double)arg1 positiveMaxValue:(double)arg2 spreadRanges:(const SCD_Struct_TS447*)arg3 ;
-(SCD_Struct_TS448)p_axisDescFromPositiveMinValue:(double)arg1 fixedPositiveMaxValue:(double)arg2 spreadRanges:(const SCD_Struct_TS447*)arg3 ;
-(SCD_Struct_TS448)p_axisDescFromNegativeMinValue:(double)arg1 fixedPositiveMaxValue:(double)arg2 spreadRanges:(const SCD_Struct_TS447*)arg3 ;
-(SCD_Struct_TS448)p_axisDescFromFixedMinValue:(double)arg1 fixedMaxValue:(double)arg2 spreadRanges:(const SCD_Struct_TS447*)arg3 ;
-(SCD_Struct_TS448)p_axisDescFromMinValue:(double)arg1 maxValue:(double)arg2 userValues:(int)arg3 ;
-(SCD_Struct_TS448)p_calculateAxisDescFromMinValue:(double)arg1 maxValue:(double)arg2 userValues:(int)arg3 ;
-(void)p_includeZeroWithMinValue:(double*)arg1 maxValue:(double*)arg2 userValues:(int)arg3 ;
-(id)p_GetGenericToValuePropertyMap;
-(double)validateUserMinForDouble:(double)arg1 ;
-(double)validateUserMaxForDouble:(double)arg1 ;
-(void)dealloc;
-(id)defaultProperties;
@end

