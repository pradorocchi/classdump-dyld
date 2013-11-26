/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartAnimationClip.h>

@interface TSCH3DChartRotationAnimationClip : TSCH3DChartAnimationClip {

	tvec3<float> mBegin;
	tvec3<float> mEnd;

}

@property (assign,nonatomic) tvec3<float> begin; 
@property (assign,nonatomic) tvec3<float> end; 
-(void)willRunWithScene:(id)arg1 context:(id)arg2 layers:(id)arg3 ;
-(void)setBegin:(tvec3<float>)arg1 ;
-(tvec3<float>)begin;
-(tvec3<float>)end;
-(id).cxx_construct;
-(void)setEnd:(tvec3<float>)arg1 ;
@end

