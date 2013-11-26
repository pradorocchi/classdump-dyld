/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:19 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableArray, NSArray, CNContact, NSString;

@interface ABCardGroup : NSObject <NSCopying> {

	NSMutableArray* _items;
	NSMutableArray* _actions;
	NSArray* _actionItems;
	BOOL _useSplitActions;
	BOOL _addSpacerFromPreviousGroup;
	CNContact* _contact;
	NSString* _title;

}

@property (nonatomic,retain) CNContact * contact;                          //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSArray * actionItems; 
@property (nonatomic,readonly) NSArray * displayItems; 
@property (nonatomic,readonly) NSArray * editingItems; 
@property (nonatomic,readonly) NSArray * actions;                          //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic) BOOL useSplitActions;                         //@synthesize useSplitActions=_useSplitActions - In the implementation block
@property (assign,nonatomic) BOOL addSpacerFromPreviousGroup;              //@synthesize addSpacerFromPreviousGroup=_addSpacerFromPreviousGroup - In the implementation block
+(id)groupForContact:(id)arg1 ;
-(id)displayItems;
-(id)initWithContact:(id)arg1 ;
-(id)_loadActionItems;
-(void)removeActionWithTitle:(id)arg1 ;
-(void)addAction:(id)arg1 withTitle:(id)arg2 ;
-(id)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(BOOL)arg4 ;
-(BOOL)addSpacerFromPreviousGroup;
-(BOOL)useSplitActions;
-(id)editingItems;
-(id)actionItems;
-(id)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(id)contact;
-(void)setContact:(id)arg1 ;
-(void)setUseSplitActions:(BOOL)arg1 ;
-(void)setAddSpacerFromPreviousGroup:(BOOL)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)title;
-(id)actions;
@end

