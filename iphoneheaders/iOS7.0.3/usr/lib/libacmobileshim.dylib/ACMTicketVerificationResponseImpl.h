/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libacmobileshim.dylib
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libacmobileshim.dylib/ACMTicketVerificationResponse.h>

@class NSNumber, NSDictionary, NSError;

@interface ACMTicketVerificationResponseImpl : NSObject <ACMTicketVerificationResponse> {

	NSDictionary* _rawResponseData;
	NSError* _error;
	id _userInfo;

}

@property (retain) id userInfo;                                 //@synthesize userInfo=_userInfo - In the implementation block
@property (retain) NSDictionary * rawResponseData;              //@synthesize rawResponseData=_rawResponseData - In the implementation block
@property (retain) NSError * error;                             //@synthesize error=_error - In the implementation block
@property (readonly) NSNumber * personDSID; 
-(void)setError:(id)arg1 ;
-(void)dealloc;
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
-(id)error;
-(void)setRawResponseData:(id)arg1 ;
-(id)rawResponseData;
-(id)personDSID;
@end

