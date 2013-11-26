/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Nike.app/Nike
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Nike/Nike-Structs.h>
#import <Nike/STRootViewController.h>

@class STTableView, UIView;

@interface STListController : STRootViewController {

	STTableView* _tableView;
	UIView* _tableFooterView;
	struct {
		unsigned registeredForOnScreenNotifications : 1;
	}  _listFlagsBitfields;

}
+(Class)tableViewCellClass;
-(void)_unregisterForOnScreenNotificationsIfNecessary;
-(void)registerForOnScreenNotifications;
-(void)unregisterForOnScreenNotifications;
-(void)_registerForOnScreenNotificationsIfNecessary;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

