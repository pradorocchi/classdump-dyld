/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:51 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <StoreKitUI/SKUIProductPageChildViewController.h>

@protocol SKUIProductPageChildViewControllerDelegate;
@class SKUIClientContext, SKUIColorScheme, SKUIProductPageHeaderViewController, SKUIProductPagePlaceholderScrollView, , UIActivityIndicatorView, UIScrollView;

@interface SKUIProductPagePlaceholderViewController : UIViewController <UIScrollViewDelegate, SKUIProductPageChildViewController> {

	SKUIClientContext* _clientContext;
	SKUIColorScheme* _colorScheme;
	SKUIProductPageHeaderViewController* _headerViewController;
	SKUIProductPagePlaceholderScrollView* _scrollView;
	<SKUIProductPageChildViewControllerDelegate>* _delegate;
	int _style;
	UIActivityIndicatorView* _indicator;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                           //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) SKUIColorScheme * colorScheme;                                               //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) SKUIProductPageHeaderViewController * headerViewController;                  //@synthesize headerViewController=_headerViewController - In the implementation block
@property (assign,nonatomic,__weak) <SKUIProductPageChildViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)delegate;
-(id)initWithStyle:(int)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)scrollView;
-(id)colorScheme;
-(void)setColorScheme:(id)arg1 ;
-(id)clientContext;
-(void)_addHeaderView;
-(id)headerViewController;
-(void)setHeaderViewController:(id)arg1 ;
-(void).cxx_destruct;
-(void)setClientContext:(id)arg1 ;
@end

