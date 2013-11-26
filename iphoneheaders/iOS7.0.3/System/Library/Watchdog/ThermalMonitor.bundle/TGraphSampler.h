/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <ThermalMonitor/ThermalMonitor-Structs.h>
@class CommonProduct, NSMutableArray;

@interface TGraphSampler : NSObject {

	CommonProduct* productObj;
	NSMutableArray* listofComponentControl;
	NSMutableArray* listOfSupervisorControl;
	CFArrayRef extraSensorDataSources;
	CFArrayRef extraInternalDataSources;
	CFStringRef tGraphDataString;
	BOOL isInternal;

}
+(id)sharedInstance;
-(CFStringRef)getTGraphData:(int)arg1 ;
-(BOOL)isInternalBuild;
-(void)genTGraphHeader;
-(void)genTGraphData;
-(CFStringRef)newSensorName:(long)arg1 ;
-(void)setTGraphDataString:(CFStringRef)arg1 ;
-(CFDictionaryRef)createPowerLogDictionaryForControlList:(id)arg1 ;
-(CFDictionaryRef)createPowerLogDictionaryForExtra:(CFArrayRef)arg1 ;
-(long)maxControlEffort;
-(void)setProduct:(id)arg1 withComponents:(id)arg2 andHotspotSupervisors:(id)arg3 ;
-(CFDictionaryRef)createPowerLogDictionaryForHotspotControl;
-(CFDictionaryRef)createPowerLogDictionaryForComponentControl;
-(CFDictionaryRef)createPowerLogDictionaryForSensors;
-(CFDictionaryRef)createPowerLogDictionaryForFixedHeaders;
-(CFDictionaryRef)createPowerLogDictionaryForExtraInternals;
-(CFDictionaryRef)createPowerLogDictionaryForExtraSensors;
-(void)addSensorDataSource:(id)arg1 ;
-(void)addInternalDataSource:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

