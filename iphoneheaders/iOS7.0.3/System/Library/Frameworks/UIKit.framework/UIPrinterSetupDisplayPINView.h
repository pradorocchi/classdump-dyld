/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIButton;

@interface UIPrinterSetupDisplayPINView : UIView {

	UILabel* _titleLabel;
	UIButton* _nextButton;

}

@property (nonatomic,retain) UILabel * titleLabel;               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIButton * nextButton;              //@synthesize nextButton=_nextButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)titleLabel;
-(void)setTitleLabel:(id)arg1 ;
-(void)setNextButton:(id)arg1 ;
-(void)setMessage:(id)arg1 showButton:(BOOL)arg2 ;
-(id)nextButton;
@end

