/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileNotes/ResumableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UILabel, NotesBackgroundView, NotesAccountsTableView, NSMutableArray, UIBarButtonItem, ACAccountStore, UIFontDescriptor;

@interface NotesAccountsController : ResumableViewController <UITableViewDataSource, UITableViewDelegate> {

	UILabel* _titleView;
	NotesBackgroundView* _backgroundView;
	NotesAccountsTableView* _table;
	NSMutableArray* _storeHierarchy;
	UIBarButtonItem* _addButton;
	BOOL _useUnifiedView;
	ACAccountStore* _accountStore;
	UIFontDescriptor* _bodyFontDescriptor;
	UIFontDescriptor* _boldBodyFontDescriptor;

}
-(id)initWithArchivedConfiguration:(id)arg1 ;
-(void)notesChangedExternally;
-(void)addButtonClicked;
-(void)systemFontSizeChanged:(id)arg1 ;
-(id)displayNameForAccount:(id)arg1 ;
-(id)displayNameForStore:(id)arg1 ;
-(void)accountListUpdated:(id)arg1 ;
-(void)getHierarchy;
-(id)fontForSectionHeader;
-(float)heightForSectionHeaderWithText:(id)arg1 ;
-(float)widthForSectionHeaderInTableView:(id)arg1 ;
-(id)storeAtTableIndex:(int)arg1 ;
-(id)cellNameAtTableIndex:(int)arg1 ;
-(id)accountStore;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)loadView;
-(void)viewDidUnload;
-(void)updateTitle;
-(void).cxx_destruct;
@end

