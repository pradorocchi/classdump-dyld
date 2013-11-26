/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Nike.app/Nike
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Nike/STListController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Nike/STModalLinkingDelegate.h>
#import <Nike/STCustomSheetControllerDelegate.h>

@interface STPlaylistController : STListController <UITableViewDataSource, UITableViewDelegate, STModalLinkingDelegate, STCustomSheetControllerDelegate>
+(Class)tableViewCellClass;
-(void)linkingCancelled;
-(void)linkingSuccessful;
-(void)customValueSelectionDidSave;
-(void)customValueSelectionDidCancel;
-(void)registerForOnScreenNotifications;
-(void)unregisterForOnScreenNotifications;
-(void)_musicRemoteDatabaseDidChangeNotification:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
@end

