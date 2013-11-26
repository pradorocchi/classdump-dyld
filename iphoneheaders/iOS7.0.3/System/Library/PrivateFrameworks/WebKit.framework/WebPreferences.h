/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebKit/WebKit-Structs.h>
#import <CoreFoundation/NSCoding.h>

@interface WebPreferences : NSObject <NSCoding> {

	WebPreferencesPrivate* _private;

}
+(id)standardMailWebPreferencesForDisplayStyle:(int)arg1 regenerate:(BOOL)arg2 ;
+(void)initialize;
+(id)standardPreferences;
+(id)_getInstanceForIdentifier:(id)arg1 ;
+(void)_setInstance:(id)arg1 forIdentifier:(id)arg2 ;
+(id)_concatenateKeyWithIBCreatorID:(id)arg1 ;
+(void)_checkLastReferenceForIdentifier:(id)arg1 ;
+(unsigned long)_systemCFStringEncoding;
+(void)_removeReferenceForIdentifier:(id)arg1 ;
+(void)_setInitialDefaultTextEncodingToSystemEncoding;
+(void)_setIBCreatorID:(id)arg1 ;
+(void)_switchNetworkLoaderToNewTestingSession;
+(void)_setCurrentNetworkLoaderSessionCookieAcceptPolicy:(unsigned)arg1 ;
+(void)setWebKitLinkTimeVersion:(int)arg1 ;
+(id)_IBCreatorID;
-(void)_setLayoutInterval:(int)arg1 ;
-(void)setDNSPrefetchingEnabled:(BOOL)arg1 ;
-(void)setAccelerated2dCanvasEnabled:(BOOL)arg1 ;
-(void)setDefaultTextEncodingName:(id)arg1 ;
-(void)setStandardFontFamily:(id)arg1 ;
-(void)setCanvasUsesAcceleratedDrawing:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)identifier;
-(void)setMinimumFontSize:(int)arg1 ;
-(int)minimumFontSize;
-(void)setMediaPlaybackAllowsAirPlay:(BOOL)arg1 ;
-(BOOL)mediaPlaybackAllowsAirPlay;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setAutosaves:(BOOL)arg1 ;
-(void)setJavaEnabled:(BOOL)arg1 ;
-(void)setJavaScriptEnabled:(BOOL)arg1 ;
-(void)setPlugInsEnabled:(BOOL)arg1 ;
-(void)setDatabasesEnabled:(BOOL)arg1 ;
-(void)setLocalStorageEnabled:(BOOL)arg1 ;
-(void)setOfflineWebApplicationCacheEnabled:(BOOL)arg1 ;
-(void)setDiskImageCacheEnabled:(BOOL)arg1 ;
-(void)setAcceleratedDrawingEnabled:(BOOL)arg1 ;
-(BOOL)suppressesIncrementalRendering;
-(void)setSuppressesIncrementalRendering:(BOOL)arg1 ;
-(BOOL)isJavaScriptEnabled;
-(void)_setLocalStorageDatabasePath:(id)arg1 ;
-(void)_setMinimumZoomFontSize:(float)arg1 ;
-(void)_setAllowMultiElementImplicitFormSubmission:(BOOL)arg1 ;
-(void)setAudioSessionCategoryOverride:(unsigned)arg1 ;
-(unsigned)audioSessionCategoryOverride;
-(void)setNetworkInterfaceName:(id)arg1 ;
-(id)networkInterfaceName;
-(void)setShrinksStandaloneImagesToFit:(BOOL)arg1 ;
-(void)setMediaPlaybackAllowsInline:(BOOL)arg1 ;
-(BOOL)mediaPlaybackAllowsInline;
-(void)setMediaPlaybackRequiresUserGesture:(BOOL)arg1 ;
-(BOOL)mediaPlaybackRequiresUserGesture;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(BOOL)notificationsEnabled;
-(int)defaultFontSize;
-(void)setDefaultFontSize:(int)arg1 ;
-(void)setDefaultFixedFontSize:(int)arg1 ;
-(void)setUserStyleSheetEnabled:(BOOL)arg1 ;
-(void)setJavaScriptCanOpenWindowsAutomatically:(BOOL)arg1 ;
-(void)setAllowsAnimatedImages:(BOOL)arg1 ;
-(void)setAllowsAnimatedImageLooping:(BOOL)arg1 ;
-(void)setLoadsImagesAutomatically:(BOOL)arg1 ;
-(void)setUsesPageCache:(BOOL)arg1 ;
-(id)standardFontFamily;
-(void)_setInterpolationQuality:(int)arg1 ;
-(BOOL)usesPageCache;
-(BOOL)arePlugInsEnabled;
-(void)_setDiskImageCacheSavedCacheDirectory:(id)arg1 ;
-(id)_diskImageCacheSavedCacheDirectory;
-(BOOL)automaticallyDetectsCacheModel;
-(unsigned)cacheModel;
-(BOOL)backspaceKeyNavigationEnabled;
-(BOOL)_alwaysRequestGeolocationPermission;
-(BOOL)developerExtrasEnabled;
-(void)setAuthorAndUserStylesEnabled:(BOOL)arg1 ;
-(void)setMinimumLogicalFontSize:(int)arg1 ;
-(id)initWithIdentifier:(id)arg1 sendChangeNotification:(BOOL)arg2 ;
-(void)_postPreferencesChangedNotification;
-(void)_postCacheModelChangedNotification;
-(id)_valueForKey:(id)arg1 ;
-(id)_stringValueForKey:(id)arg1 ;
-(int)_integerValueForKey:(id)arg1 ;
-(unsigned)_unsignedIntValueForKey:(id)arg1 ;
-(float)_floatValueForKey:(id)arg1 ;
-(BOOL)_boolValueForKey:(id)arg1 ;
-(long long)_longLongValueForKey:(id)arg1 ;
-(unsigned long long)_unsignedLongLongValueForKey:(id)arg1 ;
-(void)_setStringValue:(id)arg1 forKey:(id)arg2 ;
-(void)_setIntegerValue:(int)arg1 forKey:(id)arg2 ;
-(void)_setBoolValue:(BOOL)arg1 forKey:(id)arg2 ;
-(void)setAutomaticallyDetectsCacheModel:(BOOL)arg1 ;
-(void)_setUnsignedIntValue:(unsigned)arg1 forKey:(id)arg2 ;
-(void)_setFloatValue:(float)arg1 forKey:(id)arg2 ;
-(void)_setLongLongValue:(long long)arg1 forKey:(id)arg2 ;
-(void)_setUnsignedLongLongValue:(unsigned long long)arg1 forKey:(id)arg2 ;
-(id)fixedFontFamily;
-(void)setFixedFontFamily:(id)arg1 ;
-(id)serifFontFamily;
-(void)setSerifFontFamily:(id)arg1 ;
-(id)sansSerifFontFamily;
-(void)setSansSerifFontFamily:(id)arg1 ;
-(id)cursiveFontFamily;
-(void)setCursiveFontFamily:(id)arg1 ;
-(id)fantasyFontFamily;
-(void)setFantasyFontFamily:(id)arg1 ;
-(int)defaultFixedFontSize;
-(int)minimumLogicalFontSize;
-(id)defaultTextEncodingName;
-(BOOL)userStyleSheetEnabled;
-(id)userStyleSheetLocation;
-(void)setUserStyleSheetLocation:(id)arg1 ;
-(BOOL)isJavaEnabled;
-(BOOL)javaScriptCanOpenWindowsAutomatically;
-(BOOL)allowsAnimatedImages;
-(BOOL)allowsAnimatedImageLooping;
-(BOOL)loadsImagesAutomatically;
-(BOOL)autosaves;
-(void)setPrivateBrowsingEnabled:(BOOL)arg1 ;
-(BOOL)isDNSPrefetchingEnabled;
-(void)setJavaScriptExperimentsEnabled:(BOOL)arg1 ;
-(BOOL)javaScriptExperimentsEnabled;
-(void)setDeveloperExtrasEnabled:(BOOL)arg1 ;
-(BOOL)authorAndUserStylesEnabled;
-(BOOL)applicationChromeModeEnabled;
-(void)setApplicationChromeModeEnabled:(BOOL)arg1 ;
-(BOOL)webArchiveDebugModeEnabled;
-(void)setWebArchiveDebugModeEnabled:(BOOL)arg1 ;
-(BOOL)localFileContentSniffingEnabled;
-(void)setLocalFileContentSniffingEnabled:(BOOL)arg1 ;
-(BOOL)offlineWebApplicationCacheEnabled;
-(BOOL)zoomsTextOnly;
-(void)setZoomsTextOnly:(BOOL)arg1 ;
-(BOOL)javaScriptCanAccessClipboard;
-(void)setJavaScriptCanAccessClipboard:(BOOL)arg1 ;
-(BOOL)isXSSAuditorEnabled;
-(void)setXSSAuditorEnabled:(BOOL)arg1 ;
-(BOOL)shrinksStandaloneImagesToFit;
-(BOOL)usesEncodingDetector;
-(void)setUsesEncodingDetector:(BOOL)arg1 ;
-(BOOL)isWebSecurityEnabled;
-(void)setWebSecurityEnabled:(BOOL)arg1 ;
-(BOOL)allowUniversalAccessFromFileURLs;
-(void)setAllowUniversalAccessFromFileURLs:(BOOL)arg1 ;
-(BOOL)allowFileAccessFromFileURLs;
-(void)setAllowFileAccessFromFileURLs:(BOOL)arg1 ;
-(double)_backForwardCacheExpirationInterval;
-(unsigned long)_maximumImageSize;
-(BOOL)_standalone;
-(void)_setStandalone:(BOOL)arg1 ;
-(void)_setTelephoneNumberParsingEnabled:(BOOL)arg1 ;
-(BOOL)_telephoneNumberParsingEnabled;
-(float)_minimumZoomFontSize;
-(int)_layoutInterval;
-(void)_setMaxParseDuration:(float)arg1 ;
-(float)_maxParseDuration;
-(void)_setPageCacheSize:(int)arg1 ;
-(int)_pageCacheSize;
-(void)_setObjectCacheSize:(int)arg1 ;
-(int)_objectCacheSize;
-(void)_setNSURLMemoryCacheSize:(int)arg1 ;
-(int)_NSURLMemoryCacheSize;
-(void)_setNSURLDiskCacheSize:(int)arg1 ;
-(int)_NSURLDiskCacheSize;
-(void)_setAlwaysUseBaselineOfPrimaryFont:(BOOL)arg1 ;
-(BOOL)_alwaysUseBaselineOfPrimaryFont;
-(BOOL)_allowMultiElementImplicitFormSubmission;
-(void)_setAlwaysRequestGeolocationPermission:(BOOL)arg1 ;
-(void)_setAlwaysUseAcceleratedOverflowScroll:(BOOL)arg1 ;
-(BOOL)_alwaysUseAcceleratedOverflowScroll;
-(void)_setAllowCompositingLayerVisualDegradation:(BOOL)arg1 ;
-(BOOL)_allowCompositingLayerVisualDegradation;
-(int)_interpolationQuality;
-(BOOL)_allowPasswordEcho;
-(float)_passwordEchoDuration;
-(long long)applicationCacheTotalQuota;
-(void)setApplicationCacheTotalQuota:(long long)arg1 ;
-(long long)applicationCacheDefaultOriginQuota;
-(void)setApplicationCacheDefaultOriginQuota:(long long)arg1 ;
-(int)editableLinkBehavior;
-(void)setEditableLinkBehavior:(int)arg1 ;
-(int)textDirectionSubmenuInclusionBehavior;
-(void)setTextDirectionSubmenuInclusionBehavior:(int)arg1 ;
-(BOOL)_useSiteSpecificSpoofing;
-(void)_setUseSiteSpecificSpoofing:(BOOL)arg1 ;
-(BOOL)databasesEnabled;
-(BOOL)storageTrackerEnabled;
-(void)setStorageTrackerEnabled:(BOOL)arg1 ;
-(BOOL)localStorageEnabled;
-(BOOL)experimentalNotificationsEnabled;
-(void)setExperimentalNotificationsEnabled:(BOOL)arg1 ;
-(void)_postPreferencesChangedAPINotification;
-(BOOL)isDOMPasteAllowed;
-(void)setDOMPasteAllowed:(BOOL)arg1 ;
-(id)_localStorageDatabasePath;
-(id)_ftpDirectoryTemplatePath;
-(void)_setFTPDirectoryTemplatePath:(id)arg1 ;
-(BOOL)_forceFTPDirectoryListings;
-(void)_setForceFTPDirectoryListings:(BOOL)arg1 ;
-(BOOL)acceleratedDrawingEnabled;
-(BOOL)canvasUsesAcceleratedDrawing;
-(BOOL)acceleratedCompositingEnabled;
-(void)setAcceleratedCompositingEnabled:(BOOL)arg1 ;
-(BOOL)cssCustomFilterEnabled;
-(void)setCSSCustomFilterEnabled:(BOOL)arg1 ;
-(BOOL)cssRegionsEnabled;
-(void)setCSSRegionsEnabled:(BOOL)arg1 ;
-(BOOL)cssCompositingEnabled;
-(void)setCSSCompositingEnabled:(BOOL)arg1 ;
-(BOOL)cssGridLayoutEnabled;
-(void)setCSSGridLayoutEnabled:(BOOL)arg1 ;
-(BOOL)showDebugBorders;
-(void)setShowDebugBorders:(BOOL)arg1 ;
-(BOOL)showRepaintCounter;
-(void)setShowRepaintCounter:(BOOL)arg1 ;
-(BOOL)webAudioEnabled;
-(void)setWebAudioEnabled:(BOOL)arg1 ;
-(BOOL)webGLEnabled;
-(void)setWebGLEnabled:(BOOL)arg1 ;
-(BOOL)accelerated2dCanvasEnabled;
-(BOOL)diskImageCacheEnabled;
-(unsigned)diskImageCacheMinimumImageSize;
-(void)setDiskImageCacheMinimumImageSize:(unsigned)arg1 ;
-(unsigned)diskImageCacheMaximumCacheSize;
-(void)setDiskImageCacheMaximumCacheSize:(unsigned)arg1 ;
-(BOOL)isFrameFlatteningEnabled;
-(void)setFrameFlatteningEnabled:(BOOL)arg1 ;
-(BOOL)isSpatialNavigationEnabled;
-(void)setSpatialNavigationEnabled:(BOOL)arg1 ;
-(BOOL)paginateDuringLayoutEnabled;
-(void)setPaginateDuringLayoutEnabled:(BOOL)arg1 ;
-(BOOL)hyperlinkAuditingEnabled;
-(void)setHyperlinkAuditingEnabled:(BOOL)arg1 ;
-(BOOL)usePreHTML5ParserQuirks;
-(void)setUsePreHTML5ParserQuirks:(BOOL)arg1 ;
-(void)didRemoveFromWebView;
-(void)willAddToWebView;
-(void)_setPreferenceForTestWithValue:(id)arg1 forKey:(id)arg2 ;
-(void)setFullScreenEnabled:(BOOL)arg1 ;
-(BOOL)fullScreenEnabled;
-(void)setAsynchronousSpellCheckingEnabled:(BOOL)arg1 ;
-(BOOL)asynchronousSpellCheckingEnabled;
-(void)setLoadsSiteIconsIgnoringImageLoadingPreference:(BOOL)arg1 ;
-(BOOL)loadsSiteIconsIgnoringImageLoadingPreference;
-(void)setAVFoundationEnabled:(BOOL)arg1 ;
-(BOOL)isAVFoundationEnabled;
-(void)setQTKitEnabled:(BOOL)arg1 ;
-(BOOL)isQTKitEnabled;
-(void)setHixie76WebSocketProtocolEnabled:(BOOL)arg1 ;
-(BOOL)isHixie76WebSocketProtocolEnabled;
-(BOOL)networkDataUsageTrackingEnabled;
-(void)setNetworkDataUsageTrackingEnabled:(bool)arg1 ;
-(BOOL)mockScrollbarsEnabled;
-(void)setMockScrollbarsEnabled:(BOOL)arg1 ;
-(BOOL)seamlessIFramesEnabled;
-(void)setSeamlessIFramesEnabled:(BOOL)arg1 ;
-(id)pictographFontFamily;
-(void)setPictographFontFamily:(id)arg1 ;
-(BOOL)pageCacheSupportsPlugins;
-(void)setPageCacheSupportsPlugins:(BOOL)arg1 ;
-(void)_invalidateCachedPreferences;
-(void)setBackspaceKeyNavigationEnabled:(BOOL)arg1 ;
-(void)setWantsBalancedSetDefersLoadingBehavior:(BOOL)arg1 ;
-(BOOL)wantsBalancedSetDefersLoadingBehavior;
-(void)setShouldDisplaySubtitles:(BOOL)arg1 ;
-(BOOL)shouldDisplaySubtitles;
-(void)setShouldDisplayCaptions:(BOOL)arg1 ;
-(BOOL)shouldDisplayCaptions;
-(void)setShouldDisplayTextDescriptions:(BOOL)arg1 ;
-(BOOL)shouldDisplayTextDescriptions;
-(void)setRegionBasedColumnsEnabled:(BOOL)arg1 ;
-(BOOL)regionBasedColumnsEnabled;
-(void)setShouldRespectImageOrientation:(BOOL)arg1 ;
-(BOOL)shouldRespectImageOrientation;
-(BOOL)requestAnimationFrameEnabled;
-(void)setRequestAnimationFrameEnabled:(BOOL)arg1 ;
-(void)setIncrementalRenderingSuppressionTimeoutInSeconds:(double)arg1 ;
-(double)incrementalRenderingSuppressionTimeoutInSeconds;
-(BOOL)diagnosticLoggingEnabled;
-(void)setDiagnosticLoggingEnabled:(BOOL)arg1 ;
-(BOOL)screenFontSubstitutionEnabled;
-(void)setScreenFontSubstitutionEnabled:(BOOL)arg1 ;
-(void)setStorageBlockingPolicy:(int)arg1 ;
-(int)storageBlockingPolicy;
-(BOOL)plugInSnapshottingEnabled;
-(void)setPlugInSnapshottingEnabled:(BOOL)arg1 ;
-(BOOL)hiddenPageDOMTimerThrottlingEnabled;
-(void)setHiddenPageDOMTimerThrottlingEnabled:(BOOL)arg1 ;
-(BOOL)hiddenPageCSSAnimationSuspensionEnabled;
-(void)setHiddenPageCSSAnimationSuspensionEnabled:(BOOL)arg1 ;
-(BOOL)lowPowerVideoAudioBufferSizeEnabled;
-(void)setLowPowerVideoAudioBufferSizeEnabled:(BOOL)arg1 ;
-(BOOL)privateBrowsingEnabled;
-(void)setCacheModel:(unsigned)arg1 ;
@end

