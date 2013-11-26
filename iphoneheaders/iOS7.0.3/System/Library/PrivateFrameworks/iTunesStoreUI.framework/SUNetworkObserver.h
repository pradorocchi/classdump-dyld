/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:54 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISSingleton.h>
#import <iTunesStore/ISStoreURLOperationDelegate.h>

@class ISStoreURLOperation, NSString, NSTimer;

@interface SUNetworkObserver : NSObject <ISSingleton, ISStoreURLOperationDelegate> {

	ISStoreURLOperation* _partnerDetectOperation;
	BOOL _partnersEnabled;
	NSString* _partnerIdentifier;
	NSTimer* _startupTimer;

}

@property (nonatomic,retain) NSString * partnerIdentifier;              //@synthesize partnerIdentifier=_partnerIdentifier - In the implementation block
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)partnerIdentifier;
-(void)_partnerHeaderChanged:(id)arg1 ;
-(void)_networkTypeChanged:(id)arg1 ;
-(void)_networkUsageStateChanged:(id)arg1 ;
-(void)_cancelStartupTimer;
-(void)_startupTimer:(id)arg1 ;
-(void)_handleNetworkTypeChange:(id)arg1 ;
-(void)_handleUsingNetworkChange:(id)arg1 ;
-(void)_mainThreadSetPartnerIdentifier:(id)arg1 ;
-(void)_mainThreadHandleNetworkTypeChange:(id)arg1 ;
-(void)_mainThreadScheduleNetworkActivityUpdate;
-(void)_updateNetworkActivityIndicator;
-(void)setPartnerIdentifier:(id)arg1 ;
-(void)checkPartnerAvailability;
-(void)setPartnersEnabled:(BOOL)arg1 ;
-(void)startNetworkAvailabilityTimer;
@end

