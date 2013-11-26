/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AppStore.app/AppStore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/SKUIItemCellLayout.h>

@class NSString, _ASPurchasedCellContentView;

@interface ASPurchasedCellLayout : SKUIItemCellLayout {

	NSString* _publisher;
	NSString* _title;
	NSString* _version;
	_ASPurchasedCellContentView* _cellContentView;

}

@property (nonatomic,copy) NSString * publisher;                                         //@synthesize publisher=_publisher - In the implementation block
@property (nonatomic,copy) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * version;                                           //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) _ASPurchasedCellContentView * cellContentView;              //@synthesize cellContentView=_cellContentView - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void)setVersion:(id)arg1 ;
-(id)version;
-(id)cellContentView;
-(void)setCellContentView:(id)arg1 ;
-(void)setIconImage:(id)arg1 ;
-(void)setPublisher:(id)arg1 ;
-(id)publisher;
-(void)layoutForItemOfferChange;
-(void).cxx_destruct;
@end

