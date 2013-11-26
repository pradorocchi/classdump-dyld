/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/mc_mobile_tunnel
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MDM/MCMDMParser.h>

@class MCIPCUTunnelParser;

@interface MCChaperoneParser : MCMDMParser {

	MCIPCUTunnelParser* _iPCUParser;

}
-(id)init;
-(id)_allCommands;
-(void)_processRequest:(id)arg1 withAccessRights:(int)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(id)_clearPasscode:(id)arg1 ;
-(id)_requestUnlockToken:(id)arg1 ;
-(void)_installApplication:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(id)_applyRedemptionCode:(id)arg1 ;
-(id)_managedApplicationList:(id)arg1 ;
-(id)_removeApplication:(id)arg1 ;
-(void)processRequest:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void).cxx_destruct;
@end

