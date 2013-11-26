/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <WebUI/WebUI-Structs.h>
@interface WebUICertificateError : NSObject
+(BOOL)proceedWithClientCertificateIdentity:(SecIdentityRef)arg1 context:(id)arg2 ;
+(id)applyAuthenticationChain:(CFArrayRef)arg1 toRequest:(id)arg2 ;
+(BOOL)userAllowsCertificateTrust:(SecTrustRef)arg1 host:(id)arg2 applicationDisplayName:(id)arg3 ;
+(BOOL)canAuthenticateAgainstProtectionSpace:(id)arg1 ;
+(id)newAlertToHandleClientSideCertificateErrorCode:(int)arg1 context:(id)arg2 ;
+(id)newAlertToListPossibleClientSideCertificatesWithContext:(id)arg1 ;
+(BOOL)isServerCertificateError:(int)arg1 ;
+(BOOL)isClientCertificateError:(int)arg1 ;
@end

