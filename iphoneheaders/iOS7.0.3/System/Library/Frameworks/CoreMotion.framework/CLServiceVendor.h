/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface CLServiceVendor : NSObject
+(BOOL)ensureServiceIsRunning:(id)arg1 ;
+(id)getSiloForService:(id)arg1 ;
+(id)proxyForService:(id)arg1 ;
+(void)rereadConfiguration;
+(BOOL)getKeyClass:(Class*)arg1 andSilo:(id*)arg2 forServiceWithName:(id)arg3 ;
+(id)getServiceWithName:(id)arg1 ;
+(void)retireServiceWithName:(id)arg1 ;
+(BOOL)isServiceEnabled:(id)arg1 ;
+(BOOL)isServiceRunning:(id)arg1 ;
+(void)initialize;
@end

