/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:05:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/XPCServices/com.apple.weibo.xpc/com.apple.weibo
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <com.apple.weibo/com.apple.weibo-Structs.h>
#import <Social/SLRemoteSession.h>
#import <Social/SLWeiboRemoteSessionProtocol.h>
#import <WebKit/CLLocationManagerDelegate.h>

@class ACAccount, ACAccountStore, NSLock, CLLocationManager, SLPlace, WEDUserRecordStore, NSDictionary, NSMutableArray, CLLocation, NSString;

@interface WEDSession : SLRemoteSession <SLWeiboRemoteSessionProtocol, CLLocationManagerDelegate> {

	ACAccount* _activeAccount;
	ACAccountStore* _accountStore;
	NSLock* _locationStatusLock;
	int _geotagStatus;
	CLLocationManager* _locationManager;
	SCD_Struct_WE0 _currentLocation;
	SLPlace* _currentPlace;
	WEDUserRecordStore* _userRecordStore;
	NSDictionary* _clientInfo;
	NSLock* _sendCompletionsLock;
	NSMutableArray* _sendCompletions;
	NSDictionary* _overrideGeotagInfo;
	unsigned _warningAboutLocationAuth : 1;
	CLLocation* _location;
	NSString* _permaLinkOfLastSuccessfulStatusUpdate;
	NSString* _updateIdentifier;
	NSString* _userIdentifier;
	CLLocation* _shiftedLocation;

}
-(void)_startUpdatingLocation;
-(void)_warnAboutNetworksIfNeeded;
-(void)_accountStoreChanged:(id)arg1 ;
-(void)_stopUpdatingLocation:(BOOL)arg1 ;
-(id)_sessionInfo;
-(int)_lastFetchedUrlMaxLength:(BOOL*)arg1 ;
-(void)_recordFetchedUrlMaxLength:(int)arg1 ;
-(int)_lastFetchedImageSizeLimit:(BOOL*)arg1 ;
-(void)_recordFetchedImageSizeLimit:(int)arg1 ;
-(BOOL)_nts_geotagFetchingDeniedByUser;
-(void)_setGeotagStatus:(int)arg1 notifyClient:(BOOL)arg2 ;
-(void)_completeSendBlock:(/*^block*/ id)arg1 ;
-(BOOL)_statusRequiresMultiPart:(id)arg1 ;
-(void)_sendMultiPartStatus:(id)arg1 copiedCompletion:(/*^block*/ id)arg2 ;
-(void)_sendSimpleStatus:(id)arg1 copiedCompletion:(/*^block*/ id)arg2 ;
-(int)_callingPID;
-(void)_buildUserStore;
-(id)_currentLocation;
-(void)_nts_startUpdatingLocation;
-(void)_nts_stopUpdatingLocation:(BOOL)arg1 ;
-(void)_locateOverridenGeotagInfo;
-(void)_notifyClientOfLocationInfoChange;
-(id)_nts_locationManager;
-(void)_updateLocationStateWithCLPlacemarks:(id)arg1 ;
-(id)_currentLocationInfo;
-(void)_fetchNearbyPlace:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)_fetchNearbyPlacesWithCoreLocation:(id)arg1 ;
-(float)_nts_clientScale;
-(CGSize)_nts_clientLocationViewSize;
-(void)_showGeotagDisabledForAccountAlert:(/*^block*/ id)arg1 ;
-(void)_fetchGeotagAccountSetting:(/*^block*/ id)arg1 ;
-(int)_lastFetchedTcnLength:(BOOL*)arg1 ;
-(void)_recordFetchedTcnLength:(int)arg1 ;
-(void)_handleRetryWeibo:(id)arg1 response:(id)arg2 responseObject:(id)arg3 copiedCompletion:(/*^block*/ id)arg4 error:(id)arg5 ;
-(void)_fetchProfileImageInfoForUID:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)_fetchProfileImageDataFromSinaForScreenName:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(BOOL)_weiboWasADuplicate:(id)arg1 errorString:(id)arg2 ;
-(BOOL)_wasWeiboLimitReached:(id)arg1 responseObject:(id)arg2 ;
-(BOOL)_weiboAuthenticationFailure:(id)arg1 errorString:(id)arg2 ;
-(id)weiboIconURL;
-(void)_updateLocationStateWithWeiboPlace:(id)arg1 ;
-(void)_notifyUserAboutDisallowedLocation;
-(void)setGeotagStatus:(id)arg1 ;
-(void)checkIn:(id)arg1 ;
-(void)setActiveAccountIdentifier:(id)arg1 ;
-(void)fetchSessionInfo:(/*^block*/ id)arg1 ;
-(void)ensureUserRecordStore;
-(void)fetchRecordForScreenName:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)fetchProfileImageDataForScreenName:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)recordsMatchingPrefixString:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)fetchCurrentUrlLimits:(/*^block*/ id)arg1 ;
-(void)fetchCurrentImageLimits:(/*^block*/ id)arg1 ;
-(void)fetchRelationshipWithScreenName:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)setOverrideGeotagInfo:(id)arg1 ;
-(void)fetchGeotagStatus:(/*^block*/ id)arg1 ;
-(void)setGeotagAccountSetting:(id)arg1 withCompletion:(/*^block*/ id)arg2 ;
-(void)sendStatus:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)showWeiboSettingsIfNeeded:(/*^block*/ id)arg1 ;
-(void)getPermaLinkFromLastStatusUpdate:(/*^block*/ id)arg1 ;
-(id)initWithConnection:(id)arg1 database:(id)arg2 ;
-(void)dealloc;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void).cxx_destruct;
-(id)_accountStore;
@end

