/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol UICollectionViewDataSource <NSObject>
@optional
-(int)numberOfSectionsInCollectionView:(id)arg1;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;

@required
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
@end

