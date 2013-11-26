/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:53 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIFont, UILabel;

@interface CAMModeDialItem : UIView {

	BOOL _selected;
	NSString* _title;
	UIFont* _font;
	UILabel* __titleLabel;
	UILabel* __selectedTitleLabel;

}

@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIFont * font;                                //@synthesize font=_font - In the implementation block
@property (nonatomic,readonly) UILabel * _titleLabel;                      //@synthesize _titleLabel=__titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * _selectedTitleLabel;              //@synthesize _selectedTitleLabel=__selectedTitleLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)title;
-(void)setFont:(id)arg1 ;
-(id)font;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(id)_titleLabel;
-(void)_commonCAMModeDialItemInitialization;
-(id)_selectedTitleLabel;
@end

