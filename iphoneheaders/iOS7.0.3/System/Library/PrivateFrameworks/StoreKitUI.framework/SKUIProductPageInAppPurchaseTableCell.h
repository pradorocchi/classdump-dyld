/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:50 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUITableViewCell.h>

@class UILabel, NSString;

@interface SKUIProductPageInAppPurchaseTableCell : SKUITableViewCell {

	UILabel* _indexLabel;
	UILabel* _nameLabel;
	UILabel* _priceLabel;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,copy) NSString * indexString; 
@property (nonatomic,copy) NSString * priceString; 
@property (nonatomic,copy) NSString * productName; 
@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
-(id)productName;
-(id)indexString;
-(id)priceString;
-(void)setIndexString:(id)arg1 ;
-(void)setPriceString:(id)arg1 ;
-(void)setProductName:(id)arg1 ;
-(void).cxx_destruct;
@end

