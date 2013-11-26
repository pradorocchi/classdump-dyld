/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:12 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol PLAssetContainerList;
@class , NSIndexPath;

@interface PUPhotosSharingTransitionContext : NSObject {

	<PLAssetContainerList>* _collections;
	NSIndexPath* _keyAssetIndexPath;

}

@property (nonatomic,retain) <PLAssetContainerList> * collections;              //@synthesize collections=_collections - In the implementation block
@property (nonatomic,retain) NSIndexPath * keyAssetIndexPath;                   //@synthesize keyAssetIndexPath=_keyAssetIndexPath - In the implementation block
-(id)collections;
-(id)keyAssetIndexPath;
-(void)setCollections:(id)arg1 ;
-(void)setKeyAssetIndexPath:(id)arg1 ;
-(void).cxx_destruct;
@end

