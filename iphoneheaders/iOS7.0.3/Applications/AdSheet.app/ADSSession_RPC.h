/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AdSheet.app/AdSheet
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol ADSSession_RPC
@required
-(void)_priv_setServerURL:(id)arg1;
-(void)_remote_setClientLinkedOnVersion:(id)arg1;
-(void)_remote_enablePolicyEngine;
-(void)_remote_forwardDeviceOrientation:(int)arg1 statusBarOrientation:(int)arg2;
-(void)_remote_willResignActive;
-(void)_remote_didBecomeActive;
-(void)_remote_createProxyForAdSpace:(id)arg1 configuration:(id)arg2 reply:(/*^block*/ id)arg3;
-(void)_remote_disablePolicyEngine;
-(void)_remote_setVisuallyEngaged:(BOOL)arg1;
-(void)_remote_songBegan:(id)arg1 bannerIdentifiers:(id)arg2 reply:(/*^block*/ id)arg3;
-(void)_remote_songStopped;
-(void)_remote_songSkipped;
-(void)_remote_setStationData:(id)arg1 initialTrackBlobs:(id)arg2 bannerIdentifiers:(id)arg3 reply:(/*^block*/ id)arg4;
-(void)_remote_setSponsoredStationIDs:(id)arg1;
-(void)_remote_optimalTransmissionWindowDidOpen;
-(void)_remote_reportListeningPresenceEvent:(int)arg1;
-(void)_remote_reportStationTileImpression:(id)arg1;
-(void)_priv_removeRecordForAccountWithIdentifier:(id)arg1;
@end

