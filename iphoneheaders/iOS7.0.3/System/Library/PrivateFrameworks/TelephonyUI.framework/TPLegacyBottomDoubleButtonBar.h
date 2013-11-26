/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:05 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <TelephonyUI/TPLegacyBottomSingleButtonBar.h>

@class TPLegacyButton, UIView;

@interface TPLegacyBottomDoubleButtonBar : TPLegacyBottomSingleButtonBar {

	TPLegacyButton* _button2;
	UIView* _well1;
	UIView* _well2;
	UIView* _wellContainer;

}
+(float)_wellPadding;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(void)setButton2:(id)arg1 andStyle:(BOOL)arg2 ;
-(void)setButton:(id)arg1 andStyle:(BOOL)arg2 ;
-(void)setWellAlpha:(float)arg1 ;
-(void)_layoutButtons;
-(float)_buttonWidth;
-(id)initForIncomingCallWithFrame:(CGRect)arg1 ;
-(id)initForCallFailureWithFrame:(CGRect)arg1 ;
-(id)initForEmergencyCallWithFrame:(CGRect)arg1 ;
-(id)initForVideoChatWithFrame:(CGRect)arg1 ;
-(id)button2;
-(void)setDrawsSeparateWells:(BOOL)arg1 ;
-(void)_updateButtonSettings:(id)arg1 ;
-(void)_layoutWells;
@end

