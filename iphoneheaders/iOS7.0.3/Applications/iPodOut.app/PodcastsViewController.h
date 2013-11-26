/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/iPodOut.app/iPodOut
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iPodOut/FocusedTableViewController.h>

@class MPMediaQuery;

@interface PodcastsViewController : FocusedTableViewController {

	MPMediaQuery* podcastsQuery;

}

@property (nonatomic,retain) MPMediaQuery * podcastsQuery; 
-(void)writeCurrentPositionIntoNavigationPathComponent:(id)arg1 ;
-(id)statusBarTitle;
-(void)selectAction:(BOOL)arg1 transition:(int)arg2 ;
-(int)restoreWithPathComponent:(id)arg1 ;
-(BOOL)enableQuickNav;
-(id)viewControllerForCurrentRow;
-(void)setPodcastsQuery:(id)arg1 ;
-(id)podcastsQuery;
-(id)init;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void).cxx_destruct;
@end

