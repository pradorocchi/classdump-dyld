/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DSceneObject.h>

@interface TSCH3DChartShadowsSceneObject : TSCH3DSceneObject
+(void)setShadowPlanePadding:(box<glm::detail::tvec3<float> >)arg1 forScene:(id)arg2 ;
+(void)invalidateShadowsForScene:(id)arg1 ;
-(void)render:(id)arg1 ;
-(void)getBounds:(id)arg1 ;
-(id)propertiesForScene:(id)arg1 ;
-(box<glm::detail::tvec3<float> >)p_shadowPlanePaddingForScene:(id)arg1 ;
-(void)renderShadowScene:(id)arg1 ;
-(id)TSDShadowFromScene:(id)arg1 ;
-(void)prerenderShadows:(id)arg1 blurslack:(float)arg2 angle:(float)arg3 quality:(float)arg4 targetFBO:(id)arg5 ;
-(float)p_chartOpacityForScene:(id)arg1 ;
-(void)renderShadows:(id)arg1 ;
-(void)prerender:(id)arg1 ;
-(tvec3<float>)calculateShadowCameraPosition:(float)arg1 center:(tvec3<float>)arg2 shadowQuality:(float)arg3 ;
-(BOOL)animationTextureSceneDelegateShouldSkipForRep:(id)arg1 finalElements:(BOOL)arg2 chunkStage:(int)arg3 ;
-(id)effects;
@end

