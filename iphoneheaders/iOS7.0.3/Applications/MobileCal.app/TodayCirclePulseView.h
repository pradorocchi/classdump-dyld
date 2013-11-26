/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UIBasicAnimationFactory.h>

@class NSDictionary, UIView, TodayCirclePulseBackground, UILabel, NSString, UIFont;

@interface TodayCirclePulseView : UIView <_UIBasicAnimationFactory> {

	NSDictionary* _attributes;
	UIView* _backgroundContainer;
	TodayCirclePulseBackground* _background;
	UILabel* _label;
	BOOL _circleShouldFillFrame;
	BOOL _dontApplyCenteringOffset;
	float _circleDiameter;
	float _textYOffset;
	CGPoint _textOffsetFromCircle;

}

@property (nonatomic,copy) NSString * string; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) NSDictionary * attributes; 
@property (assign,nonatomic) float circleDiameter;                       //@synthesize circleDiameter=_circleDiameter - In the implementation block
@property (assign,nonatomic) float textYOffset;                          //@synthesize textYOffset=_textYOffset - In the implementation block
@property (assign,nonatomic) CGPoint textOffsetFromCircle;               //@synthesize textOffsetFromCircle=_textOffsetFromCircle - In the implementation block
@property (assign,nonatomic) BOOL circleShouldFillFrame;                 //@synthesize circleShouldFillFrame=_circleShouldFillFrame - In the implementation block
@property (assign,nonatomic) BOOL dontApplyCenteringOffset;              //@synthesize dontApplyCenteringOffset=_dontApplyCenteringOffset - In the implementation block
-(void)setCircleDiameter:(float)arg1 ;
-(void)setTextYOffset:(float)arg1 ;
-(void)setTextOffsetFromCircle:(CGPoint)arg1 ;
-(void)pulse:(/*^block*/ id)arg1 ;
-(float)circleDiameter;
-(void)setCircleShouldFillFrame:(BOOL)arg1 ;
-(void)setDontApplyCenteringOffset:(BOOL)arg1 ;
-(void)_updateLabelAttributedString;
-(BOOL)dontApplyCenteringOffset;
-(BOOL)circleShouldFillFrame;
-(CGPoint)textOffsetFromCircle;
-(float)textYOffset;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)string;
-(void)setFont:(id)arg1 ;
-(id)font;
-(void)setString:(id)arg1 ;
-(id)attributes;
-(void)setAttributes:(id)arg1 ;
-(void)_layoutSubviews;
-(void).cxx_destruct;
@end

