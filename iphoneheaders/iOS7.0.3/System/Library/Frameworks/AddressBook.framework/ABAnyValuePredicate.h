/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:18 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABPredicate.h>

@interface ABAnyValuePredicate : ABPredicate {

	int _property;

}

@property (assign,nonatomic) int property;              //@synthesize property=_property - In the implementation block
-(id)queryWhereString;
-(void)ab_bindStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(id)queryJoinsInCompound:(BOOL)arg1 ;
-(id)queryGroupByProperties;
-(int)property;
-(void)setProperty:(int)arg1 ;
-(id)init;
-(BOOL)isValid;
@end

