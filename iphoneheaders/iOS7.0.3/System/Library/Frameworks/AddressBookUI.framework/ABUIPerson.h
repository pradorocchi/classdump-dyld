/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSArray, NSString, NSData;

@interface ABUIPerson : NSObject <NSCopying> {

	void* _record;
	void* _addressBook;
	void* _source;
	NSArray* _linkedPeople;

}

@property (readonly) int recordID; 
@property (readonly) unsigned recordType; 
@property (readonly) void* record;                                      //@synthesize record=_record - In the implementation block
@property (readonly) void* source;                                      //@synthesize source=_source - In the implementation block
@property (readonly) void* addressBook;                                 //@synthesize addressBook=_addressBook - In the implementation block
@property (readonly) BOOL recordWasDeleted; 
@property (readonly) BOOL hasValidRecordID; 
@property (readonly) BOOL isMeCard; 
@property (readonly) BOOL hasLinkedPeople; 
@property (readonly) unsigned linkedPeopleCount; 
@property (readonly) NSArray * linkedPeople; 
@property (readonly) BOOL isReadonly; 
@property (readonly) BOOL areAllLinkedPeopleReadonly; 
@property (readonly) BOOL isRemote; 
@property (readonly) void* policy; 
@property (readonly) int kind; 
@property (readonly) NSString * name; 
@property (readonly) NSString * phoneticName; 
@property (readonly) NSData * photoThumbnail; 
@property (readonly) ABUIPerson * preferredPersonForName; 
@property (readonly) NSString * preferredName; 
@property (readonly) ABUIPerson * preferredPersonForPhoto; 
@property (readonly) NSData * preferredPhotoThumbnail; 
@property (readonly) BOOL hasPhoto; 
@property (readonly) BOOL hasPreferredPhoto; 
@property (readonly) NSString * primarySourceName; 
@property (readonly) NSString * secondarySourceName; 
@property (readonly) BOOL isFromFacebook; 
+(void)setAccountStore:(id)arg1 ;
+(id)personWithABPerson:(void*)arg1 ;
+(id)personInSource:(void*)arg1 ;
+(id)personWithABRecordID:(int)arg1 fromAddressBook:(void*)arg2 ;
+(id)personInAddressBook:(void*)arg1 ;
+(id)person;
-(BOOL)hasValidRecordID;
-(BOOL)isReadonly;
-(id)photoThumbnail;
-(id)preferredPhotoThumbnail;
-(id)primarySourceName;
-(id)secondarySourceName;
-(void*)copyPropertyValue:(int)arg1 ;
-(void*)policy;
-(BOOL)allowsCustomLabelsForProperty:(int)arg1 ;
-(BOOL)isMeCard;
-(id)linkedPeople;
-(id)preferredPersonForName;
-(void)removePropertyValue:(int)arg1 ;
-(id)nameIgnoringOrganization:(BOOL)arg1 ;
-(BOOL)addToGroup:(void*)arg1 ;
-(BOOL)addToAddressBook:(void*)arg1 ;
-(BOOL)updateNewPersonKindFromName;
-(id)preferredPersonForPhoto;
-(BOOL)isFromFacebook;
-(BOOL)hasPhoto;
-(id)policiesForAllLinkedPeople;
-(BOOL)areAllLinkedPeopleReadonly;
-(void)setNamePropertiesFromPerson:(id)arg1 ;
-(BOOL)linkToPerson:(id)arg1 ;
-(void)mergeValuesFromRecord:(void*)arg1 ;
-(BOOL)updatePersonKindFromName;
-(BOOL)isRemote;
-(BOOL)hasLinkedPeople;
-(id)preferredName;
-(void)setAsPreferredPersonForName;
-(BOOL)recordWasDeleted;
-(id)reloadFromDB;
-(unsigned)recordType;
-(id)initWithABPerson:(void*)arg1 ;
-(id)initWithABRecordID:(int)arg1 fromAddressBook:(void*)arg2 ;
-(unsigned)linkedPeopleCount;
-(BOOL)_updatePersonKindFromNamePreserveOrganizationKind:(BOOL)arg1 ;
-(void)mergeProperties:(id)arg1 fromRecord:(void*)arg2 ;
-(void)setAsPreferredPersonForPhoto;
-(BOOL)hasPreferredPhoto;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)name;
-(void*)source;
-(int)kind;
-(id)valueForProperty:(int)arg1 ;
-(id)phoneticName;
-(void)setValue:(void*)arg1 forProperty:(int)arg2 ;
-(void*)addressBook;
-(int)recordID;
-(void*)record;
@end

