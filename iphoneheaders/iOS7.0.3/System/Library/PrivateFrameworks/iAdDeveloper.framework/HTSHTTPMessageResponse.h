/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:49 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iAdDeveloper/iAdDeveloper-Structs.h>
#import <iAdDeveloper/HTSHTTPMessage.h>

@class NSString, HTSHTTPMessageRequest, NSMutableData;

@interface HTSHTTPMessageResponse : HTSHTTPMessage {

	int _statusCode;
	NSString* _statusDescription;
	NSString* _trackingDescription;
	HTSHTTPMessageRequest* _request;
	NSMutableData* _serializedData;
	double _sendTime;
	unsigned long long _written;

}

@property (assign,nonatomic) int statusCode;                               //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,copy) NSString * statusDescription;                   //@synthesize statusDescription=_statusDescription - In the implementation block
@property (nonatomic,copy) NSString * trackingDescription;                 //@synthesize trackingDescription=_trackingDescription - In the implementation block
@property (nonatomic,retain) HTSHTTPMessageRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSMutableData * serializedData;               //@synthesize serializedData=_serializedData - In the implementation block
@property (assign,nonatomic) unsigned long long written;                   //@synthesize written=_written - In the implementation block
@property (assign,nonatomic) double sendTime;                              //@synthesize sendTime=_sendTime - In the implementation block
-(void)setRequest:(id)arg1 ;
-(void)setStatusDescription:(id)arg1 ;
-(void)dealloc;
-(id)request;
-(int)statusCode;
-(void)setStatusCode:(int)arg1 ;
-(id)serializedData;
-(CFHTTPMessageRef)copyMessage;
-(id)trackingDescription;
-(void)setTrackingDescription:(id)arg1 ;
-(void)setSerializedData:(id)arg1 ;
-(double)sendTime;
-(void)setSendTime:(double)arg1 ;
-(unsigned long long)written;
-(void)setWritten:(unsigned long long)arg1 ;
-(id)statusDescription;
@end

