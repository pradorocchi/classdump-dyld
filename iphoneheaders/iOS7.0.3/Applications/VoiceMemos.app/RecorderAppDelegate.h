/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/VoiceMemos.app/VoiceMemos
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, RCMainViewController, UINavigationController, NSTimer;

@interface RecorderAppDelegate : NSObject <UIAlertViewDelegate, UIApplicationDelegate> {

	UIWindow* _window;
	RCMainViewController* _mainViewController;
	UINavigationController* _navigationController;
	NSTimer* _timeUpdateTimer;
	unsigned _backgroundTaskIdentifier;
	int _lockscreenWillAppearToken;
	int _lockscreenDidDisappearToken;
	BOOL _canUseDoubleHeightStatusBar;
	BOOL _recordingActiveOrPaused;
	BOOL _isActive;
	BOOL _hasBecomeActiveOnce;

}

@property (nonatomic,retain) UIWindow * window; 
-(void)_recordingDidBegin:(id)arg1 ;
-(void)_recordingDidPause:(id)arg1 ;
-(void)_recordingDidResume:(id)arg1 ;
-(void)_recordingDidEnd:(id)arg1 ;
-(void)_recordingDidFinishWritingToDisk:(id)arg1 ;
-(void)setCanUseDoubleHeightStatusBar:(BOOL)arg1 ;
-(void)updateDoubleHeightStatusBarForForegroundState;
-(double)_lastSuspendTime;
-(void)resetNavigationStateAnimated:(BOOL)arg1 ;
-(void)_updateLastSuspendTime;
-(void)_showDoubleHeightStatusBarIfNecessary;
-(void)_hideDoubleHeightStatusBar;
-(void)applicationDidResume:(id)arg1 ;
-(void)disableDoubleHeightStatusBar;
-(void)enableDoubleHeightStatusBar;
-(void)dealloc;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)_applicationDidFinishLaunching;
-(void)_updateTime:(id)arg1 ;
-(void).cxx_destruct;
@end

