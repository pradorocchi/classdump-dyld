/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:46 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <StoreKitUI/SKUIItemStateCenterObserver.h>

@protocol SKUIBannerViewDelegate;
@class SKUIBannerView, SKUIClientContext, , UIImage, SSLookupItem, SKUIItemStateCenter, NSOperationQueue, NSMutableArray, NSDictionary, SKUIItemArtworkContext;

@interface SKUIBannerViewController : UIViewController <SKUIItemStateCenterObserver> {

	SKUIBannerView* _bannerView;
	SKUIClientContext* _clientContext;
	<SKUIBannerViewDelegate>* _delegate;
	UIImage* _iconImage;
	SSLookupItem* _item;
	long long _itemIdentifier;
	SKUIItemStateCenter* _itemStateCenter;
	NSOperationQueue* _resourceOperationQueue;
	NSMutableArray* _screenshotImages;
	NSDictionary* _scriptContextDictionary;
	SKUIItemArtworkContext* _itemArtworkContext;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                       //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) <SKUIBannerViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSOperationQueue * resourceOperationQueue;               //@synthesize resourceOperationQueue=_resourceOperationQueue - In the implementation block
@property (nonatomic,copy) NSDictionary * scriptContextDictionary;                    //@synthesize scriptContextDictionary=_scriptContextDictionary - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)loadView;
-(void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2 ;
-(id)scriptContextDictionary;
-(void)setScriptContextDictionary:(id)arg1 ;
-(id)clientContext;
-(void)_finishWithResponse:(id)arg1 error:(id)arg2 ;
-(id)resourceOperationQueue;
-(void)_warmItemStateCenter;
-(void)_closeButtonAction:(id)arg1 ;
-(void)_bannerViewAction:(id)arg1 ;
-(void)_reloadBannerView;
-(id)_itemState;
-(void)_launchApp;
-(void)_loadImages;
-(id)_itemArtworkContext;
-(void)_setIcon:(id)arg1 error:(id)arg2 ;
-(id)_screenshotConsumerWithSize:(CGSize)arg1 ;
-(void)_setScreenshot:(id)arg1 forIndex:(int)arg2 error:(id)arg3 ;
-(id)_iconImage;
-(void)setResourceOperationQueue:(id)arg1 ;
-(void).cxx_destruct;
-(void)setClientContext:(id)arg1 ;
-(void)loadWithProductParameters:(id)arg1 ;
@end

