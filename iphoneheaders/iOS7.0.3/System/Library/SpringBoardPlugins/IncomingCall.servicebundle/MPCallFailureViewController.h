/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/IncomingCall.servicebundle/IncomingCall
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoardUI/SBUISlidingFullscreenAlertController.h>
#import <Conference/TPSuperBottomBarDelegateProtocol.h>

@class TUCall, TPWallpaperView;

@interface MPCallFailureViewController : SBUISlidingFullscreenAlertController <TPSuperBottomBarDelegateProtocol> {

	TUCall* _call;
	TPWallpaperView* _backgroundView;

}

@property (nonatomic,readonly) TUCall * call;                               //@synthesize call=_call - In the implementation block
@property (nonatomic,retain) TPWallpaperView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
-(void)callBack:(id)arg1 ;
-(id)call;
-(void)dealloc;
-(void)setBackgroundView:(id)arg1 ;
-(id)backgroundView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewDidLoad;
-(void)bottomBarActionPerformed:(int)arg1 fromBar:(id)arg2 ;
-(void)cancel:(id)arg1 ;
-(id)newTopBar;
-(id)newBottomBar;
-(BOOL)isShowingWallpaper;
-(id)initWithCall:(id)arg1 ;
@end

