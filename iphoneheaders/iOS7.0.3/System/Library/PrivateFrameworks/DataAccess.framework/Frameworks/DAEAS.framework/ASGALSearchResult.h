/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:18 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DAEAS/ASItem.h>

@class NSDictionary, NSString, NSMutableArray, NSData, NSArray;

@interface ASGALSearchResult : ASItem {

	NSDictionary* _applicationData;
	NSString* _longID;
	NSMutableArray* _classes;
	NSMutableArray* _collectionIDs;
	NSString* _phone;
	NSString* _office;
	NSString* _title;
	NSString* _company;
	NSString* _alias;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _homePhone;
	NSString* _mobilePhone;
	NSString* _emailAddress;
	NSData* _photoData;

}

@property (retain) NSString * longID;                    //@synthesize longID=_longID - In the implementation block
@property (retain) NSArray * classes;                    //@synthesize classes=_classes - In the implementation block
@property (retain) NSArray * collectionIDs;              //@synthesize collectionIDs=_collectionIDs - In the implementation block
@property (copy) NSString * phone;                       //@synthesize phone=_phone - In the implementation block
@property (copy) NSString * office;                      //@synthesize office=_office - In the implementation block
@property (copy) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (copy) NSString * company;                     //@synthesize company=_company - In the implementation block
@property (copy) NSString * alias;                       //@synthesize alias=_alias - In the implementation block
@property (copy) NSString * firstName;                   //@synthesize firstName=_firstName - In the implementation block
@property (copy) NSString * lastName;                    //@synthesize lastName=_lastName - In the implementation block
@property (copy) NSString * homePhone;                   //@synthesize homePhone=_homePhone - In the implementation block
@property (copy) NSString * mobilePhone;                 //@synthesize mobilePhone=_mobilePhone - In the implementation block
@property (copy) NSString * emailAddress;                //@synthesize emailAddress=_emailAddress - In the implementation block
@property (copy) NSData * photoData;                     //@synthesize photoData=_photoData - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)mobilePhone;
-(id)homePhone;
-(id)company;
-(void)addClass:(id)arg1 ;
-(id)alias;
-(void)setAlias:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)description;
-(id)title;
-(void)setEmailAddress:(id)arg1 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)setApplicationData:(id)arg1 ;
-(void)postProcessApplicationData;
-(void)setLongID:(id)arg1 ;
-(void)addCollectionID:(id)arg1 ;
-(id)classes;
-(void)setClasses:(id)arg1 ;
-(id)collectionIDs;
-(void)setCollectionIDs:(id)arg1 ;
-(void)setPhone:(id)arg1 ;
-(void)setOffice:(id)arg1 ;
-(void)setCompany:(id)arg1 ;
-(void)setHomePhone:(id)arg1 ;
-(void)setMobilePhone:(id)arg1 ;
-(void)setPhotoData:(id)arg1 ;
-(id)phone;
-(id)office;
-(id)photoData;
-(id)applicationData;
-(id)convertToDAContactSearchResultElement;
-(id)emailAddress;
-(id)longID;
-(id)firstName;
-(id)lastName;
-(void)setFirstName:(id)arg1 ;
-(void)setLastName:(id)arg1 ;
@end

