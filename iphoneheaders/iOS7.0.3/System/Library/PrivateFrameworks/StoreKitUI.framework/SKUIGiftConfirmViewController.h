/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/SKUIGiftStepViewController.h>

@class SKUIGiftConfirmView, SKUIGiftPurchaseRequest, SKUIFocusedTouchGestureRecognizer;

@interface SKUIGiftConfirmViewController : SKUIGiftStepViewController {

	SKUIGiftConfirmView* _confirmView;
	BOOL _isShowingConfirmation;
	SKUIGiftPurchaseRequest* _purchaseRequest;
	SKUIFocusedTouchGestureRecognizer* _touchRecognizer;

}
-(void)dealloc;
-(void)loadView;
-(id)initWithGift:(id)arg1 configuration:(id)arg2 ;
-(void)_termsButtonAction:(id)arg1 ;
-(void)_buyButtonAction:(id)arg1 ;
-(void)_purchaseGift;
-(void)_setShowingConfirmation:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_removeCancelGestureRecognizer;
-(void)_cancelBuyConfirmation:(id)arg1 ;
-(void)_showSuccessPage;
-(void)_finishPurchaseWithResult:(BOOL)arg1 errorMessage:(id)arg2 ;
-(void).cxx_destruct;
@end

