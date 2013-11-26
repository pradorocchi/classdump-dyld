/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>

@class MPMoviePlayerController;

@interface MPMoviePlayerViewController : UIViewController {

	id _internal;
	BOOL _statusBarWasHidden;

}

@property (nonatomic,readonly) MPMoviePlayerController * moviePlayer; 
-(id)initWithContentURL:(id)arg1 ;
-(void)_moviePlayerViewController_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(id)moviePlayer;
-(void)_moviePlayerViewController_playbackDidFinishNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)prefersStatusBarHidden;
-(BOOL)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)canBecomeFirstResponder;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(BOOL)_canReloadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)remoteControlReceivedWithEvent:(id)arg1 ;
-(id)initWithAsset:(id)arg1 ;
-(void).cxx_destruct;
@end

