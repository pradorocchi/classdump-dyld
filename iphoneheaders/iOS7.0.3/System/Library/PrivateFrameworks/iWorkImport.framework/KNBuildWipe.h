/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNWipeBase.h>
#import <iWorkImport/KNFrameBuildAnimator.h>

@interface KNBuildWipe : KNWipeBase <KNFrameBuildAnimator>
+(id)supportedTypes;
+(BOOL)requiresSingleTexturePerStage;
+(BOOL)isTransition;
+(id)defaultAttributes;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)renderFrameWithContext:(id)arg1 ;
-(CGRect)frameOfEffectWithFrame:(CGRect)arg1 context:(id)arg2 ;
@end

