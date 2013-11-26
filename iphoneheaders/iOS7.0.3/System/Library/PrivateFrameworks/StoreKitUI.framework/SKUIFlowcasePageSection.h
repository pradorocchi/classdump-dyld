/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:54 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <StoreKitUI/SKUIFlowcaseDelegate.h>
#import <StoreKitUI/SKUIMissingItemDelegate.h>

@class SKUIFlowcaseArtworkLoader, SKUIFlowcaseViewController, SKUIMissingItemLoader, SKUIFlowcaseComponent;

@interface SKUIFlowcasePageSection : SKUIStorePageSection <SKUIFlowcaseDelegate, SKUIMissingItemDelegate> {

	SKUIFlowcaseArtworkLoader* _artworkLoader;
	SKUIFlowcaseViewController* _flowCaseViewController;
	SKUIMissingItemLoader* _missingItemLoader;
	BOOL _pinned;
	int _rotationInterfaceOrientation;

}

@property (nonatomic,@dynamic,readonly) SKUIFlowcaseComponent * pageComponent; 
-(void)dealloc;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(id)initWithPageComponent:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(int)numberOfCells;
-(id)popPinnedHeaderView;
-(void)restorePinnedHeaderView:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(void)prefetchResourcesWithReason:(int)arg1 ;
-(id)_missingItemLoader;
-(void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 ;
-(void)_loadMissingItemsFromIndex:(int)arg1 withReason:(int)arg2 ;
-(void)_addVisibleImpressionsToSession:(id)arg1 ;
-(id)_flowCaseViewController;
-(void)flowcase:(id)arg1 didSelectItem:(id)arg2 atIndex:(int)arg3 ;
-(id)flowcase:(id)arg1 imageForItem:(id)arg2 index:(int)arg3 orientation:(int)arg4 ;
-(void)flowcaseDidChangeVisibleViews:(id)arg1 ;
-(void).cxx_destruct;
-(id)cellForIndexPath:(id)arg1 ;
-(id)_artworkLoader;
@end

