/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_xpc_object;
@class NSObject, NSString;

@interface BackgroundTaskRequest : NSObject {

	NSObject<OS_xpc_object>* _job;
	NSString* _requestIdentifier;

}

@property (nonatomic,copy) NSString * requestIdentifier;              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
+(id)networkAvailableRequest;
+(id)pluggedInRequest;
+(id)wifiAvailableRequest;
-(id)initWithBackgroundTaskAgentJob:(id)arg1 ;
-(id)copyBackgroundTaskAgentJob;
-(void)setValue:(id)arg1 forBackgroundTaskAgentKey:(const char*)arg2 ;
-(id)valueForBackgroundTaskAgentKey:(const char*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)requestIdentifier;
-(void)setRequestIdentifier:(id)arg1 ;
@end

