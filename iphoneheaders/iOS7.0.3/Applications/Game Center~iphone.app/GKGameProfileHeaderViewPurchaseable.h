/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Game Center~iphone/Game Center~iphone-Structs.h>
#import <Game Center~iphone/GKGameProfileHeaderView.h>

@class GKRatingView, GKLabel, NSArray;

@interface GKGameProfileHeaderViewPurchaseable : GKGameProfileHeaderView {

	GKRatingView* _ratingView;
	GKLabel* _nameLabel;
	GKLabel* _developerLabel;
	NSArray* _currentBuyButtonConstraints;
	NSArray* _withBuyButtonConstraints;
	NSArray* _withoutBuyButtonConstraints;

}

@property (nonatomic,retain) GKRatingView * ratingView;                          //@synthesize ratingView=_ratingView - In the implementation block
@property (nonatomic,retain) GKLabel * nameLabel;                                //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) GKLabel * developerLabel;                           //@synthesize developerLabel=_developerLabel - In the implementation block
@property (nonatomic,retain) NSArray * currentBuyButtonConstraints;              //@synthesize currentBuyButtonConstraints=_currentBuyButtonConstraints - In the implementation block
@property (nonatomic,retain) NSArray * withBuyButtonConstraints;                 //@synthesize withBuyButtonConstraints=_withBuyButtonConstraints - In the implementation block
@property (nonatomic,retain) NSArray * withoutBuyButtonConstraints;              //@synthesize withoutBuyButtonConstraints=_withoutBuyButtonConstraints - In the implementation block
-(void)updateRating;
-(void)setWithBuyButtonConstraints:(id)arg1 ;
-(void)setCurrentBuyButtonConstraints:(id)arg1 ;
-(void)setWithoutBuyButtonConstraints:(id)arg1 ;
-(id)currentBuyButtonConstraints;
-(id)withBuyButtonConstraints;
-(id)withoutBuyButtonConstraints;
-(void)didUpdateModel;
-(id)nameLabel;
-(void)setNameLabel:(id)arg1 ;
-(void)buyButtonPressed:(id)arg1 ;
-(void)applyConstraints;
-(id)developerLabel;
-(void)setDeveloperLabel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)setRatingView:(id)arg1 ;
-(id)ratingView;
@end

