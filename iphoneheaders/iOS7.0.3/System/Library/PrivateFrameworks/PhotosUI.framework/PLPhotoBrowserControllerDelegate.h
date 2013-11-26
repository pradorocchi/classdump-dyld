/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:10 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol PLPhotoBrowserControllerDelegate <NSObject>
@optional
-(void)photoBrowserControllerWillBeginPaging:(id)arg1;
-(void)photoBrowserControllerDidEndPaging:(id)arg1;
-(BOOL)photoBrowserControllerShouldShowActionItem:(id)arg1;
-(void)photoBrowserController:(id)arg1 willShowActionSheetInView:(id)arg2;
-(void)photoBrowserController:(id)arg1 photoTile:(id)arg2 didCompleteZoomWithScale:(float)arg3;
-(void)photoBrowserControllerWillBeginDragging:(id)arg1;
-(void)photoBrowserControllerDidScroll:(id)arg1;
-(id)photoBrowserControllerMakeNavigationBar:(id)arg1;
-(id)photoBrowserControllerMakeToolbar:(id)arg1;
-(void)photoBrowserController:(id)arg1 setUsesPhotoBrowserStyleStatusBar:(BOOL)arg2 animated:(BOOL)arg3;
-(void)photoBrowserController:(id)arg1 photoTileViewControllerSingleTap:(id)arg2;
-(void)photoBrowserControllerWillBeginSlideshow:(id)arg1 playingOnExternalDisplay:(BOOL)arg2;
-(void)photoBrowserControllerWillEndSlideshow:(id)arg1 playingOnExternalDisplay:(BOOL)arg2;
-(void)photoBrowserControllerDidUpdateBars:(id)arg1 animated:(BOOL)arg2;
-(void)photoBrowserControllerDidChangeVideoEditingMode:(id)arg1;
-(void)photoBrowserController:(id)arg1 tileController:(id)arg2 videoViewDidCreateAttachments:(id)arg3;
-(void)photoBrowserController:(id)arg1 commentControllerWillEnterEditMode:(id)arg2;
-(void)photoBrowserController:(id)arg1 commentControllerDidExitEditMode:(id)arg2;
-(void)photoBrowserController:(id)arg1 willDisplayTileController:(id)arg2;
-(void)photoBrowserController:(id)arg1 tileController:(id)arg2 willAppear:(BOOL)arg3;
-(void)photoBrowserController:(id)arg1 tileController:(id)arg2 didAppear:(BOOL)arg3;
-(void)photoBrowserController:(id)arg1 scrubberDidBeginScrubbing:(id)arg2;
-(void)photoBrowserController:(id)arg1 scrubberDidEndScrubbing:(id)arg2;
-(void)photoBrowserControllerWillDeleteCurrentAsset:(id)arg1;
-(void)photoBrowserControllerDidDeleteCurrentAsset:(id)arg1;
-(void)photoBrowserControllerWillBeginPlayingVideo:(id)arg1;
-(BOOL)photoBrowserControllerOverlaysVisible:(id)arg1;
@end

