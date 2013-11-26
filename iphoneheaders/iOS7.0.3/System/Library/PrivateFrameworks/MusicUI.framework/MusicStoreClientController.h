/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:18 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/SUClientController.h>
#import <AVFoundation/MCProfileConnectionObserver.h>
#import <Foundation/SSDownloadManagerObserver.h>

@interface MusicStoreClientController : SUClientController <MCProfileConnectionObserver, SSDownloadManagerObserver> {

	BOOL _hasContinueSearchCapability;
	BOOL _isUsingNetwork;

}

@property (nonatomic,readonly) BOOL hasStoreSearchCapability; 
+(id)sharedController;
+(id)musicStoreURLWithAction:(id)arg1 ;
+(id)continueSearchingURLForMediaType:(unsigned)arg1 searchString:(id)arg2 ;
+(void)setSharedController:(id)arg1 ;
-(void)downloadManagerNetworkUsageDidChange:(id)arg1 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(BOOL)_isStoreRestricted;
-(BOOL)hasStoreSearchCapability;
-(id)initWithClientIdentifier:(id)arg1 ;
@end

