/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:54 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSArray, NSString;

@interface SKUIDeveloperInfo : NSObject <NSCopying> {

	NSArray* _addressLines;
	NSString* _administrativeArea;
	NSString* _businessRegistrationIdentifier;
	NSString* _country;
	NSString* _ecommerceRegistrationIdentifier;
	NSString* _emailAddress;
	NSString* _isoCountryCode;
	NSString* _locality;
	NSString* _phoneNumber;
	NSString* _tradeName;
	NSString* _tradeRepresentativeName;
	NSString* _postalCode;

}

@property (nonatomic,copy) NSString * businessRegistrationIdentifier;               //@synthesize businessRegistrationIdentifier=_businessRegistrationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * ECommerceRegistrationIdentifier;              //@synthesize ecommerceRegistrationIdentifier=_ecommerceRegistrationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;                                 //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                                  //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * tradeName;                                    //@synthesize tradeName=_tradeName - In the implementation block
@property (nonatomic,copy) NSString * tradeRepresentativeName;                      //@synthesize tradeRepresentativeName=_tradeRepresentativeName - In the implementation block
@property (nonatomic,copy) NSArray * addressLines;                                  //@synthesize addressLines=_addressLines - In the implementation block
@property (nonatomic,copy) NSString * administrativeArea;                           //@synthesize administrativeArea=_administrativeArea - In the implementation block
@property (nonatomic,copy) NSString * country;                                      //@synthesize country=_country - In the implementation block
@property (nonatomic,copy) NSString * ISOCountryCode;                               //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (nonatomic,copy) NSString * locality;                                     //@synthesize locality=_locality - In the implementation block
@property (nonatomic,copy) NSString * postalCode;                                   //@synthesize postalCode=_postalCode - In the implementation block
-(void)setCountry:(id)arg1 ;
-(void)setPhoneNumber:(id)arg1 ;
-(id)ISOCountryCode;
-(id)postalCode;
-(void)setPostalCode:(id)arg1 ;
-(void)setISOCountryCode:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)phoneNumber;
-(void)setEmailAddress:(id)arg1 ;
-(void)setAdministrativeArea:(id)arg1 ;
-(void)setLocality:(id)arg1 ;
-(id)emailAddress;
-(id)locality;
-(id)administrativeArea;
-(id)country;
-(id)tradeName;
-(id)tradeRepresentativeName;
-(id)formattedAddressString;
-(id)ECommerceRegistrationIdentifier;
-(id)businessRegistrationIdentifier;
-(id)initWithDeveloperDictionary:(id)arg1 ;
-(void)setTradeName:(id)arg1 ;
-(void)setAddressLines:(id)arg1 ;
-(void)setBusinessRegistrationIdentifier:(id)arg1 ;
-(void)setECommerceRegistrationIdentifier:(id)arg1 ;
-(void)setTradeRepresentativeName:(id)arg1 ;
-(id)addressLines;
-(void).cxx_destruct;
@end

