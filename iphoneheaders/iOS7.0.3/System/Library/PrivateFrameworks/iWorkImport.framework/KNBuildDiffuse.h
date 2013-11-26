/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNAnimationEffect.h>
#import <iWorkImport/KNFrameBuildAnimator.h>

@class KNBuildDiffuseSystem, TSDGLShader, TSDGLDataBuffer;

@interface KNBuildDiffuse : KNAnimationEffect <KNFrameBuildAnimator> {

	KNBuildDiffuseSystem* mDiffuseSystem;
	TSDGLShader* mDiffuseShader;
	CATransform3D mBaseTransform;
	TSDGLDataBuffer* mQuadDataBuffer;
	TSDGLShader* mQuadShader;
	CGRect mDrawableFrame;
	CGRect mFrameRect;

}
+(id)animationFilter;
+(int)animationCategory;
+(id)supportedTypes;
+(id)localizedMenuString:(int)arg1 ;
+(unsigned)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(BOOL)requiresSingleTexturePerStage;
+(id)defaultAttributes;
+(id)animationName;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)animationDidEndWithContext:(id)arg1 ;
-(void)renderFrameWithContext:(id)arg1 ;
-(CGRect)frameOfEffectWithFrame:(CGRect)arg1 context:(id)arg2 ;
-(void)p_setupParticleSystemWithImage:(id)arg1 build:(id)arg2 ;
-(void)dealloc;
@end

