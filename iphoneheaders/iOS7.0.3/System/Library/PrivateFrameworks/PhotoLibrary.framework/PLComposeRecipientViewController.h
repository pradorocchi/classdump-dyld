/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:56 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/ABPeoplePickerNavigationControllerDelegate.h>
#import <MessageUI/MFContactsSearchConsumer.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol PLComposeRecipientViewControllerDelegate;
@class PLComposeRecipientView, UIScrollView, , MFContactsSearchManager, MFContactsSearchResultsModel, MFSearchShadowView, NSArray, NSNumber, UITableView, UIPopoverController;

@interface PLComposeRecipientViewController : UIViewController <ABPeoplePickerNavigationControllerDelegate, MFContactsSearchConsumer, UITableViewDelegate, UITableViewDataSource, UIPopoverControllerDelegate> {

	PLComposeRecipientView* _recipientView;
	UIScrollView* _recipientContainerView;
	CGRect _keyboardFrame;
	unsigned _maxExpandRows;
	<PLComposeRecipientViewControllerDelegate>* _delegate;
	MFContactsSearchManager* _searchManager;
	MFContactsSearchResultsModel* _searchResultsModel;
	MFSearchShadowView* _shadowView;
	NSArray* _searchResults;
	NSNumber* _currentSearchTaskID;
	UITableView* _searchResultsTable;
	UIPopoverController* _searchResultsPopoverController;
	UIPopoverController* _peoplePickerPopoverController;
	struct {
		unsigned showingPeoplePicker : 1;
		unsigned showingSearchResultsTable : 1;
		unsigned offsettingForResultsTable : 1;
		unsigned wasFirstResponder : 1;
	}  _flags;
	NSArray* _properties;
	BOOL _drawsLetterpress;

}

@property (assign,nonatomic) <PLComposeRecipientViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PLComposeRecipientView * recipientView;                           //@synthesize recipientView=_recipientView - In the implementation block
@property (assign,nonatomic) BOOL drawsLetterpress;                                              //@synthesize drawsLetterpress=_drawsLetterpress - In the implementation block
@property (assign,nonatomic) unsigned maxExpandRows;                                             //@synthesize maxExpandRows=_maxExpandRows - In the implementation block
+(void)recordRecentInvitationRecipient:(id)arg1 displayName:(id)arg2 date:(id)arg3 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)delegate;
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewDidUnload;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)setDrawsLetterpress:(BOOL)arg1 ;
-(BOOL)drawsLetterpress;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(id)recipients;
-(void)setMaxExpandRows:(unsigned)arg1 ;
-(BOOL)isRecipientViewFirstResponder;
-(void)_keyboardSizeDidChange:(id)arg1 ;
-(void)_presentSearchResultsPopover;
-(void)_updateViewsLayoutAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(BOOL)_searchResultsShowInPopover;
-(void)_updateSearchResultsTableVisibility;
-(id)_newSearchResultsTable;
-(id)_newShadowView;
-(id)recipientView;
-(unsigned)maxExpandRows;
-(void*)_addressBook;
-(void)makeRecipientViewResignFirstResponder;
-(void)makeRecipientViewFirstResponder;
-(void)_searchForRecipientWithText:(id)arg1 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2 ;
-(void)_forceDismissPeoplePickerPopover;
-(void)_dismissPeoplePicker:(id)arg1 ;
-(id)_searchManager;
-(void)_setSearchResults:(id)arg1 ;
-(BOOL)shouldShowCardForPerson:(void*)arg1 peoplePicker:(id)arg2 ;
-(void)consumeSearchResults:(id)arg1 type:(int)arg2 taskID:(id)arg3 ;
-(void)finishedSearchingForType:(int)arg1 ;
-(void)finishedTaskWithID:(id)arg1 ;
-(void)beganNetworkActivity;
-(void)endedNetworkActivity;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 requestDeleteRecipientAtIndex:(int)arg2 ;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1 ;
-(BOOL)composeRecipientViewIsShowingPeoplePicker:(id)arg1 ;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 identifier:(int)arg3 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)composeRecipientViewReturnPressed:(id)arg1 ;
@end

