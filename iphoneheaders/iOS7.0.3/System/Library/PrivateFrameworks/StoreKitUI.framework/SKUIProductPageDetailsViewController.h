/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:50 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>
#import <StoreKitUI/SKUIScreenshotsDelegate.h>
#import <StoreKitUI/SKUIItemStateCenterObserver.h>
#import <StoreKitUI/SKUIProductPageChildViewController.h>

@protocol SKUIProductPageChildViewControllerDelegate;
@class SKUIClientContext, SKUIProductPageTableHeaderOnlySection, , SKUIProductPageTableTextBoxSection, NSOperationQueue, SKUIProductPage, NSMutableArray, SKUIProductPageTableViewController, SKUILayoutCache, UIScrollView, SKUIProductPageHeaderViewController;

@interface SKUIProductPageDetailsViewController : UIViewController <SKUIScreenshotsDelegate, SKUIItemStateCenterObserver, SKUIProductPageChildViewController> {

	SKUIClientContext* _clientContext;
	SKUIProductPageTableHeaderOnlySection* _copyrightSection;
	<SKUIProductPageChildViewControllerDelegate>* _delegate;
	SKUIProductPageTableTextBoxSection* _descriptionSection;
	NSOperationQueue* _operationQueue;
	SKUIProductPage* _productPage;
	SKUIProductPageTableHeaderOnlySection* _screenshotsSection;
	NSMutableArray* _sections;
	SKUIProductPageTableTextBoxSection* _storeNotesSection;
	SKUIProductPageTableViewController* _tableViewController;
	SKUILayoutCache* _textLayoutCache;
	SKUIProductPageTableTextBoxSection* _whatsNewSection;

}

@property (nonatomic,readonly) SKUIProductPage * productPage;                                             //@synthesize productPage=_productPage - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                           //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                           //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) SKUIProductPageHeaderViewController * headerViewController; 
@property (assign,nonatomic,__weak) <SKUIProductPageChildViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(float)defaultPageWidthForUserInterfaceIdiom:(int)arg1 ;
-(id)operationQueue;
-(void)setOperationQueue:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)loadView;
-(id)scrollView;
-(id)_tableViewController;
-(void)itemStateCenterRestrictionsChanged:(id)arg1 ;
-(id)clientContext;
-(id)productPage;
-(id)headerViewController;
-(void)setHeaderViewController:(id)arg1 ;
-(id)_storeNotesSection;
-(id)_textLayoutRequestWithText:(id)arg1 widthOffset:(float)arg2 ;
-(id)_screenshotsSection;
-(id)_descriptionSection;
-(id)_whatsNewSection;
-(id)_featuresSection;
-(id)_infoSection;
-(void)_expandSection:(id)arg1 ;
-(void)_addTapRecognizerForView:(id)arg1 action:(SEL)arg2 ;
-(id)_copyrightSection;
-(void)screenshotsWillBeginDragging:(id)arg1 ;
-(void).cxx_destruct;
-(void)setClientContext:(id)arg1 ;
-(id)initWithProductPage:(id)arg1 ;
@end

