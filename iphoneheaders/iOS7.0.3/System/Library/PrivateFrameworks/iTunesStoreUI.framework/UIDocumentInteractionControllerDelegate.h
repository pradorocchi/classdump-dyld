/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol UIDocumentInteractionControllerDelegate <NSObject>
@optional
-(void)documentInteractionControllerDidEndPreview:(id)arg1;
-(void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1;
-(void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1;
-(id)documentInteractionControllerViewControllerForPreview:(id)arg1;
-(CGRect*)documentInteractionControllerRectForPreview:(id)arg1;
-(id)documentInteractionControllerViewForPreview:(id)arg1;
-(void)documentInteractionControllerWillBeginPreview:(id)arg1;
-(void)documentInteractionControllerWillPresentOptionsMenu:(id)arg1;
-(void)documentInteractionControllerWillPresentOpenInMenu:(id)arg1;
-(void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2;
-(void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;
-(BOOL)documentInteractionController:(id)arg1 canPerformAction:(SEL)arg2;
-(BOOL)documentInteractionController:(id)arg1 performAction:(SEL)arg2;
@end

