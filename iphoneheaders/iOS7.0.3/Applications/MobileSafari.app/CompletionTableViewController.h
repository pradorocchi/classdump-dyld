/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UITableViewController.h>

@protocol UITableViewDelegateUITableViewDataSource;
@class , UITextField;

@interface CompletionTableViewController : UITableViewController {

	<UITableViewDelegate><UITableViewDataSource>* _dataSourceAndDelegateForTableView;
	UITextField* _targetView;

}

@property (assign,nonatomic) <UITableViewDelegate><UITableViewDataSource> * dataSourceAndDelegateForTableView;              //@synthesize dataSourceAndDelegateForTableView=_dataSourceAndDelegateForTableView - In the implementation block
@property (nonatomic,retain) UITextField * targetView;                                                                      //@synthesize targetView=_targetView - In the implementation block
-(id)dataSourceAndDelegateForTableView;
-(void)setDataSourceAndDelegateForTableView:(id)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(CGSize)contentSizeForViewInPopoverView;
-(void)viewDidLoad;
-(id)targetView;
-(void)setTargetView:(id)arg1 ;
@end

