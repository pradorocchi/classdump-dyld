/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/DemoApp.app/DemoApp
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DemoApp/DemoApp-Structs.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, UIView, UIMoviePlayerController, UIImageView;

@interface DemoApplication : UIApplication <UIApplicationDelegate> {

	UIWindow* _window;
	UIView* _backgroundView;
	UIMoviePlayerController* _moviePlayer;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIWindow * window; 
-(void)playMovie;
-(void)_restartPlaybackAfterDelay;
-(void)_serverDeathNotification:(id)arg1 ;
-(void)moviePlayerPlaybackDidEnd:(id)arg1 ;
-(void)_playbackStateChangedNotification:(id)arg1 ;
-(id)init;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
@end

