/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary, NSMutableArray;

@interface KNAnimationRegistry : NSObject {

	NSMutableDictionary* mClassesForTypeAndName;
	NSMutableDictionary* mClassesForTypeAndCategory;
	NSMutableDictionary* mClassesForTypeAndFilter;
	NSMutableDictionary* mClassesForTypeAndObsoleteName;
	NSMutableDictionary* mAlternateEffectIdentifiersForEffectIdentifierAndFilter;
	NSMutableArray* mAnimationInfos;

}
+(id)localizedCategoryNameForCategory:(int)arg1 ;
+(BOOL)p_dumpRegistry;
+(id)animationsInBundle;
+(id)categoryNameForPluginClass:(Class)arg1 ;
+(id)localizedNameForUnsupportedAnimation:(id)arg1 ;
+(id)instance;
-(void)p_buildAlternateFilterMap;
-(id)animationInfoForEffectIdentifier:(id)arg1 animationType:(int)arg2 includeObsoleteNames:(BOOL)arg3 ;
-(id)animationInfoForEffectIdentifier:(id)arg1 animationType:(int)arg2 ;
-(id)distinctCategoriesForType:(int)arg1 ;
-(id)animationInfosForAnimationType:(int)arg1 category:(id)arg2 ;
-(id)animationInfoForEffectIdentifier:(id)arg1 animationType:(int)arg2 includeObsoleteNames:(BOOL)arg3 drawable:(id)arg4 ;
-(id)allAnimationInfos;
-(BOOL)canMapEffectIdentifier:(id)arg1 animationType:(int)arg2 toEffectIdentifier:(id)arg3 includeObsoleteNames:(BOOL)arg4 forDrawable:(id)arg5 ;
-(id)animationInfosForAnimationType:(int)arg1 filter:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end

