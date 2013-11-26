/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIView.h>
#import <MediaPlayer/MPDetailScrubControllerDelegate.h>

@protocol MPDetailedScrubbing_MPUSliderScrubForwarding, MPUChronologicalProgressViewDelegate;
@class MPDetailScrubController, UISlider, UILabel, NSString, ;

@interface MPUChronologicalProgressView : UIView <MPDetailScrubControllerDelegate> {

	MPDetailScrubController* _scrubController;
	UISlider<MPDetailedScrubbing><_MPUSliderScrubForwarding>* _slider;
	UILabel* _currentTimeLabel;
	UILabel* _remainingTimeLabel;
	NSString* _lastCurrentTimeString;
	NSString* _lastRemainingTimeString;
	double _lastDisplayedDuration;
	BOOL _showTimeLabels;
	BOOL _scrubbingEnabled;
	<MPUChronologicalProgressViewDelegate>* _delegate;
	int _style;
	double _totalDuration;
	double _currentTime;

}

@property (assign,nonatomic,__weak) <MPUChronologicalProgressViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int style;                                                           //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) double totalDuration;                                                  //@synthesize totalDuration=_totalDuration - In the implementation block
@property (assign,nonatomic) double currentTime;                                                    //@synthesize currentTime=_currentTime - In the implementation block
@property (assign,nonatomic) BOOL showTimeLabels;                                                   //@synthesize showTimeLabels=_showTimeLabels - In the implementation block
@property (assign,nonatomic) BOOL scrubbingEnabled;                                                 //@synthesize scrubbingEnabled=_scrubbingEnabled - In the implementation block
@property (nonatomic,readonly) CGRect trackRect; 
-(void)_updateTimeLabels;
-(double)currentTime;
-(void)setCurrentTime:(double)arg1 ;
-(void)detailScrubControllerDidBeginScrubbing:(id)arg1 ;
-(void)detailScrubControllerDidEndScrubbing:(id)arg1 ;
-(void)detailScrubController:(id)arg1 didChangeValue:(float)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(int)style;
-(id)initWithStyle:(int)arg1 ;
-(CGRect)trackRect;
-(id)_styledImageName:(id)arg1 ;
-(id)_trackImage;
-(id)_thumbImage;
-(id)_createTimeLabelWithStyle:(int)arg1 ;
-(void)_internalSetCurrentTime:(double)arg1 ;
-(float)_sliderNormalizedValueForTime:(double)arg1 ;
-(id)_timeLabelFont;
-(BOOL)showTimeLabels;
-(void)setShowTimeLabels:(BOOL)arg1 ;
-(void)setTotalDuration:(double)arg1 ;
-(double)totalDuration;
-(void)setScrubbingEnabled:(BOOL)arg1 ;
-(BOOL)scrubbingEnabled;
-(void).cxx_destruct;
@end

