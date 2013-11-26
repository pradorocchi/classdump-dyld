/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:06 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, PUMapViewControllerSpec, PUStackView;

@interface PUMapAnnotationView : UIView {

	unsigned _count;
	UILabel* _countLabel;
	UIImageView* _countBadgeImageView;
	CGSize _badgeImageSize;
	PUMapViewControllerSpec* _spec;
	PUStackView* _stackView;

}

@property (assign,nonatomic) unsigned count; 
@property (nonatomic,readonly) PUStackView * stackView;              //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) float sideCapWidth; 
-(unsigned)count;
-(void)layoutSubviews;
-(void)setCount:(unsigned)arg1 ;
-(id)stackView;
-(float)sideCapWidth;
-(void)updateOrder;
-(void)configureAnnotationWithSpec:(id)arg1 ;
-(void)updateLabelForAnnotation:(id)arg1 ;
-(void)updateStackViewForAnnotation:(id)arg1 ;
-(id)compactDescription;
-(void)cleanUpAnimatedState;
-(BOOL)wouldCoverAnnotationView:(id)arg1 ;
-(void)setAlpha:(float)arg1 nonFrontOnly:(BOOL)arg2 ;
-(void).cxx_destruct;
@end

