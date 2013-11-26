/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/_UISettings.h>

@class SBAppParallaxSettings, SBFolderSettings, SBRootAnimationSettings, SBControlCenterSettings, SBAppSliderSettings, SBLockScreenSettings, SBCarDisplaySettings, SBLockScreenTestPluginSettings, SBIconColorSettings, SBFadeAnimationSettings, SBAlertItemsSettings, SBNotificationCenterSettings, SBLegibilitySettings, SBFWallpaperSettings, SBFAnimationFactorySettings, NSString;

@interface SBRootSettings : _UISettings {

	BOOL _preventLockover;
	SBAppParallaxSettings* _parallaxSettings;
	SBFolderSettings* _folderSettings;
	SBRootAnimationSettings* _rootAnimationSettings;
	SBControlCenterSettings* _controlCenterSettings;
	SBAppSliderSettings* _appSliderSettings;
	SBLockScreenSettings* _lockScreenSettings;
	SBCarDisplaySettings* _carDisplaySettings;
	SBLockScreenTestPluginSettings* _lockScreenTestPluginSettings;
	SBIconColorSettings* _iconColorSettings;
	SBFadeAnimationSettings* _fadeAnimationSettings;
	SBAlertItemsSettings* _alertItemsSettings;
	SBNotificationCenterSettings* _notificationCenterSettings;
	SBLegibilitySettings* _legibilitySettings;
	SBFWallpaperSettings* _wallpaperSettings;
	SBFAnimationFactorySettings* _animationSettings;
	NSString* _testRecipeClassName;

}

@property (retain) SBAppParallaxSettings * parallaxSettings;                                   //@synthesize parallaxSettings=_parallaxSettings - In the implementation block
@property (retain) SBFolderSettings * folderSettings;                                          //@synthesize folderSettings=_folderSettings - In the implementation block
@property (retain) SBRootAnimationSettings * rootAnimationSettings;                            //@synthesize rootAnimationSettings=_rootAnimationSettings - In the implementation block
@property (retain) SBControlCenterSettings * controlCenterSettings;                            //@synthesize controlCenterSettings=_controlCenterSettings - In the implementation block
@property (retain) SBAppSliderSettings * appSliderSettings;                                    //@synthesize appSliderSettings=_appSliderSettings - In the implementation block
@property (retain) SBLockScreenSettings * lockScreenSettings;                                  //@synthesize lockScreenSettings=_lockScreenSettings - In the implementation block
@property (retain) SBCarDisplaySettings * carDisplaySettings;                                  //@synthesize carDisplaySettings=_carDisplaySettings - In the implementation block
@property (retain) SBLockScreenTestPluginSettings * lockScreenTestPluginSettings;              //@synthesize lockScreenTestPluginSettings=_lockScreenTestPluginSettings - In the implementation block
@property (retain) SBIconColorSettings * iconColorSettings;                                    //@synthesize iconColorSettings=_iconColorSettings - In the implementation block
@property (retain) SBFadeAnimationSettings * fadeAnimationSettings;                            //@synthesize fadeAnimationSettings=_fadeAnimationSettings - In the implementation block
@property (retain) SBAlertItemsSettings * alertItemsSettings;                                  //@synthesize alertItemsSettings=_alertItemsSettings - In the implementation block
@property (retain) SBNotificationCenterSettings * notificationCenterSettings;                  //@synthesize notificationCenterSettings=_notificationCenterSettings - In the implementation block
@property (retain) SBLegibilitySettings * legibilitySettings;                                  //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (retain) SBFWallpaperSettings * wallpaperSettings;                                   //@synthesize wallpaperSettings=_wallpaperSettings - In the implementation block
@property (retain) SBFAnimationFactorySettings * animationSettings;                            //@synthesize animationSettings=_animationSettings - In the implementation block
@property (retain) NSString * testRecipeClassName;                                             //@synthesize testRecipeClassName=_testRecipeClassName - In the implementation block
@property (assign) BOOL preventLockover;                                                       //@synthesize preventLockover=_preventLockover - In the implementation block
+(id)settingsControllerModule;
-(id)parallaxSettings;
-(id)alertItemsSettings;
-(id)folderSettings;
-(id)iconColorSettings;
-(id)appSliderSettings;
-(id)lockScreenSettings;
-(id)rootAnimationSettings;
-(id)wallpaperSettings;
-(id)fadeAnimationSettings;
-(id)lockScreenTestPluginSettings;
-(id)carDisplaySettings;
-(id)animationSettings;
-(id)testRecipeClassName;
-(BOOL)preventLockover;
-(BOOL)_hasPreviousSettings;
-(void)setTestRecipeClassName:(id)arg1 ;
-(void)setParallaxSettings:(id)arg1 ;
-(void)setFolderSettings:(id)arg1 ;
-(void)setRootAnimationSettings:(id)arg1 ;
-(void)setControlCenterSettings:(id)arg1 ;
-(void)setAppSliderSettings:(id)arg1 ;
-(void)setLockScreenSettings:(id)arg1 ;
-(void)setCarDisplaySettings:(id)arg1 ;
-(void)setLockScreenTestPluginSettings:(id)arg1 ;
-(void)setIconColorSettings:(id)arg1 ;
-(void)setFadeAnimationSettings:(id)arg1 ;
-(void)setAlertItemsSettings:(id)arg1 ;
-(id)notificationCenterSettings;
-(void)setNotificationCenterSettings:(id)arg1 ;
-(void)setWallpaperSettings:(id)arg1 ;
-(void)setAnimationSettings:(id)arg1 ;
-(void)setPreventLockover:(BOOL)arg1 ;
-(void)setDefaultValues;
-(id)legibilitySettings;
-(void)setLegibilitySettings:(id)arg1 ;
-(id)controlCenterSettings;
@end

