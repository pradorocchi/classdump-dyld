/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:39 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIReusableHeaderView.h>

@class NSAttributedString, UILabel, NSString;

@interface SiriUIReusableSubtitledHeaderView : SiriUIReusableHeaderView {

	NSAttributedString* _attributedSubtitleText;
	UILabel* _subtitleLabel;

}

@property (nonatomic,copy) NSString * subtitleText; 
@property (nonatomic,copy) NSAttributedString * attributedSubtitleText;              //@synthesize attributedSubtitleText=_attributedSubtitleText - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
+(float)defaultHeight;
-(float)desiredHeightForWidth:(float)arg1 ;
-(void)setSubtitleLabel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)subtitleLabel;
-(void)setAttributedSubtitleText:(id)arg1 ;
-(id)attributedSubtitleText;
-(void)setSubtitleText:(id)arg1 ;
-(id)subtitleText;
-(void)_configureSubTitleLabelForBounds:(CGRect)arg1 ;
-(void).cxx_destruct;
@end

