/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:49 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/SSMetricsEventFieldProvider.h>

@class SKUICountdown, SKUIItem, NSNumber, NSString, NSURL;

@interface SKUILink : NSObject <SSMetricsEventFieldProvider> {

	SKUICountdown* _countdown;
	SKUIItem* _item;
	NSNumber* _itemIdentifier;
	NSString* _target;
	NSString* _title;
	NSURL* _url;

}

@property (getter=isActionable,nonatomic,readonly) BOOL actionable; 
@property (nonatomic,readonly) SKUIItem * item;                                  //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) NSNumber * itemIdentifier;                        //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * targetString;                          //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                      //@synthesize url=_url - In the implementation block
-(id)title;
-(id)item;
-(id)URL;
-(id)initWithURL:(id)arg1 ;
-(id)valueForMetricsField:(id)arg1 ;
-(BOOL)isActionable;
-(id)initWithComponentContext:(id)arg1 ;
-(void)_setItem:(id)arg1 ;
-(id)targetString;
-(id)initWithLinkDictionary:(id)arg1 ;
-(void).cxx_destruct;
-(id)itemIdentifier;
@end

