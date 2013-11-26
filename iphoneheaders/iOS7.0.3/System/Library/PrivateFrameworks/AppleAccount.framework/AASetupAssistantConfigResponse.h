/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString;

@interface AASetupAssistantConfigResponse : AAResponse {

	NSDictionary* _urls;
	NSString* _ckAppLoginURL;

}

@property (nonatomic,readonly) NSString * signingSessionCertURL; 
@property (nonatomic,readonly) NSString * signingSessionURL; 
@property (nonatomic,readonly) NSString * aboutURL; 
@property (nonatomic,readonly) NSString * xmlUI; 
@property (nonatomic,readonly) NSString * upgradeIOSTermsUI; 
@property (nonatomic,readonly) NSString * genericTermsURL; 
@property (nonatomic,readonly) NSString * iForgotUIURL; 
@property (nonatomic,readonly) NSString * authenticateURL; 
@property (nonatomic,readonly) NSString * createAppleIDURL; 
@property (nonatomic,readonly) NSString * updateAppleIDURL; 
@property (nonatomic,readonly) NSString * createDelegateAccountsURL; 
@property (nonatomic,readonly) NSString * checkValidityURL; 
@property (nonatomic,readonly) NSString * iForgotURL; 
@property (nonatomic,readonly) NSString * existingAppleIDTermsUIURL; 
@property (nonatomic,readonly) BOOL setupAssistantServerEnabled; 
@property (nonatomic,readonly) NSString * loginDelegatesURL; 
@property (nonatomic,readonly) NSString * activeEmailDomain; 
@property (nonatomic,readonly) NSString * upgradeStatusURL; 
@property (nonatomic,readonly) NSString * ckAppLoginURL;                          //@synthesize ckAppLoginURL=_ckAppLoginURL - In the implementation block
-(id)iForgotUIURL;
-(id)signingSessionCertURL;
-(id)signingSessionURL;
-(id)authenticateURL;
-(id)createAppleIDURL;
-(id)updateAppleIDURL;
-(id)createDelegateAccountsURL;
-(id)upgradeIOSTermsUI;
-(id)upgradeStatusURL;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(id)xmlUI;
-(id)aboutURL;
-(id)checkValidityURL;
-(id)iForgotURL;
-(id)existingAppleIDTermsUIURL;
-(id)loginDelegatesURL;
-(id)genericTermsURL;
-(BOOL)setupAssistantServerEnabled;
-(id)activeEmailDomain;
-(id)ckAppLoginURL;
-(void).cxx_destruct;
@end

