/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Setup.app/Setup
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <Setup/Setup-Structs.h>
@interface BuddyWifiAutoJoiner : NSObject {

	WiFiManagerClientRef _wifiManagerRef;

}
+(void)beginAutojoiningWiFiNetworks;
+(void)stopAutojoiningWiFiNetworks;
+(id)_sharedInstance;
-(void)beginAutojoiningWiFiNetworks;
-(void)stopAutojoiningWiFiNetworks;
-(WiFiNetworkRef)createNetworkWithSSID:(id)arg1 ;
-(CFArrayRef)_copyAutoJoinableWiFiNetworks;
-(void)dealloc;
@end

