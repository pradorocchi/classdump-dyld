/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface SKUISeparatorView : UIView {

	UIColor* _color1;
	UIColor* _color2;
	int _separatorStyle;

}

@property (nonatomic,copy) UIColor * color1;                  //@synthesize color1=_color1 - In the implementation block
@property (nonatomic,copy) UIColor * color2;                  //@synthesize color2=_color2 - In the implementation block
@property (assign,nonatomic) int separatorStyle;              //@synthesize separatorStyle=_separatorStyle - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)setSeparatorStyle:(int)arg1 ;
-(int)separatorStyle;
-(void)setColor1:(id)arg1 ;
-(void)setColor2:(id)arg1 ;
-(id)color1;
-(id)color2;
-(void).cxx_destruct;
@end

