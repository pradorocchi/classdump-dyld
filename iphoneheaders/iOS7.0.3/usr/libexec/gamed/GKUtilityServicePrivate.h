/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <gamed/GKUtilityService.h>
#import <GameCenterFoundation/GKUtilityServicePrivate.h>

@protocol GKUtilityServicePrivate <GKUtilityService>
@required
-(oneway void)loadDataForURL:(id)arg1 postBody:(id)arg2 completionHandler:(/*^block*/ id)arg3;
-(oneway void)refreshPreferences;
-(oneway void)updateNotificationTopics;
-(oneway void)terminateWithHandler:(/*^block*/ id)arg1;
-(oneway void)pingWithHandler:(/*^block*/ id)arg1;
-(oneway void)openSettings;
@end


@interface GKUtilityServicePrivate : GKUtilityService <GKUtilityServicePrivate>
+(Class)interfaceClass;
+(unsigned long)requiredEntitlements;
-(oneway void)loadDataForURL:(id)arg1 postBody:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(oneway void)refreshPreferences;
-(oneway void)updateNotificationTopics;
-(oneway void)terminateWithHandler:(/*^block*/ id)arg1 ;
-(oneway void)pingWithHandler:(/*^block*/ id)arg1 ;
-(oneway void)openSettings;
@end

