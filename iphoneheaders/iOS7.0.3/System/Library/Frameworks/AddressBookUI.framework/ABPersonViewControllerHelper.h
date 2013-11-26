/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:23 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABNewPersonViewControllerDelegate.h>
#import <UIKit/ABPeoplePickerNavigationControllerDelegate.h>
#import <AddressBookUI/ABPersonTableViewDataSourceDelegate.h>
#import <AddressBookUI/ABPickerViewControllerDismissDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <AddressBookUI/ABPopoverRepresentDelegate.h>
#import <AddressBookUI/ABPersonEditDelegate.h>
#import <AddressBookUI/ABPersonViewControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIViewControllerRestoration.h>

@protocol ABPersonEditDelegate, ABStyleProvider, ABCardContentProvider;
@class UIViewController, , ABDatePickerViewController, UIView, NSString, UIBarButtonItem, ABPersonTableView, NSIndexPath, UIPopoverController, ABPeoplePickerNavigationController, ABMultiCellContentView_RelatedName, ABUIPerson, NSArray, ABPersonTableViewDataSource, ABPersonTableViewLinkingDelegate, UITableView;

@interface ABPersonViewControllerHelper : NSObject <ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, ABPersonTableViewDataSourceDelegate, ABPickerViewControllerDismissDelegate, UIActionSheetDelegate, UIPopoverControllerDelegate, ABPopoverRepresentDelegate, ABPersonEditDelegate, ABPersonViewControllerDelegate, UIScrollViewDelegate, UIViewControllerRestoration> {

	UIViewController* _viewController;
	<ABPersonEditDelegate>* _editDelegate;
	CFArrayRef _displayedProperties;
	ABDatePickerViewController* _datePickerViewController;
	BOOL _isAnimatingDatePickerInputView;
	BOOL _willPresentDatePickerViewController;
	id _activeDialog;
	id _deletionDelegate;
	id _actionSheetDelegate;
	BOOL _allowsSettingAsPreferredCardForName;
	BOOL _animatedRight;
	BOOL _automaticallySetEditing;
	BOOL _allowsAddingToAddressBook;
	BOOL _showsPeoplePickerCancelButton;
	BOOL _savesNewContactOnSuspend;
	void* _addressBook;
	CFDictionaryRef _valueByProperty;
	<ABStyleProvider>* _styleProvider;
	<ABCardContentProvider>* _cardContentProvider;
	BOOL _isOverridingCardContentProvider;
	UIView* _cardContentProviderHeaderView;
	int _selectedCardContentIndex;
	BOOL _isLocation;
	NSString* _addToPersonButtonTitle;
	UIBarButtonItem* _reusableCancelButton;
	ABPersonTableView* _controllerTableView;
	unsigned _modelDatabaseLocalChangeCancellationCount;
	NSIndexPath* _popoverCellIndexPath;
	NSIndexPath* _popoverViewInCellIndexPath;
	UIPopoverController* _presentationPopoverController;
	ABPeoplePickerNavigationController* _peoplePickerForLinking;
	ABPeoplePickerNavigationController* _peoplePickerForAddToContacts;
	ABPeoplePickerNavigationController* _peoplePickerForRelatedNames;
	ABMultiCellContentView_RelatedName* _relatedPersonCell;
	BOOL _disablePopoverUpdates;
	int _favoritesListChangeNotificationCount;
	BOOL _hasAddedUnknownPersonActions;
	ABUIPerson* _displayedPerson;
	NSArray* _displayedPeople;
	ABPersonTableViewDataSource* _dataSource;
	ABPersonTableViewLinkingDelegate* _linkingDelegate;

}

@property (nonatomic,readonly) UIViewController * viewController;                                                //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) <ABPersonEditDelegate> * editDelegate;                                              //@synthesize editDelegate=_editDelegate - In the implementation block
@property (assign,nonatomic) BOOL automaticallySetEditing;                                                       //@synthesize automaticallySetEditing=_automaticallySetEditing - In the implementation block
@property (assign,nonatomic) void* addressBook; 
@property (nonatomic,readonly) void* existingAddressBook; 
@property (nonatomic,retain) ABUIPerson * displayedPerson;                                                       //@synthesize displayedPerson=_displayedPerson - In the implementation block
@property (nonatomic,readonly) NSArray * displayedPeople;                                                        //@synthesize displayedPeople=_displayedPeople - In the implementation block
@property (nonatomic,copy) NSArray * displayedProperties; 
@property (getter=isReadonly,readonly) BOOL readonly; 
@property (assign,nonatomic) BOOL showsPeoplePickerCancelButton;                                                 //@synthesize showsPeoplePickerCancelButton=_showsPeoplePickerCancelButton - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * reusableCancelButton; 
@property (assign,nonatomic) BOOL allowsSettingAsPreferredCardForName;                                           //@synthesize allowsSettingAsPreferredCardForName=_allowsSettingAsPreferredCardForName - In the implementation block
@property (assign,nonatomic) BOOL allowsAddingToAddressBook;                                                     //@synthesize allowsAddingToAddressBook=_allowsAddingToAddressBook - In the implementation block
@property (assign,nonatomic) BOOL isLocation;                                                                    //@synthesize isLocation=_isLocation - In the implementation block
@property (nonatomic,retain) <ABStyleProvider> * styleProvider;                                                  //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) BOOL savesNewContactOnSuspend;                                                      //@synthesize savesNewContactOnSuspend=_savesNewContactOnSuspend - In the implementation block
@property (assign,nonatomic) BOOL disablePopoverUpdates;                                                         //@synthesize disablePopoverUpdates=_disablePopoverUpdates - In the implementation block
@property (assign,nonatomic) ABPersonTableViewDataSource * dataSource;                                           //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) ABPersonTableViewLinkingDelegate * linkingDelegate;                                 //@synthesize linkingDelegate=_linkingDelegate - In the implementation block
@property (nonatomic,readonly) UITableView * controllerTableView;                                                //@synthesize controllerTableView=_controllerTableView - In the implementation block
@property (nonatomic,readonly) BOOL hasPopoverController; 
@property (nonatomic,readonly) <ABPersonViewControllerPrivateDelegate> * personViewDelegate; 
@property (nonatomic,readonly) <ABUnknownPersonViewControllerDelegate> * unknownPersonViewDelegate; 
@property (nonatomic,copy) NSString * addToPersonButtonTitle;                                                    //@synthesize addToPersonButtonTitle=_addToPersonButtonTitle - In the implementation block
@property (nonatomic,retain) NSIndexPath * popoverCellIndexPath;                                                 //@synthesize popoverCellIndexPath=_popoverCellIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * popoverViewInCellIndexPath;                                           //@synthesize popoverViewInCellIndexPath=_popoverViewInCellIndexPath - In the implementation block
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(id)displayedProperties;
-(void)updateRecord;
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(BOOL)isReadonly;
-(BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2 ;
-(void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 ;
-(BOOL)allowsAddingToAddressBook;
-(float)ab_heightToFitForViewInPopoverView;
-(void)setSavesNewContactOnSuspend:(BOOL)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void*)arg2 insertProperty:(int*)arg3 copyInsertValue:(id*)arg4 copyInsertLabel:(id*)arg5 ;
-(void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 informDelegate:(BOOL)arg3 ;
-(void)personWasDeleted;
-(void)peoplePickerNavigationController:(id)arg1 insertEditorDidConfirm:(BOOL)arg2 forPerson:(void*)arg3 ;
-(void)imageUpdatedForPerson:(void*)arg1 ;
-(void)preferredPersonDidChangeToPerson:(void*)arg1 ;
-(BOOL)shouldBeRemovedFromNavigationStack;
-(id)newPersonViewDelegate;
-(BOOL)savesNewContactOnSuspend;
-(id)initWithViewController:(id)arg1 style:(int)arg2 ;
-(void)setAutomaticallySetEditing:(BOOL)arg1 ;
-(BOOL)showsPeoplePickerCancelButton;
-(void)setShowsPeoplePickerCancelButton:(BOOL)arg1 ;
-(void)updateEditButton;
-(void)ignoreNextLocalChange;
-(id)reusableCancelButton;
-(void)loadViewWithPerson:(id)arg1 allowDeletion:(BOOL)arg2 allowActions:(BOOL)arg3 ;
-(id)linkingDelegate;
-(void)setEditDelegate:(id)arg1 ;
-(void)peoplePickerNavigationController:(id)arg1 requestedLinkForPerson:(id)arg2 ;
-(void)personTableViewDataSourceShouldIgnoreNextLocalChange:(id)arg1 ;
-(BOOL)personTableViewDataSourceShouldShowLinkedPeople:(id)arg1 ;
-(void)personTableViewDataSource:(id)arg1 didUpdateValueForProperty:(int)arg2 ;
-(BOOL)hasPopoverController;
-(id)viewControllerToPresentModal;
-(BOOL)disablePopoverUpdates;
-(void)setDisablePopoverUpdates:(BOOL)arg1 ;
-(void)setActiveDialog:(id)arg1 ;
-(id)viewForActionSheet;
-(void)client:(id)arg1 didDismissActionSheet:(id)arg2 ;
-(void)personTableViewDataSource:(id)arg1 presentActionSheet:(id)arg2 fromView:(id)arg3 ;
-(BOOL)personTableViewDataSource:(id)arg1 shouldShowAction:(id)arg2 ;
-(void)personTableViewDataSource:(id)arg1 selectedCallActionForPropertyAtIndex:(int)arg2 inPropertyGroup:(id)arg3 ;
-(void)personTableViewDataSource:(id)arg1 selectedSMSActionForPropertyAtIndex:(int)arg2 inPropertyGroup:(id)arg3 ;
-(void)personTableViewDataSource:(id)arg1 shareContact:(id)arg2 ;
-(void)personTableViewDataSource:(id)arg1 conference:(id)arg2 person:(id)arg3 property:(int)arg4 identifier:(int)arg5 ;
-(BOOL)personTableViewDataSourceIsLocation:(id)arg1 ;
-(void)conference:(id)arg1 person:(id)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)personTableViewDataSource:(id)arg1 selectedAddToFavoritesActionForPropertyAtIndex:(int)arg2 inPropertyGroup:(id)arg3 entryType:(int)arg4 ;
-(void)personTableViewDataSource:(id)arg1 didDismissActionSheet:(id)arg2 ;
-(id)editDelegate;
-(void)personTableViewDataSource:(id)arg1 pushLinkedCardAtRow:(int)arg2 ;
-(void)personTableViewDataSourceDidReloadData:(id)arg1 ;
-(void)personTableViewDataSourceHeaderHeightDidChange:(id)arg1 ;
-(void)personTableViewDataSource:(id)arg1 removeNonScrollableHeaderViewAnimated:(BOOL)arg2 ;
-(BOOL)personTableViewDataSourceShouldShowHeader:(id)arg1 ;
-(float)personTableViewDataSourceHeaderPadding:(id)arg1 ;
-(void)personTableViewDataSource:(id)arg1 addNonScrollableHeaderView:(id)arg2 animated:(BOOL)arg3 ;
-(void)personTableViewDataSource:(id)arg1 willUpdateForEditing:(BOOL)arg2 ;
-(void)personTableViewDataSourceSelectedDeletePerson:(id)arg1 ;
-(BOOL)personTableViewDataSource:(id)arg1 selectedPropertyAtIndex:(int)arg2 inPropertyGroup:(id)arg3 withMemberCell:(id)arg4 forEditing:(BOOL)arg5 ;
-(void)personTableViewDataSource:(id)arg1 presentPickerViewController:(id)arg2 fromView:(id)arg3 forIndexPath:(id)arg4 ;
-(void)personTableViewDataSourceSelectedAddToContacts:(id)arg1 ;
-(void)presentPeoplePickerNavigationControllerForRelatedNames:(id)arg1 ;
-(BOOL)personTableViewDataSourceIsInPopover:(id)arg1 ;
-(void)personTableViewDataSourceDidSwipeToDelete:(id)arg1 ;
-(void)personTableViewDataSource:(id)arg1 scrollViewDidScroll:(id)arg2 ;
-(void)presentLinkingPeoplePickerForPersonTableViewDataSource:(id)arg1 ;
-(void)setLinkingDelegate:(id)arg1 ;
-(void)reloadNameData;
-(void)_updateDisplayedPeople;
-(void)setAllowsSettingAsPreferredCardForName:(BOOL)arg1 ;
-(void)personTableViewDataSource:(id)arg1 didBeginEditingProperty:(int)arg2 ;
-(void)personTableViewDataSource:(id)arg1 didFinishEditingProperty:(int)arg2 ;
-(BOOL)personTableViewDataSourceShouldPresentDatePickerViaDelegate:(id)arg1 ;
-(void)personTableViewDataSourceWillPresentDatePickerViewController:(id)arg1 ;
-(BOOL)isPresentingDatePickerViewControllerForPersonTableViewDataSource:(id)arg1 ;
-(void)personTableViewDataSource:(id)arg1 presentDatePickerViewController:(id)arg2 fromView:(id)arg3 passthroughViews:(id)arg4 forIndexPath:(id)arg5 ;
-(void)personTableViewDataSource:(id)arg1 dismissDatePickerViewController:(id)arg2 ;
-(void)personTableViewDataSource:(id)arg1 selectedImageForEditing:(BOOL)arg2 ;
-(id)personViewDelegate;
-(id)unknownPersonViewDelegate;
-(id)displayedPeople;
-(BOOL)isLocation;
-(id)controllerTableView;
-(BOOL)allowsSettingAsPreferredCardForName;
-(void)setCardContentProvider:(id)arg1 ;
-(void)addressBookChangedLocally:(CFDictionaryRef)arg1 ;
-(BOOL)makeFirstFieldBecomeFirstResponder;
-(void)didDismissModalViewController;
-(void*)existingAddressBook;
-(void)updateDisplayedPeopleAndReloadData;
-(void)ab_updatePopoverSize;
-(BOOL)updatePeopleDataForExternalChange;
-(void)updateTableDataForExternalChange;
-(BOOL)updateAllDataForExternalChange;
-(void)deleteDialog:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)_conferencingAvailabilityChanged:(id)arg1 ;
-(void)_favoritesListChanged:(id)arg1 ;
-(void)_updateCardContentProviderHeaderViewForEditing:(BOOL)arg1 ;
-(void)updateContentSwitchingTabs;
-(void)showSelectedContentView;
-(void)_updateBackgroundForCardContentProvider;
-(void)_setCardContentProvider:(id)arg1 ;
-(id)_personToUseForAddressBook;
-(id)personContainerView;
-(BOOL)_shouldHideContentSwitchingTabsWhenEditing:(BOOL)arg1 ;
-(void)updateAllowsSettingAsPreferredCardForName;
-(void)setDisplayedPeople:(id)arg1 forceReload:(BOOL)arg2 ;
-(void)_updateDisplayedPeopleForcingReloadData:(BOOL)arg1 ;
-(void)setAsPreferredCardForName:(id)arg1 ;
-(void)notifyScrollViewDidLoad;
-(void)contentSwitchingTabsTapped:(id)arg1 ;
-(void)presentNewContactViewControllerForAddToContacts:(id)arg1 ;
-(void)presentPeoplePickerNavigationControllerForAddToContacts:(id)arg1 ;
-(void)addUnknownPersonActionsIfNeeded;
-(id)prepareViewWithPerson:(id)arg1 ;
-(void)updateLinkBarButtonItem;
-(void)setDatePickerViewController:(id)arg1 ;
-(void)removeSelectedPersonFromBarButtonItem:(id)arg1 ;
-(void)removeDisplayedPeople;
-(void)_addProperties:(id)arg1 toPerson:(id)arg2 ;
-(id)_newContactViewControllerForAddToContacts;
-(id)_preparePeoplePicker;
-(void)_presentPeoplePickerNavigationController:(id)arg1 fromView:(id)arg2 inPopover:(BOOL)arg3 ;
-(BOOL)copyInsertValue:(id*)arg1 property:(int*)arg2 forPerson:(void*)arg3 ;
-(void)_mergeIntoDisplayedPerson:(void*)arg1 ;
-(void)peoplePickerNavigationController:(id)arg1 setRelatedPerson:(id)arg2 ;
-(BOOL)shouldShowAddToExistingContact;
-(void)twitterActionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)openSocialProfile:(id)arg1 ;
-(void)weiboActionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)showTweetSheetForPropertyValue:(id)arg1 ;
-(void)showWeiboSheetForPropertyValue:(id)arg1 ;
-(void)performAction:(int)arg1 forPropertyAtIndex:(int)arg2 inPropertyGroup:(id)arg3 withContext:(void*)arg4 ;
-(void)performAction:(int)arg1 forPropertyAtIndex:(int)arg2 inPropertyGroup:(id)arg3 ;
-(void)performTwitterActionForPropertyValue:(id)arg1 cell:(id)arg2 ;
-(void)performWeiboActionForPropertyValue:(id)arg1 cell:(id)arg2 ;
-(id)_chatURLWithPropertyValue:(id)arg1 ;
-(void)performSocialProfileActionForPropertyAtIndex:(int)arg1 inPropertyGroup:(id)arg2 forCell:(id)arg3 ;
-(void)performInstantMessageActionForPropertyAtIndex:(int)arg1 inPropertyGroup:(id)arg2 forCell:(id)arg3 ;
-(void)performDefaultActionForPropertyAtIndex:(int)arg1 inPropertyGroup:(id)arg2 ;
-(void)performActionForPropertyAtIndex:(int)arg1 inPropertyGroup:(id)arg2 forCell:(id)arg3 ;
-(void)removeSelectedPerson;
-(void)presentAddToContactsSheetIfNeeded:(id)arg1 ;
-(BOOL)shouldAnimateDatePickerInputView;
-(void)_datePickerInputViewDismissAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)setPopoverCellIndexPath:(id)arg1 ;
-(void)setPopoverViewInCellIndexPath:(id)arg1 ;
-(void)_presentDatePickerViewControllerAsInputView:(id)arg1 andScrollToIndexPath:(id)arg2 ;
-(void)presentModalViewController:(id)arg1 ;
-(void)_dismissDatePickerInputViewAnimated:(BOOL)arg1 ;
-(void)_attemptSave;
-(BOOL)_updatePeopleDataForExternalChangeWithFullReload:(BOOL)arg1 ;
-(id)popoverCellIndexPath;
-(id)popoverViewInCellIndexPath;
-(BOOL)personTableViewDataSourceShouldShowContactSources:(id)arg1 ;
-(void)dismissPickerViewController:(id)arg1 ;
-(id)viewToRepresentPopover:(id)arg1 ;
-(void)pushViewController:(id)arg1 ;
-(void)loadUnknownViewWithPerson:(id)arg1 allowActions:(BOOL)arg2 ;
-(BOOL)automaticallySetEditing;
-(void)setIsLocation:(BOOL)arg1 ;
-(id)addToPersonButtonTitle;
-(void)setAddToPersonButtonTitle:(id)arg1 ;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(void)reloadData;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(id)dataSource;
-(void)applicationWillSuspend;
-(void)applicationDidResume;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)viewController;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)popoverControllerShouldDismissPopover:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(id)displayedPerson;
-(void*)addressBook;
-(void)setAddressBook:(void*)arg1 ;
-(void)setDisplayedProperties:(id)arg1 ;
-(void)setDisplayedPerson:(id)arg1 ;
-(void)setAllowsActions:(BOOL)arg1 ;
-(void)setAllowsAddingToAddressBook:(BOOL)arg1 ;
@end

