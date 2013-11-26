/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:49 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class UIView, SKUIClientContext;

@interface SKUICellLayout : NSObject {

	UIView* _cell;
	SKUIClientContext* _clientContext;
	UIView* _contentView;
	BOOL _parentWantsCellNeedsLayout;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                         //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) UIView * parentCellView;                      //@synthesize cell=_cell - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(id)contentView;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithTableViewCell:(id)arg1 ;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(id)clientContext;
-(id)initWithCollectionViewCell:(id)arg1 ;
-(id)initWithParentView:(id)arg1 ;
-(void)resetLayout;
-(id)parentCellView;
-(void).cxx_destruct;
-(void)setClientContext:(id)arg1 ;
@end

