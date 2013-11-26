/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:39 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <SiriUI/SiriUIReusableView.h>

@protocol SiriUIReusableView;
@class SiriUIKeyline, SiriUIContentButton, UIView, UILabel, UICollectionReusableView, SiriUISnippetViewController;

@interface SiriUISnippetControllerCell : UICollectionViewCell <SiriUIReusableView> {

	SiriUIKeyline* _bottomKeyline;
	SiriUIContentButton* _snippetPunchOutButton;
	UIView* _snippetBackgroundView;
	UILabel* _cancelledLabel;
	UICollectionReusableView<SiriUIReusableView>* _headerView;
	UICollectionReusableView<SiriUIReusableView>* _footerView;
	UICollectionReusableView<SiriUIReusableView>* _transparentHeaderView;
	UICollectionReusableView<SiriUIReusableView>* _transparentFooterView;
	SiriUISnippetViewController* _snippetViewController;
	UIEdgeInsets _snippetEdgeInsets;

}

@property (assign,setter=_setSnippetEdgeInsets:,getter=_snippetEdgeInsets,nonatomic) UIEdgeInsets snippetEdgeInsets;              //@synthesize snippetEdgeInsets=_snippetEdgeInsets - In the implementation block
@property (assign,nonatomic,__weak) SiriUISnippetViewController * snippetViewController;                                          //@synthesize snippetViewController=_snippetViewController - In the implementation block
+(id)reuseIdentifier;
+(float)defaultHeight;
+(id)elementKind;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id)snippetViewController;
-(void)setSnippetViewController:(id)arg1 ;
-(void)_snippetPunchOutButtonTapped:(id)arg1 ;
-(void)_configureSubviewsForCurrentInset;
-(float)_heightForFooterView;
-(float)_heightForTransparentHeaderView;
-(float)_heightForTransparentFooterView;
-(float)_heightForHeaderView;
-(UIEdgeInsets)_snippetEdgeInsets;
-(void)_setFooterView:(id)arg1 ;
-(void)_setTransparentHeaderView:(id)arg1 ;
-(void)_setTransparentFooterView:(id)arg1 ;
-(void)_setSnippetEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)animateSnippetCancellationWithCompletion:(/*^block*/ id)arg1 ;
-(void)animateSnippetConfirmationWithCompletion:(/*^block*/ id)arg1 ;
-(void).cxx_destruct;
-(void)_setHeaderView:(id)arg1 ;
@end

