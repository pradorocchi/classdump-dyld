/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AdSheet.app/AdSheet
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AdSheet/AdSheet-Structs.h>
#import <AdSheet/ADJavaScriptObject.h>
#import <AdSheet/ADAdJSO_Bindings.h>

@protocol OS_dispatch_queue;
@class NSNumber, NSDictionary, NSString, ADCalendarJSO, ADStoreJSO, ADCameraJSO, ADBooksJSO, ADSMSComposerJSO, ADMailComposerJSO, ADContactsJSO, ADTwitterJSO, ADReminderComposerJSO, ADPassbookJSO, ADRewardsJSO, JSValue, NSMutableDictionary, AdSheetJSSetWallpaperRequest, NSObject;

@interface ADAdJSO : ADJavaScriptObject <ADAdJSO_Bindings> {

	BOOL _isCoalescingShakeEvents;
	ADStoreJSO* _store;
	ADCalendarJSO* _calendar;
	ADCameraJSO* _camera;
	ADBooksJSO* _books;
	ADSMSComposerJSO* _smsComposer;
	ADMailComposerJSO* _mailComposer;
	ADContactsJSO* _contacts;
	ADTwitterJSO* _twitterComposer;
	ADReminderComposerJSO* _reminderComposer;
	ADPassbookJSO* _passbook;
	ADRewardsJSO* _rewards;
	unsigned _currentSupportedInterfaceOrientations;
	NSMutableDictionary* _bannerParametersDictionary;
	AdSheetJSSetWallpaperRequest* _wallpaperRequest;
	int _currentNetworkType;
	NSDictionary* _ringtoneData;
	NSObject<OS_dispatch_queue>* _dispatchQueue;

}

@property (nonatomic,retain) NSMutableDictionary * bannerParametersDictionary;              //@synthesize bannerParametersDictionary=_bannerParametersDictionary - In the implementation block
@property (nonatomic,retain) AdSheetJSSetWallpaperRequest * wallpaperRequest;               //@synthesize wallpaperRequest=_wallpaperRequest - In the implementation block
@property (nonatomic,retain) JSValue * wallpaperRequestListener; 
@property (readonly) int currentNetworkType;                                                //@synthesize currentNetworkType=_currentNetworkType - In the implementation block
@property (assign,nonatomic) BOOL isCoalescingShakeEvents;                                  //@synthesize isCoalescingShakeEvents=_isCoalescingShakeEvents - In the implementation block
@property (nonatomic,retain) NSDictionary * ringtoneData;                                   //@synthesize ringtoneData=_ringtoneData - In the implementation block
@property (assign,nonatomic) NSObject<OS_dispatch_queue> * dispatchQueue;                   //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) NSNumber * currentDeviceVolume; 
@property (nonatomic,readonly) CGRect bannerRectOnScreen; 
@property (nonatomic,readonly) CGPoint bannerTapLocation; 
@property (nonatomic,readonly) NSDictionary * bannerParameters; 
@property (nonatomic,readonly) NSString * bannerCustomMetadata; 
@property (nonatomic,readonly) int networkType; 
@property (assign,nonatomic) unsigned currentSupportedInterfaceOrientations;                //@synthesize currentSupportedInterfaceOrientations=_currentSupportedInterfaceOrientations - In the implementation block
@property (nonatomic,readonly) ADCalendarJSO * calendar;                                    //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) ADStoreJSO * store;                                          //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) ADCameraJSO * camera;                                        //@synthesize camera=_camera - In the implementation block
@property (nonatomic,readonly) ADBooksJSO * books;                                          //@synthesize books=_books - In the implementation block
@property (nonatomic,readonly) ADSMSComposerJSO * smsComposer;                              //@synthesize smsComposer=_smsComposer - In the implementation block
@property (nonatomic,readonly) ADMailComposerJSO * mailComposer;                            //@synthesize mailComposer=_mailComposer - In the implementation block
@property (nonatomic,readonly) ADContactsJSO * contacts;                                    //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,readonly) ADTwitterJSO * twitterComposer;                              //@synthesize twitterComposer=_twitterComposer - In the implementation block
@property (nonatomic,readonly) ADReminderComposerJSO * reminderComposer;                    //@synthesize reminderComposer=_reminderComposer - In the implementation block
@property (nonatomic,readonly) ADPassbookJSO * passbook;                                    //@synthesize passbook=_passbook - In the implementation block
@property (nonatomic,readonly) ADRewardsJSO * rewards;                                      //@synthesize rewards=_rewards - In the implementation block
@property (assign,nonatomic,__weak) JSValue * listener; 
@property (assign,nonatomic,__weak) JSValue * shakeEventsListener; 
@property (assign,nonatomic,__weak) JSValue * deviceOrientationListener; 
@property (assign,nonatomic,__weak) JSValue * networkTypeListener; 
@property (assign,nonatomic,__weak) JSValue * writeImageListener; 
@property (assign,nonatomic,__weak) JSValue * deviceVolumeListener; 
+(void)initializeInContext:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 impressionController:(id)arg2 ;
-(void)forwardShakeEventToAd:(id)arg1 ;
-(void)registerForVolumeChanges:(id)arg1 ;
-(void)networkTypeChanged:(id)arg1 ;
-(unsigned)currentSupportedInterfaceOrientations;
-(id)bannerCustomMetadata;
-(void)adWillDismiss;
-(id)shakeEventsListener;
-(id)deviceOrientationListener;
-(id)deviceVolumeListener;
-(id)networkTypeListener;
-(void)setWallpaperRequest:(id)arg1 ;
-(id)wallpaperRequest;
-(void)setWallpaperRequestListener:(id)arg1 ;
-(id)wallpaperRequestListener;
-(id)writeImageListener;
-(void)setWriteImageListener:(id)arg1 ;
-(void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3 ;
-(void)_previewImage:(id)arg1 data:(id)arg2 named:(id)arg3 previewTitle:(id)arg4 completion:(/*^block*/ id)arg5 ;
-(void)_finishedSavingVideo:(id)arg1 withError:(id)arg2 context:(void*)arg3 ;
-(void)_insertImageIntoCache:(id)arg1 tainted:(BOOL)arg2 completion:(/*^block*/ id)arg3 ;
-(id)ringtoneData;
-(void)setRingtoneData:(id)arg1 ;
-(void)reportClickEvent:(id)arg1 ;
-(void)contentDidFinishPreparingToPresent;
-(void)addRingtone:(id)arg1 ;
-(void)setImageAsWallpaper:(id)arg1 withTitle:(id)arg2 listener:(id)arg3 ;
-(void)writeImageToSavedPhotosAlbum:(id)arg1 listener:(id)arg2 ;
-(void)writeVideoToSavedPhotosAlbum:(id)arg1 listener:(id)arg2 ;
-(void)writeDisplayedContentToSavedPhotosAlbum:(id)arg1 ;
-(void)captureVisibleContentsAsImageURLForListener:(id)arg1 readableImageData:(BOOL)arg2 ;
-(id)currentDeviceVolume;
-(CGRect)bannerRectOnScreen;
-(CGPoint)bannerTapLocation;
-(id)bannerParameters;
-(void)setCurrentSupportedInterfaceOrientations:(unsigned)arg1 ;
-(id)books;
-(id)smsComposer;
-(id)mailComposer;
-(id)twitterComposer;
-(id)reminderComposer;
-(id)passbook;
-(id)rewards;
-(void)setShakeEventsListener:(id)arg1 ;
-(void)setDeviceOrientationListener:(id)arg1 ;
-(void)setNetworkTypeListener:(id)arg1 ;
-(void)setDeviceVolumeListener:(id)arg1 ;
-(void)adWillPause;
-(void)adDidResume;
-(id)bannerParametersDictionary;
-(void)setBannerParametersDictionary:(id)arg1 ;
-(BOOL)isCoalescingShakeEvents;
-(void)setIsCoalescingShakeEvents:(BOOL)arg1 ;
-(id)dispatchQueue;
-(id)contacts;
-(id)store;
-(void)orientationChanged:(id)arg1 ;
-(int)networkType;
-(void)dealloc;
-(id)description;
-(void)volumeChanged:(id)arg1 ;
-(void)dismiss;
-(id)calendar;
-(void)setDispatchQueue:(id)arg1 ;
-(id)camera;
-(BOOL)locationServicesEnabled;
-(void)wallpaperImageViewControllerDidFinishSaving:(id)arg1 ;
-(void)wallpaperImageViewControllerDidCancel:(id)arg1 ;
-(int)currentNetworkType;
@end

