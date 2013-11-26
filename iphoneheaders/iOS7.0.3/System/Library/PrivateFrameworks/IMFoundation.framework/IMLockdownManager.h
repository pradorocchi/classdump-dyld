/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:52 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface IMLockdownManager : NSObject {

	BOOL _settingUpActivationState;
	BOOL _isInternalInstall;
	BOOL _isCarrierInstall;
	BOOL _isVendorInstall;
	BOOL _hasShownMismatchedSIM;
	BOOL _hasShownWaitingAlertThisSession;
	unsigned _state;

}

@property (nonatomic,readonly) BOOL isVendorInstall; 
@property (nonatomic,readonly) BOOL isInternalInstall; 
@property (nonatomic,readonly) BOOL isCarrierInstall; 
@property (nonatomic,readonly) BOOL isActivated; 
@property (nonatomic,readonly) BOOL isExpired; 
@property (nonatomic,readonly) NSString * uniqueDeviceIdentifier; 
@property (assign,setter=_setState:,nonatomic) unsigned _state;                  //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL _settingUpActivationState;                     //@synthesize settingUpActivationState=_settingUpActivationState - In the implementation block
@property (assign,nonatomic) BOOL _isVendorInstall;                              //@synthesize isVendorInstall=_isVendorInstall - In the implementation block
@property (assign,nonatomic) BOOL _isInternalInstall;                            //@synthesize isInternalInstall=_isInternalInstall - In the implementation block
@property (assign,nonatomic) BOOL _isCarrierInstall;                             //@synthesize isCarrierInstall=_isCarrierInstall - In the implementation block
@property (assign,nonatomic) BOOL _hasShownWaitingAlertThisSession;              //@synthesize hasShownWaitingAlertThisSession=_hasShownWaitingAlertThisSession - In the implementation block
@property (assign,nonatomic) BOOL _hasShownMismatchedSIM;                        //@synthesize hasShownMismatchedSIM=_hasShownMismatchedSIM - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)description;
-(unsigned)_state;
-(void)_setState:(unsigned)arg1 ;
-(BOOL)_isInternalInstall;
-(BOOL)isVendorInstall;
-(void)_calculateInstallType;
-(void)_setupActivationState;
-(int)lockdownState;
-(void)_activationFailed;
-(void)_resetActivationState;
-(BOOL)isCarrierInstall;
-(id)uniqueDeviceIdentifier;
-(BOOL)_settingUpActivationState;
-(void)set_settingUpActivationState:(BOOL)arg1 ;
-(void)set_isInternalInstall:(BOOL)arg1 ;
-(BOOL)_isCarrierInstall;
-(void)set_isCarrierInstall:(BOOL)arg1 ;
-(BOOL)_isVendorInstall;
-(void)set_isVendorInstall:(BOOL)arg1 ;
-(BOOL)_hasShownMismatchedSIM;
-(void)set_hasShownMismatchedSIM:(BOOL)arg1 ;
-(BOOL)_hasShownWaitingAlertThisSession;
-(void)set_hasShownWaitingAlertThisSession:(BOOL)arg1 ;
-(BOOL)isInternalInstall;
-(BOOL)isExpired;
-(BOOL)isActivated;
@end

