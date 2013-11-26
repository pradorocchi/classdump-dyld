/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount, NSArray;

@interface AAEmailLookupRequest : AARequest {

	ACAccount* _account;
	NSArray* _emailAddresses;

}

@property (nonatomic,retain) ACAccount * account;                   //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSArray * emailAddresses;              //@synthesize emailAddresses=_emailAddresses - In the implementation block
+(Class)responseClass;
-(id)urlString;
-(id)urlRequest;
-(id)urlCredential;
-(id)initWithAccount:(id)arg1 emailAddresses:(id)arg2 ;
-(id)initWithURLString:(id)arg1 account:(id)arg2 emailAddresses:(id)arg3 ;
-(id)account;
-(id)emailAddresses;
-(void)setEmailAddresses:(id)arg1 ;
-(void)setAccount:(id)arg1 ;
-(void).cxx_destruct;
@end

