/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UINavigationBarDelegate.h>

@class UIView, UINavigationBar;

@interface PLInteractiveNavigationControllerView : UIView <UINavigationBarDelegate> {

	UIView* _top;
	UIView* _bottom;
	UIView* _interactive;
	UIView* _overlay;
	UINavigationBar* _navBar;
	UIView* _header;
	UIView* _footer;
	int _orientation;
	struct {
		unsigned transitioning : 1;
		unsigned headerViewIsVisible : 1;
		unsigned footerViewIsVisible : 1;
	}  _controllerViewFlags;

}

@property (nonatomic,readonly) UINavigationBar * navigationBar;                            //@synthesize navBar=_navBar - In the implementation block
@property (nonatomic,retain) UIView * topView;                                             //@synthesize top=_top - In the implementation block
@property (nonatomic,retain) UIView * bottomView;                                          //@synthesize bottom=_bottom - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                          //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                          //@synthesize footer=_footer - In the implementation block
@property (assign,getter=headerViewIsHidden,nonatomic) BOOL headerViewHidden; 
@property (assign,getter=footerViewIsHidden,nonatomic) BOOL footerViewHidden; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)navigationBar;
-(void)setInterfaceOrientation:(int)arg1 ;
-(id)headerView;
-(void)setHeaderView:(id)arg1 ;
-(id)topView;
-(id)bottomView;
-(id)footerView;
-(void)setFooterView:(id)arg1 ;
-(void)setOverlayView:(id)arg1 ;
-(void)setTopView:(id)arg1 ;
-(void)setBottomView:(id)arg1 ;
-(void)setInteractiveView:(id)arg1 ;
-(void)setTopViewAlpha:(float)arg1 ;
-(void)transitionDidEnd;
-(void)setInteractiveView:(id)arg1 removePrevious:(BOOL)arg2 ;
-(BOOL)footerViewIsHidden;
-(BOOL)headerViewIsHidden;
-(void)setHeaderViewHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setFooterViewHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHeaderViewHidden:(BOOL)arg1 ;
-(void)setFooterViewHidden:(BOOL)arg1 ;
-(void)_adjustViewFrame:(id)arg1 ;
-(id)interactiveView;
-(void)transitionWillBegin;
@end

