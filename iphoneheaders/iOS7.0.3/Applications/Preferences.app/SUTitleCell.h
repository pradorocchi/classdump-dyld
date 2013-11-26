/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Preferences.app/Preferences
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/PSTableCell.h>

@class UIProgressView, UILabel, UITextContentView, SoftwareUpdateAnimatedIcon;

@interface SUTitleCell : PSTableCell {

	UIProgressView* _progressBar;
	UILabel* _updateStatusLabel;
	UITextContentView* _releaseNotesTextView;
	int _progressStyle;
	SoftwareUpdateAnimatedIcon* _animatedGearView;
	BOOL _animatingGearView;

}

@property (nonatomic,retain) UITextContentView * releaseNotesLabel;              //@synthesize releaseNotesTextView=_releaseNotesTextView - In the implementation block
@property (assign,nonatomic) int progressStyle;                                  //@synthesize progressStyle=_progressStyle - In the implementation block
+(int)cellStyle;
-(void)sizeToFitWithTable:(id)arg1 ;
-(void)setAnimatingGearView:(BOOL)arg1 ;
-(void)setReleaseNotesSummary:(id)arg1 ;
-(float)preferredHeightWithTable:(id)arg1 ;
-(void)setProgressDisplayStyle:(int)arg1 ;
-(id)releaseNotesLabel;
-(void)setReleaseNotesLabel:(id)arg1 ;
-(int)progressStyle;
-(void)setProgressStyle:(int)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)didMoveToSuperview;
-(void)setProgress:(float)arg1 ;
-(void)setStatusMessage:(id)arg1 ;
-(void)_layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end

