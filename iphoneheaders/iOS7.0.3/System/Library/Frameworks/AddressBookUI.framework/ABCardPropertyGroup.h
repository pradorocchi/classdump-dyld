/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:19 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AddressBookUI/ABCardGroup.h>

@class NSArray, NSString;

@interface ABCardPropertyGroup : ABCardGroup {

	NSArray* _propertyItems;
	NSArray* _displayItems;
	NSArray* _editingItems;
	BOOL _showActionsWhenEmpty;
	BOOL _isAdded;
	NSString* _property;
	NSArray* _contacts;
	NSArray* _deletedItems;

}

@property (nonatomic,readonly) NSString * property;                              //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) NSArray * propertyItems;                          //@synthesize propertyItems=_propertyItems - In the implementation block
@property (nonatomic,copy) NSArray * contacts;                                   //@synthesize contacts=_contacts - In the implementation block
@property (assign,nonatomic) BOOL showActionsWhenEmpty;                          //@synthesize showActionsWhenEmpty=_showActionsWhenEmpty - In the implementation block
@property (getter=isMultiValue,nonatomic,readonly) BOOL multiValue; 
@property (getter=isFixedValue,nonatomic,readonly) BOOL fixedValue; 
@property (getter=isMultiLine,nonatomic,readonly) BOOL multiLine; 
@property (nonatomic,readonly) BOOL allowsAdding; 
@property (assign,nonatomic) BOOL isAdded;                                       //@synthesize isAdded=_isAdded - In the implementation block
@property (nonatomic,retain) NSArray * editingItems; 
@property (nonatomic,retain) NSArray * deletedItems;                             //@synthesize deletedItems=_deletedItems - In the implementation block
+(id)groupForProperty:(id)arg1 contact:(id)arg2 withLinkedContacts:(id)arg3 ;
-(id)displayItems;
-(id)editingItems;
-(id)_loadPropertyItems;
-(void)setShowActionsWhenEmpty:(BOOL)arg1 ;
-(id)initWithProperty:(id)arg1 contact:(id)arg2 withLinkedContacts:(id)arg3 ;
-(BOOL)isMultiValue;
-(BOOL)isFixedValue;
-(id)_nextAvailableSocialService;
-(id)_nextAvailableInstantMessageService;
-(id)_nextAvailableLabel;
-(id)nextAvailableLabel;
-(BOOL)canAddEditingItem;
-(void)setIsAdded:(BOOL)arg1 ;
-(id)contacts;
-(id)emptyLabeledValue;
-(BOOL)_arrayContainsMaxAllowedItems:(id)arg1 ;
-(void)setEditingItems:(id)arg1 ;
-(id)deletedItems;
-(void)setDeletedItems:(id)arg1 ;
-(void)saveChangesForItems:(id)arg1 ;
-(id)_mergeItems:(id)arg1 forEditing:(bool)arg2 ;
-(BOOL)showActionsWhenEmpty;
-(BOOL)isAdded;
-(BOOL)_shoulShowGroupWhenEditing:(BOOL)arg1 ;
-(id)_itemToBeMergedWith:(id)arg1 fromItems:(id)arg2 forEditing:(BOOL)arg3 ;
-(id)propertyItems;
-(void)_updateNameValuesForItems:(id)arg1 ;
-(id)_nextAvailableLabelInLabels:(id)arg1 withValueSelector:(SEL)arg2 ;
-(BOOL)allowsAdding;
-(BOOL)isMultiLine;
-(BOOL)addEditingItem;
-(void)removeEditingItem:(id)arg1 ;
-(void)setContacts:(id)arg1 ;
-(id)property;
-(void)saveChanges;
-(void)dealloc;
-(void)reloadData;
-(id)description;
-(BOOL)isRequired;
@end

