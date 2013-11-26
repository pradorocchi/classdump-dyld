/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/StoreKitUIService.app/StoreKitUIService
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>
#import <Maps/SKProductPageViewControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSNumber, NSMutableArray, NSObject, SUNavigationController, SKProductPageViewController;

@interface ServiceProductPageViewController : UIViewController <SKProductPageViewControllerDelegate, UIAlertViewDelegate> {

	NSString* _additionalBuyParameters;
	NSString* _affiliateID;
	NSNumber* _clientAdamID;
	NSString* _clientBundleID;
	int _clientURLBagType;
	NSMutableArray* _dialogs;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	SUNavigationController* _navigationController;
	SKProductPageViewController* _productPageViewController;
	/*^block*/ id _starRatingCompletionBlock;

}
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(id)_clientViewControllerProxy;
-(void)_reloadClientAdamIDForBundleID:(id)arg1 ;
-(BOOL)_isClientEntitled;
-(void)_presentAlertViewForDialog:(id)arg1 ;
-(void)promptForStarRatingWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)productPage:(id)arg1 didReceiveTitle:(id)arg2 ;
-(void)finishStarRatingPromptWithRating:(id)arg1 ;
-(void)loadProductWithPageDictionary:(id)arg1 ;
-(void)loadProductWithURL:(id)arg1 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_willAppearInRemoteViewController;
-(void)setAdditionalBuyParameters:(id)arg1 ;
-(void)productPageDidFinishLoad:(id)arg1 ;
-(void)_sendDidFinishWithResult:(int)arg1 ;
-(void)productPage:(id)arg1 presentAlertForDialog:(id)arg2 ;
-(void)productPage:(id)arg1 setStatusBarHidden:(BOOL)arg2 withAnimation:(int)arg3 ;
-(void)productPage:(id)arg1 setStatusBarStyle:(int)arg2 animated:(BOOL)arg3 ;
-(void)productPage:(id)arg1 willDismissViewController:(id)arg2 ;
-(void)productPage:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)productPage:(id)arg1 willMakePurchases:(id)arg2 ;
-(void)loadProductWithRequest:(id)arg1 ;
-(void)loadProductWithParameters:(id)arg1 ;
-(void)productPage:(id)arg1 didFinishWithResult:(int)arg2 ;
-(void)productPage:(id)arg1 presentProductPageWithRequest:(id)arg2 animated:(BOOL)arg3 ;
-(void)productPage:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)setScriptContextDictionary:(id)arg1 ;
-(void)setShowsStoreButton:(id)arg1 ;
-(void)setAffiliateIdentifier:(id)arg1 ;
-(void)setClientIdentifier:(id)arg1 ;
-(void)setProductPageStyle:(id)arg1 ;
@end

