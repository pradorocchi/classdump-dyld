/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <SpringBoardUIServices/_SBUIWidgetViewController_Host_IPC.h>

@class SBWidgetViewControllerHost;

@interface _SBWidgetViewControllerHost_Proxy : _UIRemoteViewController <_SBUIWidgetViewController_Host_IPC> {

	SBWidgetViewControllerHost* _managingHost;

}

@property (assign,nonatomic) SBWidgetViewControllerHost * managingHost;              //@synthesize managingHost=_managingHost - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)setManagingHost:(id)arg1 ;
-(void)_setWidgetIdentifier:(id)arg1 ;
-(void)_setWidgetIdiom:(int)arg1 ;
-(void)_requestServicePreferredViewSizeWithReplyHandler:(/*^block*/ id)arg1 ;
-(void)_hostWillPresent;
-(void)_hostDidPresent;
-(void)_hostWillDismiss;
-(void)_hostDidDismiss;
-(id)managingHost;
-(void)__requestPresentationOfViewController:(id)arg1 presentationStyle:(int)arg2 context:(id)arg3 replyHandler:(/*^block*/ id)arg4 ;
-(void)__requestLaunchOfURL:(id)arg1 ;
-(void)__invalidatePreferredViewSize;
@end

