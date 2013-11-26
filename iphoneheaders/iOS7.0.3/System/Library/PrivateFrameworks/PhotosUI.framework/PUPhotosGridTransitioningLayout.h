/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:07 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol PUPhotosGridTransitioningLayout <PUPhotosGridTransitioningLayoutBasic>
@property (assign,nonatomic) CGPoint transitionEffectiveContentOrigin; 
@property (nonatomic,readonly) CGSize transitionActualContentSize; 
@property (assign,nonatomic) BOOL transitionIsAnimated; 
@property (nonatomic,readonly) int transitionAnchorColumnOffset; 
@property (nonatomic,copy) NSIndexPath * transitionExplicitAnchorItemIndexPath; 
@property (assign,nonatomic) BOOL transitionAnchorShiftsColumns; 
@property (nonatomic,readonly) int itemsPerRow; 
@property (assign,nonatomic) CGSize itemSize; 
@property (assign,nonatomic) CGSize interItemSpacing; 
@property (nonatomic,readonly) int numberOfVisualSections; 
@property (nonatomic,readonly) NSIndexPath * transitionFirstVisibleRowVisualPath; 
@property (nonatomic,readonly) NSIndexPath * transitionLastVisibleRowVisualPath; 
@required
-(CGSize*)itemSize;
-(void)setItemSize:(CGSize)arg1;
-(CGSize*)transitionActualContentSize;
-(void)setTransitionIsAnimated:(BOOL)arg1;
-(void)setTransitionExplicitAnchorItemIndexPath:(id)arg1;
-(void)setTransitionAnchorShiftsColumns:(BOOL)arg1;
-(CGPoint*)targetContentOffsetForTransitionFromGridLayout:(id)arg1;
-(void)adjustEffectiveContentOriginForTransitionEndContentOffset:(CGPoint)arg1;
-(int)visualSectionForRealSection:(int)arg1;
-(int)mainRealSectionForVisualSection:(int)arg1;
-(void)enumerateRealSectionsForVisualSection:(int)arg1 usingBlock:(/*^block*/ id)arg2;
-(int)numberOfVisualItemsInVisualSection:(int)arg1;
-(int)numberOfRowsInVisualSection:(int)arg1;
-(id)itemIndexPathAtCenterOfRect:(CGRect)arg1;
-(id)itemIndexPathAtPoint:(CGPoint)arg1;
-(id)itemIndexPathClosestToPoint:(CGPoint)arg1;
-(CGRect*)frameForItemAtGridCoordinates:(PUGridCoordinates)arg1 inVisualSection:(int)arg2;
-(CGRect*)frameForSectionHeaderAtVisualSection:(int)arg1;
-(PUGridCoordinates*)gridCoordinatesInVisualSectionForItemAtIndexPath:(id)arg1;
-(PUGridCoordinates*)gridCoordinatesInTransitionSectionForItemAtIndexPath:(id)arg1;
-(int)numberOfContiguousRowsInTransitionSection:(int)arg1;
-(CGRect*)frameForItemAtGridCoordinates:(PUGridCoordinates)arg1 inTransitionSection:(int)arg2;
-(id)mainRealIndexPathAtGridCoordinates:(PUGridCoordinates)arg1 inTransitionSection:(int)arg2;
-(BOOL)hasItemAtGridCoordinates:(PUGridCoordinates)arg1 inTransitionSection:(int)arg2;
-(PUGridCoordinates*)targetTransitionGridCoordsForGridCoords:(PUGridCoordinates)arg1 atVisualSection:(int)arg2 outTransitionSection:(int*)arg3;
-(PUGridCoordinates*)visualGridCoordsForTransitionGridCoords:(PUGridCoordinates)arg1 atTransitionSection:(int)arg2 outVisualSection:(int*)arg3;
-(id)targetTransitionRealIndexPathForIndexPath:(id)arg1;
-(id)transitionSectionsInRect:(CGRect)arg1 toOrFromGridLayout:(id)arg2;
-(id)transitionAnchorIndexPathForTransitionSection:(int)arg1;
-(CGPoint*)transitionEffectiveContentOrigin;
-(void)setTransitionEffectiveContentOrigin:(CGPoint)arg1;
-(BOOL)transitionIsAnimated;
-(int)transitionAnchorColumnOffset;
-(id)transitionExplicitAnchorItemIndexPath;
-(BOOL)transitionAnchorShiftsColumns;
-(int)itemsPerRow;
-(CGSize*)interItemSpacing;
-(void)setInterItemSpacing:(CGSize)arg1;
-(int)numberOfVisualSections;
-(id)transitionFirstVisibleRowVisualPath;
-(id)transitionLastVisibleRowVisualPath;
@end

