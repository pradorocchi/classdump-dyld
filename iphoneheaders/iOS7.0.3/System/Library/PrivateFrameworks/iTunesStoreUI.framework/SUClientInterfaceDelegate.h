/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SUClientInterfaceDelegate <NSObject>
@optional
-(void)clientInterface:(id)arg1 exitStoreWithReason:(int)arg2;
-(void)clientInterface:(id)arg1 presentDialog:(id)arg2;
-(void)clientInterface:(id)arg1 hidePreviewOverlayAnimated:(BOOL)arg2;
-(void)clientInterface:(id)arg1 showPreviewOverlayAnimated:(BOOL)arg2;
-(void)clientInterface:(id)arg1 setStatusBarHidden:(BOOL)arg2 withAnimation:(int)arg3;
-(void)clientInterface:(id)arg1 setStatusBarStyle:(int)arg2 animated:(BOOL)arg3;
-(void)returnToLibraryForClientInterface:(id)arg1;
-(id)previewOverlayForClientInterface:(id)arg1;
-(id)scriptInterfaceForClientInterface:(id)arg1;
-(id)tabBarControllerForClientInterface:(id)arg1;
@end

