/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIView.h>

@class UIView;

@interface SUSnapshotView : UIView {

	UIView* _imageView;

}
-(void)dealloc;
-(void)layoutSubviews;
-(void)snapshotView:(id)arg1 usingIOSurface:(BOOL)arg2 ;
-(void)_takeIOSurfaceSnapshotOfView:(id)arg1 ;
-(void)_takeCGSnapshotOfView:(id)arg1 ;
@end

