/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:39 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UIButton.h>

@class UIImage;

@interface SiriUIContentButton : UIButton {

	UIImage* _maskImage;

}

@property (setter=_setMaskImage:,getter=_maskImage,nonatomic,retain) UIImage * maskImage;              //@synthesize maskImage=_maskImage - In the implementation block
+(id)buttonWithLightWeightFont;
+(id)buttonWithMediumWeightFont;
+(id)buttonWithImageMask:(id)arg1 ;
+(id)button;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)_maskImage;
-(void)_setMaskImage:(id)arg1 ;
-(void).cxx_destruct;
@end

