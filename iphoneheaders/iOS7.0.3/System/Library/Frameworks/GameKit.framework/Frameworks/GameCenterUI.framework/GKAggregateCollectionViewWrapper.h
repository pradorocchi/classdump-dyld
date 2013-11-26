/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <GameCenterUI/GameCenterUI-Structs.h>
@class UICollectionView, GKAggregateMapping;

@interface GKAggregateCollectionViewWrapper : NSObject {

	UICollectionView* _wrappedView;
	GKAggregateMapping* _mapping;

}

@property (nonatomic,retain) UICollectionView * wrappedView;              //@synthesize wrappedView=_wrappedView - In the implementation block
@property (nonatomic,retain) GKAggregateMapping * mapping;                //@synthesize mapping=_mapping - In the implementation block
+(id)wrapperForView:(id)arg1 mapping:(id)arg2 ;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
-(void)_gkRegisterCellClass:(Class)arg1 ;
-(id)_gkDequeueCellForClass:(Class)arg1 forIndexPath:(id)arg2 ;
-(void)_gkRegisterClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 ;
-(id)_gkDequeueSupplementaryViewForClass:(Class)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 ;
-(id)initWithView:(id)arg1 mapping:(id)arg2 ;
-(void)setMapping:(id)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)wrappedView;
-(void)setWrappedView:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)indexPathForCell:(id)arg1 ;
-(void)moveSection:(int)arg1 toSection:(int)arg2 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned)arg2 animated:(BOOL)arg3 ;
-(id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2 ;
-(id)indexPathsForSelectedItems;
-(id)indexPathsForVisibleItems;
-(id)cellForItemAtIndexPath:(id)arg1 ;
-(int)numberOfItemsInSection:(int)arg1 ;
-(void)insertItemsAtIndexPaths:(id)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3 ;
-(void)selectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned)arg3 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)deleteItemsAtIndexPaths:(id)arg1 ;
-(id)indexPathForItemAtPoint:(CGPoint)arg1 ;
-(void)deselectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)insertSections:(id)arg1 ;
-(void)deleteSections:(id)arg1 ;
-(void)reloadSections:(id)arg1 ;
-(void)reloadItemsAtIndexPaths:(id)arg1 ;
-(void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(id)mapping;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

