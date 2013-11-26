/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:16 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKBubbleWithStackedContent.h>

@class NSString, GKLabel, GKTextStyle, NSAttributedString;

@interface GKValueWithCaptionBubbleControl : GKBubbleWithStackedContent {

	NSString* _valueText;
	BOOL _smallText;
	NSString* _captionText;
	GKLabel* _captionLabel;
	GKLabel* _valueLabel;
	GKTextStyle* _overrideValueStyle;
	GKTextStyle* _overrideCaptionStyle;
	float _referenceZPosition;
	GKTextStyle* _smallValueStyle;
	GKTextStyle* _normalValueStyle;
	id _blockToken;

}

@property (assign,nonatomic) BOOL smallText;                                          //@synthesize smallText=_smallText - In the implementation block
@property (nonatomic,retain) NSString * captionText;                                  //@synthesize captionText=_captionText - In the implementation block
@property (nonatomic,retain) NSString * valueText;                                    //@synthesize valueText=_valueText - In the implementation block
@property (nonatomic,retain) GKLabel * captionLabel;                                  //@synthesize captionLabel=_captionLabel - In the implementation block
@property (nonatomic,retain) GKLabel * valueLabel;                                    //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedCaptionText; 
@property (nonatomic,retain) NSAttributedString * attributedValueText; 
@property (nonatomic,retain) GKTextStyle * overrideValueStyle;                        //@synthesize overrideValueStyle=_overrideValueStyle - In the implementation block
@property (nonatomic,retain) GKTextStyle * overrideCaptionStyle;                      //@synthesize overrideCaptionStyle=_overrideCaptionStyle - In the implementation block
@property (assign,nonatomic) float referenceZPosition;                                //@synthesize referenceZPosition=_referenceZPosition - In the implementation block
@property (nonatomic,retain) GKTextStyle * smallValueStyle;                           //@synthesize smallValueStyle=_smallValueStyle - In the implementation block
@property (nonatomic,retain) GKTextStyle * normalValueStyle;                          //@synthesize normalValueStyle=_normalValueStyle - In the implementation block
@property (nonatomic,retain) id blockToken;                                           //@synthesize blockToken=_blockToken - In the implementation block
-(id)valueLabel;
-(void)setValueLabel:(id)arg1 ;
-(id)captionText;
-(void)setCaptionText:(id)arg1 ;
-(id)captionLabel;
-(void)setAttributedCaptionText:(id)arg1 ;
-(void)updateLabelRasterizationScaleForLabels;
-(void)setBlockToken:(id)arg1 ;
-(void)setNormalValueStyle:(id)arg1 ;
-(void)setSmallValueStyle:(id)arg1 ;
-(void)updateTextFieldsFor3DScaling;
-(void)_updateCaptionTextLabel;
-(id)_scaledTextStyle:(id)arg1 ;
-(id)captionTextStyle;
-(void)_updateValueTextLabel;
-(id)valueTextStyle;
-(void)setAttributedValueText:(id)arg1 ;
-(id)attributedCaptionText;
-(id)attributedValueText;
-(void)setReferenceZPosition:(float)arg1 ;
-(void)setSmallText:(BOOL)arg1 ;
-(void)labelDidApplyStyle:(id)arg1 ;
-(void)blinkOutThenInWithValueText:(id)arg1 captionText:(id)arg2 afterDelay:(double)arg3 ;
-(BOOL)smallText;
-(void)setCaptionLabel:(id)arg1 ;
-(id)overrideValueStyle;
-(void)setOverrideValueStyle:(id)arg1 ;
-(id)overrideCaptionStyle;
-(void)setOverrideCaptionStyle:(id)arg1 ;
-(float)referenceZPosition;
-(id)smallValueStyle;
-(id)normalValueStyle;
-(id)blockToken;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setAlpha:(float)arg1 ;
-(id)description;
-(void)didMoveToSuperview;
-(id)valueText;
-(void)setValueText:(id)arg1 ;
@end

