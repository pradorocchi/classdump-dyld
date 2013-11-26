/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:16 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIDimmingViewDelegate.h>

@class UIInputSwitcherTableView, UIInputSwitcherShadowView, UIInputSwitcherSelectionExtraView, NSTimer, UIDimmingView, UIKBTree, UIKeyboardLayoutStar;

@interface UIKeyboardMenuView : UIView <UITableViewDataSource, UITableViewDelegate, UIDimmingViewDelegate> {

	UIInputSwitcherTableView* m_table;
	UIInputSwitcherShadowView* m_shadowView;
	UIInputSwitcherSelectionExtraView* m_selExtraView;
	CGRect m_referenceRect;
	float m_pointerOffset;
	BOOL m_scrollable;
	BOOL m_startAutoscroll;
	BOOL m_scrolling;
	BOOL m_shouldFade;
	CGPoint m_point;
	double m_scrollStartTime;
	int m_scrollDirection;
	NSTimer* m_scrollTimer;
	int m_visibleRows;
	int m_firstVisibleRow;
	int m_mode;
	UIDimmingView* m_dimmingView;
	BOOL _usesStraightLeftEdge;
	BOOL _usesDarkTheme;
	UIKBTree* _referenceKey;
	UIKeyboardLayoutStar* _layout;

}

@property (assign,nonatomic) int mode; 
@property (readonly) BOOL usesTable; 
@property (assign,nonatomic) BOOL usesStraightLeftEdge;                  //@synthesize usesStraightLeftEdge=_usesStraightLeftEdge - In the implementation block
@property (assign,nonatomic) BOOL usesDarkTheme;                         //@synthesize usesDarkTheme=_usesDarkTheme - In the implementation block
@property (assign,nonatomic) UIKBTree * referenceKey;                    //@synthesize referenceKey=_referenceKey - In the implementation block
@property (assign,nonatomic) UIKeyboardLayoutStar * layout;              //@synthesize layout=_layout - In the implementation block
+(id)viewThatContainsBaseKey;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setNeedsDisplay;
-(void)setFrame:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)applicationWillSuspend:(id)arg1 ;
-(void)show;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)font;
-(id)layout;
-(id)table;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)setRenderConfig:(id)arg1 ;
-(void)setLayout:(id)arg1 ;
-(void)hide;
-(BOOL)isVisible;
-(int)numberOfItems;
-(void)dimmingViewWasTapped:(id)arg1 ;
-(void)showAsPopupForKey:(id)arg1 inLayout:(id)arg2 ;
-(void)fadeWithDelay:(double)arg1 ;
-(void)fade;
-(void)updateSelectionWithPoint:(CGPoint)arg1 ;
-(void)selectItemAtPoint:(CGPoint)arg1 ;
-(void)stopAnyAutoscrolling;
-(void)autoscrollTimerFired:(id)arg1 ;
-(void)showAsHUD;
-(id)dimmingView;
-(BOOL)usesDimmingView;
-(BOOL)usesStraightLeftEdge;
-(BOOL)usesDarkTheme;
-(id)maskForShadowViewBlurredBackground;
-(BOOL)usesTable;
-(BOOL)usesShadowView;
-(CGSize)preferredSize;
-(void)setUsesStraightLeftEdge:(BOOL)arg1 ;
-(void)setupShadowViewWithSize:(CGSize)arg1 ;
-(int)defaultSelectedIndex;
-(void)highlightRow:(int)arg1 ;
-(void)insertSelExtraView;
-(void)performShowAnimation;
-(int)_internationalKeyRoundedCornerInLayout:(id)arg1 ;
-(void)setReferenceKey:(id)arg1 ;
-(void)setKeyboardDimmed:(BOOL)arg1 ;
-(id)referenceKey;
-(void)fadeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)_delayedFade;
-(void)setNeedsDisplayForCell:(id)arg1 ;
-(void)setNeedsDisplayForTopBottomCells;
-(void)endScrolling:(id)arg1 ;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(int)indexForIndexPath:(id)arg1 ;
-(id)titleForItemAtIndex:(int)arg1 ;
-(id)subtitleForItemAtIndex:(int)arg1 ;
-(id)subtitleFont;
-(void)setHighlightForRowAtIndexPath:(id)arg1 highlight:(BOOL)arg2 ;
-(void)setUsesDarkTheme:(BOOL)arg1 ;
-(BOOL)centerPopUpOverKey;
-(float)minYOfLastTableCellForSelectionExtraView;
-(CGRect)popupRect;
@end

