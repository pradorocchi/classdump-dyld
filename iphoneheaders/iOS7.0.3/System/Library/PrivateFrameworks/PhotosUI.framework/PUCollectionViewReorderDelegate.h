/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:04 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol PUCollectionViewReorderDelegate <NSObject>
@optional
-(BOOL)collectionView:(id)arg1 canReorderItemAtIndexPath:(id)arg2;
-(id)collectionView:(id)arg1 targetIndexPathForMoveFromIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;

@required
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 completionHandler:(/*^block*/ id)arg4;
@end

