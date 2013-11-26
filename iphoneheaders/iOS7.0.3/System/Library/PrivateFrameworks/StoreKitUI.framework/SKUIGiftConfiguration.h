/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:54 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSArray, NSMutableDictionary, SKUIClientContext, NSString, NSURL, NSHashTable, NSOperationQueue;

@interface SKUIGiftConfiguration : NSObject {

	NSArray* _charities;
	NSMutableDictionary* _charityImages;
	SKUIClientContext* _clientContext;
	NSString* _currencySymbol;
	int _currencySymbolPosition;
	NSArray* _fixedGiftAmountLabels;
	NSArray* _fixedGiftAmountValues;
	NSString* _senderName;
	NSRange _giftAmountRange;
	NSURL* _giftPurchaseURL;
	NSURL* _giftValidationURL;
	int _maximumMessageLength;
	NSHashTable* _observers;
	NSOperationQueue* _operationQueue;
	NSString* _senderEmailAddress;
	NSString* _storeFrontName;
	NSArray* _themes;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) NSString * currencySymbol;                      //@synthesize currencySymbol=_currencySymbol - In the implementation block
@property (nonatomic,readonly) int currencySymbolPosition;                     //@synthesize currencySymbolPosition=_currencySymbolPosition - In the implementation block
@property (nonatomic,readonly) NSArray * fixedGiftAmountLabels;                //@synthesize fixedGiftAmountLabels=_fixedGiftAmountLabels - In the implementation block
@property (nonatomic,readonly) NSArray * fixedGiftAmountValues;                //@synthesize fixedGiftAmountValues=_fixedGiftAmountValues - In the implementation block
@property (nonatomic,readonly) NSRange giftAmountRange;                        //@synthesize giftAmountRange=_giftAmountRange - In the implementation block
@property (nonatomic,readonly) NSURL * giftPurchaseURL;                        //@synthesize giftPurchaseURL=_giftPurchaseURL - In the implementation block
@property (nonatomic,readonly) NSURL * giftValidationURL;                      //@synthesize giftValidationURL=_giftValidationURL - In the implementation block
@property (nonatomic,readonly) int maximumMessageLength;                       //@synthesize maximumMessageLength=_maximumMessageLength - In the implementation block
@property (nonatomic,readonly) NSString * senderEmailAddress;                  //@synthesize senderEmailAddress=_senderEmailAddress - In the implementation block
@property (nonatomic,readonly) NSString * senderName;                          //@synthesize senderName=_senderName - In the implementation block
@property (nonatomic,readonly) NSString * storeFrontName;                      //@synthesize storeFrontName=_storeFrontName - In the implementation block
@property (nonatomic,readonly) NSArray * themes;                               //@synthesize themes=_themes - In the implementation block
-(id)currencySymbol;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)themes;
-(id)senderEmailAddress;
-(id)clientContext;
-(id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2 ;
-(void)loadConfigurationWithCompletionBlock:(/*^block*/ id)arg1 ;
-(id)senderName;
-(id)giftValidationURL;
-(id)storeFrontName;
-(int)maximumMessageLength;
-(id)fixedGiftAmountLabels;
-(id)fixedGiftAmountValues;
-(int)currencySymbolPosition;
-(void)_finishLoadWithResponse:(id)arg1 error:(id)arg2 block:(/*^block*/ id)arg3 ;
-(void)_setLogoImage:(id)arg1 forCharity:(id)arg2 ;
-(void)_loadThemeImages;
-(void)_finishLoadAccountInfoWithResponse:(id)arg1 error:(id)arg2 block:(/*^block*/ id)arg3 ;
-(void)_setHeaderImage:(id)arg1 forTheme:(id)arg2 ;
-(id)charityForIdentifier:(id)arg1 ;
-(BOOL)loadCachedConfiguration;
-(void)loadLogoForCharity:(id)arg1 ;
-(id)logoImageForCharity:(id)arg1 ;
-(NSRange)giftAmountRange;
-(id)giftPurchaseURL;
-(void).cxx_destruct;
@end

