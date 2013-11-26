/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:23 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>

@class UIActivityGroupCancelButton, _UIBackdropView, UIView, NSLayoutConstraint, UIControl, UIActivityGroupView;

@interface UIActivityGroupListViewController : UIViewController {

	BOOL _darkStyleOnLegacyApp;
	BOOL _embedded;
	BOOL _modal;
	UIActivityGroupCancelButton* _cancelButton;
	_UIBackdropView* _backdropView;
	UIView* _contentView;
	UIView* _statusBlurView;
	NSLayoutConstraint* _statusBlurHeight;
	int _currentStatusBarStyle;
	UIControl* _dimView;
	UIActivityGroupView* _groupView;

}

@property (assign,nonatomic) BOOL darkStyleOnLegacyApp;                               //@synthesize darkStyleOnLegacyApp=_darkStyleOnLegacyApp - In the implementation block
@property (assign,nonatomic) BOOL embedded;                                           //@synthesize embedded=_embedded - In the implementation block
@property (assign,nonatomic) BOOL modal;                                              //@synthesize modal=_modal - In the implementation block
@property (nonatomic,retain) UIActivityGroupCancelButton * cancelButton;              //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;                          //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                    //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * statusBlurView;                                 //@synthesize statusBlurView=_statusBlurView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * statusBlurHeight;                   //@synthesize statusBlurHeight=_statusBlurHeight - In the implementation block
@property (assign,nonatomic) int currentStatusBarStyle;                               //@synthesize currentStatusBarStyle=_currentStatusBarStyle - In the implementation block
@property (nonatomic,retain) UIControl * dimView;                                     //@synthesize dimView=_dimView - In the implementation block
@property (nonatomic,retain) UIActivityGroupView * groupView;                         //@synthesize groupView=_groupView - In the implementation block
-(void)dealloc;
-(int)preferredStatusBarStyle;
-(id)contentView;
-(void)setContentView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)cancelButton;
-(void)setCancelButton:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)cancel;
-(BOOL)darkStyleOnLegacyApp;
-(void)setDarkStyleOnLegacyApp:(BOOL)arg1 ;
-(void)setDimView:(id)arg1 ;
-(void)setBackdropView:(id)arg1 ;
-(id)backdropView;
-(void)updateVisibleActivityGroupViewControllers;
-(id)initWithActivityGroupViewControllers:(id)arg1 embedded:(BOOL)arg2 modal:(BOOL)arg3 ;
-(float)displayHeight;
-(void)hideDimmingView;
-(void)showDone;
-(BOOL)modal;
-(void)setModal:(BOOL)arg1 ;
-(void)setEmbedded:(BOOL)arg1 ;
-(void)setActivityGroupViewControllers:(id)arg1 ;
-(id)groupView;
-(BOOL)embedded;
-(id)dimView;
-(void)setStatusBlurView:(id)arg1 ;
-(id)statusBlurView;
-(void)setGroupView:(id)arg1 ;
-(void)setStatusBlurHeight:(id)arg1 ;
-(id)statusBlurHeight;
-(int)currentStatusBarStyle;
-(void)setCurrentStatusBarStyle:(int)arg1 ;
@end

