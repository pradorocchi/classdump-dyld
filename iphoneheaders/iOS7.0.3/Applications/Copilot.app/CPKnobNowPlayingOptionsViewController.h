/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Copilot.app/Copilot
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>
#import <MediaPlayerUI/MPUNowPlayingDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITapGestureRecognizer, UIImage, NSString, UILabel, UIButton, UITableView;

@interface CPKnobNowPlayingOptionsViewController : UIViewController <MPUNowPlayingDelegate, UITableViewDataSource, UITableViewDelegate> {

	UITapGestureRecognizer* _knobBackPressRecognizer;
	UIImage* _albumArt;
	NSString* _title;
	NSString* _artist;
	NSString* _album;
	UILabel* _titleLabel;
	UIButton* _backButton;
	UITableView* _tableView;

}

@property (nonatomic,retain) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
-(id)initWithAlbumArt:(id)arg1 title:(id)arg2 artist:(id)arg3 album:(id)arg4 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)setTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)tableView;
-(void)knobBackPressed:(id)arg1 ;
-(void).cxx_destruct;
@end

