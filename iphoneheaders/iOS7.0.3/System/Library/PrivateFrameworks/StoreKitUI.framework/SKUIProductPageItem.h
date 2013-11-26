/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:50 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/SKUIItem.h>

@class NSURL, NSArray, NSString, SKUIDeveloperInfo, SKUIStoreNotes;

@interface SKUIProductPageItem : SKUIItem {

	NSURL* _artistPageURL;
	NSArray* _contentRatingAdvisories;
	NSString* _contentRatingName;
	NSString* _copyrightString;
	SKUIDeveloperInfo* _developerInfo;
	BOOL _hasInAppPurchases;
	NSArray* _inAppPurchases;
	NSString* _installationRequirementsDescription;
	NSString* _itemDescription;
	NSString* _lastUpdateDateString;
	NSString* _licenseAgreementURLString;
	NSString* _privacyPolicyURLString;
	NSArray* _releaseNotes;
	NSString* _reviewsURLString;
	NSArray* _screenshots;
	NSString* _shortenedProductPageURLString;
	SKUIStoreNotes* _storeNotes;
	int _supportedFeatures;
	NSString* _supportURLString;
	NSArray* _trailers;
	NSString* _updateDescription;

}

@property (nonatomic,readonly) NSURL * artistPageURL;                                       //@synthesize artistPageURL=_artistPageURL - In the implementation block
@property (nonatomic,readonly) NSArray * contentRatingAdvisories;                           //@synthesize contentRatingAdvisories=_contentRatingAdvisories - In the implementation block
@property (nonatomic,readonly) NSString * contentRatingName;                                //@synthesize contentRatingName=_contentRatingName - In the implementation block
@property (nonatomic,readonly) NSString * copyrightString;                                  //@synthesize copyrightString=_copyrightString - In the implementation block
@property (nonatomic,readonly) SKUIDeveloperInfo * developerInfo;                           //@synthesize developerInfo=_developerInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasInAppPurchases;                                      //@synthesize hasInAppPurchases=_hasInAppPurchases - In the implementation block
@property (nonatomic,readonly) NSArray * inAppPurchases;                                    //@synthesize inAppPurchases=_inAppPurchases - In the implementation block
@property (nonatomic,readonly) NSString * installationRequirementsDescription;              //@synthesize installationRequirementsDescription=_installationRequirementsDescription - In the implementation block
@property (nonatomic,readonly) NSString * itemDescription;                                  //@synthesize itemDescription=_itemDescription - In the implementation block
@property (nonatomic,readonly) NSString * lastUpdateDateString;                             //@synthesize lastUpdateDateString=_lastUpdateDateString - In the implementation block
@property (nonatomic,readonly) NSString * licenseAgreementURLString;                        //@synthesize licenseAgreementURLString=_licenseAgreementURLString - In the implementation block
@property (nonatomic,readonly) NSString * privacyPolicyURLString;                           //@synthesize privacyPolicyURLString=_privacyPolicyURLString - In the implementation block
@property (nonatomic,readonly) NSArray * releaseNotes;                                      //@synthesize releaseNotes=_releaseNotes - In the implementation block
@property (nonatomic,readonly) NSString * reviewsURLString;                                 //@synthesize reviewsURLString=_reviewsURLString - In the implementation block
@property (nonatomic,readonly) NSArray * screenshots;                                       //@synthesize screenshots=_screenshots - In the implementation block
@property (nonatomic,readonly) NSString * shortenedProductPageURLString;                    //@synthesize shortenedProductPageURLString=_shortenedProductPageURLString - In the implementation block
@property (nonatomic,readonly) SKUIStoreNotes * storeNotes;                                 //@synthesize storeNotes=_storeNotes - In the implementation block
@property (nonatomic,readonly) int supportedFeatures;                                       //@synthesize supportedFeatures=_supportedFeatures - In the implementation block
@property (nonatomic,readonly) NSString * supportURLString;                                 //@synthesize supportURLString=_supportURLString - In the implementation block
@property (nonatomic,readonly) NSArray * trailers;                                          //@synthesize trailers=_trailers - In the implementation block
@property (nonatomic,readonly) NSString * updateDescription;                                //@synthesize updateDescription=_updateDescription - In the implementation block
-(id)developerInfo;
-(id)screenshots;
-(id)storeNotes;
-(id)itemDescription;
-(id)updateDescription;
-(id)inAppPurchases;
-(id)releaseNotes;
-(int)supportedFeatures;
-(id)trailers;
-(id)lastUpdateDateString;
-(id)contentRatingName;
-(BOOL)hasInAppPurchases;
-(id)artistPageURL;
-(id)contentRatingAdvisories;
-(id)installationRequirementsDescription;
-(void)_setVersionHistory:(id)arg1 ;
-(void)_setInAppPurchases:(id)arg1 ;
-(id)licenseAgreementURLString;
-(id)privacyPolicyURLString;
-(id)reviewsURLString;
-(id)shortenedProductPageURLString;
-(id)supportURLString;
-(void).cxx_destruct;
-(id)copyrightString;
-(id)initWithLookupDictionary:(id)arg1 ;
@end

