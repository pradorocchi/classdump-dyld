/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:19 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@class MKStarRatingView, UILabel, NSString;

@interface MKStarRatingAndLabelView : UIView {

	MKStarRatingView* _starRatingView;
	UILabel* _reviewsLabel;
	NSString* _sourceName;
	int _numberOfReviews;
	BOOL _displaysSourceOfReviews;

}

@property (nonatomic,readonly) MKStarRatingView * starRatingView;              //@synthesize starRatingView=_starRatingView - In the implementation block
@property (nonatomic,readonly) UILabel * reviewsLabel;                         //@synthesize reviewsLabel=_reviewsLabel - In the implementation block
@property (assign,nonatomic) int numberOfReviews;                              //@synthesize numberOfReviews=_numberOfReviews - In the implementation block
@property (nonatomic,retain) NSString * sourceName;                            //@synthesize sourceName=_sourceName - In the implementation block
-(void)_setStarStyle:(int)arg1 ;
-(void)_mapkit_setTextColor:(id)arg1 ;
-(void)setDisplaysSourceOfReviews:(BOOL)arg1 ;
-(id)starRatingView;
-(id)reviewsLabel;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(int)numberOfReviews;
-(void)setNumberOfReviews:(int)arg1 ;
-(void)setSourceName:(id)arg1 ;
-(id)sourceName;
@end

