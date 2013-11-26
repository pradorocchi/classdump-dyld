/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:53 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UIView;

@interface SKUIIPadChartsView : UIView {

	NSArray* _allViewControllers;
	int _animatingToNumberOfVisibleColumns;
	UIView* _borderView0;
	UIView* _borderView1;
	int _columnChangeAnimationCount;
	NSArray* _columnViews;
	UIEdgeInsets _contentInset;
	UIView* _headerBackgroundView;
	NSArray* _headerViews;
	int _numberOfVisibleColumns;

}

@property (nonatomic,copy) NSArray * chartTableViewControllers;              //@synthesize allViewControllers=_allViewControllers - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                      //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) int numberOfVisibleColumns;                     //@synthesize numberOfVisibleColumns=_numberOfVisibleColumns - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)_reloadColumnViews;
-(int)numberOfVisibleColumns;
-(void)_headerViewAction:(id)arg1 ;
-(id)_headerViewWithViewControllers:(id)arg1 ;
-(void)beginColumnChangeAnimationToNumberOfVisibleColumns:(int)arg1 ;
-(void)endColumnChangeAnimation;
-(void)setChartTableViewControllers:(id)arg1 ;
-(void)setNumberOfVisibleColumns:(int)arg1 ;
-(id)chartTableViewControllers;
-(void).cxx_destruct;
@end

