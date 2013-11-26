/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/iPodOut.app/iPodOut
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iPodOut/FocusedTableViewController.h>

@class MPMediaQuery, NSString;

@interface PlaylistsViewController : FocusedTableViewController {

	MPMediaQuery* query;
	NSString* statusBarTitle;

}

@property (nonatomic,retain) MPMediaQuery * query; 
@property (nonatomic,retain) NSString * statusBarTitle; 
-(void)writeCurrentPositionIntoNavigationPathComponent:(id)arg1 ;
-(id)statusBarTitle;
-(void)selectAction:(BOOL)arg1 transition:(int)arg2 ;
-(int)restoreWithPathComponent:(id)arg1 ;
-(id)viewControllerForCurrentRow;
-(id)initWithParentPlaylistPID:(unsigned long long)arg1 ;
-(void)selectCurrentRowWithTransition:(int)arg1 ;
-(void)setStatusBarTitle:(id)arg1 ;
-(unsigned)activeGeniusPlaylistRow;
-(void)setQuery:(id)arg1 ;
-(id)init;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)query;
-(void).cxx_destruct;
@end

