/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class ACAccount, NSString, NSArray, NSDictionary, NSSet;

@interface AAAccount : NSObject {

	ACAccount* _account;
	NSString* _fmipToken;
	NSArray* _appleIDAliases;
	NSString* _protocolVersion;

}

@property (nonatomic,copy) NSString * authToken; 
@property (nonatomic,copy) NSString * fmipToken;                                     //@synthesize fmipToken=_fmipToken - In the implementation block
@property (nonatomic,copy) NSString * password; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,readonly) NSString * personID; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSString * primaryEmail; 
@property (nonatomic,readonly) NSArray * appleIDAliases;                             //@synthesize appleIDAliases=_appleIDAliases - In the implementation block
@property (assign,nonatomic) BOOL primaryAccount; 
@property (nonatomic,readonly) BOOL primaryEmailVerified; 
@property (nonatomic,readonly) BOOL needsEmailConfiguration; 
@property (nonatomic,readonly) BOOL needsRegistration; 
@property (nonatomic,readonly) BOOL serviceUnavailable; 
@property (nonatomic,readonly) NSDictionary * serviceUnavailableInfo; 
@property (nonatomic,readonly) NSString * protocolVersion;                           //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSSet * provisionedDataclasses; 
@property (nonatomic,readonly) NSSet * enabledDataclasses; 
@property (nonatomic,copy) NSString * accountDescription; 
@property (nonatomic,readonly) NSString * accountFooterText; 
@property (nonatomic,readonly) NSDictionary * accountFooterButton; 
@property (nonatomic,readonly) NSDictionary * accountFirstDisplayAlert; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSDictionary * dataclassProperties; 
@property (nonatomic,readonly) NSString * syncStoreIdentifier; 
@property (nonatomic,readonly) ACAccount * liverpoolAccount; 
@property (assign,nonatomic) BOOL needsToVerifyTerms; 
@property (nonatomic,readonly) NSArray * supportedDataclasses; 
@property (nonatomic,readonly) int accountServiceType; 
+(id)dataclassesBoundToPrimaryAccount;
+(id)dataclassesBoundToSyncAccount;
+(id)dataclassesBoundToSingleAccount;
+(id)accountTypeString;
-(id)password;
-(void)setPassword:(id)arg1 ;
-(id)authToken;
-(void)setAuthToken:(id)arg1 ;
-(id)protocolVersion;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(id)init;
-(id)identifier;
-(id)displayName;
-(void)authenticateWithHandler:(/*^block*/ id)arg1 ;
-(id)fmipToken;
-(id)appleIDAliases;
-(id)primaryEmail;
-(BOOL)primaryEmailVerified;
-(id)_mailChildAccount;
-(id)_childAccounts;
-(void)presentQuotaDepletionAlertForDataclass:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(int)accountServiceType;
-(id)accountFooterText;
-(id)accountFooterButton;
-(id)accountFirstDisplayAlert;
-(void)updateAccountWithProvisioningResponse:(id)arg1 ;
-(BOOL)serviceUnavailable;
-(id)serviceUnavailableInfo;
-(BOOL)needsRegistration;
-(BOOL)useCellularForDataclass:(id)arg1 ;
-(void)setUseCellular:(BOOL)arg1 forDataclass:(id)arg2 ;
-(BOOL)needsEmailConfiguration;
-(int)mobileMeAccountStatus;
-(id)liverpoolAccount;
-(void)notifyUserOfQuotaDepletion;
-(void)presentQuotaDepletionAlertForDataclass:(id)arg1 ;
-(BOOL)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg1 ;
-(void)saveTokensInKeychain;
-(void)savePasswordInKeychain;
-(void)saveFMIPTokenInKeychain;
-(void)removeTokensFromKeychain;
-(void)removePasswordFromKeychain;
-(void)flushCachedTokens;
-(void)flushCachedPassword;
-(void)updateAccountPropertiesWithHandler:(/*^block*/ id)arg1 ;
-(void)setupChildMailAccountAndEnable:(BOOL)arg1 withEmail:(id)arg2 ;
-(void)signInWithHandler:(/*^block*/ id)arg1 ;
-(void)renewCredentialsForAppleIDWithHandler:(/*^block*/ id)arg1 ;
-(void)lookupEmailAddresses:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(BOOL)needsToVerifyTerms;
-(void)setNeedsToVerifyTerms:(BOOL)arg1 ;
-(void)setFmipToken:(id)arg1 ;
-(id)dataclassProperties;
-(id)provisionedDataclasses;
-(id)propertiesForDataclass:(id)arg1 ;
-(id)account;
-(void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2 ;
-(id)accountPropertyForKey:(id)arg1 ;
-(void)setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(id)accountDescription;
-(void)setUsername:(id)arg1 ;
-(void)setAccountDescription:(id)arg1 ;
-(id)enabledDataclasses;
-(id)supportedDataclasses;
-(id)syncStoreIdentifier;
-(id)initWithAccount:(id)arg1 ;
-(id)personID;
-(BOOL)isEnabledForDataclass:(id)arg1 ;
-(BOOL)isProvisionedForDataclass:(id)arg1 ;
-(id)username;
-(id)firstName;
-(id)lastName;
-(void).cxx_destruct;
-(BOOL)primaryAccount;
-(void)setPrimaryAccount:(BOOL)arg1 ;
@end

