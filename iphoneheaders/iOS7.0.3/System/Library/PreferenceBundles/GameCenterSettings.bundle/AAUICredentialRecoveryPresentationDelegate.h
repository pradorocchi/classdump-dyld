/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:06:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/GameCenterSettings.bundle/GameCenterSettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol AAUICredentialRecoveryPresentationDelegate
@optional
-(id)navigationControllerForPresentationWithCredentialRecoveryController:(id)arg1;

@required
-(void)credentialRecoveryController:(id)arg1 needsPresentationOfViewController:(id)arg2;
-(void)credentialRecoveryController:(id)arg1 finishedWithSuccess:(BOOL)arg2;
-(void)credentialRecoveryController:(id)arg1 didFailWithError:(id)arg2;
@end

