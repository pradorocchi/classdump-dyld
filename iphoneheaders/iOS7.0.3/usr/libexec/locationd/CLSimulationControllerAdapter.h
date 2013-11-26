/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <locationd/locationd-Structs.h>
#import <CoreMotion/CLIntersiloService.h>
#import <locationd/CLSimulationControllerProtocol.h>

@interface CLSimulationControllerAdapter : CLIntersiloService <CLSimulationControllerProtocol> {

	CLSimulationController* _controller;

}

@property (assign,nonatomic) CLSimulationController* controller;              //@synthesize controller=_controller - In the implementation block
+(id)getSilo;
-(void)setSimulationScenarioURL:(id)arg1 ;
-(void)setSimulationType:(int)arg1 ;
-(void)setIntermediateLocationDistance:(double)arg1 ;
-(void)setTravellingSpeed:(double)arg1 ;
-(void)clearPendingLocations;
-(void)addPendingLocationsArray:(id)arg1 ;
-(void)startSimulation;
-(void)stopSimulation;
-(void)setRepeatBehavior:(int)arg1 ;
-(void)setLocationInterval:(double)arg1 ;
-(id)initInSilo:(id)arg1 ;
-(void)heartAttack;
-(void)beginService;
-(void)endService;
-(CLSimulationController*)controller;
-(void)setController:(CLSimulationController*)arg1 ;
-(void)shutdown;
@end

