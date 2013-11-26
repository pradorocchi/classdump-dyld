/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AppleAccount/AARequest.h>

@class NSString, NSData;

@interface AADeviceProvisioningRequest : AARequest {

	NSString* _dsid;
	NSString* _url;
	NSData* _data;

}
-(id)urlString;
-(id)urlRequest;
-(id)initWithDSID:(id)arg1 URLString:(id)arg2 requestData:(id)arg3 ;
-(void).cxx_destruct;
@end

