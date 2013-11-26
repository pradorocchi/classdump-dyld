/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:16 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/LegacyGameKit.framework/LegacyGameKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <LegacyGameKit/LegacyGameKit-Structs.h>
#import <UIKit/UIAlertView.h>

@class UIView;

@interface GKAlertView : UIAlertView {

	UIView* _clipView;
	UIView* _contentView;

}
+(CGSize)preferredContentViewSize;
+(void)initialize;
-(id)initAlertView;
-(void)_changePanelOutAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_changePanelInAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_replaceContentView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setContentView:(id)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(id)contentView;
-(BOOL)_canDrawContent;
-(void)layoutAnimated:(BOOL)arg1 ;
-(void)layoutAnimated:(BOOL)arg1 withDuration:(double)arg2 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 ;
@end

