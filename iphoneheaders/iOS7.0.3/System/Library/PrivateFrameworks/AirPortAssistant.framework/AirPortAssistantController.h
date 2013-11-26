/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:40 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface AirPortAssistantController : NSObject {

	id _delegate;
	id _viewController;
	id _context;
	NSString* _configuredSSID;

}

@property (assign,nonatomic) <AirPortAssistantControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) id context;                                                             //@synthesize context=_context - In the implementation block
@property (retain) id viewController;                                                      //@synthesize viewController=_viewController - In the implementation block
@property (retain) NSString * configuredSSID;                                              //@synthesize configuredSSID=_configuredSSID - In the implementation block
+(id)sharedInstance;
+(void)downloadAssetsCancel;
+(void)downloadAssetsIfNeeded;
+(BOOL)launchAUForNetwork:(id)arg1 withMacAddress:(id)arg2 getAUFromAppStore:(BOOL)arg3 ;
+(id)assistantUIViewControllerWithParameters:(id)arg1 ;
+(void)cancelAirPortAssistantController;
+(BOOL)isAirPlayDevice:(id)arg1 ;
+(BOOL)isSTAOnlyDevice:(id)arg1 ;
+(BOOL)isGenericMFiAccessory:(id)arg1 ;
+(BOOL)isUnconfiguredDevice:(id)arg1 ;
+(id)unconfiguredDeviceName:(id)arg1 ;
+(id)uniqueBaseStationName:(id)arg1 withBssid:(id)arg2 ;
+(BOOL)launchAUForDevice:(id)arg1 getAUFromAppStore:(BOOL)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)context;
-(void)setContext:(id)arg1 ;
-(void)setViewController:(id)arg1 ;
-(id)viewController;
-(void)assistantCompleteWithResult:(long)arg1 ;
-(void)setConfiguredSSID:(id)arg1 ;
-(id)configuredSSID;
@end

