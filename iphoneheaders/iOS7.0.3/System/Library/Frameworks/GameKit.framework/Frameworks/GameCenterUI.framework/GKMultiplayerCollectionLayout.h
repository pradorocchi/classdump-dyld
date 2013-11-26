/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:16 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSDictionary, UICollectionViewLayoutAttributes;

@interface GKMultiplayerCollectionLayout : UICollectionViewLayout {

	float _headerGap;
	float _footerGap;
	int _numberOfColumnsInPortrait;
	NSDictionary* _cellLayoutInfo;
	NSDictionary* _separatorLayoutInfo;
	UICollectionViewLayoutAttributes* _headerAttributes;
	UICollectionViewLayoutAttributes* _footerAttributes;
	CGSize _itemSize;
	CGSize _separatorSize;
	CGSize _headerSize;
	CGSize _footerSize;
	CGPoint _itemMargin;
	UIEdgeInsets _insets;

}

@property (assign,nonatomic) UIEdgeInsets insets;                                              //@synthesize insets=_insets - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                                                  //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) CGSize separatorSize;                                             //@synthesize separatorSize=_separatorSize - In the implementation block
@property (assign,nonatomic) CGSize headerSize;                                                //@synthesize headerSize=_headerSize - In the implementation block
@property (assign,nonatomic) CGSize footerSize;                                                //@synthesize footerSize=_footerSize - In the implementation block
@property (assign,nonatomic) CGPoint itemMargin;                                               //@synthesize itemMargin=_itemMargin - In the implementation block
@property (assign,nonatomic) float headerGap;                                                  //@synthesize headerGap=_headerGap - In the implementation block
@property (assign,nonatomic) float footerGap;                                                  //@synthesize footerGap=_footerGap - In the implementation block
@property (assign,nonatomic) int numberOfColumnsInPortrait;                                    //@synthesize numberOfColumnsInPortrait=_numberOfColumnsInPortrait - In the implementation block
@property (nonatomic,retain) NSDictionary * cellLayoutInfo;                                    //@synthesize cellLayoutInfo=_cellLayoutInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * separatorLayoutInfo;                               //@synthesize separatorLayoutInfo=_separatorLayoutInfo - In the implementation block
@property (nonatomic,retain) UICollectionViewLayoutAttributes * headerAttributes;              //@synthesize headerAttributes=_headerAttributes - In the implementation block
@property (nonatomic,retain) UICollectionViewLayoutAttributes * footerAttributes;              //@synthesize footerAttributes=_footerAttributes - In the implementation block
-(CGSize)totalCellSize;
-(void)setCellLayoutInfo:(id)arg1 ;
-(void)setSeparatorLayoutInfo:(id)arg1 ;
-(void)setHeaderAttributes:(id)arg1 ;
-(void)setFooterAttributes:(id)arg1 ;
-(BOOL)isPortrait;
-(CGSize)separatorSize;
-(void)setSeparatorSize:(CGSize)arg1 ;
-(CGPoint)itemMargin;
-(void)setItemMargin:(CGPoint)arg1 ;
-(float)headerGap;
-(void)setHeaderGap:(float)arg1 ;
-(float)footerGap;
-(void)setFooterGap:(float)arg1 ;
-(int)numberOfColumnsInPortrait;
-(void)setNumberOfColumnsInPortrait:(int)arg1 ;
-(id)cellLayoutInfo;
-(id)separatorLayoutInfo;
-(id)headerAttributes;
-(id)footerAttributes;
-(void)dealloc;
-(id)init;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(CGSize)itemSize;
-(void)setItemSize:(CGSize)arg1 ;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(void)setHeaderSize:(CGSize)arg1 ;
-(void)setFooterSize:(CGSize)arg1 ;
-(CGSize)headerSize;
-(CGSize)footerSize;
@end

