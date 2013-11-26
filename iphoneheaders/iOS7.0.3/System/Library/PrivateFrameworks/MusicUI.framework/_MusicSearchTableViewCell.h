/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:21 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIImage, NSAttributedString;

@interface _MusicSearchTableViewCell : UITableViewCell {

	UIImageView* _artworkImageView;
	UIImageView* _explicitImageView;
	UILabel* _subtitleLabel;
	UILabel* _titleLabel;
	BOOL _displayAsDisabled;
	BOOL _explicitTrack;

}

@property (nonatomic,retain) UIImage * artworkImage; 
@property (assign,getter=isDisplayingAsDisabled,nonatomic) BOOL displayAsDisabled;              //@synthesize displayAsDisabled=_displayAsDisabled - In the implementation block
@property (assign,getter=isExplicitTrack,nonatomic) BOOL explicitTrack;                         //@synthesize explicitTrack=_explicitTrack - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedSubtitleText; 
@property (nonatomic,copy) NSAttributedString * attributedTitleText; 
-(BOOL)isExplicitTrack;
-(id)artworkImage;
-(void)layoutSubviews;
-(void)setArtworkImage:(id)arg1 ;
-(void)setExplicitTrack:(BOOL)arg1 ;
-(BOOL)isDisplayingAsDisabled;
-(void)setDisplayAsDisabled:(BOOL)arg1 ;
-(void)setAttributedSubtitleText:(id)arg1 ;
-(void)setAttributedTitleText:(id)arg1 ;
-(id)attributedSubtitleText;
-(id)attributedTitleText;
-(void).cxx_destruct;
@end

