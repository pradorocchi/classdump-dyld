/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITableViewController.h>
#import <AirPortAssistant/TableViewManagerDelegate.h>

@class TableViewManager, UITableView;

@interface AUUITableViewController : UITableViewController <TableViewManagerDelegate> {

	TableViewManager* _tableManager;

}

@property (nonatomic,@dynamic,retain) UITableView * tableView; 
@property (nonatomic,readonly) TableViewManager * tableManager;                  //@synthesize tableManager=_tableManager - In the implementation block
@property (assign,nonatomic) <TableViewManagerDelegate> * delegate; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setTableView:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)tableManager;
-(void)initAUUITableViewControllerCommon;
@end

