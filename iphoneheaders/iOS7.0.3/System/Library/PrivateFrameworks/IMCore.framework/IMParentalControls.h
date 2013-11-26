/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:46 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary;

@interface IMParentalControls : NSObject {

	BOOL _shouldPostNotifications;
	BOOL _active;
	BOOL _disableAV;
	BOOL _forceChatLogging;
	NSMutableDictionary* _parentalControls;

}

@property (nonatomic,readonly) BOOL active;                                          //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) BOOL disableAV; 
@property (nonatomic,readonly) BOOL forceChatLogging; 
@property (assign,nonatomic) BOOL shouldPostNotifications;                           //@synthesize shouldPostNotifications=_shouldPostNotifications - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _parentalControls;              //@synthesize parentalControls=_parentalControls - In the implementation block
@property (nonatomic,readonly) BOOL _disableAV;                                      //@synthesize disableAV=_disableAV - In the implementation block
@property (nonatomic,readonly) BOOL _forceChatLogging;                               //@synthesize forceChatLogging=_forceChatLogging - In the implementation block
+(id)objectForKey:(id)arg1 ;
+(id)standardControls;
-(void)dealloc;
-(id)init;
-(BOOL)active;
-(BOOL)okToConnectAccount:(id)arg1 ;
-(void)setShouldPostNotifications:(BOOL)arg1 ;
-(void)_updateParentalSettings;
-(void)_managedPrefsNotification:(id)arg1 ;
-(id)_serviceWithName:(id)arg1 ;
-(BOOL)disableAV;
-(BOOL)forceChatLogging;
-(BOOL)disableService:(id)arg1 ;
-(id)whitelistForService:(id)arg1 ;
-(BOOL)forceWhitelistForService:(id)arg1 ;
-(BOOL)accountIsEnabled:(id)arg1 ;
-(BOOL)disableAccount:(id)arg1 ;
-(id)whitelistForAccount:(id)arg1 ;
-(BOOL)forceWhitelistForAccount:(id)arg1 ;
-(BOOL)accountHasWhitelist:(id)arg1 ;
-(BOOL)shouldPostNotifications;
-(id)_parentalControls;
-(BOOL)_disableAV;
-(BOOL)_forceChatLogging;
@end

