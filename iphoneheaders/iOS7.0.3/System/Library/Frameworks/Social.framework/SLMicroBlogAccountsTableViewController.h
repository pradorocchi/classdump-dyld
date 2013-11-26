/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Social/Social-Structs.h>
#import <UIKit/UITableViewController.h>

@protocol SLMicroBlogAccountsTableViewControllerDelegate;
@class NSArray, SLMicroBlogUserRecord, , UIImage;

@interface SLMicroBlogAccountsTableViewController : UITableViewController {

	NSArray* _accountUserRecords;
	SLMicroBlogUserRecord* _selectedAccountUserRecord;
	<SLMicroBlogAccountsTableViewControllerDelegate>* _selectionDelegate;
	UIImage* _blankImage;

}
-(void)cancelButtonTapped:(id)arg1 ;
-(void)setSelectionDelegate:(id)arg1 ;
-(void)didUpdateAccountUserRecord:(id)arg1 ;
-(void)setAccountUserRecords:(id)arg1 ;
-(void)setCurrentAccountUserRecord:(id)arg1 ;
-(id)_accountUserRecordForIndexPath:(id)arg1 ;
-(id)_blankImage;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidLoad;
-(void).cxx_destruct;
@end

