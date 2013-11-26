/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIView, UIScrollView, NSLayoutConstraint, NSArray, GAXStyleProvider, GAXUIServer;

@interface GAXOptionsView : UIView <UIScrollViewDelegate> {

	BOOL _optionsVisible;
	UIView* _backgroundDimmingView;
	UIView* _featuresContentView;
	UIScrollView* _featuresScrollView;
	UIView* _modalView;
	NSLayoutConstraint* _modalViewBottomConstraint;
	NSArray* _optionsViewPresentationConstraints;
	GAXStyleProvider* _styleProvider;
	GAXUIServer* _userInterfaceServer;

}

@property (assign,getter=isOptionsVisible,nonatomic) BOOL optionsVisible;                 //@synthesize optionsVisible=_optionsVisible - In the implementation block
@property (nonatomic,readonly) int applicationInterfaceOrientation; 
@property (nonatomic,retain) UIView * backgroundDimmingView;                              //@synthesize backgroundDimmingView=_backgroundDimmingView - In the implementation block
@property (nonatomic,retain) UIView * featuresContentView;                                //@synthesize featuresContentView=_featuresContentView - In the implementation block
@property (nonatomic,retain) UIScrollView * featuresScrollView;                           //@synthesize featuresScrollView=_featuresScrollView - In the implementation block
@property (nonatomic,retain) UIView * modalView;                                          //@synthesize modalView=_modalView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * modalViewBottomConstraint;              //@synthesize modalViewBottomConstraint=_modalViewBottomConstraint - In the implementation block
@property (nonatomic,retain) NSArray * optionsViewPresentationConstraints;                //@synthesize optionsViewPresentationConstraints=_optionsViewPresentationConstraints - In the implementation block
@property (nonatomic,retain) GAXStyleProvider * styleProvider;                            //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) GAXUIServer * userInterfaceServer;                           //@synthesize userInterfaceServer=_userInterfaceServer - In the implementation block
-(void)setUserInterfaceServer:(id)arg1 ;
-(id)userInterfaceServer;
-(id)initWithFeatureViews:(id)arg1 styleProvider:(id)arg2 userInterfaceServer:(id)arg3 ;
-(void)presentOptionsInView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setModalView:(id)arg1 ;
-(int)applicationInterfaceOrientation;
-(void)dismissOptionsAnimated:(BOOL)arg1 ;
-(id)optionsViewPresentationConstraints;
-(void)setOptionsVisible:(BOOL)arg1 ;
-(void)_handleTouchUpInside:(id)arg1 ;
-(void)setBackgroundDimmingView:(id)arg1 ;
-(void)setFeaturesContentView:(id)arg1 ;
-(void)setFeaturesScrollView:(id)arg1 ;
-(void)setModalViewBottomConstraint:(id)arg1 ;
-(void)setOptionsViewPresentationConstraints:(id)arg1 ;
-(id)_separatorViewsWithCount:(unsigned)arg1 styleProvider:(id)arg2 ;
-(id)featuresScrollView;
-(id)featuresContentView;
-(BOOL)isOptionsVisible;
-(id)backgroundDimmingView;
-(id)modalViewBottomConstraint;
-(id)modalView;
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
@end

