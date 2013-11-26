/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/CollectionsTableViewController.h>

@protocol RecentsViewControllerDelegate;
@class UIActionSheet, CurrentLocationHistoryItem, CustomSearchResultHistoryItem, DirectionsHomeHistoryItem, , NSArray;

@interface RecentsViewController : CollectionsTableViewController {

	UIActionSheet* _clearRecentsActionSheet;
	CurrentLocationHistoryItem* _currentLocationHistoryItem;
	CustomSearchResultHistoryItem* _customSearchResultHistoryItem;
	DirectionsHomeHistoryItem* _directionsHomeHistoryItem;
	<RecentsViewControllerDelegate>* _recentsViewControllerDelegate;
	BOOL _abAllowed;
	BOOL _loadingRecents;
	BOOL _opaque;
	NSArray* _systemRecents;
	NSArray* _orderedHistory;

}

@property (assign,nonatomic) <RecentsViewControllerDelegate> * recentsViewControllerDelegate;              //@synthesize recentsViewControllerDelegate=_recentsViewControllerDelegate - In the implementation block
@property (nonatomic,copy) NSArray * systemRecents;                                                        //@synthesize systemRecents=_systemRecents - In the implementation block
@property (nonatomic,copy) NSArray * orderedHistory;                                                       //@synthesize orderedHistory=_orderedHistory - In the implementation block
@property (nonatomic,retain) CurrentLocationHistoryItem * currentLocationHistoryItem;                      //@synthesize currentLocationHistoryItem=_currentLocationHistoryItem - In the implementation block
@property (nonatomic,retain) CustomSearchResultHistoryItem * customSearchResultHistoryItem;                //@synthesize customSearchResultHistoryItem=_customSearchResultHistoryItem - In the implementation block
@property (nonatomic,retain) DirectionsHomeHistoryItem * directionsHomeHistoryItem;                        //@synthesize directionsHomeHistoryItem=_directionsHomeHistoryItem - In the implementation block
+(id)dataSourceChangedNotification;
+(id)_searchRequestFromString:(id)arg1 ;
+(id)title;
-(void)dataSourceChanged:(id)arg1 ;
-(BOOL)_updateCurrentLocation;
-(void)_updateCustomSearchResult;
-(BOOL)_updateDirectionsHome;
-(id)initWithOpaqueBackground:(BOOL)arg1 ;
-(void)setRecentsViewControllerDelegate:(id)arg1 ;
-(id)orderedHistory;
-(void)_updateSystemRecents;
-(void)setOrderedHistory:(id)arg1 ;
-(void)setSystemRecents:(id)arg1 ;
-(id)customSearchResultHistoryItem;
-(void)setCustomSearchResultHistoryItem:(id)arg1 ;
-(id)systemRecents;
-(id)directionsHomeHistoryItem;
-(void)_presentClearRecentsAlert;
-(void)cancelActionSheetAnimated:(BOOL)arg1 ;
-(id)currentLocationHistoryItem;
-(void)setCurrentLocationHistoryItem:(id)arg1 ;
-(void)setDirectionsHomeHistoryItem:(id)arg1 ;
-(id)recentsViewControllerDelegate;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(unsigned)numberOfRows;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

