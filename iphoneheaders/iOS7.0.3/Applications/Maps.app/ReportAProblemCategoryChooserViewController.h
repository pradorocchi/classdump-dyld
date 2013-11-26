/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol RAPCategoryChooserDelegate;
@class UISearchBar, UISearchDisplayController, NSMutableArray, NSIndexPath, UIActionSheet, , NSArray, NSString;

@interface ReportAProblemCategoryChooserViewController : UITableViewController <UISearchBarDelegate, UISearchDisplayDelegate, UIActionSheetDelegate> {

	UISearchBar* _searchBar;
	UISearchDisplayController* _searchController;
	NSMutableArray* _fullCategoryIsChecked;
	NSIndexPath* _indexPath;
	UIActionSheet* _contactMergeSheet;
	BOOL _showDeleteButton;
	<RAPCategoryChooserDelegate>* delegate;
	NSArray* _fullCategoryList;
	NSMutableArray* _searchList;
	NSString* _previouslySelectedCategory;
	NSString* _currentlySelectedCategory;

}

@property (assign,nonatomic) <RAPCategoryChooserDelegate> * delegate; 
@property (nonatomic,copy) NSString * previouslySelectedCategory;                  //@synthesize previouslySelectedCategory=_previouslySelectedCategory - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                              //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) BOOL showDeleteButton;                                //@synthesize showDeleteButton=_showDeleteButton - In the implementation block
@property (nonatomic,retain) NSArray * fullCategoryList;                           //@synthesize fullCategoryList=_fullCategoryList - In the implementation block
@property (nonatomic,retain) NSMutableArray * searchList;                          //@synthesize searchList=_searchList - In the implementation block
@property (nonatomic,copy) NSString * currentlySelectedCategory;                   //@synthesize currentlySelectedCategory=_currentlySelectedCategory - In the implementation block
-(void)setPreviouslySelectedCategory:(id)arg1 ;
-(void)setShowDeleteButton:(BOOL)arg1 ;
-(void)setFullCategoryList:(id)arg1 ;
-(id)currentlySelectedCategory;
-(void)_resetCheckedState;
-(void)deleteCategory:(id)arg1 ;
-(void)fetchLocalizedCategories;
-(id)fullCategoryList;
-(void)setCurrentlySelectedCategory:(id)arg1 ;
-(id)previouslySelectedCategory;
-(id)searchList;
-(void)setSearchList:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)delegate;
-(void)didReceiveMemoryWarning;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(id)indexPath;
-(id)initWithStyle:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)cancel;
-(void)done;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(void)setIndexPath:(id)arg1 ;
-(BOOL)showDeleteButton;
@end

