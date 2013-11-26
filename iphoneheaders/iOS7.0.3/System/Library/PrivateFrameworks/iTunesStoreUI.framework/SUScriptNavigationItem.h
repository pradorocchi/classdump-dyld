/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:56 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class UINavigationItem, NSString;

@interface SUScriptNavigationItem : SUScriptObject

@property (nonatomic,readonly) UINavigationItem * nativeNavigationItem; 
@property (copy) NSString * backButtonTitle; 
@property (retain) NSString * prompt; 
@property (retain) NSString * title; 
@property (retain) id titleView; 
@property (assign) id hidesBackButton; 
@property (assign) id leftItemsSupplementBackButton; 
@property (retain) <SUScriptNavigationItem> * leftItem; 
@property (retain) <SUScriptNavigationItem> * leftMostItem; 
@property (retain) <SUScriptNavigationItem> * rightItem; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(void)disconnectNavigationItem:(id)arg1 forScriptObject:(id)arg2 ;
+(void)_disconnectNavigationItem:(id)arg1 scriptObject:(id)arg2 ;
+(id)_rootScriptObjectForObject:(id)arg1 ;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(id)hidesBackButton;
-(id)leftItemsSupplementBackButton;
-(id)title;
-(id)backButtonTitle;
-(id)titleView;
-(void)setHidesBackButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setTitleView:(id)arg1 ;
-(void)setBackButtonTitle:(id)arg1 ;
-(id)prompt;
-(void)setPrompt:(id)arg1 ;
-(void)setHidesBackButton:(id)arg1 ;
-(void)setLeftItemsSupplementBackButton:(id)arg1 ;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)setTitleView:(id)arg1 animated:(BOOL)arg2 ;
-(void)tearDownUserInterface;
-(id)initWithNativeNavigationItem:(id)arg1 ;
-(id)leftItem;
-(id)rightItem;
-(void)setLeftItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setLeftItem:(id)arg1 ;
-(void)setRightItem:(id)arg1 ;
-(id)nativeNavigationItem;
-(id)_copyScriptObjectForButtonItem:(id)arg1 ;
-(void)setLeftItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)setLeftMostItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightItems:(id)arg1 animated:(BOOL)arg2 ;
-(id)_copyScriptButtonForButtonItem:(id)arg1 ;
-(id)leftItems;
-(id)leftMostItem;
-(id)rightItems;
-(void)setLeftItems:(id)arg1 ;
-(void)setLeftMostItem:(id)arg1 ;
-(void)setRightItems:(id)arg1 ;
@end

