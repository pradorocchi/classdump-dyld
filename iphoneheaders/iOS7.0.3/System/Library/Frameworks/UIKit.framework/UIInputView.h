/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:20 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIKBRenderConfig, _UIInputViewContent, UIImage, NSMutableDictionary, NSArray, CALayer, UIView;

@interface UIInputView : UIView {

	int _style;
	UIKBRenderConfig* _renderConfig;
	BOOL _suppressBackgroundStyling;
	BOOL _disableSplitSupport;
	_UIInputViewContent* _leftContentView;
	_UIInputViewContent* _rightContentView;
	float _contentRatio;
	CGSize _leftContentSize;
	CGSize _rightContentSize;
	CGSize _defaultSize;
	float _gapWidth;
	float _leftOffset;
	BOOL _isTransitioning;
	float _transitionGap;
	float _transitionLeftOffset;
	float _transitionRatio;
	UIImage* _mergedImage;
	UIImage* _splitImage;
	NSMutableDictionary* _mergedSliceMap;
	NSMutableDictionary* _splitSliceMap;
	NSArray* _visibleLayers;
	CALayer* _transitionLayer;

}

@property (assign,nonatomic) BOOL _disableSplitSupport; 
@property (assign,nonatomic) BOOL _suppressBackgroundStyling; 
@property (nonatomic,readonly) int inputViewStyle;                               //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) UIView * leftContentView;                         //@synthesize leftContentView=_leftContentView - In the implementation block
@property (nonatomic,readonly) UIView * rightContentView;                        //@synthesize rightContentView=_rightContentView - In the implementation block
@property (assign,nonatomic) float contentRatio;                                 //@synthesize contentRatio=_contentRatio - In the implementation block
@property (assign,nonatomic) CGSize leftContentViewSize;                         //@synthesize leftContentSize=_leftContentSize - In the implementation block
@property (assign,nonatomic) CGSize rightContentViewSize;                        //@synthesize rightContentSize=_rightContentSize - In the implementation block
@property (nonatomic,retain) UIImage * _mergedImage;                             //@synthesize mergedImage=_mergedImage - In the implementation block
@property (nonatomic,retain) UIImage * _splitImage;                              //@synthesize splitImage=_splitImage - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _mergedSliceMap;              //@synthesize mergedSliceMap=_mergedSliceMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _splitSliceMap;               //@synthesize splitSliceMap=_splitSliceMap - In the implementation block
+(void)_setupAppearanceIfNecessary;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)_isTransitioning;
-(id)tintColor;
-(void)_updateBackgroundColor;
-(void)_setRenderConfig:(id)arg1 ;
-(int)_clipCornersOfView:(id)arg1 ;
-(void)_setProgress:(float)arg1 boundedBy:(float)arg2 ;
-(void)_beginSplitTransitionIfNeeded:(float)arg1 gapWidth:(float)arg2 ;
-(void)_endSplitTransitionIfNeeded:(BOOL)arg1 ;
-(id)_inheritedRenderConfig;
-(BOOL)_isSplit;
-(void)_updateClipCorners;
-(CGSize)leftContentViewSize;
-(CGSize)rightContentViewSize;
-(CGSize)_defaultSize;
-(BOOL)_supportsSplit;
-(BOOL)_disableSplitSupport;
-(void)_setLeftOffset:(float)arg1 gapWidth:(float)arg2 ;
-(void)didEndSplitTransition;
-(BOOL)_isToolbars;
-(void)setContentRatio:(float)arg1 ;
-(id)leftContentView;
-(id)rightContentView;
-(void)_setNeedsContentSizeUpdate;
-(float)_additionalClipHeight;
-(id)_initWithFrame:(CGRect)arg1 inputViewStyle:(int)arg2 useSplitViews:(BOOL)arg3 ;
-(int)inputViewStyle;
-(float)contentRatio;
-(void)willBeginSplitTransition;
-(id)_splitBorderedBackgroundWithCorners:(unsigned)arg1 ;
-(id)_toolbarBorderedBackground;
-(id)initWithFrame:(CGRect)arg1 inputViewStyle:(int)arg2 ;
-(void)setInputViewStyle:(int)arg1 ;
-(void)layoutMergedSubviews;
-(void)layoutSplitSubviewsWithLeftContentSize:(CGSize)arg1 rightContentSize:(CGSize)arg2 ;
-(void)updateMergedSubviewConstraints;
-(void)updateSplitSubviewContraintsWithLeftContentSize:(CGSize)arg1 rightContentSize:(CGSize)arg2 ;
-(void)setLeftContentViewSize:(CGSize)arg1 ;
-(void)setRightContentViewSize:(CGSize)arg1 ;
-(id)_mergedImage;
-(void)set_mergedImage:(id)arg1 ;
-(id)_splitImage;
-(void)set_splitImage:(id)arg1 ;
-(id)_mergedSliceMap;
-(void)set_mergedSliceMap:(id)arg1 ;
-(id)_splitSliceMap;
-(void)set_splitSliceMap:(id)arg1 ;
-(BOOL)_suppressBackgroundStyling;
-(void)set_disableSplitSupport:(BOOL)arg1 ;
-(void)set_suppressBackgroundStyling:(BOOL)arg1 ;
@end

