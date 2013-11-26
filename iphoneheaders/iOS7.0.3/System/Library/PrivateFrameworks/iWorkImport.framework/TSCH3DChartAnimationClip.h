/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSString;

@interface TSCH3DChartAnimationClip : NSObject {

	NSString* mTimerName;

}

@property (nonatomic,readonly) NSString * timerName; 
+(id)clipWithTimerName:(id)arg1 ;
+(id)clip;
-(id)initWithTimerName:(id)arg1 ;
-(id)timerName;
-(float)timeFromContext:(id)arg1 ;
-(void)didAddToAnimationClipsWithScene:(id)arg1 animation:(id)arg2 ;
-(void)didAddToAnimationClipsWithSceneObject:(id)arg1 scene:(id)arg2 animation:(id)arg3 ;
-(void)didUpdateAnimationTimeForContext:(id)arg1 layers:(id)arg2 ;
-(void)willRunWithScene:(id)arg1 context:(id)arg2 layers:(id)arg3 ;
-(BOOL)willProcessSeries:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 context:(id)arg4 ;
-(BOOL)willProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 context:(id)arg4 ;
-(void)didGenerateShaderEffectsForSeriesAtIndex:(const tvec2<int>*)arg1 effects:(id)arg2 sceneObject:(id)arg3 pipeline:(id)arg4 context:(id)arg5 ;
-(void)didProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 context:(id)arg4 ;
-(BOOL)renderPassDelayDisallowedForSceneObject:(id)arg1 pipeline:(id)arg2 context:(id)arg3 ;
-(ElementRenderPass)renderPassForSceneObject:(id)arg1 ;
-(ElementRenderPass)renderPassForElement:(const RenderElementInfoRef)arg1 sceneObject:(id)arg2 context:(id)arg3 ;
-(BOOL)willUpdateElementEffectsStatesForElement:(const RenderElementInfoRef)arg1 sceneObject:(id)arg2 context:(id)arg3 ;
-(void)didTransformElement:(const RenderElementInfoRef)arg1 sceneObject:(id)arg2 context:(id)arg3 ;
-(BOOL)willRenderElement:(const RenderElementInfoRef)arg1 sceneObject:(id)arg2 context:(id)arg3 ;
-(BOOL)willSubmitElement:(const RenderElementInfoRef)arg1 sceneObject:(id)arg2 context:(id)arg3 ;
-(void)didGenerateShaderEffects:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 context:(id)arg4 ;
-(BOOL)willSubmitSceneObject:(id)arg1 pipeline:(id)arg2 context:(id)arg3 ;
-(void)labelsResourcesSessionWillBeginForSceneObject:(id)arg1 pipeline:(id)arg2 context:(id)arg3 ;
-(void)labelsResourcesSessionWillEndForSceneObject:(id)arg1 pipeline:(id)arg2 context:(id)arg3 ;
-(BOOL)willSubmitLabelForSceneObject:(id)arg1 labelRenderInfo:(const ChartLabelsContainingLabelRenderInfoRef)arg2 context:(id)arg3 ;
-(void)updateExternalLabelAttribute:(ExternalLabelAttributeRef)arg1 sceneObject:(id)arg2 labelRenderInfo:(const ChartLabelsContainingLabelRenderInfoRef)arg3 timeSlice:(id)arg4 context:(id)arg5 ;
-(BOOL)shouldUpdateSeriesElementTimingWithAnyElement;
-(void)dealloc;
-(id)init;
@end

