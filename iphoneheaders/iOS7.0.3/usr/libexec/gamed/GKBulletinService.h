/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <gamed/GKService.h>
#import <GameCenterFoundation/GKBulletinService.h>

@protocol GKBulletinService <NSObject>
@required
-(oneway void)handleBulletinResponse:(id)arg1;
@end


@interface GKBulletinService : GKService <GKBulletinService>
+(Class)interfaceClass;
+(unsigned long)requiredEntitlements;
+(BOOL)requiresAuthentication;
-(oneway void)handleBulletinResponse:(id)arg1 ;
@end

