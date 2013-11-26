/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCHChartInfo;

@interface TSCH3DAbstractLimitingSeriesUpgrader : NSObject {

	TSCHChartInfo* mChartInfo;
	/*^block*/ id mWillModifyBlock;

}

@property (nonatomic,copy) id willModifyBlock; 
+(id)upgraderWithChartInfo:(id)arg1 ;
+(float)depthFactorForAdjustingNumberOfSeries:(unsigned)arg1 chartType:(id)arg2 fromOldLimitingSeries:(unsigned)arg3 toNewLimitingSeries:(unsigned)arg4 ;
+(BOOL)chartTypeUsesSeriesLimiting:(id)arg1 ;
-(unsigned)numberOfSeries;
-(SCD_Struct_TS407)oldLayoutSettings;
-(void)mutateInfoWithContainingViewport:(id)arg1 scene:(id)arg2 ;
-(void)setWillModifyBlock:(/*^block*/ id)arg1 ;
-(id)initWithChartInfo:(id)arg1 ;
-(void)configureScene:(id)arg1 ;
-(id)constantDepthInfoChartScaleForInfoChartScale:(id)arg1 ;
-(void)mutateInfoWithMutations:(id)arg1 ;
-(id)adjustedScaleFromLayoutSettings:(const SCD_Struct_TS407*)arg1 toLayoutSettings:(const SCD_Struct_TS407*)arg2 ;
-(SCD_Struct_TS407)upgradedLayoutSettings;
-(id)configuredSceneWithLayoutSettings:(SCD_Struct_TS407)arg1 ;
-(void)mutateInfoByAdjustingScaleFromLayoutSettings:(const SCD_Struct_TS407*)arg1 toLayoutSettings:(const SCD_Struct_TS407*)arg2 ;
-(/*^block*/ id)willModifyBlock;
-(void)dealloc;
-(void)upgrade;
@end

