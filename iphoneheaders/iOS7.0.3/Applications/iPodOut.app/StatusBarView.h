/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/iPodOut.app/iPodOut
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iPodOut/iPodOut-Structs.h>
#import <UIKit/UIView.h>

@class NSString, _UIReflectingView, UIButton, UIImage;

@interface StatusBarView : UIView {

	BOOL showShuffle;
	BOOL showRepeat;
	BOOL showUnderline;
	BOOL showPlayPause;
	NSString* title;
	NSString* subtitle;
	_UIReflectingView* reflectionImageView;
	UIButton* backButton;
	int playbackState;
	int repeatMode;
	int shuffleMode;
	CGRect titleSafeFrame;

}

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) BOOL showShuffle; 
@property (assign,nonatomic) BOOL showRepeat; 
@property (assign,nonatomic) BOOL showBackButton; 
@property (assign,nonatomic) BOOL showUnderline; 
@property (assign,nonatomic) BOOL showPlayPause; 
@property (nonatomic,readonly) CGRect backButtonFrame; 
@property (assign,nonatomic) CGRect titleSafeFrame; 
@property (nonatomic,retain) _UIReflectingView * reflectionImageView; 
@property (nonatomic,retain) UIButton * backButton; 
@property (assign,nonatomic) int playbackState; 
@property (assign,nonatomic) int repeatMode; 
@property (assign,nonatomic) int shuffleMode; 
-(void)setBackButton:(id)arg1 ;
-(void)setShowBackButton:(BOOL)arg1 ;
-(void)setShowUnderline:(BOOL)arg1 ;
-(void)setShowShuffle:(BOOL)arg1 ;
-(void)setShowRepeat:(BOOL)arg1 ;
-(void)setShowPlayPause:(BOOL)arg1 ;
-(BOOL)showBackButton;
-(void)_nowPlayingInfoChanged;
-(CGRect)titleSafeFrame;
-(CGRect)backButtonFrame;
-(id)reflectionImageView;
-(BOOL)showUnderline;
-(BOOL)showRepeat;
-(BOOL)showShuffle;
-(BOOL)showPlayPause;
-(void)setReflectionImageView:(id)arg1 ;
-(void)setTitleSafeFrame:(CGRect)arg1 ;
-(int)playbackState;
-(int)repeatMode;
-(void)setRepeatMode:(int)arg1 ;
-(int)shuffleMode;
-(void)setShuffleMode:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)image;
-(id)title;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(id)backButton;
-(void)setPlaybackState:(int)arg1 ;
-(void).cxx_destruct;
@end

