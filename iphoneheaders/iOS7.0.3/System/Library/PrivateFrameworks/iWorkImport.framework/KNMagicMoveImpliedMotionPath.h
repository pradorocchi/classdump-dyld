/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/KNAnimationEffect.h>
#import <iWorkImport/KNMagicMoveTransitionAnimator.h>
#import <iWorkImport/KNMagicMoveFrameAnimator.h>
#import <iWorkImport/KNAnimationPluginObsoleteNames.h>
#import <iWorkImport/KNAnimationPluginArchiving.h>

@class TSDGLShader, TSDGLDataBuffer, KNMotionBlurWrapper, TSDMagicMoveTextureZOrderer, NSMutableDictionary, NSDictionary, NSMutableArray, NSMapTable;

@interface KNMagicMoveImpliedMotionPath : KNAnimationEffect <KNMagicMoveTransitionAnimator, KNMagicMoveFrameAnimator, KNAnimationPluginObsoleteNames, KNAnimationPluginArchiving> {

	TSDGLShader* _magicMoveShader;
	TSDGLShader* _magicMoveBlendShader;
	TSDGLDataBuffer* _dataBuffer;
	/*^block*/ id _motionBlurWrapperTextureDrawOptionsBlock;
	/*^block*/ id _motionBlurWrapperSetupShaderBlock;
	KNMotionBlurWrapper* _motionBlurWrapper;
	TSDMagicMoveTextureZOrderer* _mmTextureZOrderer;
	NSMutableDictionary* _animationDict;
	NSDictionary* _animationCacheDict;
	NSMutableArray* _texturesOrderingArray;
	NSMapTable* _textureToShaderMapTable;
	NSMapTable* _textureToMorphEffectDict;

}
+(id)animationFilter;
+(int)animationCategory;
+(id)supportedTypes;
+(id)localizedMenuString:(int)arg1 ;
+(unsigned)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(id)obsoleteAnimationNames;
+(BOOL)isCharacterAwareEffect;
+(BOOL)requiresBullets;
+(BOOL)requiresMagicMoveTextures;
+(BOOL)requiresPerspectiveTransform;
+(void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6 ;
+(void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6 ;
+(id)customAttributes;
+(void)initialize;
+(id)defaultAttributes;
+(id)animationName;
-(id)initWithAnimationContext:(id)arg1 ;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)animationDidEndWithContext:(id)arg1 ;
-(void)renderFrameWithContext:(id)arg1 ;
-(id)animationsWithContext:(id)arg1 ;
-(void)p_addDebugAnimationsToArray:(id)arg1 forType:(int)arg2 duration:(double)arg3 ;
-(void)p_setAnimationGroup:(id)arg1 forLayer:(id)arg2 inDictionary:(id)arg3 ;
-(id)p_magicMoveShaderWithShouldBlendIncoming:(BOOL)arg1 enableDebugColors:(BOOL)arg2 ;
-(id)p_texturesBySortingArray:(id)arg1 ;
-(void)dealloc;
@end

