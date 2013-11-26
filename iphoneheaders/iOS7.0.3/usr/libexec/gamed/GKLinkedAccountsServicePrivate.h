/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <gamed/GKLinkedAccountsService.h>
#import <GameCenterFoundation/GKLinkedAccountsServicePrivate.h>

@protocol GKLinkedAccountsServicePrivate <GKLinkedAccountsService>
@required
-(oneway void)connectExternalService:(BOOL)arg1 handler:(/*^block*/ id)arg2;
-(oneway void)disconnectExternalService:(BOOL)arg1 handler:(/*^block*/ id)arg2;
-(oneway void)notifyAvailableExternalServicesWithHandler:(/*^block*/ id)arg1;
-(oneway void)availableExternalServicesWithHandler:(/*^block*/ id)arg1;
-(oneway void)getAuthTokenForExternalService:(BOOL)arg1 handler:(/*^block*/ id)arg2;
@end


@interface GKLinkedAccountsServicePrivate : GKLinkedAccountsService <GKLinkedAccountsServicePrivate>
+(Class)interfaceClass;
+(unsigned long)requiredEntitlements;
-(void)refreshRecommendationsWithHandler:(/*^block*/ id)arg1 ;
-(void)setUserID:(id)arg1 forService:(BOOL)arg2 ;
-(void)addLinkedAccountForService:(BOOL)arg1 userID:(id)arg2 userName:(id)arg3 authToken:(id)arg4 syncContacts:(BOOL)arg5 handler:(/*^block*/ id)arg6 ;
-(void)linkFacebookAccountWithHandler:(/*^block*/ id)arg1 ;
-(void)linkICloudAccountWithHandler:(/*^block*/ id)arg1 ;
-(void)removeLinkedAccountForService:(BOOL)arg1 userID:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(BOOL)isLocalPlayerUnderage;
-(BOOL)permittedToLinkToAccountType:(id)arg1 accountStore:(id)arg2 ;
-(oneway void)connectExternalService:(BOOL)arg1 handler:(/*^block*/ id)arg2 ;
-(oneway void)disconnectExternalService:(BOOL)arg1 handler:(/*^block*/ id)arg2 ;
-(oneway void)notifyAvailableExternalServicesWithHandler:(/*^block*/ id)arg1 ;
-(oneway void)availableExternalServicesWithHandler:(/*^block*/ id)arg1 ;
-(oneway void)getAuthTokenForExternalService:(BOOL)arg1 handler:(/*^block*/ id)arg2 ;
@end

