/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:19 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSArray, NSString;

@interface ABContactsFilter : NSObject {

	void* _addressBook;
	BOOL _showsAllContacts;
	NSArray* _groups;
	NSArray* _sources;
	void* _directorySource;

}

@property (nonatomic,readonly) void* addressBook; 
@property (nonatomic,readonly) NSArray * groups;                                          //@synthesize groups=_groups - In the implementation block
@property (nonatomic,readonly) NSArray * sources;                                         //@synthesize sources=_sources - In the implementation block
@property (nonatomic,readonly) void* directorySource;                                     //@synthesize directorySource=_directorySource - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) void* sourceForNewRecords; 
@property (nonatomic,readonly) void* groupForNewRecords; 
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (nonatomic,readonly) BOOL isDirectory; 
@property (nonatomic,readonly) BOOL shouldChangeModelSelectionWhenDisplayed; 
@property (nonatomic,readonly) BOOL showsAllContacts;                                     //@synthesize showsAllContacts=_showsAllContacts - In the implementation block
+(id)_newContactsFilterFromGroupWrapperRepresentation:(id)arg1 withAddressBook:(void*)arg2 ;
+(id)newContactsFilterFromDictionaryRepresentation:(id)arg1 withAddressBook:(void*)arg2 ;
-(id)initWithAddressBook:(void*)arg1 ;
-(id)groups;
-(BOOL)showsAllContacts;
-(id)initWithGroups:(id)arg1 sources:(id)arg2 addressBook:(void*)arg3 ;
-(id)initWithDirectorySource:(void*)arg1 addressBook:(void*)arg2 ;
-(id)sortedGroupsForGroups:(id)arg1 ;
-(id)sortedSourcesForSources:(id)arg1 ;
-(void*)_defaultSourceForAccountContainingSource:(void*)arg1 ;
-(void)_getWritableSource:(const void*)arg1 andGroup:(const void*)arg2 ;
-(id)_sortedRecordsForRecords:(id)arg1 byNameProperty:(int)arg2 ;
-(void*)directorySource;
-(void)invalidateSourcesForAllContacts;
-(id)copyDictionaryRepresentation;
-(BOOL)shouldChangeModelSelectionWhenDisplayed;
-(void*)groupForNewRecords;
-(void*)sourceForNewRecords;
-(BOOL)isDirectory;
-(id)sources;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(BOOL)isEditable;
-(id)name;
-(void*)addressBook;
@end

