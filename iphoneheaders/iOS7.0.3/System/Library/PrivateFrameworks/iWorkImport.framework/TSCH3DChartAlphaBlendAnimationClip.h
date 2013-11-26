/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartAnimationClip.h>

@interface TSCH3DChartAlphaBlendAnimationClip : TSCH3DChartAnimationClip {

	id mLayerKey;
	BOOL mDelayOpaque;
	BOOL mBlendOpaque;
	BOOL mAlwaysRender;

}

@property (nonatomic,retain) id layerKey; 
@property (assign,nonatomic) BOOL delayOpaque; 
@property (assign,nonatomic) BOOL blendOpaque; 
@property (assign,nonatomic) BOOL alwaysRender; 
-(void)didUpdateAnimationTimeForContext:(id)arg1 layers:(id)arg2 ;
-(void)willRunWithScene:(id)arg1 context:(id)arg2 layers:(id)arg3 ;
-(void)didGenerateShaderEffectsForSeriesAtIndex:(const tvec2<int>*)arg1 effects:(id)arg2 sceneObject:(id)arg3 pipeline:(id)arg4 context:(id)arg5 ;
-(ElementRenderPass)renderPassForSceneObject:(id)arg1 ;
-(ElementRenderPass)renderPassForElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 context:(id)arg3 ;
-(void)didTransformElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 context:(id)arg3 ;
-(BOOL)willSubmitElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 context:(id)arg3 ;
-(void)didGenerateShaderEffects:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 context:(id)arg4 ;
-(BOOL)willSubmitSceneObject:(id)arg1 pipeline:(id)arg2 context:(id)arg3 ;
-(BOOL)willSubmitLabelForSceneObject:(id)arg1 labelRenderInfo:(const ChartLabelsContainingLabelRenderInfo*)arg2 context:(id)arg3 ;
-(void)didSubmitSceneObject:(id)arg1 pipeline:(id)arg2 ;
-(BOOL)renderPassDelayDisallowedForSceneObject:(id)arg1 pipeline:(id)arg2 ;
-(void)protected_addShaderEffect:(id)arg1 ;
-(float)p_updateUniform:(id)arg1 context:(id)arg2 ;
-(void)p_updateOpacityForLayers:(id)arg1 context:(id)arg2 ;
-(float)protected_elementAlphaForContext:(id)arg1 ;
-(id)layerKey;
-(void)setLayerKey:(id)arg1 ;
-(BOOL)delayOpaque;
-(void)setDelayOpaque:(BOOL)arg1 ;
-(BOOL)blendOpaque;
-(void)setBlendOpaque:(BOOL)arg1 ;
-(BOOL)alwaysRender;
-(void)setAlwaysRender:(BOOL)arg1 ;
-(void)dealloc;
@end

