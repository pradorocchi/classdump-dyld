/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:04 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol UIModalItemDelegate <NSObject>
@optional
-(void)willPresentModalItem:(id)arg1;
-(void)didPresentModalItem:(id)arg1;
-(BOOL)modalItem:(id)arg1 shouldDismissForButtonAtIndex:(int)arg2;
-(void)modalItem:(id)arg1 willDismissWithButtonIndex:(int)arg2;
-(void)modalItem:(id)arg1 didDismissWithButtonIndex:(int)arg2;
-(BOOL)modalItemShouldEnableFirstOtherButton:(id)arg1;
@end

