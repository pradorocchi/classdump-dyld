/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:56 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableIndexSet, NSMutableArray, NSString, NSArray;

@interface SKUISearchResultGroup : NSObject {

	NSMutableIndexSet* _editorialIndexSet;
	NSMutableArray* _entities;
	NSString* _groupKind;

}

@property (nonatomic,readonly) NSArray * availableEntities; 
@property (nonatomic,readonly) NSString * groupKind;                     //@synthesize groupKind=_groupKind - In the implementation block
@property (nonatomic,readonly) int numberOfEntities; 
-(id)init;
-(int)numberOfEntities;
-(int)entityTypeAtIndex:(int)arg1 ;
-(id)entityAtIndex:(int)arg1 ;
-(void)_setGroupKind:(id)arg1 ;
-(void)_addEntity:(id)arg1 withIdentifier:(id)arg2 type:(int)arg3 ;
-(id)availableEntities;
-(id)groupKind;
-(void).cxx_destruct;
@end

