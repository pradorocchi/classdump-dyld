/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <AVConference/AVConference-Structs.h>
@interface GKSConnectivitySettings : NSObject
+(void)initialize;
+(tagIPPORT*)getIPPortForService:(id)arg1 ;
+(id)getClientOption:(id)arg1 ;
+(id)getAddressForService:(id)arg1 ;
+(int)getNATTypeFromCarrierBundle;
+(int)getKeepAliveTimeoutFromCarrierBundle;
+(void)setAddress:(id)arg1 forService:(id)arg2 ;
+(void)setServerAddresses:(id)arg1 ;
+(void)setClientOptions:(id)arg1 ;
+(tagIPPORT*)getCachedIPPort;
+(id)getAllSettings;
-(void)dealloc;
-(id)init;
@end

