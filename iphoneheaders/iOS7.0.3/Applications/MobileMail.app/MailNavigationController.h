/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UINavigationController.h>

@class NSArray, UIView, UIWindow;

@interface MailNavigationController : UINavigationController {

	NSArray* _previousViewControllers;
	BOOL _hasAppeared;
	BOOL _poppingFromLeft;
	BOOL _transferNavigationControllerShown;
	UIView* _frozenContentSnapshotView;
	UIWindow* _snapshotWindow;

}
-(id)mf_statusBarSubtitleString;
-(void)removeViewController:(id)arg1 ;
-(BOOL)isPopping;
-(unsigned)mf_unreadCountForDisplay;
-(void)becomePreparedForTransferOfMessages:(id)arg1 options:(int)arg2 animated:(BOOL)arg3 ;
-(void)resignPreparedForTransferOfMessages:(BOOL)arg1 ;
-(void)freezeContent;
-(void)unfreezeContent;
-(BOOL)canShowTransferNavigationController;
-(void)showTransferNavigationController:(id)arg1 fromViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)hideTransferNavigationControllerFromViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)pushViewControllersFromLeft:(id)arg1 animated:(BOOL)arg2 ;
-(id)popViewControllersPushedFromLeftAnimated:(BOOL)arg1 ;
-(void)_didPopFromLeft;
-(void)dealloc;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(void)removeChildViewController:(id)arg1 notifyDidMove:(BOOL)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)removeChildViewController:(id)arg1 ;
-(id)popToViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
@end

