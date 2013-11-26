/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/aosnotifyd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSDictionary, NSMutableDictionary;

@interface AOSServiceProviderMgr : NSObject {

	NSDictionary* _accountTypeToServiceProviderType;
	NSMutableDictionary* _accountUUIDToServiceProvider;

}

@property (nonatomic,readonly) NSDictionary * accountTypeToServiceProviderType;               //@synthesize accountTypeToServiceProviderType=_accountTypeToServiceProviderType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accountUUIDToServiceProvider;              //@synthesize accountUUIDToServiceProvider=_accountUUIDToServiceProvider - In the implementation block
+(id)sharedInstance;
-(id)initSingleton;
-(void)setAccountUUIDToServiceProvider:(id)arg1 ;
-(id)accountUUIDToServiceProvider;
-(id)accountTypeToServiceProviderType;
-(void)accountListDidChange;
-(void)startGlobalManagers;
-(void)stopGlobalManagers;
-(id)serviceProviderForAccount:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)start;
-(void)stop;
-(void).cxx_destruct;
@end

