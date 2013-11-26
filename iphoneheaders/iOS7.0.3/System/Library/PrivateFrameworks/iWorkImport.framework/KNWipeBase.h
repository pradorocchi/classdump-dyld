/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNAnimationEffect.h>
#import <iWorkImport/KNAnimationPluginArchiving.h>

@class KNWipeDataBuffer, TSDGLDataBuffer, TSDGLShader, KNAnimParameterGroup;

@interface KNWipeBase : KNAnimationEffect <KNAnimationPluginArchiving> {

	KNWipeDataBuffer* mWipeDataBuffer;
	TSDGLDataBuffer* mPreviousDataBuffer;
	TSDGLShader* mPreviousShader;
	CGRect _frameRect;
	CGRect _drawableFrame;
	BOOL _isBuildOut;
	KNAnimParameterGroup* _parameterGroup;

}
+(id)animationFilter;
+(int)animationCategory;
+(id)supportedTypes;
+(id)localizedMenuString:(int)arg1 ;
+(unsigned)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6 ;
+(void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6 ;
+(BOOL)isTransition;
+(id)animationName;
-(void)p_teardown;
-(id)initWithAnimationContext:(id)arg1 ;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)animationDidEndWithContext:(id)arg1 ;
-(void)renderFrameWithContext:(id)arg1 ;
-(void)dealloc;
@end

