/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/mobile_recert
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileCoreServices/NSXPCListenerDelegate.h>
#import <MobileActivation/MobileRecert.h>

@interface MobileRecertListener : NSObject <NSXPCListenerDelegate, MobileRecert>
-(void)recertifyDeviceForRealz:(/*^block*/ id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)recertifyDevice:(/*^block*/ id)arg1 ;
@end

