/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartAllSceneObjectDelegate.h>

@class TSCH3DAnimationTiming, TSCH3DAnimationTimeSlice, NSArray, NSMutableDictionary;

@interface TSCH3DChartAnimationSceneObjectDelegate : NSObject <TSCH3DChartAllSceneObjectDelegate> {

	TSCH3DAnimationTiming* mElementTiming;
	TSCH3DAnimationTimeSlice* mTimeSlice;
	NSArray* mAnimationClips;
	NSMutableDictionary* mTimingContext;
	tvec2<int> mCurrentInterpolatedTimeElementIndex;

}
+(id)delegateWithTiming:(id)arg1 timeSlice:(id)arg2 animationClips:(id)arg3 context:(id)arg4 ;
-(ElementRenderPass)renderPassForSceneObject:(id)arg1 ;
-(BOOL)shouldUpdateSeriesElementTimingWithAnyElement;
-(id)initWithTiming:(id)arg1 timeSlice:(id)arg2 animationClips:(id)arg3 context:(id)arg4 ;
-(void)p_updateElementTimingForIndex:(const tvec2<int>*)arg1 ;
-(void)labelsResourcesSessionWillBeginForSceneObject:(id)arg1 pipeline:(id)arg2 ;
-(void)labelsResourcesSessionWillEndForSceneObject:(id)arg1 pipeline:(id)arg2 ;
-(void)setOffset:(const tvec3<float>*)arg1 labelType:(int)arg2 boundsIndex:(int)arg3 forSceneObject:(id)arg4 ;
-(BOOL)willSubmitLabelType:(int)arg1 boundsIndex:(int)arg2 alignment:(unsigned)arg3 elementIndex:(unsigned)arg4 forSceneObject:(id)arg5 ;
-(BOOL)willSubmitLabelForSceneObject:(id)arg1 labelRenderInfo:(const ChartLabelsContainingLabelRenderInfo*)arg2 ;
-(void)updateExternalLabelAttribute:(ExternalLabelAttributeRef)arg1 sceneObject:(id)arg2 labelRenderInfo:(const ChartLabelsContainingLabelRenderInfo*)arg3 ;
-(void)didGenerateShaderEffects:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 ;
-(BOOL)willSubmitSceneObject:(id)arg1 pipeline:(id)arg2 ;
-(void)didSubmitSceneObject:(id)arg1 pipeline:(id)arg2 ;
-(BOOL)willBeginProcessingSceneObject:(id)arg1 ;
-(void)didEndProcessingSceneObject:(id)arg1 ;
-(BOOL)renderPassDelayDisallowedForSceneObject:(id)arg1 pipeline:(id)arg2 ;
-(BOOL)willProcessSeries:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 ;
-(void)didGenerateShaderEffectsForSeriesAtIndex:(const tvec2<int>*)arg1 effects:(id)arg2 sceneObject:(id)arg3 pipeline:(id)arg4 ;
-(BOOL)willProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 ;
-(void)didProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 ;
-(BOOL)willProcessElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(ElementRenderPass)renderPassForElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(BOOL)willUpdateElementEffectsStatesForElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(void)didTransformElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(BOOL)willRenderElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(BOOL)willSubmitElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(void)dealloc;
-(id).cxx_construct;
@end

