/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/iPodOut.app/iPodOut
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iPodOut/FocusedTableViewController.h>

@class MPMediaQuery;

@interface LeafViewController : FocusedTableViewController {

	int _isNowPlaying;
	MPMediaQuery* query;
	unsigned actionRowCount;

}

@property (nonatomic,retain) MPMediaQuery * query; 
@property (assign,nonatomic) unsigned actionRowCount; 
@property (nonatomic,readonly) BOOL isNowPlaying; 
@property (nonatomic,readonly) unsigned nowPlayingRow; 
-(unsigned)actionRowCount;
-(void)setActionRowCount:(unsigned)arg1 ;
-(unsigned)nowPlayingRow;
-(void)invalidateNowPlaying;
-(void)_nowPlayingInfoChanged;
-(BOOL)_queryMatchesNowPlayingQueue;
-(void)setQuery:(id)arg1 ;
-(id)query;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)isNowPlaying;
-(void).cxx_destruct;
@end

