/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Setup.app/Setup
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Setup/Setup-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface BuddyTitleView : UIView {

	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
-(CGRect)contentBounds;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)titleLabel;
-(void)setTitleLabel:(id)arg1 ;
@end

