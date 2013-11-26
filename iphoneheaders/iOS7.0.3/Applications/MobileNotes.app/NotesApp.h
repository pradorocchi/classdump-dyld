/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, NotesMainViewController, NotesNavigationController, NoteContext, NSMutableSet, NotesDisplayController, NotesListController, NotesAccountsController;

@interface NotesApp : UIApplication <UIApplicationDelegate> {

	UIWindow* _window;
	NotesMainViewController* _mainViewController;
	NotesNavigationController* _navigationController;
	NoteContext* _noteContext;
	unsigned _isLaunching : 1;
	unsigned _isTransitioningToNotesList : 1;
	unsigned _ignoreSelectionChange : 1;
	unsigned _isBackgrounding : 1;
	unsigned _shouldHandleExternalChangeOnResume : 1;
	unsigned _refreshIsPendingForStoresList : 1;
	unsigned _refreshIsPendingForAllNotes : 1;
	NSMutableSet* _collectionIDsPendingRefresh;

}

@property (nonatomic,readonly) NotesDisplayController * displayController; 
@property (nonatomic,readonly) NotesListController * listController; 
@property (nonatomic,readonly) NotesAccountsController * accountsController; 
@property (readonly) NotesNavigationController * navigationController;                    //@synthesize navigationController=_navigationController - In the implementation block
@property (readonly) NotesMainViewController * mainViewController;                        //@synthesize mainViewController=_mainViewController - In the implementation block
@property (nonatomic,retain) UIWindow * window; 
-(void)_saveState;
-(void)startScrollListTest:(id)arg1 ;
-(void)startScrollNoteTest:(id)arg1 ;
-(void)startShowNoteTest:(id)arg1 ;
-(void)displayNotesList:(BOOL)arg1 ;
-(id)listController;
-(void)_showNote;
-(void)_showNoteList;
-(void)didShowNote;
-(void)didShowList;
-(void)_cancelAllPendingRefreshes;
-(void)notesChangedExternally:(id)arg1 ;
-(void)refreshOrphanedAccountsIfNeeded;
-(void)refreshNotesIfNeededForCollection:(id)arg1 ;
-(void)refreshStoresListIfNeeded;
-(void)ignoreSelectionChange:(BOOL)arg1 ;
-(void)configureNavigationBar:(id)arg1 ;
-(void)_configureBarLetterpress:(id)arg1 ;
-(BOOL)noteNavigationSupportsSwiping;
-(void)localeChanged:(id)arg1 ;
-(void)addOrRemoveAccountsController;
-(id)accountsController;
-(id)noteAtIndex:(unsigned)arg1 ;
-(void)refreshDatesAndTimes;
-(void)_displayNotesList:(id)arg1 ;
-(void)displayNotesList:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_unmarkRefreshAsPendingForCollectionWithId:(id)arg1 ;
-(BOOL)_refreshIsPendingForCollectionWithId:(id)arg1 ;
-(void)_markRefreshAsPendingForCollectionWithId:(id)arg1 ;
-(void)_performRefreshIfNeededForCollectionWithId:(id)arg1 ;
-(void)_unmarkRefreshAsPendingForStoresList;
-(BOOL)_refreshIsPendingForStoresList;
-(void)_markRefreshAsPendingForStoresList;
-(void)_performRefreshIfNeededForStoresList;
-(void)_performRefreshIfNeededForOrphanedAccounts;
-(void)_updateLetterpressRendering;
-(void)updateViewsForListController;
-(void)updateViewsForDisplayController;
-(void)addNote;
-(BOOL)isLaunching;
-(BOOL)isIgnoringSelectionChange;
-(void)notesDisplayController:(id)arg1 didDisplayNote:(id)arg2 ;
-(void)displayNote:(id)arg1 highlightOnly:(BOOL)arg2 ;
-(id)mainViewController;
-(void)didChangeOrientation:(id)arg1 ;
-(void)dealloc;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationSignificantTimeChange:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)finishedTest:(id)arg1 extraResults:(id)arg2 ;
-(void)applicationWillSuspendForEventsOnly;
-(void)applicationWillTerminate;
-(id)nameOfDefaultImageToUpdateAtSuspension;
-(BOOL)openURL:(id)arg1 ;
-(void)prepareForDefaultImageSnapshotForScreen:(id)arg1 ;
-(id)contentView;
-(id)navigationController;
-(void)failedTest:(id)arg1 ;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(id)displayController;
-(id)noteContext;
-(void).cxx_destruct;
-(void)timeZoneChanged:(id)arg1 ;
@end

