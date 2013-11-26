/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>

@protocol SKStoreProductViewControllerDelegatePrivate, SKUIServiceProductPageViewController;
@class NSString, _UIAsyncInvocation, , SKRemoteProductViewController, SKInvocationQueueProxy, NSDictionary, GKGame;

@interface SKStoreProductViewController : UIViewController {

	NSString* _additionalBuyParameters;
	NSString* _affiliateIdentifier;
	BOOL _automaticallyDismisses;
	_UIAsyncInvocation* _cancelRequest;
	NSString* _clientIdentifier;
	<SKStoreProductViewControllerDelegatePrivate>* _delegate;
	/*^block*/ id _loadBlock;
	int _originalStatusBarStyle;
	int _productPageStyle;
	SKRemoteProductViewController* _remoteViewController;
	SKInvocationQueueProxy<SKUIServiceProductPageViewController>* _serviceProxy;
	NSDictionary* _scriptContextDictionary;
	BOOL _showsStoreButton;

}

@property (nonatomic,retain) GKGame * _gkGame; 
@property (nonatomic,copy) id _gkCompletionHandler; 
@property (assign,nonatomic) <SKStoreProductViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * affiliateIdentifier;                                   //@synthesize affiliateIdentifier=_affiliateIdentifier - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                                      //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * scriptContextDictionary;                           //@synthesize scriptContextDictionary=_scriptContextDictionary - In the implementation block
@property (assign,nonatomic) int productPageStyle;                                           //@synthesize productPageStyle=_productPageStyle - In the implementation block
@property (assign,nonatomic) BOOL showsStoreButton;                                          //@synthesize showsStoreButton=_showsStoreButton - In the implementation block
@property (nonatomic,copy) NSString * additionalBuyParameters;                               //@synthesize additionalBuyParameters=_additionalBuyParameters - In the implementation block
@property (assign,nonatomic) BOOL automaticallyDismisses;                                    //@synthesize automaticallyDismisses=_automaticallyDismisses - In the implementation block
+(void)_validateURL:(id)arg1 withSheetInfo:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
+(void)getCanLoadURL:(id)arg1 withURLBag:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
+(void)getCanLoadURL:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(id)_gkGame;
-(void)set_gkGame:(id)arg1 ;
-(/*^block*/ id)_gkCompletionHandler;
-(void)set_gkCompletionHandler:(/*^block*/ id)arg1 ;
-(void)loadProductWithURL:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)_requestRemoteViewController;
-(void)_resetRemoteViewController;
-(void)_throwUnsupportedPresentationException;
-(void)_setLoadBlock:(/*^block*/ id)arg1 ;
-(void)_didFinish;
-(void)_loadDidFinishWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)loadProductWithRequest:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)_didFinishWithResult:(int)arg1 ;
-(void)_presentPageWithRequest:(id)arg1 animated:(BOOL)arg2 ;
-(id)additionalBuyParameters;
-(BOOL)automaticallyDismisses;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_willBecomeContentViewControllerOfPopover:(id)arg1 ;
-(void)_addRemoteView;
-(void)setAdditionalBuyParameters:(id)arg1 ;
-(id)scriptContextDictionary;
-(void)setScriptContextDictionary:(id)arg1 ;
-(BOOL)showsStoreButton;
-(void)setShowsStoreButton:(BOOL)arg1 ;
-(id)affiliateIdentifier;
-(void)setAffiliateIdentifier:(id)arg1 ;
-(id)clientIdentifier;
-(void)setClientIdentifier:(id)arg1 ;
-(void)loadProductWithPageDictionary:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)setAutomaticallyDismisses:(BOOL)arg1 ;
-(void)loadProductWithParameters:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(int)productPageStyle;
-(void)setProductPageStyle:(int)arg1 ;
@end

