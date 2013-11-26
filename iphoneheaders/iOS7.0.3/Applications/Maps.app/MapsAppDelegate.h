/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationTestingDelegate.h>
#import <Maps/StarkDisplayControllerDelegate.h>
#import <UIKit/UIApplicationDelegate.h>
#import <UIKit/UIApplicationDelegatePrivate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Maps/MNBackgroundNavigationDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UIWindow, MapNavigationController, MapsMainModeController, UINavigationController, MapsDebugController, EasyCallbackAlertView, MainChromeViewController, NSHashTable, StarkDisplayController, NSDate, NSTimer, NSMutableSet, BKSProcessAssertion, LightLevelController, NSArray;

@interface MapsAppDelegate : UIResponder <UIApplicationTestingDelegate, StarkDisplayControllerDelegate, UIApplicationDelegate, UIApplicationDelegatePrivate, UINavigationControllerDelegate, MNBackgroundNavigationDelegate, UIAlertViewDelegate> {

	BOOL _suppressLoadingIndicator;
	int _loadingCount;
	int* _loadingCounters;
	int _idleTimerDisabledCount;
	int _idleTimerDisabledIfChargedCount;
	int _idleTimerDisabledReasonCounter[2];
	int _batteryMonitorCount;
	int _batteryMonitorReasonCounter[2];
	BOOL _registeredForAddressBookChanges;
	UIWindow* _window;
	MapNavigationController* _navControllerPhone;
	MapsMainModeController* _mapController;
	UINavigationController* _debugNavigationController;
	MapsDebugController* _mapsDebugController;
	EasyCallbackAlertView* _addressCorrectionPermissionAlert;
	MainChromeViewController* _chromeViewController;
	int _navNotifyToken;
	BOOL _hasNavNotifyToken;
	BOOL _isNavigating;
	BOOL _isTrackingLocation;
	SBSThermalWarningAssertionRef _thermalWarningSuppressionAssertion;
	NSHashTable* _navigatorUIObserversSet;
	unsigned _preferredTransportType;
	StarkDisplayController* _starkDisplayController;
	NSDate* _enteredForegroundDate;
	BOOL _running;
	int _postedOverrides;
	NSTimer* _navigationTimestampTimer;
	NSMutableSet* _navigatorsSuspendingIdleTimer;
	BKSProcessAssertion* _priorityAssertion;
	BOOL _debugAutomaticNightMode;
	BOOL _enteredForegroundThisRunLoopIteration;

}

@property (nonatomic,retain) UIWindow * window; 
@property (nonatomic,readonly) LightLevelController * lightLevelController; 
@property (nonatomic,readonly) BOOL canPlayTrace; 
@property (nonatomic,retain) NSDate * enteredForegroundDate;                                 //@synthesize enteredForegroundDate=_enteredForegroundDate - In the implementation block
@property (nonatomic,readonly) MainChromeViewController * chromeViewController;              //@synthesize chromeViewController=_chromeViewController - In the implementation block
@property (nonatomic,readonly) NSArray * navigatorUIObservers; 
@property (nonatomic,readonly) unsigned preferredTransportType;                              //@synthesize preferredTransportType=_preferredTransportType - In the implementation block
@property (assign,nonatomic) BOOL debugAutomaticNightMode;                                   //@synthesize debugAutomaticNightMode=_debugAutomaticNightMode - In the implementation block
@property (nonatomic,readonly) StarkDisplayController * starkDisplayController;              //@synthesize starkDisplayController=_starkDisplayController - In the implementation block
@property (nonatomic,retain) BKSProcessAssertion * priorityAssertion;                        //@synthesize priorityAssertion=_priorityAssertion - In the implementation block
-(void)_locationManagerApprovalDidChange:(id)arg1 ;
-(void)setLoading:(BOOL)arg1 forType:(int)arg2 ;
-(void)didFinishDrawingTiles:(id)arg1 ;
-(void)setupFullyDrawnNotification:(SEL)arg1 ;
-(id)mainMapView;
-(void)jumpToCupertino;
-(BOOL)runPanZoomTest:(id)arg1 options:(id)arg2 ;
-(BOOL)runCirclePanTest:(id)arg1 options:(id)arg2 ;
-(BOOL)runVKTest:(id)arg1 options:(id)arg2 ;
-(BOOL)runSwitchTest:(id)arg1 options:(id)arg2 ;
-(BOOL)runPounceToNavTest:(id)arg1 options:(id)arg2 ;
-(BOOL)runCapture:(id)arg1 options:(id)arg2 ;
-(BOOL)runMapsTest:(id)arg1 options:(id)arg2 ;
-(void)startTimingFps:(id)arg1 ;
-(void)animateCircle:(int)arg1 completion:(/*^block*/ id)arg2 ;
-(void)setupForVKTest:(id)arg1 options:(id)arg2 ;
-(void)circlePanLoadFinished;
-(void)startKeyboardBringupTest:(id)arg1 ;
-(void)_placeViewControllerAppeared:(id)arg1 ;
-(void)startPlaceViewControllerPresentationTest:(id)arg1 ;
-(void)didFinishJumping:(id)arg1 ;
-(void)didFinishJumpingForCapture:(id)arg1 ;
-(void)finishedFps:(id)arg1 ;
-(void)jumpToCoords:(SCD_Struct_Ma25)arg1 pitch:(double)arg2 yaw:(double)arg3 ;
-(void)checkFullyDrawnForCapture;
-(void)checkFullyDrawn;
-(void)panLoadFinished;
-(void)doPostLaunchTestSetup;
-(void)jumpToBayArea;
-(id)shieldArtworkForType:(int)arg1 text:(id)arg2 size:(int)arg3 inMapRect:(SCD_Struct_Se11)arg4 ;
-(void)addNavigatorUIObserver:(id)arg1 ;
-(void)removeNavigatorUIObserver:(id)arg1 ;
-(void)navigationSessionWillEnd:(id)arg1 ;
-(void)navigationSessionWillPause:(id)arg1 ;
-(void)navigationSessionWillResumeFromPause:(id)arg1 ;
-(void)navigationSessionHasArrived:(id)arg1 ;
-(unsigned)preferredTransportType;
-(unsigned short)geocodeProviderID;
-(void)sendDidEnterBackgroundNotification;
-(id)chromeViewController;
-(unsigned short)searchProviderID;
-(void)setSuppressStatusBarAnimations:(BOOL)arg1 ;
-(id)lightLevelController;
-(void)setTrackingMode:(int)arg1 monitorBatteryState:(BOOL)arg2 ;
-(void)setMapsIsNavigating:(BOOL)arg1 ;
-(unsigned short)directionsProviderID;
-(void)interruptApplicationWithKind:(int)arg1 userInfo:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(id)enteredForegroundDate;
-(BOOL)navigationStartFromURLMustDelayStart;
-(void)startPreparedBackgroundNavigation;
-(void)endBackgroundNavigation;
-(BOOL)canPlayTrace;
-(void)_loadMapsForApplication:(id)arg1 ;
-(void)setEnteredForegroundDate:(id)arg1 ;
-(void)_updatePreferredTransport;
-(void)_userDefaultsDidChange:(id)arg1 ;
-(void)_relaunchIntoNavigationIfNecessary;
-(void)_showFrequentLocationsAlertIfNecessary;
-(void)_performIfWouldLikeFrequentLocationsPrompt:(/*^block*/ id)arg1 ;
-(void)starkDisplayControllerDidInvalidateNavigationVisibility:(id)arg1 ;
-(void)_setLaunchIntoNavigationOnRelaunch:(BOOL)arg1 ;
-(void)_suspendIfNeeded;
-(void)_moveBackToNavigationIfNeeded;
-(void)_updateDistanceUnits;
-(void)_resumeIfNeeded;
-(void)presentMapsDebugController;
-(void)_updateLoadingCounterForType:(int)arg1 counterDelta:(int)arg2 ;
-(void)setMonitorBattery:(BOOL)arg1 forReason:(int)arg2 ;
-(int)_idleTimerStateForBattery;
-(void)_setIdleTimerState:(int)arg1 ;
-(id)idleTimerStateDescription;
-(void)statusBarTapped;
-(void)_updatePersistedNavigationTimestamp;
-(void)_setLaunchIntoNavigationOnRelaunch:(BOOL)arg1 destinationPersistentData:(id)arg2 directionsMode:(int)arg3 ;
-(void)_setDesiredIdleTimerState:(int)arg1 reason:(int)arg2 monitorBatteryState:(BOOL)arg3 ;
-(void)_addNavigatorSuspendingIdleTimer:(id)arg1 ;
-(void)_removeNavigatorSuspendingIdleTimer:(id)arg1 ;
-(void)clearDoubleHeightStatusBar;
-(void)_idleTimerStateBatteryStatusDidChange:(id)arg1 ;
-(id)priorityAssertion;
-(void)setPriorityAssertion:(id)arg1 ;
-(void)prepareBackgroundNavigationWithItems:(id)arg1 ;
-(BOOL)_applicationShouldUseScreenJail:(id)arg1 ;
-(void)_idleTimerStateEnableBatteryMonitoring:(BOOL)arg1 ;
-(void)navigationSessionWillStart:(id)arg1 ;
-(id)monitorBatteryStateDescription;
-(id)navigatorUIObservers;
-(BOOL)debugAutomaticNightMode;
-(void)setDebugAutomaticNightMode:(BOOL)arg1 ;
-(id)starkDisplayController;
-(BOOL)applicationCanPromptToCalibrateHeading:(id)arg1 ;
-(void)_updateLoadingIndicator;
-(void)dealloc;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidReceiveMemoryWarning:(id)arg1 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)_application:(id)arg1 statusBarTouchesEnded:(id)arg2 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)application:(id)arg1 didFinishLaunchingSuspendedWithOptions:(id)arg2 ;
-(void)application:(id)arg1 didReceiveLocalNotification:(id)arg2 ;
-(id)nameOfDefaultImageToUpdateAtSuspension;
-(void)prepareForDefaultImageSnapshotForScreen:(id)arg1 ;
-(BOOL)application:(id)arg1 runTest:(id)arg2 options:(id)arg3 ;
-(BOOL)isLoading;
-(void)_keyboardDidShow:(id)arg1 ;
-(void*)sharedAddressBook;
@end

