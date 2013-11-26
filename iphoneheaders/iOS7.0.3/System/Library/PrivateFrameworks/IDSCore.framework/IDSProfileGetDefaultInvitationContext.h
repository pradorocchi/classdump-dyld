/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <IDSCore/IDSCore-Structs.h>
#import <IDSCore/IDSProfileMessage.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSDictionary;

@interface IDSProfileGetDefaultInvitationContext : IDSProfileMessage <NSCopying> {

	BOOL _responseValidated;
	NSString* _responseBasePhoneNumber;
	NSString* _responseRegionID;
	NSDictionary* _responseExtraInfo;

}

@property (copy) NSString * responseRegionID;                     //@synthesize responseRegionID=_responseRegionID - In the implementation block
@property (copy) NSString * responseBasePhoneNumber;              //@synthesize responseBasePhoneNumber=_responseBasePhoneNumber - In the implementation block
@property (copy) NSDictionary * responseExtraInfo;                //@synthesize responseExtraInfo=_responseExtraInfo - In the implementation block
@property (assign) BOOL responseValidated;                        //@synthesize responseValidated=_responseValidated - In the implementation block
-(id)bagKey;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)responseRegionID;
-(id)responseBasePhoneNumber;
-(id)responseExtraInfo;
-(BOOL)responseValidated;
-(void)handleResponseDictionary:(id)arg1 ;
-(void)setResponseBasePhoneNumber:(id)arg1 ;
-(void)setResponseRegionID:(id)arg1 ;
-(void)setResponseExtraInfo:(id)arg1 ;
-(void)setResponseValidated:(BOOL)arg1 ;
-(id)messageBody;
-(id)requiredKeys;
@end

