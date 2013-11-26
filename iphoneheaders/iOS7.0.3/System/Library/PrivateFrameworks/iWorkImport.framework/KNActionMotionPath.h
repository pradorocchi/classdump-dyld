/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/KNAnimationEffect.h>
#import <iWorkImport/KNActionEffectBuildAnimator.h>
#import <iWorkImport/KNAnimationPluginArchiving.h>
#import <iWorkImport/KNAnimationPluginObsoleteNames.h>

@interface KNActionMotionPath : KNAnimationEffect <KNActionEffectBuildAnimator, KNAnimationPluginArchiving, KNAnimationPluginObsoleteNames>
+(id)animationFilter;
+(int)animationCategory;
+(id)supportedTypes;
+(id)localizedMenuString:(int)arg1 ;
+(unsigned)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(id)obsoleteAnimationNames;
+(void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6 ;
+(void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6 ;
+(id)actionEffectStyle;
+(id)applyActionEffect:(id)arg1 toAttributes:(id)arg2 ;
+(BOOL)requiresHighQualityTextures;
+(id)defaultAttributes;
+(id)animationName;
-(id)animationsForTextureSet:(id)arg1 finalTextureSet:(id)arg2 duration:(double)arg3 attributes:(id)arg4 previousAttributes:(id)arg5 ;
-(id)p_flattenedPathBasedOnLengthFromPath:(id)arg1 ;
-(void)p_addAnimationForLayer:(id)arg1 duration:(double)arg2 motionPath:(id)arg3 acceleration:(id)arg4 toAnimationDictionary:(id)arg5 ;
@end

