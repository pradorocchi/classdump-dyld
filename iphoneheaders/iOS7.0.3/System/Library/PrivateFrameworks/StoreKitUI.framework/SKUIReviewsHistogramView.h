/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:51 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, SKUIClientContext, SKUIColorScheme, UILabel, NSMutableDictionary, UISegmentedControl, SKUIStarRatingControl, UIImageView, NSString, UIView, NSArray, UIControl;

@interface SKUIReviewsHistogramView : UIView {

	UIButton* _appSupportButton;
	SKUIClientContext* _clientContext;
	SKUIColorScheme* _colorScheme;
	UILabel* _countLabel;
	int _numberOfUserRatings;
	NSMutableDictionary* _ratings;
	UISegmentedControl* _segmentedControl;
	SKUIStarRatingControl* _starRatingControl;
	UILabel* _starRatingControlLabel;
	UILabel* _titleLabel;
	float _userRating;
	UIImageView* _userRatingStarsView;
	NSString* _versionString;
	UIButton* _writeAReviewButton;
	UIView* _bottomSeparatorView;
	UIImageView* _histogramImageView;
	NSArray* _histogramValues;

}

@property (nonatomic,retain) SKUIColorScheme * colorScheme;                 //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) int numberOfUserRatings;                       //@synthesize numberOfUserRatings=_numberOfUserRatings - In the implementation block
@property (assign,nonatomic) float userRating; 
@property (nonatomic,copy) NSString * versionString;                        //@synthesize versionString=_versionString - In the implementation block
@property (nonatomic,retain) NSArray * histogramValues;                     //@synthesize histogramValues=_histogramValues - In the implementation block
@property (nonatomic,readonly) UIControl * segmentedControl; 
@property (nonatomic,copy) NSArray * segmentedControlTitles; 
@property (assign,nonatomic) int selectedSegmentIndex; 
@property (nonatomic,readonly) UIControl * starRatingControl;               //@synthesize starRatingControl=_starRatingControl - In the implementation block
@property (assign,nonatomic) int personalStarRating; 
@property (nonatomic,readonly) UIControl * appSupportButton;                //@synthesize appSupportButton=_appSupportButton - In the implementation block
@property (nonatomic,readonly) UIControl * writeAReviewButton;              //@synthesize writeAReviewButton=_writeAReviewButton - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)title;
-(void)setSelectedSegmentIndex:(int)arg1 ;
-(int)selectedSegmentIndex;
-(id)segmentedControl;
-(id)versionString;
-(float)userRating;
-(void)setUserRating:(float)arg1 ;
-(id)colorScheme;
-(void)setColorScheme:(id)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(id)appSupportButton;
-(id)starRatingControl;
-(id)writeAReviewButton;
-(int)personalStarRating;
-(void)setSegmentedControlTitles:(id)arg1 ;
-(void)setVersionString:(id)arg1 ;
-(void)setPersonalStarRating:(int)arg1 ;
-(id)_histogramImageForValues:(id)arg1 ;
-(id)_countLabelString;
-(id)segmentedControlTitles;
-(void)setHistogramValues:(id)arg1 ;
-(id)histogramValues;
-(void).cxx_destruct;
-(int)numberOfUserRatings;
-(void)setNumberOfUserRatings:(int)arg1 ;
@end

