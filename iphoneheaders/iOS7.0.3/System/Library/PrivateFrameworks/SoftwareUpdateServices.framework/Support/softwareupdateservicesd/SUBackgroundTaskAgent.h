/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:08:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/Support/softwareupdateservicesd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class SUManager;

@interface SUBackgroundTaskAgent : NSObject {

	SUManager* _manager;

}
+(id)sharedInstance;
-(void)_initBackgroundTaskAgent;
-(void)_handleBackgroundAgentAutoScan:(const char*)arg1 parameters:(id)arg2 ;
-(void)_handleAutodownloadRetryTask:(id)arg1 ;
-(void)_handleAutodownloadWifiPeriodEndTask:(id)arg1 ;
-(void)_printDetailsForJob:(const char*)arg1 ;
-(void)scheduleDefaultAutoScanTaskIfNecessary;
-(void)scheduleEmergencyAutoScanTaskIfNecessary;
-(void)scheduleAutodownloadRetryTaskIfNecessary;
-(void)scheduleAutodownloadWifiPeriodEndTaskIfNecessary;
-(void)cancelDefaultAutoScanTask;
-(void)cancelEmergencyAutoScanTask;
-(void)cancelAutodownloadRetryTask;
-(void)cancelAutodownloadWifiPeriodEndTask;
-(void)_scheduleAutoScanForTypeIfNecessary:(int)arg1 jobName:(const char*)arg2 ;
-(void)_addAutodownloadPowerRequirementsToRequest:(id)arg1 ;
-(void)scheduleAutodownloadRetryTaskFromDate:(id)arg1 toDate:(id)arg2 policy:(id)arg3 ;
-(void)scheduleAutodownloadWifiPeriodEndTask;
-(void)_scheduleNewBackgroundAgentAutoScanForType:(int)arg1 jobName:(const char*)arg2 previousStartDate:(id)arg3 previousEndDate:(id)arg4 ;
-(void)scheduleAnyTasksIfNecessary;
-(void)cancelAllAutoscanTasks;
-(void)cancelAllAutodownloadTasks;
-(void)dealloc;
-(id)init;
-(void)cancelAllTasks;
@end

