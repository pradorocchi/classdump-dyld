/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SetupAssistantBundles/iCloudSetupAssistant.bundle/iCloudSetupAssistant
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol AASetupAssistantDelegateService
@optional
-(void)setupOperationFailed;
-(BOOL)canAutoSetupMailAccount:(id)arg1;
-(BOOL)needSetupForMailAccount:(id)arg1;
-(void)setupMailAccount:(id)arg1 password:(id)arg2 handler:(/*^block*/ id)arg3;
-(void)verifyAccountWithAppleID:(id)arg1 handler:(/*^block*/ id)arg2;
-(void)setCloudServicesEnabled:(BOOL)arg1 handler:(/*^block*/ id)arg2;
-(void)setDeviceLocatorEnabled:(BOOL)arg1;
-(void)setBackupEnabled:(BOOL)arg1 handler:(/*^block*/ id)arg2;
-(void)completeEnablingCloudServicesWithHandler:(/*^block*/ id)arg1;

@required
-(id)delegateServiceIdentifier;
-(id)accountSetupRequestParameters;
-(void)completeSetupWithResponseParameters:(id)arg1 handler:(/*^block*/ id)arg2;
@end

