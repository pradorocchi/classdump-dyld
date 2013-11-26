/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:54 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, NSDictionary, NSArray;

@interface PLAirTunesServicePickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	id _delegate;
	UITableView* _table;
	NSDictionary* _selectedRoute;
	NSArray* _availableRoutes;

}

@property (assign,nonatomic) <PLAirTunesServicePickerViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * availableRoutes;                                               //@synthesize availableRoutes=_availableRoutes - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)delegate;
-(CGSize)contentSizeForViewInPopoverView;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setAvailableRoutes:(id)arg1 ;
-(id)initWithAvailableAirplayRoutes:(id)arg1 previouslySelectedRoute:(id)arg2 ;
-(void)_setCell:(id)arg1 checked:(BOOL)arg2 ;
-(int)_indexofRouteWithRouteID:(id)arg1 ;
-(id)availableRoutes;
@end

