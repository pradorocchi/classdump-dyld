/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/KNContentAwareMagicMoveSuperset.h>
#import <iWorkImport/KNContentAwareTransitionAnimator.h>
#import <iWorkImport/KNContentAwareFrameAnimator.h>

@class KNMotionBlurAnimationPluginWrapper;

@interface KNContentAwareSwing : KNContentAwareMagicMoveSuperset <KNContentAwareTransitionAnimator, KNContentAwareFrameAnimator> {

	KNMotionBlurAnimationPluginWrapper* _motionBlurWrapper;

}
+(id)animationFilter;
+(int)animationCategory;
+(id)supportedTypes;
+(id)localizedMenuString:(int)arg1 ;
+(unsigned)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(int)rendererTypeForCapabilities:(id)arg1 ;
+(BOOL)isCharacterAwareEffect;
+(BOOL)requiresBullets;
+(BOOL)requiresMagicMoveTextures;
+(BOOL)requiresPerspectiveTransform;
+(id)defaultAttributes;
+(id)animationName;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)animationDidEndWithContext:(id)arg1 ;
-(void)renderFrameWithContext:(id)arg1 ;
-(id)animationsWithContext:(id)arg1 ;
-(void)dealloc;
@end

