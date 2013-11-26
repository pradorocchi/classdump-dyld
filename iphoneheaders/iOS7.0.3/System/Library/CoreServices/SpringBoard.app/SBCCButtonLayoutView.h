/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBControlCenterSectionView.h>

@class NSMutableArray;

@interface SBCCButtonLayoutView : SBControlCenterSectionView {

	NSMutableArray* _buttons;
	float _interButtonPadding;
	UIEdgeInsets _contentEdgeInsets;

}

@property (assign,nonatomic) float interButtonPadding;                    //@synthesize interButtonPadding=_interButtonPadding - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;              //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
-(void)removeButton:(id)arg1 ;
-(float)interButtonPadding;
-(void)setInterButtonPadding:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
-(id)buttons;
-(void)addButton:(id)arg1 ;
@end

