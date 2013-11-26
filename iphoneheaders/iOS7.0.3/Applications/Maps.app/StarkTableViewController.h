/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIViewController.h>
#import <Maps/ExtendedTableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class StarkTableView, UIView, UITableView;

@interface StarkTableViewController : UIViewController <ExtendedTableViewDelegate, UITableViewDataSource, UITableViewDelegate> {

	BOOL _hasIdiom;
	int _idiom;
	StarkTableView* _tableView;
	UIView* _lastDisplayedNoContentView;

}

@property (nonatomic,readonly) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
+(UIEdgeInsets)insetsToAvoidStatusBarOnStarkScreenForTable:(id)arg1 ;
-(id)noContentView;
-(void)extendedTableViewDataSourceContentDidChange:(id)arg1 ;
-(void)updateNoContentViewVisibility;
-(void)dealloc;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(id)tableView;
@end

