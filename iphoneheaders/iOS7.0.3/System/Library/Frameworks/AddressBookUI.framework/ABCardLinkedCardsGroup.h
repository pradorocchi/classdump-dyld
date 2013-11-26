/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:19 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AddressBookUI/ABCardGroup.h>

@class NSArray;

@interface ABCardLinkedCardsGroup : ABCardGroup {

	NSArray* _linkedContacts;

}

@property (nonatomic,retain) NSArray * linkedContacts;              //@synthesize linkedContacts=_linkedContacts - In the implementation block
-(id)displayItems;
-(id)editingItems;
-(id)linkedContacts;
-(void)setLinkedContacts:(id)arg1 ;
-(void)dealloc;
-(id)title;
@end

