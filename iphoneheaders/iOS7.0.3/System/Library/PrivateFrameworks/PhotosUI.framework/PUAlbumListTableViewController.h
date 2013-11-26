/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:04 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUAbstractAlbumListViewController.h>
#import <PhotosUI/PUAlbumListTableViewCellDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView;

@interface PUAlbumListTableViewController : PUAbstractAlbumListViewController <PUAlbumListTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate> {

	UITableView* __mainTableView;
	int __ignoredReorderNotificationCount;

}

@property (setter=_setMainTableView:,nonatomic,retain) UITableView * _mainTableView;                                        //@synthesize _mainTableView=__mainTableView - In the implementation block
@property (assign,setter=_setIgnoredReorderNotificationCount:,nonatomic) int _ignoredReorderNotificationCount;              //@synthesize _ignoredReorderNotificationCount=__ignoredReorderNotificationCount - In the implementation block
-(void)dealloc;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewDidLoad;
-(id)indexPathsForVisibleItems;
-(int)tableViewStyle;
-(id)indexPathForItemAtPoint:(CGPoint)arg1 ;
-(id)_mainTableView;
-(id)backgroundColorForTableView;
-(void)_setMainTableView:(id)arg1 ;
-(void)scrollToItemAtIndexPath:(id)arg1 centered:(BOOL)arg2 animated:(BOOL)arg3 ;
-(int)_ignoredReorderNotificationCount;
-(void)_setIgnoredReorderNotificationCount:(int)arg1 ;
-(id)visibleAlbumListCellContentViewAtIndexPath:(id)arg1 ;
-(void)albumListTableViewCell:(id)arg1 willChangeState:(unsigned)arg2 ;
-(void)reloadContentView;
-(void)selectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)deselectSelectedItemAnimated:(BOOL)arg1 ;
-(void)visiblyInsertItemAtIndexPath:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)performBatchUpdatesWithDeletedIndexPaths:(id)arg1 insertedIndexPaths:(id)arg2 changedIndexPaths:(id)arg3 movedFromIndexPaths:(id)arg4 movedToIndexPaths:(id)arg5 completionHandler:(/*^block*/ id)arg6 ;
-(id)mainScrollView;
-(id)indexPathForAlbumListCellContentView:(id)arg1 ;
-(PUAlbumListCellContentView*)visiblePlaceholderListCellContentViewAtIndexPath:(id)arg1 ;
-(id)newGridViewControllerForStandInAlbum:(NSObject*)arg1 ;
-(BOOL)shouldBeginRetitlingAlbumAtIndexPath:(id)arg1 ;
-(void)setSyncProgressVisible:(BOOL)arg1 ;
-(void).cxx_destruct;
@end

