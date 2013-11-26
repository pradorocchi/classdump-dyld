/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ManagedConfiguration/MCEmailAccountPayloadBase.h>

@class NSString, NSNumber;

@interface MCEmailAccountPayload : MCEmailAccountPayloadBase {

	NSString* _emailAccountDescription;
	NSString* _emailAccountName;
	NSString* _emailAccountType;
	NSString* _emailAddress;
	NSString* _incomingMailServerAuthentication;
	NSString* _incomingMailServerHostname;
	NSNumber* _incomingMailServerPortNumber;
	BOOL _incomingMailServerUseSSL;
	NSString* _incomingMailServerUsername;
	NSString* _incomingMailServerIMAPPathPrefix;
	NSString* _incomingPassword;
	NSString* _outgoingPassword;
	BOOL _outgoingPasswordSameAsIncomingPassword;
	NSString* _outgoingMailServerAuthentication;
	NSString* _outgoingMailServerHostname;
	NSNumber* _outgoingMailServerPortNumber;
	BOOL _outgoingMailServerUseSSL;
	NSString* _outgoingMailServerUsername;

}

@property (nonatomic,readonly) NSString * emailAccountDescription;                       //@synthesize emailAccountDescription=_emailAccountDescription - In the implementation block
@property (nonatomic,readonly) NSString * emailAccountName;                              //@synthesize emailAccountName=_emailAccountName - In the implementation block
@property (nonatomic,readonly) NSString * emailAccountType;                              //@synthesize emailAccountType=_emailAccountType - In the implementation block
@property (nonatomic,readonly) NSString * emailAddress;                                  //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,readonly) NSString * incomingMailServerAuthentication;              //@synthesize incomingMailServerAuthentication=_incomingMailServerAuthentication - In the implementation block
@property (nonatomic,readonly) NSString * incomingMailServerHostname;                    //@synthesize incomingMailServerHostname=_incomingMailServerHostname - In the implementation block
@property (nonatomic,readonly) NSNumber * incomingMailServerPortNumber;                  //@synthesize incomingMailServerPortNumber=_incomingMailServerPortNumber - In the implementation block
@property (nonatomic,readonly) BOOL incomingMailServerUseSSL;                            //@synthesize incomingMailServerUseSSL=_incomingMailServerUseSSL - In the implementation block
@property (nonatomic,readonly) NSString * incomingMailServerUsername;                    //@synthesize incomingMailServerUsername=_incomingMailServerUsername - In the implementation block
@property (nonatomic,readonly) NSString * incomingMailServerIMAPPathPrefix;              //@synthesize incomingMailServerIMAPPathPrefix=_incomingMailServerIMAPPathPrefix - In the implementation block
@property (nonatomic,readonly) NSString * incomingPassword;                              //@synthesize incomingPassword=_incomingPassword - In the implementation block
@property (nonatomic,readonly) NSString * outgoingPassword;                              //@synthesize outgoingPassword=_outgoingPassword - In the implementation block
@property (nonatomic,readonly) BOOL outgoingPasswordSameAsIncomingPassword;              //@synthesize outgoingPasswordSameAsIncomingPassword=_outgoingPasswordSameAsIncomingPassword - In the implementation block
@property (nonatomic,readonly) NSString * outgoingMailServerAuthentication;              //@synthesize outgoingMailServerAuthentication=_outgoingMailServerAuthentication - In the implementation block
@property (nonatomic,readonly) NSString * outgoingMailServerHostname;                    //@synthesize outgoingMailServerHostname=_outgoingMailServerHostname - In the implementation block
@property (nonatomic,readonly) NSNumber * outgoingMailServerPortNumber;                  //@synthesize outgoingMailServerPortNumber=_outgoingMailServerPortNumber - In the implementation block
@property (nonatomic,readonly) BOOL outgoingMailServerUseSSL;                            //@synthesize outgoingMailServerUseSSL=_outgoingMailServerUseSSL - In the implementation block
@property (nonatomic,readonly) NSString * outgoingMailServerUsername;                    //@synthesize outgoingMailServerUsername=_outgoingMailServerUsername - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
+(id)profileNameFromAccountTag:(id)arg1 ;
-(id)description;
-(id)title;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)emailAccountDescription;
-(id)emailAccountType;
-(id)incomingMailServerHostname;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(id)emailAccountName;
-(id)incomingMailServerAuthentication;
-(id)incomingMailServerPortNumber;
-(BOOL)incomingMailServerUseSSL;
-(id)incomingMailServerUsername;
-(id)incomingMailServerIMAPPathPrefix;
-(id)incomingPassword;
-(id)outgoingPassword;
-(BOOL)outgoingPasswordSameAsIncomingPassword;
-(id)outgoingMailServerAuthentication;
-(id)outgoingMailServerHostname;
-(id)outgoingMailServerPortNumber;
-(BOOL)outgoingMailServerUseSSL;
-(id)outgoingMailServerUsername;
-(id)emailAddress;
-(void).cxx_destruct;
@end

