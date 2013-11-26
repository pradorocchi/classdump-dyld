/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:23 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/EasyConfig.framework/EasyConfig
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <EasyConfig/EasyConfig-Structs.h>
#import <CoreFoundation/NSCopying.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSDictionary, NSString;

@interface EasyConfigDevice : NSObject <NSCopying> {

	NSObject<OS_dispatch_queue>* _internalQueue;
	NSObject<OS_dispatch_queue>* _userQueue;
	NSDictionary* _scanRecord;
	BOOL _started;
	long _firstErr;
	BonjourBrowserRef _airplayBrowser;
	NSDictionary* _airplayBonjourInfo;
	BonjourBrowserRef _raopBrowser;
	NSDictionary* _raopBonjourInfo;
	BonjourBrowserRef _mfiConfigBrowser;
	NSDictionary* _mfiConfigBonjourInfo;
	unsigned _configSeed;
	HTTPClientPrivateRef _httpClient;
	NSObject<OS_dispatch_source>* _timeoutTimer;
	int _state;
	double _mfiSAPStartTime;
	double _mfiSAPFinishTime;
	MFiSAPRef _mfiSAP;
	unsigned long long _deviceIdentifier;
	unsigned long long _features;
	NSString* _model;
	NSString* _name;
	NSDictionary* _configuration;
	NSDictionary* _configResponse;
	BOOL _pausesAfterApply;
	BOOL _supportsTLV;
	BOOL _preConfigMetricsSet;
	SCD_Struct_Ea4 _preConfigMetrics;
	BOOL _postConfigMetricsSet;
	SCD_Struct_Ea5 _postConfigMetrics;
	double _configStartTime;
	double _findPreConfigStartTime;
	double _findPreConfigFoundTime;
	double _findPostConfigStartTime;
	double _findPostConfigFoundTime;
	double _applyConfigStartTime;
	double _applyConfigFinishTime;
	double _postConfigCheckStartTime;
	double _postConfigCheckFinishTime;

}

@property (assign,nonatomic) unsigned long long deviceIdentifier;                      //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (assign,nonatomic) NSObject<OS_dispatch_queue> * dispatchQueue;              //@synthesize userQueue=_userQueue - In the implementation block
@property (nonatomic,copy) NSDictionary * configuration;                               //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) unsigned long long features;                              //@synthesize features=_features - In the implementation block
@property (nonatomic,copy) NSString * model;                                           //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL pausesAfterApply;                                    //@synthesize pausesAfterApply=_pausesAfterApply - In the implementation block
+(id)deviceWithScanRecord:(id)arg1 ;
+(BOOL)supportedScanRecord:(id)arg1 ;
-(id)dispatchQueue;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setName:(id)arg1 ;
-(void)_start;
-(id)name;
-(id)model;
-(void)start;
-(void)stop;
-(id)configuration;
-(void)setConfiguration:(id)arg1 ;
-(void)resumePostConfig;
-(void)setPausesAfterApply:(BOOL)arg1 ;
-(void)setPreConfigMetrics:(const SCD_Struct_Ea4*)arg1 ;
-(void)setPostConfigMetrics:(const SCD_Struct_Ea5*)arg1 ;
-(void)setDispatchQueue:(id)arg1 ;
-(void)setModel:(id)arg1 ;
-(long)_findDevicePreConfigStart;
-(void)_stop:(long)arg1 ;
-(void)_logEnded;
-(void)_postNote:(id)arg1 info:(id)arg2 ;
-(long)_findDevicePostConfigStart;
-(void)_findDevicePreConfigEvent:(unsigned)arg1 info:(id)arg2 ;
-(long)_startBonjourWithTimeout:(int)arg1 handler:(/*^block*/ id)arg2 ;
-(void)_postProgress:(int)arg1 ;
-(long)_configureStart:(id)arg1 ;
-(long)_setupClient:(id)arg1 ;
-(long)_mfiSAPStart;
-(long)_mfiSAPNext:(HTTPMessagePrivate*)arg1 ;
-(long)_timeoutTimerStart:(unsigned)arg1 block:(/*^block*/ id)arg2 ;
-(long)_applyConfigStart;
-(void)_applyConfigCompletion:(HTTPMessagePrivate*)arg1 ;
-(void)_postProgress:(int)arg1 withResponse:(id)arg2 ;
-(void)_findDevicePostConfigEvent:(unsigned)arg1 info:(id)arg2 ;
-(void)_postConfigCheckStart:(id)arg1 ;
-(void)_postConfigCheckCompletion:(HTTPMessagePrivate*)arg1 ;
-(BOOL)updated:(id)arg1 ;
-(BOOL)removed:(id)arg1 ;
-(BOOL)pausesAfterApply;
-(void)_handleError:(long)arg1 ;
-(unsigned long long)features;
-(void)setFeatures:(unsigned long long)arg1 ;
-(void)setDeviceIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)deviceIdentifier;
@end

