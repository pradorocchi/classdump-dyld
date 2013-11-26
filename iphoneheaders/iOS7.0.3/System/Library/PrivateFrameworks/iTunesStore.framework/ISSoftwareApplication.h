/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:51 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreServices/SSXPCCoding.h>

@class NSNumber, NSString, SSItemContentRating, NSArray, NSDate;

@interface ISSoftwareApplication : NSObject <SSXPCCoding> {

	NSNumber* _accountDSID;
	NSString* _accountIdentifier;
	NSString* _bundleIdentifier;
	NSString* _bundleShortVersionString;
	NSString* _bundleVersion;
	NSString* _containerPath;
	SSItemContentRating* _contentRating;
	NSString* _deviceIdentifierForVendor;
	NSNumber* _itemIdentifier;
	NSString* _itemName;
	BOOL _profileValidated;
	NSString* _softwareType;
	NSNumber* _storeFrontIdentifier;
	NSNumber* _versionIdentifier;
	NSArray* _versionOrdering;
	NSDate* _receiptExpirationDate;
	unsigned _vppStateFlags;

}

@property (nonatomic,retain) NSNumber * accountDSID;                                       //@synthesize accountDSID=_accountDSID - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;                                   //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleShortVersionString;                            //@synthesize bundleShortVersionString=_bundleShortVersionString - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                                       //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSString * containerPath;                                       //@synthesize containerPath=_containerPath - In the implementation block
@property (nonatomic,copy) SSItemContentRating * contentRating;                            //@synthesize contentRating=_contentRating - In the implementation block
@property (nonatomic,copy) NSString * deviceIdentifierForVendor;                           //@synthesize deviceIdentifierForVendor=_deviceIdentifierForVendor - In the implementation block
@property (nonatomic,retain) NSNumber * itemIdentifier;                                    //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * itemName;                                            //@synthesize itemName=_itemName - In the implementation block
@property (assign,getter=isProfileValidated,nonatomic) BOOL profileValidated;              //@synthesize profileValidated=_profileValidated - In the implementation block
@property (nonatomic,copy) NSString * softwareType;                                        //@synthesize softwareType=_softwareType - In the implementation block
@property (nonatomic,retain) NSNumber * storeFrontIdentifier;                              //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * versionIdentifier;                                 //@synthesize versionIdentifier=_versionIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * versionOrdering;                                      //@synthesize versionOrdering=_versionOrdering - In the implementation block
@property (nonatomic,readonly) NSDate * receiptExpirationDate;                             //@synthesize receiptExpirationDate=_receiptExpirationDate - In the implementation block
@property (nonatomic,readonly) unsigned vppStateFlags; 
+(id)lookupAttributeKeys;
-(id)bundleVersion;
-(void)setAccountIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)bundleIdentifier;
-(id)deviceIdentifierForVendor;
-(id)accountIdentifier;
-(id)contentRating;
-(void)setContentRating:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(BOOL)isProfileValidated;
-(void)setProfileValidated:(BOOL)arg1 ;
-(void)setBundleShortVersionString:(id)arg1 ;
-(void)setAccountDSID:(id)arg1 ;
-(void)setContainerPath:(id)arg1 ;
-(void)_loadMetadataFromContainer:(id)arg1 ;
-(void)setItemName:(id)arg1 ;
-(void)resetVPPStateFlags;
-(unsigned)vppStateFlags;
-(id)containerPath;
-(void)setDeviceIdentifierForVendor:(id)arg1 ;
-(id)itemName;
-(id)receiptExpirationDate;
-(id)accountDSID;
-(id)itemIdentifier;
-(id)storeFrontIdentifier;
-(void)setStoreFrontIdentifier:(id)arg1 ;
-(id)bundleShortVersionString;
-(id)softwareType;
-(id)versionIdentifier;
-(id)initWithMobileInstallationDictionary:(id)arg1 ;
-(void)setItemIdentifier:(id)arg1 ;
-(id)versionOrdering;
-(void)setBundleIdentifier:(id)arg1 ;
-(void)setBundleVersion:(id)arg1 ;
-(void)setSoftwareType:(id)arg1 ;
-(void)setVersionIdentifier:(id)arg1 ;
-(void)setVersionOrdering:(id)arg1 ;
@end

