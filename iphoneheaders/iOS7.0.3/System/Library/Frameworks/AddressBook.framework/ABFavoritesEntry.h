/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:18 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface ABFavoritesEntry : NSObject {

	int _abUid;
	int _abIdentifier;
	NSString* _value;
	int _property;
	int _type;
	unsigned _dirty : 1;
	NSString* _label;
	NSString* _name;
	NSString* _abDatabaseUUID;
	void* _addressBook;

}
+(void)_runLookup;
-(id)initWithPerson:(void*)arg1 property:(int)arg2 identifier:(int)arg3 type:(int)arg4 ;
-(id)initWithDictionaryRepresentation:(id)arg1 addressBook:(void*)arg2 ;
-(void)_unqueueLookup;
-(void)_queueLookup;
-(id)initWithPerson:(void*)arg1 property:(int)arg2 identifier:(int)arg3 ;
-(void)dictionaryRepresentation:(id*)arg1 isDirty:(BOOL*)arg2 ;
-(id)nonLocalizedLabel;
-(void*)ABPerson;
-(int)_abUid;
-(void)recheckAddressBook;
-(void)_lookupNotFound;
-(void)_lookupChanged:(id)arg1 ;
-(void)_postEntryChanged;
-(int)property;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(int)type;
-(id)value;
-(int)identifier;
-(id)label;
-(id)dictionaryRepresentation;
-(id)displayName;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
@end

