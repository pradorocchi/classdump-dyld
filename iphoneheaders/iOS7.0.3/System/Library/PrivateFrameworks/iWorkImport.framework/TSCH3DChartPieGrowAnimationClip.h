/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartSeparateCapGrowAnimationClip.h>

@interface TSCH3DChartPieGrowAnimationClip : TSCH3DChartSeparateCapGrowAnimationClip {

	BOOL mUseDiscard;

}

@property (assign,nonatomic) BOOL useDiscard; 
-(BOOL)useDiscard;
-(void)setUseDiscard:(BOOL)arg1 ;
-(id)clipPlaneEffect;
-(void)setupElementBodyForGrowState:(ChartGrowAnimationState*)arg1 info:(const ChartAnimationElementInfo*)arg2 ;
-(BOOL)setupElementCapForGrowState:(ChartGrowAnimationState*)arg1 info:(const ChartAnimationElementInfo*)arg2 ;
@end

