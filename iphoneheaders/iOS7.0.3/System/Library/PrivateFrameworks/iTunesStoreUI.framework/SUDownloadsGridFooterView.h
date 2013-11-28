/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class SULinkControl, NSMutableArray, NSArray;

@interface SUDownloadsGridFooterView : UIView {

	SULinkControl* _linkControl;
	NSMutableArray* _nativeButtons;
	NSArray* _scriptButtons;

}

@property (nonatomic,retain) NSArray * scriptButtons;              //@synthesize scriptButtons=_scriptButtons - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(id)scriptButtons;
-(void)setScriptButtons:(id)arg1 ;
-(void)_linkControlAction:(id)arg1 ;
-(void)_reloadNativeButtons;
-(float)_maximumButtonHeight;
-(id)_newNativeButton;
@end
