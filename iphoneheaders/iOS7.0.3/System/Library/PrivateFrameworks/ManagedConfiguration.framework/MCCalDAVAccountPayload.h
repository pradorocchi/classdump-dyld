/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:00 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString;

@interface MCCalDAVAccountPayload : MCPayload {

	NSString* _accountDescription;
	NSString* _hostname;
	NSString* _username;
	NSString* _password;
	NSString* _principalURL;
	BOOL _useSSL;
	int _port;
	NSString* _accountPersistentUUID;

}

@property (nonatomic,readonly) NSString * accountDescription;              //@synthesize accountDescription=_accountDescription - In the implementation block
@property (nonatomic,readonly) NSString * hostname;                        //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,copy) NSString * username;                            //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                            //@synthesize password=_password - In the implementation block
@property (nonatomic,readonly) NSString * principalURL;                    //@synthesize principalURL=_principalURL - In the implementation block
@property (nonatomic,readonly) BOOL useSSL;                                //@synthesize useSSL=_useSSL - In the implementation block
@property (nonatomic,readonly) int port;                                   //@synthesize port=_port - In the implementation block
@property (nonatomic,copy) NSString * accountPersistentUUID;               //@synthesize accountPersistentUUID=_accountPersistentUUID - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)password;
-(void)setPassword:(id)arg1 ;
-(id)description;
-(id)title;
-(BOOL)useSSL;
-(id)accountPersistentUUID;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(void)setAccountPersistentUUID:(id)arg1 ;
-(id)principalURL;
-(id)accountDescription;
-(void)setUsername:(id)arg1 ;
-(id)username;
-(void).cxx_destruct;
-(id)hostname;
-(int)port;
@end

