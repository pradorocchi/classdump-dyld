/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/SUViewController.h>
#import <StoreKitUI/SKUIBannerViewDelegate.h>
#import <StoreKitUI/SKUIIPadProductPageDelegate.h>
#import <iTunesStoreUI/SKUIIPhoneProductPageDelegate.h>
#import <StoreKitUI/SUClientInterfaceDelegatePrivate.h>
#import <iTunesStoreUI/SUPurchaseManagerDelegate.h>
#import <StoreKitUI/SKUIItemStateCenterObserver.h>

@protocol SKProductPageViewControllerDelegatePrivate;
@class SKUIBannerViewController, SKUIClientContext, , SUDialogManager, SUBarButtonItem, SKUIIPadProductPageViewController, SKUIIPhoneProductPageViewController, NSURL, SUPreviewOverlayViewController, NSDictionary, SUPurchaseManager, SKUIITunesStoreUIPageViewController, SKUIItemStateCenter;

@interface SKProductPageViewController : SUViewController <SKUIBannerViewDelegate, SKUIIPadProductPageDelegate, SKUIIPhoneProductPageDelegate, SUClientInterfaceDelegatePrivate, SUPurchaseManagerDelegate, SKUIItemStateCenterObserver> {

	SKUIBannerViewController* _bannerViewController;
	SKUIClientContext* _clientContext;
	<SKProductPageViewControllerDelegatePrivate>* _delegate;
	SUDialogManager* _dialogManager;
	SUBarButtonItem* _gotoStoreButtonItem;
	SKUIIPadProductPageViewController* _ipadProductPageViewController;
	SKUIIPhoneProductPageViewController* _iphoneProductPageViewController;
	NSURL* _nativeURL;
	SUPreviewOverlayViewController* _previewOverlay;
	NSDictionary* _productParameters;
	SUPurchaseManager* _purchaseManager;
	BOOL _showsStoreButton;
	int _style;
	SKUIITunesStoreUIPageViewController* _storePageViewController;
	SKUIItemStateCenter* _itemStateCenter;

}

@property (assign,nonatomic,__weak) <SKProductPageViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int productPageStyle;                                                 //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL showsStoreButton;                                                //@synthesize showsStoreButton=_showsStoreButton - In the implementation block
@property (nonatomic,copy) NSDictionary * scriptContextDictionary; 
+(id)_defaultClientInterface;
+(void)_validateURL:(id)arg1 withURLBag:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
+(id)_defaultClientIdentifier;
+(void)getCanLoadWithURL:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_setShowsCancelButton:(BOOL)arg1 ;
-(void)_purchaseFailedNotification:(id)arg1 ;
-(void)_purchaseFinishedNotification:(id)arg1 ;
-(id)_initSKProductPageViewController;
-(void)_loadRequestForProductParameters;
-(void)_loadProductWithRequest:(id)arg1 ;
-(void)_reloadGotoStoreButton;
-(void)_reloadViews;
-(void)_sendDidFailLoadWithError:(id)arg1 ;
-(void)_sendDidFinishWithResult:(int)arg1 ;
-(id)_previewOverlay;
-(void)_showProductPage:(id)arg1 pageEvent:(id)arg2 ;
-(void)loadProductWithRequest:(id)arg1 ;
-(void)loadProductWithParameters:(id)arg1 ;
-(void)loadWithStorePageRequest:(id)arg1 ;
-(id)_newRequestPropertiesWithRequest:(id)arg1 ;
-(void)_setResponse:(id)arg1 forProperties:(id)arg2 error:(id)arg3 ;
-(void)_gotoStoreButtonAction:(id)arg1 ;
-(void)bannerViewDidClose:(id)arg1 ;
-(void)bannerView:(id)arg1 didFailWithError:(id)arg2 ;
-(void)iPadProductPage:(id)arg1 openItem:(id)arg2 ;
-(void)iPadProductPage:(id)arg1 openURL:(id)arg2 viewControllerBlock:(/*^block*/ id)arg3 ;
-(void)itemStateCenter:(id)arg1 didFinishPurchases:(id)arg2 ;
-(id)initWithProductPageStyle:(int)arg1 ;
-(id)scriptContextDictionary;
-(void)setScriptContextDictionary:(id)arg1 ;
-(void)loadWithProductPage:(id)arg1 ;
-(void)_showPageWithRequest:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)showsStoreButton;
-(void)setShowsStoreButton:(BOOL)arg1 ;
-(void).cxx_destruct;
-(void)setClientInterface:(id)arg1 ;
-(void)storePage:(id)arg1 finishedWithSuccess:(BOOL)arg2 ;
-(void)purchaseManager:(id)arg1 didFinishPurchaseRequest:(id)arg2 withError:(id)arg3 ;
-(void)purchaseManager:(id)arg1 willAddPurchases:(id)arg2 ;
-(void)clientInterface:(id)arg1 exitStoreWithReason:(int)arg2 ;
-(void)clientInterface:(id)arg1 presentDialog:(id)arg2 ;
-(void)clientInterface:(id)arg1 hidePreviewOverlayAnimated:(BOOL)arg2 ;
-(void)clientInterface:(id)arg1 showPreviewOverlayAnimated:(BOOL)arg2 ;
-(void)clientInterface:(id)arg1 setStatusBarHidden:(BOOL)arg2 withAnimation:(int)arg3 ;
-(void)clientInterface:(id)arg1 setStatusBarStyle:(int)arg2 animated:(BOOL)arg3 ;
-(id)previewOverlayForClientInterface:(id)arg1 ;
-(id)scriptInterfaceForClientInterface:(id)arg1 ;
-(void)_showPreviewOverlayAnimated:(BOOL)arg1 ;
-(void)_failWithError:(id)arg1 ;
-(void)clientInterface:(id)arg1 willDismissViewController:(id)arg2 ;
-(void)clientInterface:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)_loadClientContextWithCompletionBlock:(/*^block*/ id)arg1 ;
-(BOOL)iPhoneProductPage:(id)arg1 shouldOpenItem:(id)arg2 ;
-(BOOL)iPhoneProductPage:(id)arg1 shouldOpenURL:(id)arg2 ;
-(int)productPageStyle;
-(void)setProductPageStyle:(int)arg1 ;
@end

