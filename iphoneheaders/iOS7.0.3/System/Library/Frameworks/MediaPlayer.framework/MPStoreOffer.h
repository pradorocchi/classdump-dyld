/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSDictionary, NSString, NSURL;

@interface MPStoreOffer : NSObject {

	NSDictionary* _offerDictionary;
	MPStoreOffer* _regularPriceOffer;
	NSDictionary* _mediaAssetDictionary;
	unsigned long long _entityPersistentID;
	int _entityType;
	NSString* _entityTitle;
	int _passType;

}

@property (nonatomic,readonly) int entityType;                                     //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) unsigned long long entityPersistentID;              //@synthesize entityPersistentID=_entityPersistentID - In the implementation block
@property (nonatomic,readonly) NSString * entityTitle;                             //@synthesize entityTitle=_entityTitle - In the implementation block
@property (nonatomic,readonly) int buyType; 
@property (nonatomic,readonly) int passType;                                       //@synthesize passType=_passType - In the implementation block
@property (nonatomic,readonly) NSString * buyParameters; 
@property (nonatomic,readonly) NSString * displayTitle; 
@property (nonatomic,readonly) NSString * actionDisplayTitle; 
@property (nonatomic,readonly) BOOL requiresConfirmation; 
@property (nonatomic,readonly) NSString * displayPrice; 
@property (nonatomic,readonly) float price; 
@property (nonatomic,readonly) NSString * regularPriceDisplayPrice; 
@property (nonatomic,readonly) unsigned long long downloadSize; 
@property (nonatomic,readonly) NSURL * previewURL; 
@property (nonatomic,readonly) double previewDuration; 
+(int)bestOfferVariantInOfferDictionaries:(id)arg1 withPreferredVariant:(int)arg2 ;
+(void)getBuyOfferDictionary:(id*)arg1 regularPriceOfferDictionary:(id*)arg2 inOfferDictionaries:(id)arg3 variant:(int)arg4 ;
+(int)buyTypeForOfferDictionary:(id)arg1 ;
+(id)offerVariantResponseKeyForOfferVariant:(int)arg1 ;
+(void)getBuyOfferDictionary:(id*)arg1 regularPriceOfferDictionary:(id*)arg2 inOfferDictionaries:(id)arg3 variantString:(id)arg4 ;
+(id)_priceForOfferDictionary:(id)arg1 ;
-(int)buyType;
-(id)initWithStoreOfferDictionary:(id)arg1 regularPriceOfferDictionary:(id)arg2 passType:(int)arg3 entityType:(int)arg4 persistentID:(unsigned long long)arg5 title:(id)arg6 ;
-(float)price;
-(int)passType;
-(BOOL)_isBuy;
-(id)actionDisplayTitle;
-(id)displayPrice;
-(id)buyURL;
-(id)buyParameters;
-(id)displayTitle;
-(BOOL)requiresConfirmation;
-(id)regularPriceDisplayPrice;
-(unsigned long long)downloadSize;
-(id)previewURL;
-(double)previewDuration;
-(id)storeOfferDictionary;
-(unsigned long long)entityPersistentID;
-(int)entityType;
-(id)entityTitle;
-(void).cxx_destruct;
@end

