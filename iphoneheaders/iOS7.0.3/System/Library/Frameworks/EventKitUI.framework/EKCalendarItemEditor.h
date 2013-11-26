/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:48 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UITableViewController.h>
#import <EventKitUI/EKCalendarItemEditItemDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol EKCalendarItemEditorDelegate;
@class NSArray, UIActionSheet, UIAlertView, EKCalendarItemEditItem, NSMutableSet, UIBarButtonItem, , EKEventStore, EKCalendarItem, UIResponder, _UIAccessDeniedView;

@interface EKCalendarItemEditor : UITableViewController <EKCalendarItemEditItemDelegate, UIActionSheetDelegate, UIAlertViewDelegate> {

	NSArray* _editItems;
	id _revertState;
	BOOL _showsTimeZone;
	NSArray* _currentItems;
	UIActionSheet* _alertSheet;
	UIAlertView* _alertView;
	EKCalendarItemEditItem* _currentEditItem;
	BOOL _giveTitleCellKeyboardFocus;
	int _editItemVisibility;
	BOOL _isIgnoringCellHeightChange;
	BOOL _needsCellHeightChange;
	NSMutableSet* _editItemsDisablingDoneButton;
	int _lastAuthorizationStatus;
	BOOL _hasAppeared;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _leftButtonSpacer;
	UIBarButtonItem* _rightButtonSpacer;
	float _leftButtonSpace;
	float _rightButtonSpace;
	BOOL _scrollToNotes;
	BOOL _canHideDoneAndCancelButtons;
	<EKCalendarItemEditorDelegate>* _editorDelegate;
	EKEventStore* _store;
	EKCalendarItem* _calendarItem;
	UIResponder* _responderToRestoreOnAppearence;
	int _visibleSectionToRestoreOnAppearence;
	_UIAccessDeniedView* _accessDeniedView;

}

@property (assign,nonatomic,__weak) <EKCalendarItemEditorDelegate> * editorDelegate;              //@synthesize editorDelegate=_editorDelegate - In the implementation block
@property (nonatomic,retain) EKEventStore * store;                                                //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) EKCalendarItem * calendarItem;                                       //@synthesize calendarItem=_calendarItem - In the implementation block
@property (assign,nonatomic) BOOL scrollToNotes;                                                  //@synthesize scrollToNotes=_scrollToNotes - In the implementation block
@property (nonatomic,retain) UIResponder * responderToRestoreOnAppearence;                        //@synthesize responderToRestoreOnAppearence=_responderToRestoreOnAppearence - In the implementation block
@property (assign,nonatomic) int visibleSectionToRestoreOnAppearence;                             //@synthesize visibleSectionToRestoreOnAppearence=_visibleSectionToRestoreOnAppearence - In the implementation block
@property (assign,nonatomic) BOOL showsTimeZone;                                                  //@synthesize showsTimeZone=_showsTimeZone - In the implementation block
@property (assign,nonatomic) BOOL canHideDoneAndCancelButtons;                                    //@synthesize canHideDoneAndCancelButtons=_canHideDoneAndCancelButtons - In the implementation block
@property (readonly) EKCalendarItemEditItem * currentEditItem;                                    //@synthesize currentEditItem=_currentEditItem - In the implementation block
@property (assign,nonatomic) float navBarLeftContentInset; 
@property (assign,nonatomic) float navBarRightContentInset; 
@property (nonatomic,retain) _UIAccessDeniedView * accessDeniedView;                              //@synthesize accessDeniedView=_accessDeniedView - In the implementation block
-(id)accessDeniedView;
-(id)store;
-(void)setStore:(id)arg1 ;
-(id)calendarItem;
-(void)_localeChanged;
-(void)_presentDetachSheet;
-(BOOL)_performSave:(int)arg1 animated:(BOOL)arg2 ;
-(BOOL)showsTimeZone;
-(void)setShowsTimeZone:(BOOL)arg1 ;
-(void)_presentAlertWithTag:(int)arg1 ;
-(void)_alertButtonClickedWithTag:(int)arg1 buttonIndex:(int)arg2 ;
-(BOOL)_canDetachSingleOccurrence;
-(void)tableViewDidStartReload:(id)arg1 ;
-(id)preferredTitle;
-(id)_editItems;
-(void)storeChanged:(id)arg1 ;
-(void)setupForEvent;
-(BOOL)shouldDisplayEditItem:(id)arg1 withVisibility:(int)arg2 ;
-(void)_tableViewWillUpdateHeights;
-(void)_tableViewDidUpdateHeights;
-(void)_configureVisibleItems;
-(void)_updateCurrentEditItemsFromVisibility:(int)arg1 toVisibility:(int)arg2 animated:(BOOL)arg3 ;
-(unsigned)firstSectionForEditItem:(id)arg1 ;
-(void)setResponderToRestoreOnAppearence:(id)arg1 ;
-(BOOL)scrollToNotes;
-(int)visibleSectionToRestoreOnAppearence;
-(void)setVisibleSectionToRestoreOnAppearence:(int)arg1 ;
-(id)responderToRestoreOnAppearence;
-(void)_pinKeyboard:(BOOL)arg1 ;
-(void)_setShowingAccessDeniedView:(BOOL)arg1 showSettingsInstructions:(BOOL)arg2 ;
-(id)notificationNamesForLocaleChange;
-(void)_keyboardWillHide;
-(void)cancelEditingWithDelegateNotification:(BOOL)arg1 ;
-(void)_revertEvent;
-(void)_completeWithAction:(int)arg1 animated:(BOOL)arg2 notify:(BOOL)arg3 ;
-(void)completeWithAction:(int)arg1 animated:(BOOL)arg2 ;
-(void)_setCalendarItemOnEditItems;
-(void)_setWantsToEnableDoneButton:(BOOL)arg1 ;
-(void)_setDoneAndCancelButtonVisible:(BOOL)arg1 ;
-(void)prepareEditItems;
-(void)_copyEventForPossibleRevert;
-(BOOL)_canEnableDoneButton;
-(void)_reallyHandleCellHeightChange;
-(void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4 ;
-(id)defaultAlertTitle;
-(void)_getEditItem:(id*)arg1 andSubsection:(int*)arg2 forSection:(int)arg3 ;
-(BOOL)allowsDeletingFutureOccurrences;
-(id)defaultTitleForCalendarItem;
-(BOOL)saveCalendarItemWithSpan:(int)arg1 error:(id*)arg2 ;
-(id)_nameForDeleteButton;
-(void)customizeActionSheet:(id)arg1 ;
-(id)_viewForSheet;
-(void)_deleteRecurringSheetButtonPressed:(int)arg1 ;
-(void)_cancelSheetButtonPressed:(int)arg1 ;
-(void)_detachSheetButtonPressed:(int)arg1 ;
-(void)_deleteSheetButtonPressed:(int)arg1 ;
-(void)_performDelete:(int)arg1 ;
-(void)editItemDidStartEditing:(id)arg1 ;
-(void)editItem:(id)arg1 didCommitFromDetailViewController:(BOOL)arg2 ;
-(void)editItemDidEndEditing:(id)arg1 ;
-(void)editItemTextChanged:(id)arg1 ;
-(void)editItem:(id)arg1 wantsKeyboardPinned:(BOOL)arg2 ;
-(void)editItem:(id)arg1 wantsDoneButtonDisabled:(BOOL)arg2 ;
-(void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 ;
-(void)editItem:(id)arg1 performActionsOnCellAtSubitem:(unsigned)arg2 inSubsection:(unsigned)arg3 actions:(/*^block*/ id)arg4 ;
-(void)editItem:(id)arg1 wantsRowReload:(id)arg2 ;
-(void)editItem:(id)arg1 wantsIndexPathsScrolledToVisible:(id)arg2 ;
-(void)editItemRequiresHeightChange:(id)arg1 ;
-(void)editItemRequiresPopoverSizeUpdate:(id)arg1 ;
-(void)editItem:(id)arg1 textViewShouldReturn:(id)arg2 ;
-(id)viewControllerForEditItem:(id)arg1 ;
-(id)defaultAlertTitleForEditItem:(id)arg1 ;
-(void)setCalendarItem:(id)arg1 ;
-(void)setEditItemVisibility:(int)arg1 animated:(BOOL)arg2 ;
-(int)editItemVisibility;
-(id)sectionsForEditItem:(id)arg1 ;
-(void)handleTapOutside;
-(void)completeAndSave;
-(BOOL)willPresentDialogOnSave;
-(BOOL)saveWithSpan:(int)arg1 animated:(BOOL)arg2 ;
-(void)setupDeleteButton;
-(void)refreshStartAndEndDates;
-(void)setNavBarLeftContentInset:(float)arg1 ;
-(float)navBarLeftContentInset;
-(void)setNavBarRightContentInset:(float)arg1 ;
-(float)navBarRightContentInset;
-(void)deleteClicked:(id)arg1 ;
-(id)editorDelegate;
-(void)setEditorDelegate:(id)arg1 ;
-(void)setScrollToNotes:(BOOL)arg1 ;
-(BOOL)canHideDoneAndCancelButtons;
-(void)setCanHideDoneAndCancelButtons:(BOOL)arg1 ;
-(id)currentEditItem;
-(void)setAccessDeniedView:(id)arg1 ;
-(unsigned)entityType;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)applicationDidResume;
-(unsigned)supportedInterfaceOrientations;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)done:(id)arg1 ;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(void).cxx_destruct;
@end

