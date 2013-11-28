/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
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
