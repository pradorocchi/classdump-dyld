/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AdSheet.app/AdSheet
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebKit/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class CLLocation, NSLock, CLLocationManager, NSObject;

@interface ADLocationManager : NSObject <CLLocationManagerDelegate> {

	BOOL _locationServicesEnabled;
	int _authorizationStatus;
	CLLocation* _location;
	NSLock* _statusLock;
	CLLocationManager* _locationManager;
	NSObject<OS_dispatch_queue>* _queue;

}

@property (assign,nonatomic) BOOL locationServicesEnabled;                       //@synthesize locationServicesEnabled=_locationServicesEnabled - In the implementation block
@property (assign,nonatomic) int authorizationStatus;                            //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (nonatomic,retain) CLLocation * location;                              //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSLock * statusLock;                                //@synthesize statusLock=_statusLock - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;                //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * queue;              //@synthesize queue=_queue - In the implementation block
+(id)sharedManager;
-(void)updateAuthorizationStatus;
-(id)statusLock;
-(void)_updateLocation;
-(BOOL)_locationIsSufficientlyAccurateAndRecent:(id)arg1 ;
-(void)setStatusLock:(id)arg1 ;
-(void)setLocationServicesEnabled:(BOOL)arg1 ;
-(id)init;
-(id)location;
-(int)authorizationStatus;
-(id)queue;
-(BOOL)locationServicesEnabled;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id)locationManager;
-(void)setLocationManager:(id)arg1 ;
-(void)setAuthorizationStatus:(int)arg1 ;
-(void)setLocation:(id)arg1 ;
@end

