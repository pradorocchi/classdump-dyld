/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:53 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <StoreKitUI/SKUIChartsViewControllerDelegate.h>
#import <StoreKitUI/SKUIProductPageOverlayDelegate.h>

@class SKUIIPadChartsViewController, SKUIIPhoneChartsViewController, SKUIProductPageOverlayController, SKUIChartsComponent;

@interface SKUIChartsPageSection : SKUIStorePageSection <SKUIChartsViewControllerDelegate, SKUIProductPageOverlayDelegate> {

	SKUIIPadChartsViewController* _ipadViewController;
	SKUIIPhoneChartsViewController* _iphoneViewController;
	SKUIProductPageOverlayController* _overlayController;
	int _selectedChartIndex;
	int _selectedItemIndex;

}

@property (nonatomic,@dynamic,readonly) SKUIChartsComponent * pageComponent; 
-(void)dealloc;
-(id)initWithPageComponent:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(int)numberOfCells;
-(BOOL)collectionViewShouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionViewShouldSelectItemAtIndexPath:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(void)prefetchResourcesWithReason:(int)arg1 ;
-(BOOL)fitsToHeight;
-(id)productPageOverlay:(id)arg1 flipSourceViewToDismissItem:(id)arg2 ;
-(id)productPageOverlay:(id)arg1 flipSourceViewToPresentItem:(id)arg2 ;
-(void)productPageOverlayDidDismiss:(id)arg1 ;
-(id)_chartsViewController;
-(void)_recordClickEvent:(id)arg1 withItem:(id)arg2 itemIndex:(int)arg3 chartIndex:(int)arg4 ;
-(id)chartsViewController:(id)arg1 didConfirmItemOfferForItem:(id)arg2 atIndex:(int)arg3 chartIndex:(int)arg4 ;
-(void)chartsViewController:(id)arg1 didSelectItem:(id)arg2 atIndex:(int)arg3 chartIndex:(int)arg4 ;
-(void)chartsViewController:(id)arg1 willDisplayItem:(id)arg2 atIndex:(int)arg3 chartIndex:(int)arg4 ;
-(void).cxx_destruct;
-(id)cellForIndexPath:(id)arg1 ;
@end

