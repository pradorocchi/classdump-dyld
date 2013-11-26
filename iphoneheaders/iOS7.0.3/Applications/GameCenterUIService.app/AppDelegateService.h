/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/GameCenterUIService.app/GameCenterUIService
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GameCenterUIService/GameCenterUIService-Structs.h>
#import <UIKit/UIApplicationDelegate.h>
#import <Game Center~iphone/GKDaemonProxyDataUpdateDelegate.h>

@class UIWindow;

@interface AppDelegateService : NSObject <UIApplicationDelegate, GKDaemonProxyDataUpdateDelegate>

@property (nonatomic,retain) UIWindow * window; 
-(void)setLocalPlayer:(id)arg1 ;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 ;
-(id)init;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
@end

