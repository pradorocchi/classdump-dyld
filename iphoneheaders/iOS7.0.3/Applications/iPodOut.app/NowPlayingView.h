/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/iPodOut.app/iPodOut
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iPodOut/iPodOut-Structs.h>
#import <UIKit/UIControl.h>

@class StatusBarView, _UIReflectingView, UILabel, ProgressView, NSDictionary, NSMutableDictionary, NSDateFormatter, NSString;

@interface NowPlayingView : UIControl {

	BOOL shouldUpdateProgress;
	BOOL albumArtIsPlaceholder;
	StatusBarView* statusBarView;
	_UIReflectingView* albumArtView;
	UILabel* trackTitleLabel;
	UILabel* artistAlbumLabel;
	UILabel* itemNumberLabel;
	ProgressView* progressView;
	UILabel* progressLabel;
	UILabel* remainingLabel;
	UILabel* ratingsLabel;
	NSDictionary* cachedNowPlayingInfo;
	NSMutableDictionary* viewSets;
	NSDateFormatter* timeFormatter;
	NSString* currentViewSet;
	unsigned timesToWaitForExpectedFirstTrackIdentifer;
	unsigned long long expectedFirstTrackIdentifier;

}

@property (nonatomic,retain) StatusBarView * statusBarView; 
@property (nonatomic,retain) _UIReflectingView * albumArtView; 
@property (nonatomic,retain) UILabel * trackTitleLabel; 
@property (nonatomic,retain) UILabel * artistAlbumLabel; 
@property (nonatomic,retain) UILabel * itemNumberLabel; 
@property (nonatomic,retain) ProgressView * progressView; 
@property (nonatomic,retain) UILabel * progressLabel; 
@property (nonatomic,retain) UILabel * remainingLabel; 
@property (nonatomic,retain) UILabel * ratingsLabel; 
@property (assign,nonatomic) unsigned long long expectedFirstTrackIdentifier; 
@property (assign,nonatomic) BOOL shouldUpdateProgress; 
@property (assign,nonatomic) BOOL albumArtIsPlaceholder; 
@property (nonatomic,retain) NSMutableDictionary * viewSets; 
@property (nonatomic,retain) NSDateFormatter * timeFormatter; 
@property (nonatomic,retain) NSDictionary * cachedNowPlayingInfo; 
@property (nonatomic,retain) NSString * currentViewSet; 
@property (assign,nonatomic) unsigned timesToWaitForExpectedFirstTrackIdentifer; 
-(id)progressLabel;
-(void)setProgressLabel:(id)arg1 ;
-(id)remainingLabel;
-(void)setRemainingLabel:(id)arg1 ;
-(void)setTimeFormatter:(id)arg1 ;
-(id)statusBarView;
-(unsigned long long)expectedFirstTrackIdentifier;
-(void)setExpectedFirstTrackIdentifier:(unsigned long long)arg1 ;
-(void)setShouldUpdateProgress:(BOOL)arg1 ;
-(id)cachedNowPlayingInfo;
-(void)nowPlayingInfoDidChange;
-(void)setStatusBarView:(id)arg1 ;
-(void)setAlbumArtView:(id)arg1 ;
-(id)albumArtView;
-(void)setSubtitleAttributesOnLabel:(id)arg1 ;
-(BOOL)shouldUpdateProgress;
-(void)setCachedNowPlayingInfo:(id)arg1 ;
-(unsigned)timesToWaitForExpectedFirstTrackIdentifer;
-(void)setTimesToWaitForExpectedFirstTrackIdentifer:(unsigned)arg1 ;
-(void)playbackRateDidChange:(float)arg1 ;
-(void)updateDisplayWithNowPlayingInfo;
-(id)trackTitleLabel;
-(id)artistAlbumLabel;
-(void)updateProgress;
-(void)setAlbumArtIsPlaceholder:(BOOL)arg1 ;
-(id)itemNumberLabel;
-(id)viewSets;
-(void)setCurrentViewSet:(id)arg1 ;
-(void)nowPlayingPIDDidChange;
-(void)nowPlayingAppIsPlayingDidChange;
-(void)showViewsInSetNamed:(id)arg1 ;
-(void)setTrackTitleLabel:(id)arg1 ;
-(void)setArtistAlbumLabel:(id)arg1 ;
-(void)setItemNumberLabel:(id)arg1 ;
-(id)ratingsLabel;
-(void)setRatingsLabel:(id)arg1 ;
-(BOOL)albumArtIsPlaceholder;
-(void)setViewSets:(id)arg1 ;
-(id)currentViewSet;
-(void)_updateDisplay;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(id)timeFormatter;
-(id)progressView;
-(void)setProgressView:(id)arg1 ;
-(void).cxx_destruct;
@end

