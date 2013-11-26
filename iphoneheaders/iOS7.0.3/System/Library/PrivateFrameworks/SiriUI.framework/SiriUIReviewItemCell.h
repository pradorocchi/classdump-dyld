/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:40 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class UILabel, UIView;

@interface SiriUIReviewItemCell : SiriUIContentCollectionViewCell {

	UILabel* _commentLabel;
	UILabel* _authorLabel;
	UIView* _ratingView;
	UIOffset _ratingOffset;
	int _characterLimit;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) int characterLimit;                      //@synthesize characterLimit=_characterLimit - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
+(int)defaultCharacterLimit;
+(CGSize)sizeThatFits:(CGSize)arg1 withReview:(id)arg2 characterLimit:(int)arg3 ;
+(id)_commentLabelFont;
+(id)_authorFontAttribute;
+(id)_displayTextForComment:(id)arg1 characterLimit:(int)arg2 ;
+(UIEdgeInsets)_defaultEdgeInsets;
+(id)_authorDateFontAttribute;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)configureWithReview:(id)arg1 ratingView:(id)arg2 offset:(UIOffset)arg3 ;
-(void)_setComment:(id)arg1 ;
-(void)_setRatingView:(id)arg1 ;
-(void)_setAuthor:(id)arg1 andDate:(id)arg2 timeZoneId:(id)arg3 hasRatingView:(BOOL)arg4 ;
-(id)_relativeStringFromDate:(id)arg1 ;
-(int)characterLimit;
-(void)setCharacterLimit:(int)arg1 ;
-(void).cxx_destruct;
@end

