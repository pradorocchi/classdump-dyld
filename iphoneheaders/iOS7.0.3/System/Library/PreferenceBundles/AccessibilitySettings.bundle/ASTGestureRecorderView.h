/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:06:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <AccessibilitySettings/ASTGestureRecorderGradientView.h>
#import <AccessibilitySettings/ASTGestureRecorderHelperViewDataSource.h>
#import <AccessibilitySettings/ASTGestureRecorderHelperViewDelegate.h>

@protocol ASTGestureRecorderViewDataSource;
@class NSMutableArray, NSMutableDictionary, , ASTGestureRecorderStyleProvider, ASTGestureRecorderStaticFingerPathsOverlayView, UIView, UIColor, ASTGestureRecorderBackgroundView;

@interface ASTGestureRecorderView : ASTGestureRecorderGradientView <ASTGestureRecorderHelperViewDataSource, ASTGestureRecorderHelperViewDelegate> {

	double _freezeDryStartTime;
	float _freezeDryDrawPercentage;
	float _freezeDryStartIndex;
	NSMutableArray* _freezedDynamicPaths;
	NSMutableDictionary* _activeLayers;
	NSMutableArray* _staticLayers;
	NSMutableArray* _transitionLayers;
	BOOL _shouldFakeLastStaticFingerPathsAreDynamic;
	BOOL _replayMode;
	<ASTGestureRecorderViewDataSource>* _dataSource;
	ASTGestureRecorderStyleProvider* _styleProvider;
	ASTGestureRecorderStaticFingerPathsOverlayView* _staticFingerPathsOverlayView;
	UIView* _dynamicFingerPathsContainerView;
	UIColor* _dynamicFingerPathBackgroundGradientPatternColor;
	float _insetForRenderingFingerPaths;
	ASTGestureRecorderBackgroundView* _backgroundView;
	CGRect _constrainedBoundsForDrawing;

}

@property (nonatomic,retain) ASTGestureRecorderStyleProvider * styleProvider;                                            //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) <ASTGestureRecorderViewDataSource> * dataSource;                                            //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL replayMode;                                                                            //@synthesize replayMode=_replayMode - In the implementation block
@property (nonatomic,retain) ASTGestureRecorderStaticFingerPathsOverlayView * staticFingerPathsOverlayView;              //@synthesize staticFingerPathsOverlayView=_staticFingerPathsOverlayView - In the implementation block
@property (nonatomic,retain) UIView * dynamicFingerPathsContainerView;                                                   //@synthesize dynamicFingerPathsContainerView=_dynamicFingerPathsContainerView - In the implementation block
@property (nonatomic,retain) UIColor * dynamicFingerPathBackgroundGradientPatternColor;                                  //@synthesize dynamicFingerPathBackgroundGradientPatternColor=_dynamicFingerPathBackgroundGradientPatternColor - In the implementation block
@property (assign,nonatomic) float insetForRenderingFingerPaths;                                                         //@synthesize insetForRenderingFingerPaths=_insetForRenderingFingerPaths - In the implementation block
@property (assign,nonatomic) CGRect constrainedBoundsForDrawing;                                                         //@synthesize constrainedBoundsForDrawing=_constrainedBoundsForDrawing - In the implementation block
@property (assign,nonatomic) BOOL shouldFakeLastStaticFingerPathsAreDynamic;                                             //@synthesize shouldFakeLastStaticFingerPathsAreDynamic=_shouldFakeLastStaticFingerPathsAreDynamic - In the implementation block
@property (nonatomic,retain) ASTGestureRecorderBackgroundView * backgroundView;                                          //@synthesize backgroundView=_backgroundView - In the implementation block
-(void)hideStaticView;
-(void)setReplayMode:(BOOL)arg1 ;
-(id)dynamicFingerPathBackgroundGradientPatternColor;
-(float)insetForRenderingFingerPaths;
-(void)setConstrainedBoundsForDrawing:(CGRect)arg1 ;
-(void)setShouldFakeLastStaticFingerPathsAreDynamic:(BOOL)arg1 ;
-(id)gestureRecorderHelperView:(id)arg1 dynamicFingerPathAtIndex:(unsigned)arg2 ;
-(CGRect)constrainedBoundsForDrawingGestureRecorderHelperView:(id)arg1 ;
-(CGRect)gestureRecorderHelperView:(id)arg1 boundsForRenderingFingerPath:(id)arg2 ;
-(CGRect)constrainedBoundsForDrawing;
-(unsigned)numberOfStaticFingerPathsInGestureRecorderHelperView:(id)arg1 ;
-(id)gestureRecorderHelperView:(id)arg1 staticFingerPathAtIndex:(unsigned)arg2 ;
-(unsigned)numberOfDynamicFingerPathsInGestureRecorderHelperView:(id)arg1 ;
-(void)deleteAllFingerPaths;
-(void)setDynamicFingerPathsContainerView:(id)arg1 ;
-(void)setDynamicFingerPathBackgroundGradientPatternColor:(id)arg1 ;
-(void)insertDynamicFingerPathAtIndex:(unsigned)arg1 ;
-(void)setInsetForRenderingFingerPaths:(float)arg1 ;
-(id)staticFingerPathsBackgroundColor;
-(id)staticFingerPathsOverlayView;
-(void)setStaticFingerPathsOverlayView:(id)arg1 ;
-(id)dynamicFingerPathsContainerView;
-(BOOL)replayMode;
-(void)fingerPathDidChange:(unsigned)arg1 ;
-(void)_performTransitionToStaticFingers:(id)arg1 transitionLayers:(id)arg2 ;
-(BOOL)shouldFakeLastStaticFingerPathsAreDynamic;
-(void)reloadDynamicFingerPathAtIndex:(unsigned)arg1 ;
-(void)freezeAllDynamicFingerPaths;
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(void)didMoveToWindow;
-(id)dataSource;
-(void)_commonInit;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)accessibilityLabel;
-(void)setBackgroundView:(id)arg1 ;
-(id)backgroundView;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
@end

