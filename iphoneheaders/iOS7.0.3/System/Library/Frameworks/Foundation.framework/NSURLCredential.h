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

@class NSURLCredentialInternal;

@interface NSURLCredential : NSObject <NSSecureCoding, NSCopying> {

	NSURLCredentialInternal* _internal;

}
+(id)credentialWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned)arg3 ;
+(id)credentialWithIdentity:(SecIdentityRef)arg1 certificates:(id)arg2 persistence:(unsigned)arg3 ;
+(id)credentialForTrust:(SecTrustRef)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)user;
-(id)password;
-(id)initWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned)arg3 ;
-(id)initWithIdentity:(SecIdentityRef)arg1 certificates:(id)arg2 persistence:(unsigned)arg3 ;
-(id)initWithTrust:(SecTrustRef)arg1 ;
-(BOOL)hasPassword;
-(unsigned)persistence;
-(SecIdentityRef)identity;
-(id)certificates;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(CFURLCredentialRef)_cfurlcredential;
-(id)_initWithCFURLCredential:(CFURLCredentialRef)arg1 ;
@end

