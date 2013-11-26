/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:04 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <TelephonyUI/TPBottomBar.h>

@class TPButton;

@interface TPBottomSingleButtonBar : TPBottomBar {

	id _delegate;
	TPButton* _button;

}
+(id)_backgroundImage;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(float)buttonWidth;
-(id)initForVoiceControlWithFrame:(CGRect)arg1 ;
-(void)setButton:(id)arg1 andStyle:(BOOL)arg2 ;
-(id)initForEndCallWithFrame:(CGRect)arg1 ;
-(id)initForIncomingCallWaitingWithFrame:(CGRect)arg1 ;
-(id)initForEndVideoWithFrame:(CGRect)arg1 ;
-(id)initForTTYWithFrame:(CGRect)arg1 ;
-(void)setWellAlpha:(float)arg1 ;
-(id)button;
@end

