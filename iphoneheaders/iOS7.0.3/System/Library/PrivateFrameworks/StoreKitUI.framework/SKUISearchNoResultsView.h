/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:53 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIButton;

@interface SKUISearchNoResultsView : UIView {

	UIImageView* _imageView;
	UILabel* _label;
	UIButton* _button;

}

@property (nonatomic,readonly) UIButton * button;              //@synthesize button=_button - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setMessageWithSearchTerm:(id)arg1 spellCorrectedTerm:(id)arg2 clientContext:(id)arg3 ;
-(void).cxx_destruct;
-(id)button;
@end

