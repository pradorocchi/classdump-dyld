/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:18 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DAEAS/DAEAS-Structs.h>
#import <DAEAS/ASTask.h>

@class NSString, NSMutableDictionary, NSError;

@interface ASAutodiscoverTask : ASTask {

	NSString* _serverURL;
	NSString* _emailAddress;
	NSString* _redirectEmail;
	NSString* _authUsername;
	NSMutableDictionary* _accountInfo;
	NSError* _discoveryError;

}
-(void)finishWithError:(id)arg1 ;
-(double)timeoutInterval;
-(void)dealloc;
-(id)requestBody;
-(BOOL)processContext:(id)arg1 ;
-(void)_handleErrorNode:(xmlNode*)arg1 ;
-(void)_handleServerNode:(xmlNode*)arg1 ;
-(void)_handleActionNode:(xmlNode*)arg1 ;
-(void)_handleUserNode:(xmlNode*)arg1 ;
-(void)_setAccountInfoFromAutoDiscoveryXML:(id)arg1 ;
-(void)didProcessContext:(id)arg1 ;
-(id)initWithURL:(id)arg1 emailAddress:(id)arg2 authUsername:(id)arg3 ;
-(id)_url;
-(id)_easVersion;
-(id)_policyKey;
-(id)_HTTPMethodForRequest:(id)arg1 ;
-(BOOL)_shouldSendAuthForRequest:(id)arg1 ;
-(void)_addAuthToRequest:(id)arg1 ;
-(BOOL)_shouldRedirectToHTTPForRequest:(id)arg1 ;
-(id)localizedErrorStringForCertificateErrorCode:(int)arg1 host:(id)arg2 ;
-(BOOL)shouldHandlePasswordErrors;
-(BOOL)shouldStallAfterConnectionLost;
-(BOOL)requiresEASVersionInformaton;
-(BOOL)shouldLogIncomingData;
-(id)contentType;
@end

