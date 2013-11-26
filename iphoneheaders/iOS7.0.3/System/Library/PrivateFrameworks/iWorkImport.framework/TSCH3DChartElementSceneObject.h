/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DSceneObject.h>

@interface TSCH3DChartElementSceneObject : TSCH3DSceneObject
+(BOOL)isHorizontalChart;
+(void)setLowDetailedGeometriesForScene:(id)arg1 ;
+(id)scenePropertiesKey;
+(BOOL)shouldCreateMeshSeriesStorage;
+(TSCH3DScenePart)partWithEnumerator:(id)arg1 layoutSettings:(SCD_Struct_TS339)arg2 ;
+(id)resetSeriesStorage:(id)arg1 forSeries:(id)arg2 ;
-(BOOL)canOptimizePositiveOnlyForGrowAnimation;
-(float)capFudgeForGrowAnimation;
-(float)clipFudgeForGrowAnimation;
-(id)elementPropertiesFromScene:(id)arg1 ;
-(float)chartOpacityForScene:(id)arg1 ;
-(BOOL)shouldDelayForChartOpacity:(float)arg1 ;
-(void)setTransparencyBlendingForProcessor:(id)arg1 ;
-(id)areaClipPlaneEffect;
-(id)scenePropertiesKey;
-(BOOL)growNeedsPerElementAlphaBlendingForDeliveryStyle:(unsigned)arg1 ;
-(void)renderTwoPassGeometry:(BOOL)arg1 processor:(id)arg2 renderBlock:(/*^block*/ id)arg3 ;
-(void)addZAxisAnimationToClips:(id)arg1 scene:(id)arg2 ;
-(void)p_addZAxisAnimationToClips:(id)arg1 scene:(id)arg2 zStart:(float)arg3 ;
-(GeometryResource)geometryForSeries:(id)arg1 index:(const tvec2<int>*)arg2 scene:(id)arg3 ;
-(void)postAddDataToGeometryResourceAnimationData:(id)arg1 ;
-(BOOL)delayOpaqueForElementBlendAnimationClip;
-(BOOL)blendOpaqueForElementBlendAnimationClip;
-(BOOL)alwaysRenderForElementBlendAnimationClip;
-(BOOL)shouldUpdateDelayOpaqueForRotationAnimationElementBlendAnimationClip;
-(BOOL)delayOpaqueForRotationAnimationElementBlendAnimationClip;
-(BOOL)shouldUpdateBlendOpaqueForRotationAnimationElementBlendAnimationClip;
-(BOOL)blendOpaqueForRotationAnimationElementBlendAnimationClip;
-(id)modelEnumeratorFromScene:(id)arg1 ;
-(void)render:(id)arg1 ;
-(void)getBounds:(id)arg1 ;
-(void)rayPick:(id)arg1 ;
-(float)depthForScene:(id)arg1 ;
-(tvec3<float>)adjustedScaleForInfoChartScale:(const tvec3<float>*)arg1 scene:(id)arg2 ;
-(void)getSelectionKnobsPositions:(id)arg1 ;
-(id)selectionPathForInfo:(id)arg1 scene:(id)arg2 pickedPoint:(id)arg3 ;
-(void)renderLabelsSceneObject:(id)arg1 pipeline:(id)arg2 ;
-(BOOL)applyEffectsForProperties:(id)arg1 series:(id)arg2 index:(const tvec2<int>*)arg3 pipeline:(id)arg4 injectEffectsUsingBlock:(/*^block*/ id)arg5 ;
-(ElementRenderPass)render:(const RenderElementInfo*)arg1 pushMatrix:(BOOL)arg2 delayedPass:(BOOL)arg3 ;
-(id)delegateFromScene:(id)arg1 ;
-(BOOL)shouldRenderEachValue;
-(BOOL)shouldRenderSeries:(id)arg1 ;
-(BOOL)p_isRenderPassDelayedForDelegate:(id)arg1 ;
-(void)p_processItems:(id)arg1 processItemsClass:(Class)arg2 ;
-(void)prerenderElement:(const RenderElementInfo*)arg1 ;
-(void)renderElement:(const RenderElementInfo*)arg1 ;
-(void)postrenderElement:(const RenderElementInfo*)arg1 ;
-(void)updateLightingEffectsState:(id)arg1 scene:(id)arg2 ;
-(BOOL)transparencyDepthMask;
-(TSCH3DScenePart)scenePartForScene:(id)arg1 ;
-(tvec2<float>)labelObjectSpacePosition:(unsigned)arg1 dataSpaceValue:(float)arg2 ;
-(tvec2<float>)labelOffset:(unsigned)arg1 labelSize:(const tvec2<float>*)arg2 textureSize:(const tvec2<float>*)arg3 dataSpaceValue:(float)arg4 ;
-(void)renderSeriesLabelsSceneObject:(id)arg1 pipeline:(id)arg2 ;
-(Class)resizer3DClass;
-(Class)getBounds3DClass;
@end

