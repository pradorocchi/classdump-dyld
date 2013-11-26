/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AVFoundation/MCProfileConnectionObserver.h>

@interface _MPRadioStaticProfileConnectionObserver : NSObject <MCProfileConnectionObserver> {

	BOOL _isProfileExplicitContentRestricted;

}

@property (nonatomic,readonly) BOOL isProfileExplicitContentRestricted;              //@synthesize isProfileExplicitContentRestricted=_isProfileExplicitContentRestricted - In the implementation block
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)isProfileExplicitContentRestricted;
-(void)dealloc;
-(id)init;
@end

