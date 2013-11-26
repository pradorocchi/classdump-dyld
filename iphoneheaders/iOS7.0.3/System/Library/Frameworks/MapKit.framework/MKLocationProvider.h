/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:18 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MKLocationProvider <NSObject>
@property (assign,nonatomic) <MKLocationProviderDelegate> * delegate; 
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) BOOL locationServicesPreferencesDialogEnabled; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) int authorizationStatus; 
@property (nonatomic,readonly) BOOL airplaneModeBlocksLocation; 
@property (assign,nonatomic) int activityType; 
@property (nonatomic,readonly) BOOL usesCLMapCorrection; 
@property (getter=isMonitoringRegionsAvailable,nonatomic,readonly) BOOL monitoringRegionsAvailable; 
@required
-(double)distanceFilter;
-(double)desiredAccuracy;
-(double)expectedGpsUpdateInterval;
-(int)headingOrientation;
-(void)dismissHeadingCalibrationDisplay;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1;
-(void)startMonitoringRegion:(id)arg1;
-(void)stopMonitoringRegion:(id)arg1;
-(id)effectiveBundleIdentifier;
-(void)setEffectiveBundleIdentifier:(id)arg1;
-(BOOL)airplaneModeBlocksLocation;
-(BOOL)usesCLMapCorrection;
-(BOOL)isMonitoringRegionsAvailable;
-(void)setEffectiveBundle:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id)delegate;
-(id)effectiveBundle;
-(int)activityType;
-(int)authorizationStatus;
-(void)setDistanceFilter:(double)arg1;
-(void)setDesiredAccuracy:(double)arg1;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)setHeadingOrientation:(int)arg1;
-(void)stopUpdatingHeading;
-(void)startUpdatingHeading;
-(void)setActivityType:(int)arg1;
@end

