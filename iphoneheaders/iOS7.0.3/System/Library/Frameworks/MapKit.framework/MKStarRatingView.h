/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:19 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, NSMutableArray;

@interface MKStarRatingView : UIView {

	float _rating;
	int _numLevels;
	float _padding;
	BOOL _highlighted;
	UIImage* _fullStarImage;
	UIImage* _halfStarImage;
	UIImage* _emptyStarImage;
	UIImage* _fullStarHighlightedImage;
	UIImage* _halfStarHighlightedImage;
	UIImage* _emptyStarHighlightedImage;
	NSMutableArray* _ratingViews;
	int _numReviews;

}

@property (assign,nonatomic) int numberOfRatingLevels;                           //@synthesize numLevels=_numLevels - In the implementation block
@property (assign,nonatomic) float rating;                                       //@synthesize rating=_rating - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) UIImage * fullStarImage;                            //@synthesize fullStarImage=_fullStarImage - In the implementation block
@property (nonatomic,retain) UIImage * halfStarImage;                            //@synthesize halfStarImage=_halfStarImage - In the implementation block
@property (nonatomic,retain) UIImage * emptyStarImage;                           //@synthesize emptyStarImage=_emptyStarImage - In the implementation block
@property (nonatomic,retain) UIImage * fullStarHighlightedImage;                 //@synthesize fullStarHighlightedImage=_fullStarHighlightedImage - In the implementation block
@property (nonatomic,retain) UIImage * halfStarHighlightedImage;                 //@synthesize halfStarHighlightedImage=_halfStarHighlightedImage - In the implementation block
@property (nonatomic,retain) UIImage * emptyStarHighlightedImage;                //@synthesize emptyStarHighlightedImage=_emptyStarHighlightedImage - In the implementation block
-(int)numberOfRatingLevels;
-(void)setNumberOfRatingLevels:(int)arg1 ;
-(id)fullStarImage;
-(void)setFullStarImage:(id)arg1 ;
-(id)halfStarImage;
-(void)setHalfStarImage:(id)arg1 ;
-(id)emptyStarImage;
-(void)setEmptyStarImage:(id)arg1 ;
-(id)fullStarHighlightedImage;
-(void)setFullStarHighlightedImage:(id)arg1 ;
-(id)halfStarHighlightedImage;
-(void)setHalfStarHighlightedImage:(id)arg1 ;
-(id)emptyStarHighlightedImage;
-(void)setEmptyStarHighlightedImage:(id)arg1 ;
-(void)setRating:(float)arg1 ;
-(float)rating;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)setPadding:(float)arg1 ;
@end

