/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iAd/ADBannerViewInternalDelegate.h>
#import <iAd/ADInterstitialAdDelegate.h>

@class NSMutableArray, NSData, NSError, NSArray, ADInterstitialAd, NSString, NSURL, ADBannerView;

@interface ADPolicyEngine : NSObject <ADBannerViewInternalDelegate, ADInterstitialAdDelegate> {

	BOOL _visuallyEngaged;
	BOOL _enabled;
	BOOL _sharedInterstitialAdIsInUse;
	BOOL _sharedMediaPlayerVideoAdClaimed;
	NSMutableArray* _queuedCommands;
	NSData* _heartbeatToken;
	NSError* _heartbeatTokenError;
	NSArray* _policyEngineBanners;
	/*^block*/ id _eventResponseHandler;
	ADInterstitialAd* _sharedInterstitialAd;
	NSString* _sharedInterstitialSection;
	NSURL* _sharedInterstitialServerURL;
	NSString* _sharedInterstitialAuthenticationUserName;
	ADBannerView* _sharedMediaPlayerVideoAd;
	NSError* _lastSharedMediaPlayerVideoAdError;
	NSData* _currentStationData;
	NSArray* _currentStationDataInitialTrackBlobs;
	NSData* _currentSongData;
	NSArray* _currentSponsoredStationIDs;
	double _heartbeatTokenExpiration;
	double _lastEventTime;
	double _lastStoryboardDismissalTime;
	double _lastPrerollPlaybackTime;

}

@property (assign,nonatomic) BOOL visuallyEngaged;                                           //@synthesize visuallyEngaged=_visuallyEngaged - In the implementation block
@property (nonatomic,readonly) NSMutableArray * queuedCommands;                              //@synthesize queuedCommands=_queuedCommands - In the implementation block
@property (nonatomic,retain) NSData * heartbeatToken;                                        //@synthesize heartbeatToken=_heartbeatToken - In the implementation block
@property (nonatomic,retain) NSError * heartbeatTokenError;                                  //@synthesize heartbeatTokenError=_heartbeatTokenError - In the implementation block
@property (assign,nonatomic) double heartbeatTokenExpiration;                                //@synthesize heartbeatTokenExpiration=_heartbeatTokenExpiration - In the implementation block
@property (nonatomic,retain) NSArray * policyEngineBanners;                                  //@synthesize policyEngineBanners=_policyEngineBanners - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                   //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) double lastEventTime;                                           //@synthesize lastEventTime=_lastEventTime - In the implementation block
@property (nonatomic,copy) id eventResponseHandler;                                          //@synthesize eventResponseHandler=_eventResponseHandler - In the implementation block
@property (assign,nonatomic) double lastStoryboardDismissalTime;                             //@synthesize lastStoryboardDismissalTime=_lastStoryboardDismissalTime - In the implementation block
@property (assign,nonatomic) double lastPrerollPlaybackTime;                                 //@synthesize lastPrerollPlaybackTime=_lastPrerollPlaybackTime - In the implementation block
@property (nonatomic,retain) ADInterstitialAd * sharedInterstitialAd;                        //@synthesize sharedInterstitialAd=_sharedInterstitialAd - In the implementation block
@property (assign,nonatomic) BOOL sharedInterstitialAdIsInUse;                               //@synthesize sharedInterstitialAdIsInUse=_sharedInterstitialAdIsInUse - In the implementation block
@property (nonatomic,copy) NSString * sharedInterstitialSection;                             //@synthesize sharedInterstitialSection=_sharedInterstitialSection - In the implementation block
@property (nonatomic,copy) NSURL * sharedInterstitialServerURL;                              //@synthesize sharedInterstitialServerURL=_sharedInterstitialServerURL - In the implementation block
@property (nonatomic,copy) NSString * sharedInterstitialAuthenticationUserName;              //@synthesize sharedInterstitialAuthenticationUserName=_sharedInterstitialAuthenticationUserName - In the implementation block
@property (nonatomic,retain) ADBannerView * sharedMediaPlayerVideoAd;                        //@synthesize sharedMediaPlayerVideoAd=_sharedMediaPlayerVideoAd - In the implementation block
@property (assign,nonatomic) BOOL sharedMediaPlayerVideoAdClaimed;                           //@synthesize sharedMediaPlayerVideoAdClaimed=_sharedMediaPlayerVideoAdClaimed - In the implementation block
@property (nonatomic,retain) NSError * lastSharedMediaPlayerVideoAdError;                    //@synthesize lastSharedMediaPlayerVideoAdError=_lastSharedMediaPlayerVideoAdError - In the implementation block
@property (nonatomic,retain) NSData * currentStationData;                                    //@synthesize currentStationData=_currentStationData - In the implementation block
@property (nonatomic,retain) NSArray * currentStationDataInitialTrackBlobs;                  //@synthesize currentStationDataInitialTrackBlobs=_currentStationDataInitialTrackBlobs - In the implementation block
@property (nonatomic,retain) NSData * currentSongData;                                       //@synthesize currentSongData=_currentSongData - In the implementation block
@property (nonatomic,retain) NSArray * currentSponsoredStationIDs;                           //@synthesize currentSponsoredStationIDs=_currentSponsoredStationIDs - In the implementation block
+(id)sharedEngine;
-(id)heartbeatToken:(id*)arg1 ;
-(void)optimalTransmissionWindowDidOpen;
-(void)reportListeningPresenceEvent:(int)arg1 ;
-(void)songBeganWithTags:(id)arg1 ;
-(void)songStopped;
-(void)setStationData:(id)arg1 withInitialTrackBlobs:(id)arg2 ;
-(void)enablePolicyEngine;
-(void)disablePolicyEngine;
-(void)songSkipped;
-(void)setVisuallyEngaged:(BOOL)arg1 ;
-(void)bannerViewWillLoadAd:(id)arg1 ;
-(void)bannerViewDidLoadAd:(id)arg1 ;
-(void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(BOOL)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2 ;
-(void)bannerViewActionDidFinish:(id)arg1 ;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)enabled;
-(void)interstitialAdDidUnload:(id)arg1 ;
-(void)interstitialAdDidLoad:(id)arg1 ;
-(void)interstitialAd:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_adSheetConnectionBootstrapped;
-(void)setHeartbeatToken:(id)arg1 expirationDate:(double)arg2 error:(id)arg3 ;
-(void)setLastStoryboardDismissalTime:(double)arg1 ;
-(void)finishedPresentingSharedInterstitialAd;
-(void)_enablePolicyEngineWithReason:(id)arg1 ;
-(id)queuedCommands;
-(BOOL)visuallyEngaged;
-(id)currentStationData;
-(id)currentStationDataInitialTrackBlobs;
-(id)currentSponsoredStationIDs;
-(void)setSponsoredStationIDs:(id)arg1 ;
-(id)currentSongData;
-(double)lastEventTime;
-(void)setHeartbeatToken:(id)arg1 ;
-(void)setHeartbeatTokenError:(id)arg1 ;
-(void)setHeartbeatTokenExpiration:(double)arg1 ;
-(id)heartbeatTokenError;
-(id)heartbeatToken;
-(double)heartbeatTokenExpiration;
-(void)_performWhenAdSheetConnectionEstablished:(/*^block*/ id)arg1 ;
-(id)policyEngineBanners;
-(void)setCurrentSongData:(id)arg1 ;
-(void)setCurrentStationData:(id)arg1 ;
-(void)setCurrentStationDataInitialTrackBlobs:(id)arg1 ;
-(void)setLastEventTime:(double)arg1 ;
-(void)setEventResponseHandler:(/*^block*/ id)arg1 ;
-(id)_bannerViewForCreativeType:(int)arg1 ;
-(void)setPolicyEngineBanners:(id)arg1 ;
-(id)_policyEngineBannerViewWithIdentifier:(id)arg1 ;
-(/*^block*/ id)eventResponseHandler;
-(void)setCurrentSponsoredStationIDs:(id)arg1 ;
-(id)sharedInterstitialServerURL;
-(id)sharedInterstitialSection;
-(id)sharedInterstitialAuthenticationUserName;
-(id)sharedInterstitialAd;
-(BOOL)sharedInterstitialAdIsInUse;
-(double)lastStoryboardDismissalTime;
-(void)setSharedInterstitialAdIsInUse:(BOOL)arg1 ;
-(void)setSharedMediaPlayerVideoAd:(id)arg1 ;
-(id)sharedMediaPlayerVideoAd;
-(BOOL)sharedMediaPlayerVideoAdClaimed;
-(id)lastSharedMediaPlayerVideoAdError;
-(double)lastPrerollPlaybackTime;
-(void)setSharedMediaPlayerVideoAdClaimed:(BOOL)arg1 ;
-(void)setLastSharedMediaPlayerVideoAdError:(id)arg1 ;
-(void)sharedMediaPlayerVideoAdWillLoad;
-(void)sharedMediaPlayerVideoAdDidLoad;
-(void)sharedMediaPlayerVideoAdDidFailToReceiveAdWithError:(id)arg1 ;
-(void)sharedMediaPlayerVideoAdActionDidFinish;
-(void)recordPolicyEvent:(int)arg1 trackTags:(id)arg2 ;
-(void)reportStationTileImpression:(id)arg1 ;
-(void)removeRecordForAccountWithIdentifier:(id)arg1 ;
-(void)setSharedInterstitialSection:(id)arg1 ;
-(void)setSharedInterstitialServerURL:(id)arg1 ;
-(void)setSharedInterstitialAuthenticationUserName:(id)arg1 ;
-(BOOL)canPresentSharedInterstitialAdWithResultMessage:(id*)arg1 ;
-(BOOL)claimSharedMediaPlayerVideoAdWithError:(id*)arg1 ;
-(void)relinquishSharedMediaPlayerVideoAd;
-(void)setLastPrerollPlaybackTime:(double)arg1 ;
-(void)setSharedInterstitialAd:(id)arg1 ;
@end

