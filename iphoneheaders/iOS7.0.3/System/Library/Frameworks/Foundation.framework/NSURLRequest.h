/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:00 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>

@class NSURLRequestInternal;

@interface NSURLRequest : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {

	NSURLRequestInternal* _internal;

}
+(void)checkForSharedCookieStoreNeed:(CFURLRequestRef)arg1 ;
+(id)requestWithURL:(id)arg1 ;
+(void)setDefaultTimeoutInterval:(double)arg1 ;
+(double)defaultTimeoutInterval;
+(void)setAllowsAnyHTTPSCertificate:(BOOL)arg1 forHost:(id)arg2 ;
+(void)setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)requestWithURL:(id)arg1 cachePolicy:(unsigned)arg2 timeoutInterval:(double)arg3 ;
+(id)allowsSpecificHTTPSCertificateForHost:(id)arg1 ;
+(BOOL)allowsAnyHTTPSCertificateForHost:(id)arg1 ;
-(id)DARequestByApplyingStorageSession:(CFURLStorageSessionRef)arg1 ;
-(id)_web_HTTPReferrer;
-(id)_web_HTTPContentType;
-(BOOL)_web_isConditionalRequest;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(unsigned)networkServiceType;
-(BOOL)allowsCellularAccess;
-(BOOL)HTTPShouldUsePipelining;
-(BOOL)_URLHasScheme:(id)arg1 ;
-(BOOL)HTTPShouldHandleCookies;
-(id)_propertyForKey:(id)arg1 ;
-(void)_setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)_removePropertyForKey:(id)arg1 ;
-(id)_copyReplacingURLWithURL:(id)arg1 ;
-(unsigned)cachePolicy;
-(double)timeoutInterval;
-(id)mainDocumentURL;
-(id)boundInterfaceIdentifier;
-(id)valueForHTTPHeaderField:(id)arg1 ;
-(id)HTTPMethod;
-(id)allHTTPHeaderFields;
-(id)HTTPBody;
-(id)HTTPBodyStream;
-(id)HTTPContentType;
-(id)HTTPExtraCookies;
-(id)HTTPReferrer;
-(id)HTTPUserAgent;
-(id)contentDispositionEncodingFallbackArray;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)URL;
-(id)initWithURL:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(id)initWithURL:(id)arg1 cachePolicy:(unsigned)arg2 timeoutInterval:(double)arg3 ;
-(CFURLRequestRef)_CFURLRequest;
-(id)_initWithCFURLRequest:(CFURLRequestRef)arg1 ;
@end

