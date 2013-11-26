/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:21 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DADaemonLDAP.bundle/DADaemonLDAP
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DADaemonSupport/DAAgent.h>
#import <DADaemonLDAP/DAValidityCheckConsumer.h>

@interface LDAPAgent : DAAgent <DAValidityCheckConsumer>
-(void)startMonitoring;
-(void)requestAgentStopMonitoringWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3 ;
-(void)_invokeCompletionBlock:(/*^block*/ id)arg1 ;
@end

