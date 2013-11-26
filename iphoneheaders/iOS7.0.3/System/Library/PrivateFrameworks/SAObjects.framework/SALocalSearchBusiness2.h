/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SADomainObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SALocation, NSURL, NSArray, NSString, NSDictionary, SALocalSearchOperationHours;

@interface SALocalSearchBusiness2 : SADomainObject <SAAceSerializable>

@property (nonatomic,retain) SALocation * address; 
@property (nonatomic,copy) NSURL * businessUrl; 
@property (nonatomic,copy) NSArray * categories; 
@property (nonatomic,copy) NSString * currencySymbol; 
@property (nonatomic,copy) NSString * description; 
@property (nonatomic,copy) NSString * extSessionGuid; 
@property (nonatomic,copy) NSDictionary * identifierMap; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSArray * offerLists; 
@property (nonatomic,retain) SALocalSearchOperationHours * operationHours; 
@property (nonatomic,copy) NSString * phoneNumber; 
@property (nonatomic,copy) NSArray * photoList; 
@property (nonatomic,copy) NSString * priceRange; 
@property (nonatomic,copy) NSArray * reviewList; 
+(id)business2;
+(id)business2WithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setPhoneNumber:(id)arg1 ;
-(void)setAddress:(id)arg1 ;
-(id)currencySymbol;
-(void)setCurrencySymbol:(id)arg1 ;
-(id)groupIdentifier;
-(id)extSessionGuid;
-(void)setExtSessionGuid:(id)arg1 ;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)phoneNumber;
-(id)categories;
-(void)setCategories:(id)arg1 ;
-(id)address;
-(void)setDescription:(id)arg1 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(id)businessUrl;
-(void)setBusinessUrl:(id)arg1 ;
-(id)priceRange;
-(void)setPriceRange:(id)arg1 ;
-(id)identifierMap;
-(void)setIdentifierMap:(id)arg1 ;
-(id)offerLists;
-(void)setOfferLists:(id)arg1 ;
-(id)operationHours;
-(void)setOperationHours:(id)arg1 ;
-(id)photoList;
-(void)setPhotoList:(id)arg1 ;
-(void)setReviewList:(id)arg1 ;
-(id)reviewList;
@end

