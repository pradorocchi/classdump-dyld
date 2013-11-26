/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:23 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UIView.h>

@protocol OS_dispatch_source;
@class NSObject, UIImageView, RUCountdownFillView, RUGradientLabel, MPAVItem, UIImage, UIColor;

@interface RUCountdownView : UIView {

	NSObject<OS_dispatch_source>* _animationTimer;
	UIImageView* _baseImageView;
	RUCountdownFillView* _fillView;
	double _maxCurrentTime;
	RUGradientLabel* _timeLabel;
	MPAVItem* _item;

}

@property (nonatomic,retain) UIImage * baseImage; 
@property (assign,nonatomic) float fillShadowBlur; 
@property (nonatomic,retain) UIColor * fillShadowColor; 
@property (nonatomic,retain) UIImage * fillImage; 
@property (nonatomic,retain) MPAVItem * item;                            //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) RUGradientLabel * timeLabel;              //@synthesize timeLabel=_timeLabel - In the implementation block
-(void)setItem:(id)arg1 ;
-(void)_cancelAnimationTimer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)item;
-(void)setFillImage:(id)arg1 ;
-(id)fillImage;
-(float)fillShadowBlur;
-(id)fillShadowColor;
-(void)setFillShadowBlur:(float)arg1 ;
-(void)setFillShadowColor:(id)arg1 ;
-(void)_updateTimeRelatedSubviews;
-(id)baseImage;
-(void)setBaseImage:(id)arg1 ;
-(id)timeLabel;
-(void).cxx_destruct;
@end

