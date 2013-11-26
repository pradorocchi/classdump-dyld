/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/SUScriptViewController.h>

@class SKUIItem;

@interface SUScriptGiftViewController : SUScriptViewController {

	int _giftCategory;
	SKUIItem* _item;

}

@property (nonatomic,readonly) int giftCategoryApps; 
@property (nonatomic,readonly) int giftCategoryBooks; 
@property (nonatomic,readonly) int giftCategoryMedia; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)newNativeViewController;
-(void)setCreditGiftStyle:(int)arg1 ;
-(void)setProductGiftItem:(id)arg1 ;
-(int)giftCategoryApps;
-(int)giftCategoryBooks;
-(int)giftCategoryMedia;
@end

