/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:55 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIImageDataConsumer.h>
#import <CoreFoundation/NSCopying.h>

@class UIColor, SKUIColorScheme;

@interface SKUIProductImageDataConsumer : SKUIImageDataConsumer <NSCopying> {

	UIColor* _backgroundColor;
	CGSize _iconSize;
	SKUIColorScheme* _colorScheme;

}

@property (nonatomic,readonly) CGSize iconSize;                          //@synthesize iconSize=_iconSize - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
+(id)smartBannerConsumer;
+(id)cardConsumer;
+(id)consumerWithSize:(CGSize)arg1 ;
+(id)giftComposeConsumer;
+(id)giftComposePosterConsumer;
+(id)giftComposeLetterboxConsumer;
+(id)giftResultConsumer;
+(id)giftThemeConsumer;
+(id)giftThemePosterConsumer;
+(id)giftThemeLetterboxConsumer;
+(id)lockupConsumerWithSize:(int)arg1 itemKind:(int)arg2 ;
+(id)chartsConsumer;
+(id)gridConsumer;
+(id)wishlistConsumer;
+(id)productPageConsumer;
+(id)swooshConsumer;
+(id)updatesConsumer;
+(id)purchasedConsumer;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)colorScheme;
-(void)setColorScheme:(id)arg1 ;
-(id)imageForImage:(id)arg1 ;
-(id)imageForColor:(id)arg1 ;
-(CGSize)iconSize;
-(id)imageForSize:(CGSize)arg1 ;
-(void).cxx_destruct;
@end

