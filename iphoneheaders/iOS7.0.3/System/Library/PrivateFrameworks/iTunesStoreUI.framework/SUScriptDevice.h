/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSMutableArray, NSArray, NSNumber, NSString;

@interface SUScriptDevice : SUScriptObject {

	NSMutableArray* _scriptFunctions;

}

@property (readonly) int activeNetworkType; 
@property (readonly) NSArray * automaticDownloadMediaTypes; 
@property (readonly) unsigned long deviceTypeIdentifier; 
@property (readonly) NSNumber * diskSpaceAvailable; 
@property (readonly) int hardwareType; 
@property (readonly) NSNumber * mainScreenScale; 
@property (readonly) NSString * capabilityNameEmail; 
@property (readonly) NSString * capabilityNameExplicitMedia; 
@property (readonly) NSString * capabilityNameHDVideo; 
@property (readonly) NSString * capabilityNameHDVideo1080p; 
@property (readonly) NSString * capabilityNameHDVideo720p; 
@property (readonly) NSString * capabilityNamePodcasts; 
@property (readonly) NSString * capabilityNameWiFi; 
@property (readonly) int freeSpaceEffortLevelDoNothing; 
@property (readonly) int freeSpaceEffortLevelAutomaticOnly; 
@property (readonly) int freeSpaceEffortLevelManualSpaceManagement; 
@property (readonly) int freeSpaceEffortLevelPromptUser; 
@property (readonly) NSString * freeSpaceOptionEffortLevel; 
@property (readonly) int hardwareTypeAppleTVJ33; 
@property (readonly) int hardwareTypeAppleTVK66; 
@property (readonly) int hardwareTypeIPadJ1; 
@property (readonly) int hardwareTypeIPadJ2; 
@property (readonly) int hardwareTypeIPadJ2a; 
@property (readonly) int hardwareTypeIPadK93; 
@property (readonly) int hardwareTypeIPadK93a; 
@property (readonly) int hardwareTypeIPadK94; 
@property (readonly) int hardwareTypeIPadK95; 
@property (readonly) int hardwareTypeIPhoneM68; 
@property (readonly) int hardwareTypeIPhoneN82; 
@property (readonly) int hardwareTypeIPhoneN88; 
@property (readonly) int hardwareTypeIPhoneN90; 
@property (readonly) int hardwareTypeIPhoneN92; 
@property (readonly) int hardwareTypeIPhoneN94; 
@property (readonly) int hardwareTypeIPodTouchN45; 
@property (readonly) int hardwareTypeIPodTouchN18; 
@property (readonly) int hardwareTypeIPodTouchN72; 
@property (readonly) int hardwareTypeIPodTouchN81; 
@property (readonly) int hardwareTypeIPodTouchN81a; 
@property (readonly) int hardwareTypeUnknown; 
@property (readonly) int hardwareTypeWildcatK48; 
@property (readonly) int networkTypeNone; 
@property (readonly) int networkType2G; 
@property (readonly) int networkType3G; 
@property (readonly) int networkType4G; 
@property (readonly) int networkType5G; 
@property (readonly) int networkType6G; 
@property (readonly) int networkType7G; 
@property (readonly) int networkType8G; 
@property (readonly) int networkType9G; 
@property (readonly) int networkTypeWiFi; 
@property (readonly) NSString * orientationStringLandscapeLeft; 
@property (readonly) NSString * orientationStringLandscapeRight; 
@property (readonly) NSString * orientationStringPortrait; 
@property (readonly) NSString * orientationStringPortraitUpsideDown; 
@property (readonly) int restrictionBoolNo; 
@property (readonly) int restrictionBoolNoData; 
@property (readonly) int restrictionBoolYes; 
@property (readonly) NSString * restrictionAccountModificationAllowed; 
@property (readonly) NSString * restrictionAllowGlobalBackgroundFetchWhenRoaming; 
@property (readonly) NSString * restrictionAllowVoiceDialing; 
@property (readonly) NSString * restrictionAppInstallationAllowed; 
@property (readonly) NSString * restrictionAppRemovalAllowed; 
@property (readonly) NSString * restrictionBookStoreAllowed; 
@property (readonly) NSString * restrictionBookStoreEroticaAllowed; 
@property (readonly) NSString * restrictionCameraAllowed; 
@property (readonly) NSString * restrictionCellularHDUploadsAllowed; 
@property (readonly) NSString * restrictionITunesAllowed; 
@property (readonly) NSString * restrictionITunesSocialAllowed; 
@property (readonly) NSString * restrictionMultiplayerGamingAllowed; 
@property (readonly) NSString * restrictionSafariAllowed; 
@property (readonly) NSString * restrictionScreenShotAllowed; 
@property (readonly) NSString * restrictionVideoConferencingAllowed; 
@property (readonly) NSString * restrictionYouTubeAllowed; 
@property (readonly) NSString * restrictionTypeApplications; 
@property (readonly) NSString * restrictionTypeMovies; 
@property (readonly) NSString * restrictionTypeTelevision; 
@property (readonly) NSString * UTIImage; 
@property (readonly) NSString * UTIMovie; 
@property (readonly) NSString * UTIText; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)mainScreenScale;
-(id)attributeKeys;
-(id)checkCapabilitiesPropertyListString:(id)arg1 showFailureDialog:(BOOL)arg2 ;
-(int)activeNetworkType;
-(id)capabilityNamePodcasts;
-(id)hasCapability:(id)arg1 ;
-(id)capabilityNameEmail;
-(id)diskSpaceAvailable;
-(int)hardwareType;
-(id)capabilityNameExplicitMedia;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)_autoDownloadKindsChangedNotification:(id)arg1 ;
-(int)_deviceCapabilityForString:(id)arg1 ;
-(void)_addScriptFunction:(id)arg1 ;
-(id)freeSpaceOptionEffortLevel;
-(void)_removeScriptFunction:(id)arg1 ;
-(id)restrictionTypeApplications;
-(id)restrictionTypeMovies;
-(id)restrictionTypeTelevision;
-(int)networkType2G;
-(int)networkType3G;
-(int)networkType4G;
-(int)networkType5G;
-(int)networkType6G;
-(int)networkType7G;
-(int)networkType8G;
-(int)networkType9G;
-(int)networkTypeWiFi;
-(int)networkTypeNone;
-(unsigned long)deviceTypeIdentifier;
-(int)hardwareTypeAppleTVJ33;
-(int)hardwareTypeAppleTVK66;
-(int)hardwareTypeIPadJ1;
-(int)hardwareTypeIPadJ2;
-(int)hardwareTypeIPadJ2a;
-(int)hardwareTypeIPadK93;
-(int)hardwareTypeIPadK93a;
-(int)hardwareTypeIPadK94;
-(int)hardwareTypeIPadK95;
-(int)hardwareTypeIPhoneM68;
-(int)hardwareTypeIPhoneN82;
-(int)hardwareTypeIPhoneN88;
-(int)hardwareTypeIPhoneN90;
-(int)hardwareTypeIPhoneN92;
-(int)hardwareTypeIPhoneN94;
-(int)hardwareTypeIPodTouchN45;
-(int)hardwareTypeIPodTouchN72;
-(int)hardwareTypeIPodTouchN18;
-(int)hardwareTypeIPodTouchN81;
-(int)hardwareTypeIPodTouchN81a;
-(int)hardwareTypeWildcatK48;
-(int)hardwareTypeUnknown;
-(id)capabilityNameHDVideo;
-(id)capabilityNameHDVideo1080p;
-(id)capabilityNameHDVideo720p;
-(id)capabilityNameWiFi;
-(id)applicationsForUTI:(id)arg1 ;
-(int)boolValueForRestriction:(id)arg1 ;
-(void)requestFreeSpaceWithBytes:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(id)restrictionLevelForType:(id)arg1 ;
-(void)setAutomaticDownloadKinds:(id)arg1 withCompletionHandler:(id)arg2 ;
-(id)UTIForURL:(id)arg1 ;
-(id)valueForRestriction:(id)arg1 ;
-(id)automaticDownloadMediaTypes;
-(id)orientationStringLandscapeLeft;
-(id)orientationStringLandscapeRight;
-(id)orientationStringPortrait;
-(id)orientationStringPortraitUpsideDown;
-(int)freeSpaceEffortLevelDoNothing;
-(int)freeSpaceEffortLevelAutomaticOnly;
-(int)freeSpaceEffortLevelManualSpaceManagement;
-(int)freeSpaceEffortLevelPromptUser;
-(int)restrictionBoolNo;
-(int)restrictionBoolNoData;
-(int)restrictionBoolYes;
-(id)restrictionAccountModificationAllowed;
-(id)restrictionAllowGlobalBackgroundFetchWhenRoaming;
-(id)restrictionAllowVoiceDialing;
-(id)restrictionAppInstallationAllowed;
-(id)restrictionAppRemovalAllowed;
-(id)restrictionBookStoreAllowed;
-(id)restrictionBookStoreEroticaAllowed;
-(id)restrictionCameraAllowed;
-(id)restrictionCellularHDUploadsAllowed;
-(id)restrictionITunesAllowed;
-(id)restrictionITunesSocialAllowed;
-(id)restrictionMultiplayerGamingAllowed;
-(id)restrictionSafariAllowed;
-(id)restrictionScreenShotAllowed;
-(id)restrictionVideoConferencingAllowed;
-(id)restrictionYouTubeAllowed;
-(id)UTIImage;
-(id)UTIMovie;
-(id)UTIText;
@end

