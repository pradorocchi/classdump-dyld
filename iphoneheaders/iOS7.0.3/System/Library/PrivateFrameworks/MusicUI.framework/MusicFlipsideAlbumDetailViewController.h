/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:18 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MusicUI/MusicAlbumsDetailViewController.h>
#import <MusicUI/MusicFlipsideRating.h>
#import <MusicUI/MPURatingControlDelegate.h>

@protocol MPURatingControlDelegate;
@class MPImageCache, , NSIndexPath;

@interface MusicFlipsideAlbumDetailViewController : MusicAlbumsDetailViewController <MusicFlipsideRating, MPURatingControlDelegate> {

	MPImageCache* _imageCache;
	<MPURatingControlDelegate>* _ratingDelegate;
	NSIndexPath* _ratingItemIndexPath;

}

@property (assign,nonatomic,__weak) <MPURatingControlDelegate> * ratingDelegate; 
@property (assign,nonatomic) BOOL showingRating; 
+(BOOL)_supportsSearch;
-(id)newHeaderView;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)setShowingRating:(BOOL)arg1 ;
-(void)setRatingDelegate:(id)arg1 ;
-(void)setShowingRating:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)ratingDidChangeForRatingControl:(id)arg1 ;
-(id)ratingDelegate;
-(float)maximumDurationWidth;
-(BOOL)showingRating;
-(id)_createTableViewBackgroundView;
-(id)initWithDataSource:(id)arg1 ;
-(void).cxx_destruct;
@end

