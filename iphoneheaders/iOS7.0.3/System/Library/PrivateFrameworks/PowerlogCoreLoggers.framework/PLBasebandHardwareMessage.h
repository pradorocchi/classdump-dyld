/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:14 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PowerlogCoreLoggers/PowerlogCoreLoggers-Structs.h>
#import <PowerlogCoreLoggers/PLBasebandMessage.h>

@interface PLBasebandHardwareMessage : PLBasebandMessage {

	PLBasebandHWStatsHeader* _header;
	PLBasebandHWStatsSystem* _system;
	PLBasebandHWStatsARMPerf* _armPerf;
	PLBasebandHWStatsMDSP* _mdsp;
	PLBasebandHWOnOffComponentStats* _mdm;
	PLBasebandHWStatsADSP* _adsp;
	PLBasebandHWOnOffComponentStats* _adm;
	PLBasebandHWOnOffComponentStats* _gps;
	PLBasebandHWOnOffComponentStats* _usb;
	PLBasebandHWStatsUART* _uart;
	PLBasebandHWOnOffComponentStats* _spi;
	PLBasebandHWStatsRXRSSI* _rx;
	PLBasebandHWStatsTXPower* _tx;
	unsigned _duration;

}

@property (assign,nonatomic) unsigned logDuration;                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) unsigned revision; 
@property (assign,nonatomic) PLBasebandHWStatsHeader* header;                   //@synthesize header=_header - In the implementation block
@property (assign,nonatomic) PLBasebandHWStatsSystem* system;                   //@synthesize system=_system - In the implementation block
@property (assign,nonatomic) PLBasebandHWStatsARMPerf* armPerf;                 //@synthesize armPerf=_armPerf - In the implementation block
@property (assign,nonatomic) PLBasebandHWStatsMDSP* mdsp;                       //@synthesize mdsp=_mdsp - In the implementation block
@property (assign,nonatomic) PLBasebandHWOnOffComponentStats* mdm;              //@synthesize mdm=_mdm - In the implementation block
@property (assign,nonatomic) PLBasebandHWStatsADSP* adsp;                       //@synthesize adsp=_adsp - In the implementation block
@property (assign,nonatomic) PLBasebandHWOnOffComponentStats* adm;              //@synthesize adm=_adm - In the implementation block
@property (assign,nonatomic) PLBasebandHWOnOffComponentStats* gps;              //@synthesize gps=_gps - In the implementation block
@property (assign,nonatomic) PLBasebandHWOnOffComponentStats* usb;              //@synthesize usb=_usb - In the implementation block
@property (assign,nonatomic) PLBasebandHWStatsUART* uart;                       //@synthesize uart=_uart - In the implementation block
@property (assign,nonatomic) PLBasebandHWOnOffComponentStats* spi;              //@synthesize spi=_spi - In the implementation block
@property (assign,nonatomic) PLBasebandHWStatsRXRSSI* rx;                       //@synthesize rx=_rx - In the implementation block
@property (assign,nonatomic) PLBasebandHWStatsTXPower* tx;                      //@synthesize tx=_tx - In the implementation block
@property (nonatomic,readonly) unsigned level; 
-(PLBasebandHWStatsTXPower*)tx;
-(void)setTx:(PLBasebandHWStatsTXPower*)arg1 ;
-(void)parseData:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned)level;
-(unsigned)revision;
-(PLBasebandHWStatsHeader*)header;
-(void)setHeader:(PLBasebandHWStatsHeader*)arg1 ;
-(void)logWithLogger:(id)arg1 ;
-(unsigned)logDuration;
-(void)setSystem:(PLBasebandHWStatsSystem*)arg1 ;
-(void)setArmPerf:(PLBasebandHWStatsARMPerf*)arg1 ;
-(void)setMdsp:(PLBasebandHWStatsMDSP*)arg1 ;
-(void)setMdm:(PLBasebandHWOnOffComponentStats*)arg1 ;
-(void)setAdsp:(PLBasebandHWStatsADSP*)arg1 ;
-(void)setAdm:(PLBasebandHWOnOffComponentStats*)arg1 ;
-(void)setGps:(PLBasebandHWOnOffComponentStats*)arg1 ;
-(void)setUsb:(PLBasebandHWOnOffComponentStats*)arg1 ;
-(void)setUart:(PLBasebandHWStatsUART*)arg1 ;
-(void)setSpi:(PLBasebandHWOnOffComponentStats*)arg1 ;
-(void)setRx:(PLBasebandHWStatsRXRSSI*)arg1 ;
-(void)setLogDuration:(unsigned)arg1 ;
-(void)logRawWithLogger:(id)arg1 ;
-(void)logHeaderWithLogger:(id)arg1 ;
-(void)logProcessorWithLogger:(id)arg1 ;
-(void)logModemAppWithLogger:(id)arg1 ;
-(void)logPeripheralsWithLogger:(id)arg1 ;
-(void)logRFWithLogger:(id)arg1 ;
-(PLBasebandHWStatsSystem*)system;
-(void)formatArray:(unsigned*)arg1 ofSize:(unsigned)arg2 inString:(id)arg3 inReverse:(BOOL)arg4 ;
-(PLBasebandHWStatsARMPerf*)armPerf;
-(PLBasebandHWStatsMDSP*)mdsp;
-(void)formatOnOffStates:(PLBasebandHWOnOffComponentStats*)arg1 inString:(id)arg2 ;
-(void)formatArray:(unsigned*)arg1 ofSize:(unsigned)arg2 inString:(id)arg3 ;
-(PLBasebandHWOnOffComponentStats*)mdm;
-(PLBasebandHWStatsADSP*)adsp;
-(PLBasebandHWOnOffComponentStats*)adm;
-(PLBasebandHWOnOffComponentStats*)gps;
-(PLBasebandHWOnOffComponentStats*)usb;
-(PLBasebandHWOnOffComponentStats*)spi;
-(PLBasebandHWStatsUART*)uart;
-(PLBasebandHWStatsRXRSSI*)rx;
-(unsigned)sumHardwareStat:(unsigned*)arg1 ofSize:(unsigned)arg2 ;
-(void)formatArray:(unsigned*)arg1 ofSize:(unsigned)arg2 withMultiplier:(float)arg3 inString:(id)arg4 ;
-(id)convertToObjectArray:(unsigned*)arg1 ofSize:(unsigned)arg2 ;
-(void)formatArray:(unsigned*)arg1 ofSize:(unsigned)arg2 withMultiplier:(float)arg3 inString:(id)arg4 inReverse:(BOOL)arg5 ;
@end

