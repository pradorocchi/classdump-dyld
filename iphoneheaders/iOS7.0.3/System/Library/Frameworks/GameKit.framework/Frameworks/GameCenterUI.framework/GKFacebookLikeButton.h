/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UIView.h>

@class GKStoreItemInternal, GKButton, GKLabel, UIImageView, UIActivityIndicatorView, UIView, GKOpenGraphNode, NSArray;

@interface GKFacebookLikeButton : UIView {

	GKStoreItemInternal* _storeItem;
	GKButton* _button;
	GKLabel* _labelView;
	UIImageView* _logoView;
	UIActivityIndicatorView* _spinner;
	UIView* _containerView;
	GKOpenGraphNode* _openGraphNode;
	NSArray* _replaceableConstraints;
	UIView* _containerSpacerLeft;
	UIView* _containerSpacerRight;

}

@property (nonatomic,retain) GKStoreItemInternal * storeItem;                //@synthesize storeItem=_storeItem - In the implementation block
@property (nonatomic,retain) GKButton * button;                              //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) GKLabel * labelView;                            //@synthesize labelView=_labelView - In the implementation block
@property (nonatomic,retain) UIImageView * logoView;                         //@synthesize logoView=_logoView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) UIView * containerView;                         //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) GKOpenGraphNode * openGraphNode;                //@synthesize openGraphNode=_openGraphNode - In the implementation block
@property (nonatomic,retain) NSArray * replaceableConstraints;               //@synthesize replaceableConstraints=_replaceableConstraints - In the implementation block
@property (nonatomic,retain) UIView * containerSpacerLeft;                   //@synthesize containerSpacerLeft=_containerSpacerLeft - In the implementation block
@property (nonatomic,retain) UIView * containerSpacerRight;                  //@synthesize containerSpacerRight=_containerSpacerRight - In the implementation block
-(id)storeItem;
-(id)replaceableConstraints;
-(void)setReplaceableConstraints:(id)arg1 ;
-(void)applyConstraints;
-(void)setStoreItem:(id)arg1 ;
-(void)createButton;
-(void)createLogoView;
-(void)createLabelView;
-(void)createSpinner;
-(void)updateContent;
-(void)observeEnterForegroundNotification:(id)arg1 ;
-(void)configureButtonWithTitle:(id)arg1 state:(unsigned)arg2 imageName:(id)arg3 ;
-(id)openGraphNode;
-(void)setOpenGraphNode:(id)arg1 ;
-(id)logoView;
-(void)setLogoView:(id)arg1 ;
-(id)containerSpacerLeft;
-(void)setContainerSpacerLeft:(id)arg1 ;
-(id)containerSpacerRight;
-(void)setContainerSpacerRight:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)containerView;
-(BOOL)isEnabled;
-(id)viewForBaselineLayout;
-(void)buttonPressed:(id)arg1 ;
-(void)setContainerView:(id)arg1 ;
-(id)spinner;
-(id)labelView;
-(void)setLabelView:(id)arg1 ;
-(void)setButton:(id)arg1 ;
-(void)setSpinner:(id)arg1 ;
-(id)button;
@end

