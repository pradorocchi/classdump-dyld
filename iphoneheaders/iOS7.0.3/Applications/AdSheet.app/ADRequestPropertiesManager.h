/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AdSheet.app/AdSheet
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface ADRequestPropertiesManager : NSObject {

	BOOL _hasDeterminedRoamingStatus;
	BOOL _internationalRoaming;
	NSString* _iTunesStorefront;
	NSString* _hardwareName;
	NSString* _osVersion;
	NSString* _homeCarrierMCC;
	NSString* _homeCarrierMNC;
	NSString* _currentCarrierMCC;
	NSString* _currentCarrierMNC;

}

@property (nonatomic,readonly) BOOL hasDeterminedRoamingStatus;              //@synthesize hasDeterminedRoamingStatus=_hasDeterminedRoamingStatus - In the implementation block
@property (nonatomic,readonly) NSString * iTunesStorefront;                  //@synthesize iTunesStorefront=_iTunesStorefront - In the implementation block
@property (nonatomic,readonly) NSString * hardwareName;                      //@synthesize hardwareName=_hardwareName - In the implementation block
@property (nonatomic,readonly) NSString * osVersion;                         //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,copy) NSString * homeCarrierMCC;                        //@synthesize homeCarrierMCC=_homeCarrierMCC - In the implementation block
@property (nonatomic,copy) NSString * homeCarrierMNC;                        //@synthesize homeCarrierMNC=_homeCarrierMNC - In the implementation block
@property (nonatomic,copy) NSString * currentCarrierMCC;                     //@synthesize currentCarrierMCC=_currentCarrierMCC - In the implementation block
@property (nonatomic,copy) NSString * currentCarrierMNC;                     //@synthesize currentCarrierMNC=_currentCarrierMNC - In the implementation block
@property (assign,nonatomic) BOOL internationalRoaming;                      //@synthesize internationalRoaming=_internationalRoaming - In the implementation block
+(id)sharedManager;
-(id)iTunesStorefront;
-(BOOL)hasDeterminedRoamingStatus;
-(id)requestPropertiesForClient:(id)arg1 ;
-(void)setITunesStorefront:(id)arg1 ;
-(void)_gatherTelephonyData;
-(BOOL)_hasRequiredProperties;
-(void)_considerPostingRequiredPropertiesAcquired;
-(void)setHomeCarrierMNC:(id)arg1 ;
-(void)setHomeCarrierMCC:(id)arg1 ;
-(void)setCurrentCarrierMNC:(id)arg1 ;
-(void)setCurrentCarrierMCC:(id)arg1 ;
-(void)setInternationalRoaming:(BOOL)arg1 ;
-(void)setHasDeterminedRoamingStatus:(BOOL)arg1 ;
-(id)homeCarrierMCC;
-(id)homeCarrierMNC;
-(id)currentCarrierMCC;
-(id)currentCarrierMNC;
-(BOOL)internationalRoaming;
-(id)_contentRestrictions;
-(id)osVersion;
-(id)init;
-(id)hardwareName;
@end

