/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIControl.h>

@protocol MPURatingControlDelegate;
@class UITapGestureRecognizer, UIPanGestureRecognizer, NSMutableArray, ;

@interface MPURatingControl : UIControl {

	UITapGestureRecognizer* _tapGestureRecognizer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	NSMutableArray* _imageViews;
	<MPURatingControlDelegate>* _delegate;
	float _rating;
	UIEdgeInsets _hitTestEdgeInsets;

}

@property (assign,nonatomic,__weak) <MPURatingControlDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hitTestEdgeInsets;                            //@synthesize hitTestEdgeInsets=_hitTestEdgeInsets - In the implementation block
@property (assign,nonatomic) float rating;                                              //@synthesize rating=_rating - In the implementation block
+(id)ratingStarImage;
+(id)ratingDotImage;
-(void)setRating:(float)arg1 ;
-(float)rating;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)delegate;
-(void)_handlePanGesture:(id)arg1 ;
-(void)_handleTapGesture:(id)arg1 ;
-(void)setHitTestEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)_updateImageViewsForRatingAnimated:(BOOL)arg1 ;
-(UIEdgeInsets)hitTestEdgeInsets;
-(float)ratingValueForLocationInView:(CGPoint)arg1 ;
-(void)setRating:(float)arg1 animated:(BOOL)arg2 ;
-(void).cxx_destruct;
@end

