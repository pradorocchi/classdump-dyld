/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:17 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol _UIRemoteViewController_ViewControllerOperatorInterface
@required
-(void)__presentActionSheetFromYCoordinate:(float)arg1 withTitle:(id)arg2 buttonTitles:(id)arg3 cancelButtonIndex:(int)arg4 destructiveButtonIndex:(int)arg5 style:(int)arg6;
-(void)__dismissActionSheetWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
-(void)__viewServiceDidPromoteFirstResponder;
-(void)__viewServiceDidRegisterScrollToTopView;
-(void)__viewServiceDidUnregisterScrollToTopView;
-(void)__setSupportedInterfaceOrientations:(id)arg1;
-(void)__viewServiceDidUpdateTintColor:(id)arg1 duration:(double)arg2;
-(void)__showServiceForText:(id)arg1 type:(int)arg2 fromRectValue:(id)arg3 replyHandler:(/*^block*/ id)arg4;
-(void)__dismissTextServiceSessionAnimated:(BOOL)arg1;
-(void)__setViewServiceIsDisplayingPopover:(BOOL)arg1;
-(void)__viewServicePopoverDidChangeContentSize:(CGSize)arg1 animated:(BOOL)arg2 fenceSendRight:(id)arg3 withReplyHandler:(/*^block*/ id)arg4;
-(void)__viewServicePopoverDidSetUseToolbarShine:(BOOL)arg1;
-(void)__viewServiceDidUpdatePreferredStatusBarStyle:(int)arg1 hidden:(BOOL)arg2;
@end

