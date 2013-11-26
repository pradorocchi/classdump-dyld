/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/iPodOut.app/iPodOut
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iPodOut/iPodOut-Structs.h>
#import <UIKit/UIApplicationDelegate.h>
#import <CoreFoundation/NSStreamDelegate.h>

@class UIWindow, EAAccessory, EASession, UIView, UINavigationController, NSDateFormatter, NSMutableData, UISlider;

@interface iPodOutAppDelegate : NSObject <UIApplicationDelegate, NSStreamDelegate> {

	BOOL shouldResumePlayback;
	BOOL voiceCallUIEnabled;
	BOOL messagingUIEnabled;
	BOOL voicemailUIEnabled;
	BOOL pushNotificationUIEnabled;
	BOOL alarmUIEnabled;
	BOOL videoTestEnabled;
	BOOL displayUsesBobDeinterlacing;
	BOOL showArtistAndAlbumNumbers;
	BOOL useMainScreen;
	BOOL allAlertsEnabled;
	EAAccessory* iPodOutAccessory;
	EASession* iPodOutAccessorySession;
	UIView* tvView;
	UIWindow* tvWindow;
	UINavigationController* navigationController;
	NSDateFormatter* timeFormatter;
	unsigned taskIdentifier;
	int uiLevel;
	unsigned loggingMask;
	UIWindow* window;
	NSMutableData* iapdInputBuffer;
	NSMutableData* iapdOutputBuffer;
	UIView* _onScreenUI;
	UISlider* _delaySlider;
	UISlider* _minimumFontSizeSlider;
	int quickSpinAccumulator;
	int rotationAccumulator;
	unsigned keyDownMask;
	unsigned keyHeldMask;

}

@property (nonatomic,retain) UIView * tvView; 
@property (nonatomic,retain) UINavigationController * navigationController; 
@property (assign,nonatomic) unsigned loggingMask; 
@property (assign,nonatomic) BOOL displayUsesBobDeinterlacing; 
@property (assign,nonatomic) BOOL showArtistAndAlbumNumbers; 
@property (assign,nonatomic) int uiLevel; 
@property (nonatomic,retain) UIWindow * window; 
@property (assign,nonatomic) BOOL useMainScreen; 
@property (assign,nonatomic) BOOL videoTestEnabled; 
@property (nonatomic,retain) UIView * _onScreenUI;                                       //@synthesize onScreenUI=_onScreenUI - In the implementation block
@property (nonatomic,retain) UISlider * _delaySlider;                                    //@synthesize delaySlider=_delaySlider - In the implementation block
@property (nonatomic,retain) UISlider * _minimumFontSizeSlider;                          //@synthesize minimumFontSizeSlider=_minimumFontSizeSlider - In the implementation block
@property (assign,nonatomic) int quickSpinAccumulator; 
@property (assign,nonatomic) int rotationAccumulator; 
@property (assign,nonatomic) unsigned keyDownMask; 
@property (assign,nonatomic) unsigned keyHeldMask; 
@property (nonatomic,retain) EAAccessory * iPodOutAccessory; 
@property (nonatomic,retain) EASession * iPodOutAccessorySession; 
@property (nonatomic,retain) UIWindow * tvWindow; 
@property (nonatomic,retain) NSDateFormatter * timeFormatter; 
@property (assign,nonatomic) unsigned taskIdentifier; 
@property (assign,nonatomic) BOOL shouldResumePlayback; 
@property (assign,nonatomic) BOOL voiceCallUIEnabled; 
@property (assign,nonatomic) BOOL messagingUIEnabled; 
@property (assign,nonatomic) BOOL voicemailUIEnabled; 
@property (assign,nonatomic) BOOL pushNotificationUIEnabled; 
@property (assign,nonatomic) BOOL alarmUIEnabled; 
@property (nonatomic,retain) NSMutableData * iapdInputBuffer; 
@property (nonatomic,retain) NSMutableData * iapdOutputBuffer; 
@property (assign,nonatomic) BOOL allAlertsEnabled; 
-(void)setTimeFormatter:(id)arg1 ;
-(BOOL)videoTestEnabled;
-(id)tvView;
-(BOOL)showArtistAndAlbumNumbers;
-(unsigned)loggingMask;
-(void)allowNextKeyUpEventForKeys:(unsigned)arg1 ;
-(void)dismissModalViewController;
-(void)setLoggingMask:(unsigned)arg1 ;
-(void)setShowArtistAndAlbumNumbers:(BOOL)arg1 ;
-(void)setUiLevel:(int)arg1 ;
-(void)setUseMainScreen:(BOOL)arg1 ;
-(void)setVideoTestEnabled:(BOOL)arg1 ;
-(void)setAllAlertsEnabled:(BOOL)arg1 ;
-(void)_handleSimpleRemoteActionNotification:(id)arg1 ;
-(void)_handleScreenDidConnectNotification:(id)arg1 ;
-(void)_rotationEvent:(id)arg1 ;
-(void)_carButtonEvent:(id)arg1 ;
-(void)_iPodOutModeDisabled:(id)arg1 ;
-(void)_springBoardAlertHandler:(id)arg1 ;
-(void)_handleLibraryChanged:(id)arg1 ;
-(void)_setupAccessoryConnection;
-(void)setIapdInputBuffer:(id)arg1 ;
-(void)setIapdOutputBuffer:(id)arg1 ;
-(void)_handleiPodOutAccessoryDidConnect:(id)arg1 ;
-(id)iPodOutAccessory;
-(BOOL)useMainScreen;
-(void)_setupOnScreenUI;
-(void)setIPodOutAccessory:(id)arg1 ;
-(void)setIPodOutAccessorySession:(id)arg1 ;
-(id)iPodOutAccessorySession;
-(BOOL)allAlertsEnabled;
-(id)iapdOutputBuffer;
-(id)iapdInputBuffer;
-(void)_parseMessage;
-(void)_updateScreenInfo:(SCD_Struct_iP5*)arg1 ;
-(void)_updateOptions:(SCD_Struct_iP6*)arg1 ;
-(void)_handleAccessoryModeChange:(SCD_Struct_iP7*)arg1 ;
-(BOOL)displayUsesBobDeinterlacing;
-(int)uiLevel;
-(void)setDisplayUsesBobDeinterlacing:(BOOL)arg1 ;
-(void)setVoiceCallUIEnabled:(BOOL)arg1 ;
-(void)setMessagingUIEnabled:(BOOL)arg1 ;
-(void)setVoicemailUIEnabled:(BOOL)arg1 ;
-(void)setPushNotificationUIEnabled:(BOOL)arg1 ;
-(void)setAlarmUIEnabled:(BOOL)arg1 ;
-(BOOL)voiceCallUIEnabled;
-(BOOL)messagingUIEnabled;
-(BOOL)voicemailUIEnabled;
-(BOOL)pushNotificationUIEnabled;
-(BOOL)alarmUIEnabled;
-(BOOL)shouldResumePlayback;
-(void)setShouldResumePlayback:(BOOL)arg1 ;
-(id)_subviewOf:(id)arg1 atLocation:(CGPoint)arg2 ;
-(void)_touchHeld:(id)arg1 ;
-(void)setTvWindow:(id)arg1 ;
-(void)setTvView:(id)arg1 ;
-(id)tvWindow;
-(void)_presentModalViewController:(id)arg1 ;
-(id)_alertViewController;
-(void)_enqueueShortMessageAlertViewController:(id)arg1 withInfo:(id)arg2 ;
-(id)_viewAtLocation:(CGPoint)arg1 ;
-(void)_telephonyCallEventHandler:(id)arg1 ;
-(id)_onScreenUI;
-(void)set_onScreenUI:(id)arg1 ;
-(id)_delaySlider;
-(void)set_delaySlider:(id)arg1 ;
-(id)_minimumFontSizeSlider;
-(void)set_minimumFontSizeSlider:(id)arg1 ;
-(int)quickSpinAccumulator;
-(void)setQuickSpinAccumulator:(int)arg1 ;
-(int)rotationAccumulator;
-(void)setRotationAccumulator:(int)arg1 ;
-(unsigned)keyDownMask;
-(void)setKeyDownMask:(unsigned)arg1 ;
-(unsigned)keyHeldMask;
-(void)setKeyHeldMask:(unsigned)arg1 ;
-(void)_resetQuickSpin;
-(void)_autoRepeat;
-(void)_longSelect:(id)arg1 ;
-(void)_longBack:(id)arg1 ;
-(void)_longUp:(id)arg1 ;
-(void)_longDown:(id)arg1 ;
-(void)_longLeft:(id)arg1 ;
-(void)_longRight:(id)arg1 ;
-(void)_select:(id)arg1 ;
-(void)_up:(id)arg1 ;
-(void)_left:(id)arg1 ;
-(void)_right:(id)arg1 ;
-(void)_showOnScreenUI;
-(void)_hideOnScreenUI;
-(void)_keyDown:(id)arg1 ;
-(void)_keyUp:(id)arg1 ;
-(void)_toggleAudio:(id)arg1 ;
-(void)_sendFakeAlert:(id)arg1 ;
-(void)_sendFakeCall:(id)arg1 ;
-(void)_delayChanged;
-(void)_minimumFontSizeChanged;
-(void)_keyHeld;
-(void)setTaskIdentifier:(unsigned)arg1 ;
-(void)stream:(id)arg1 handleEvent:(unsigned)arg2 ;
-(void)_accessoryDidDisconnect:(id)arg1 ;
-(unsigned)taskIdentifier;
-(void)dealloc;
-(id)window;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)setWindow:(id)arg1 ;
-(id)navigationController;
-(void)_accessoryDidConnect:(id)arg1 ;
-(id)timeFormatter;
-(void)setNavigationController:(id)arg1 ;
-(void)back:(id)arg1 ;
-(void)_down:(id)arg1 ;
-(void).cxx_destruct;
-(void)_setupUI;
-(id)_targetViewController;
@end

