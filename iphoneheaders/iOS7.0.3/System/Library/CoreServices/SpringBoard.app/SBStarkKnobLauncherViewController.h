/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SBStarkLauncherViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SpringBoard/SBStarkKnobLauncherCellDelegate.h>

@class UITableView, UINavigationBar, SBIcon;

@interface SBStarkKnobLauncherViewController : SBStarkLauncherViewController <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, SBStarkKnobLauncherCellDelegate> {

	UITableView* _tableView;
	UINavigationBar* _navBar;
	SBIcon* _lastHighlightedIcon;

}
-(BOOL)obscuresControlBar;
-(BOOL)hidesAutomatically;
-(void)_launchIcon:(id)arg1 ;
-(id)prefixFakeIcons;
-(void)relayoutIcons;
-(id)_rowIndexPathForIcon:(id)arg1 ;
-(BOOL)iconShowsDisclosureIndicator:(id)arg1 ;
-(BOOL)starkKnobLauncherCellDisplaysBadges:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

