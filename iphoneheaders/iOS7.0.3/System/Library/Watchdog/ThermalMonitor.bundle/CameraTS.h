/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/tGraphDataSource.h>

@interface CameraTS : NSObject <tGraphDataSource> {

	BOOL _rearCamAutoFocusState;
	BOOL _rearCamAutoFocusStateTokenValid;
	int torchState;
	int _rearCamAutoFocusStateToken;

}

@property (assign,nonatomic) BOOL rearCamAutoFocusState;                        //@synthesize rearCamAutoFocusState=_rearCamAutoFocusState - In the implementation block
@property (assign,nonatomic) int torchState; 
@property (assign,nonatomic) int rearCamAutoFocusStateToken;                    //@synthesize rearCamAutoFocusStateToken=_rearCamAutoFocusStateToken - In the implementation block
@property (assign,nonatomic) BOOL rearCamAutoFocusStateTokenValid;              //@synthesize rearCamAutoFocusStateTokenValid=_rearCamAutoFocusStateTokenValid - In the implementation block
-(void)setTorchState:(int)arg1 ;
-(id)initSensor:(int)arg1 :(int)arg2 ;
-(int)numberOfFields;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(void)setRearCamAutoFocusState:(BOOL)arg1 ;
-(void)setRearCamAutoFocusStateTokenValid:(BOOL)arg1 ;
-(void)setRearCamAutoFocusStateToken:(int)arg1 ;
-(BOOL)rearCamAutoFocusStateTokenValid;
-(int)rearCamAutoFocusStateToken;
-(void)updateThermalTable:(int)arg1 :(unsigned long long)arg2 ;
-(void)setAutoFocusNotificationEnabledState:(BOOL)arg1 ;
-(BOOL)rearCamAutoFocusState;
-(void)dealloc;
-(int)torchState;
@end

