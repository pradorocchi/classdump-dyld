/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Reminders.app/Reminders
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>
#import <Reminders/RemindersListPickerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Reminders/RemindersListControllerDelegate.h>

@protocol RemindersMasterViewControllerDelegate;
@class RemindersListPicker, RemindersSearchView, UIToolbar, UIView, UIBarButtonItem, UIActionSheet, ;

@interface RemindersMasterViewController : UIViewController <RemindersListPickerDelegate, UIActionSheetDelegate, RemindersListControllerDelegate> {

	RemindersListPicker* _listPicker;
	RemindersSearchView* _searchView;
	UIToolbar* _addEditToolbar;
	UIView* _dividerLine;
	UIBarButtonItem* _editButton;
	UIBarButtonItem* _addListButton;
	BOOL _isSearching;
	UIActionSheet* _actionSheet;
	<RemindersMasterViewControllerDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <RemindersMasterViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)listControllerBeganEditing:(id)arg1 ;
-(void)listControllerEndedEditing:(id)arg1 ;
-(void)listControllerWillBeShown:(id)arg1 ;
-(void)listControllerWillBeHidden:(id)arg1 ;
-(void)listControllerDeletedList:(id)arg1 atIndex:(int)arg2 ;
-(id)initWithSearchBarView:(id)arg1 ;
-(void)selectCalendar:(id)arg1 ;
-(void)selectScheduled;
-(BOOL)scheduledSelected;
-(void)searchWillBecomeActive:(BOOL)arg1 ;
-(void)editButtonTapped:(id)arg1 ;
-(void)addListButtonTapped:(id)arg1 ;
-(void)listPickerDidChangeSelectedCalendar:(id)arg1 ;
-(void)listPickerDidSelect:(id)arg1 ;
-(void)listPickerDidEditCalendars:(id)arg1 ;
-(void)listControllerCanceledEditing:(id)arg1 ;
-(void)listControllerBeganModalEditing:(id)arg1 ;
-(void)listControllerEndedModalEditing:(id)arg1 ;
-(void)listControllerCreatedNewList:(id)arg1 ;
-(id)selectedCalendar;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void).cxx_destruct;
@end

