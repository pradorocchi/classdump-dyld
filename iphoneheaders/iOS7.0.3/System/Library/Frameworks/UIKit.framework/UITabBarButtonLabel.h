/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:02 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UILabel.h>

@class _UITabBarItemAppearanceStorage, UIColor;

@interface UITabBarButtonLabel : UILabel {

	float _boundsWidth;
	_UITabBarItemAppearanceStorage* _appearanceStorage;
	BOOL _isSelected;
	Class _appearanceGuideClass;
	UIColor* _unselectedTintColor;

}

@property (assign,setter=_setAppearanceGuideClass:,nonatomic) Class _appearanceGuideClass;                                           //@synthesize appearanceGuideClass=_appearanceGuideClass - In the implementation block
@property (setter=_setUnselectedTintColor:,getter=_unselectedTintColor,nonatomic,retain) UIColor * unselectedTintColor;              //@synthesize unselectedTintColor=_unselectedTintColor - In the implementation block
-(void)dealloc;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(Class)_appearanceGuideClass;
-(void)tintColorDidChange;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(void)_setTitleTextAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(id)_titleTextAttributesForState:(unsigned)arg1 ;
-(void)_setAppearanceGuideClass:(Class)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)updateTextColorsForSelection;
-(void)sizeToFitBounds:(CGRect)arg1 ;
-(void)_setUnselectedTintColor:(id)arg1 ;
-(void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)arg1 ;
-(void)_setTitlePositionAdjustment:(UIOffset)arg1 ;
-(void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2 ;
-(id)_unselectedTintColor;
@end

