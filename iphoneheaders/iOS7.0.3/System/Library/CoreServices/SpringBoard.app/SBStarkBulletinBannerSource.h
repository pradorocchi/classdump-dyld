/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SpringBoard/SBStarkBannerSource.h>
#import <MobileMail/BBObserverDelegate.h>
#import <SpringBoard/SBVolumePressBandit.h>

@class BBObserver, NSSet;

@interface SBStarkBulletinBannerSource : SBStarkBannerSource <BBObserverDelegate, SBVolumePressBandit> {

	BBObserver* _bbObserver;
	NSSet* _whitelistedSectionIDs;

}
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(void)_reloadVolumePressBanditPreference;
-(void)_showTestBanner:(id)arg1 ;
-(id)initWithAllowedTarget:(id)arg1 ;
-(BOOL)_shouldShowBulletin:(id)arg1 ;
-(void)dealloc;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned)arg3 ;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2 ;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 ;
-(void)observer:(id)arg1 noteServerReceivedResponseForBulletin:(id)arg2 ;
@end

