/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@protocol PUGridRenderedStripDataSource;
@class NSArray, , PUSectionedGridLayout, UIView;

@interface PUGridRenderedStrip : UICollectionReusableView {

	BOOL _extendsToTop;
	BOOL __needsRendering;
	float _leftContentInset;
	int _backgroundColorValue;
	NSArray* _itemIndexPaths;
	int _visualSectionIndex;
	<PUGridRenderedStripDataSource>* _dataSource;
	PUSectionedGridLayout* _layout;
	unsigned _contentExtenderType;
	UIView* _topContentView;
	UIView* __sideExtendedContentView;
	CGSize _itemSize;
	CGSize _interItemSpacing;
	NSRange _visualItemRange;

}

@property (assign,nonatomic) CGSize itemSize;                                                  //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) CGSize interItemSpacing;                                          //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
@property (assign,nonatomic) float leftContentInset;                                           //@synthesize leftContentInset=_leftContentInset - In the implementation block
@property (assign,nonatomic) int backgroundColorValue;                                         //@synthesize backgroundColorValue=_backgroundColorValue - In the implementation block
@property (nonatomic,retain) NSArray * itemIndexPaths;                                         //@synthesize itemIndexPaths=_itemIndexPaths - In the implementation block
@property (nonatomic,readonly) int visualSectionIndex;                                         //@synthesize visualSectionIndex=_visualSectionIndex - In the implementation block
@property (nonatomic,readonly) NSRange visualItemRange;                                        //@synthesize visualItemRange=_visualItemRange - In the implementation block
@property (assign,nonatomic,__weak) <PUGridRenderedStripDataSource> * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) PUSectionedGridLayout * layout;                            //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) int numberOfColumns; 
@property (assign,nonatomic) unsigned contentExtenderType;                                     //@synthesize contentExtenderType=_contentExtenderType - In the implementation block
@property (assign,nonatomic) BOOL extendsToTop;                                                //@synthesize extendsToTop=_extendsToTop - In the implementation block
@property (nonatomic,readonly) UIView * topContentView;                                        //@synthesize topContentView=_topContentView - In the implementation block
@property (assign,setter=_setNeedsRendering:,nonatomic) BOOL _needsRendering;                  //@synthesize _needsRendering=__needsRendering - In the implementation block
@property (nonatomic,readonly) UIView * _sideExtendedContentView;                              //@synthesize _sideExtendedContentView=__sideExtendedContentView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(void)layoutSubviews;
-(int)numberOfColumns;
-(id)dataSource;
-(id)layout;
-(void)setLayout:(id)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(BOOL)_disableRasterizeInAnimations;
-(CGSize)itemSize;
-(void)setItemSize:(CGSize)arg1 ;
-(CGSize)interItemSpacing;
-(void)setInterItemSpacing:(CGSize)arg1 ;
-(BOOL)_needsRendering;
-(void)_render;
-(void)_setNeedsRendering:(BOOL)arg1 ;
-(void)_updateExtendedContents;
-(float)leftContentInset;
-(int)backgroundColorValue;
-(void)setExtendsToTop:(BOOL)arg1 ;
-(id)topContentView;
-(void)setContentExtenderType:(unsigned)arg1 ;
-(void)setLeftContentInset:(float)arg1 ;
-(void)setVisualSectionIndex:(int)arg1 andVisualItemRange:(NSRange)arg2 ;
-(void)setBackgroundColorValue:(int)arg1 ;
-(id)itemIndexPaths;
-(void)setItemIndexPaths:(id)arg1 ;
-(int)visualSectionIndex;
-(NSRange)visualItemRange;
-(unsigned)contentExtenderType;
-(BOOL)extendsToTop;
-(id)_sideExtendedContentView;
-(void).cxx_destruct;
@end

