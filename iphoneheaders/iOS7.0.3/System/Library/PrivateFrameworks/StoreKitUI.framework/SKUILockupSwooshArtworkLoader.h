/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:50 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/SKUISwooshArtworkLoader.h>

@class SKUIItemArtworkContext, SKUILockupSwooshViewController;

@interface SKUILockupSwooshArtworkLoader : SKUISwooshArtworkLoader {

	SKUIItemArtworkContext* _context;

}

@property (nonatomic,@dynamic,readonly) SKUILockupSwooshViewController * swooshViewController; 
-(id)placeholderImageForItem:(id)arg1 ;
-(id)initWithArtworkLoader:(id)arg1 swoosh:(id)arg2 ;
-(void)setImage:(id)arg1 forRequest:(id)arg2 ;
-(void)loadImagesForNextPageWithReason:(int)arg1 ;
-(BOOL)loadImageForItem:(id)arg1 reason:(int)arg2 ;
-(id)cachedImageForItem:(id)arg1 ;
-(void).cxx_destruct;
@end

