/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:35 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AXHearingAidSupport/CBPeripheralDelegate.h>
#import <AXHearingAidSupport/CBPeripheralPairingDelegate.h>

@class AXTimer, NSString, NSArray, AXHearingAidMode, CBPeripheral, NSMutableDictionary, NSDate;

@interface AXHearingAidDevice : NSObject <CBPeripheralDelegate, CBPeripheralPairingDelegate> {

	float _leftVolume;
	float _rightVolume;
	float _leftMicrophoneVolume;
	float _rightMicrophoneVolume;
	float _leftStreamVolume;
	float _rightStreamVolume;
	BOOL _keepInSync;
	BOOL _finishedLoading;
	long initialLoadToken;
	AXTimer* _propertyWriteTimer;
	BOOL _isListeningForStreamingChanges;
	BOOL isPaired;
	BOOL isConnecting;
	BOOL isPersistent;
	NSString* leftUUID;
	NSString* rightUUID;
	NSString* name;
	NSString* manufacturer;
	NSString* model;
	NSString* leftFirmwareVersion;
	NSString* rightFirmwareVersion;
	NSString* leftHardwareVersion;
	NSString* rightHardwareVersion;
	float rightBatteryLevel;
	float leftBatteryLevel;
	NSArray* rightPrograms;
	NSArray* leftPrograms;
	AXHearingAidMode* currentRightProgram;
	AXHearingAidMode* currentLeftProgram;
	CBPeripheral* leftPeripheral;
	CBPeripheral* rightPeripheral;
	int leftLoadedProperties;
	int rightLoadedProperties;
	NSMutableDictionary* leftPropertiesLoadCount;
	NSMutableDictionary* rightPropertiesLoadCount;
	NSString* leftPeripheralUUID;
	NSString* rightPeripheralUUID;
	int leftWriteRequestProperties;
	int rightWriteRequestProperties;
	int leftProgramVersion;
	int rightProgramVersion;
	int _leftWriteResponseProperties;
	int _rightWriteResponseProperties;
	NSDate* _leftBatteryLowDate;
	NSDate* _rightBatteryLowDate;

}

@property (assign,nonatomic) BOOL isPaired; 
@property (assign,nonatomic) BOOL isConnecting; 
@property (assign,nonatomic) BOOL keepInSync;                                             //@synthesize keepInSync=_keepInSync - In the implementation block
@property (assign,nonatomic) BOOL isPersistent; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * manufacturer; 
@property (nonatomic,retain) NSString * model; 
@property (nonatomic,retain) NSString * leftFirmwareVersion; 
@property (nonatomic,retain) NSString * rightFirmwareVersion; 
@property (nonatomic,retain) NSString * leftHardwareVersion; 
@property (nonatomic,retain) NSString * rightHardwareVersion; 
@property (nonatomic,retain) NSString * rightUUID; 
@property (nonatomic,retain) NSString * leftUUID; 
@property (nonatomic,retain) NSString * leftPeripheralUUID; 
@property (nonatomic,retain) NSString * rightPeripheralUUID; 
@property (assign,nonatomic) float rightMicrophoneVolume;                                 //@synthesize rightMicrophoneVolume=_rightMicrophoneVolume - In the implementation block
@property (assign,nonatomic) float leftMicrophoneVolume;                                  //@synthesize leftMicrophoneVolume=_leftMicrophoneVolume - In the implementation block
@property (assign,nonatomic) float rightStreamVolume;                                     //@synthesize rightStreamVolume=_rightStreamVolume - In the implementation block
@property (assign,nonatomic) float leftStreamVolume;                                      //@synthesize leftStreamVolume=_leftStreamVolume - In the implementation block
@property (assign,nonatomic) float rightBatteryLevel; 
@property (assign,nonatomic) float leftBatteryLevel; 
@property (nonatomic,copy) NSArray * rightPrograms; 
@property (nonatomic,copy) NSArray * leftPrograms; 
@property (nonatomic,retain) CBPeripheral * leftPeripheral; 
@property (nonatomic,retain) CBPeripheral * rightPeripheral; 
@property (nonatomic,retain) AXHearingAidMode * currentRightProgram; 
@property (nonatomic,retain) AXHearingAidMode * currentLeftProgram; 
@property (assign,nonatomic) int leftLoadedProperties; 
@property (assign,nonatomic) int rightLoadedProperties; 
@property (assign,nonatomic) int leftWriteRequestProperties; 
@property (assign,nonatomic) int rightWriteRequestProperties; 
@property (assign,nonatomic) int leftWriteResponseProperties;                             //@synthesize leftWriteResponseProperties=_leftWriteResponseProperties - In the implementation block
@property (assign,nonatomic) int rightWriteResponseProperties;                            //@synthesize rightWriteResponseProperties=_rightWriteResponseProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * leftPropertiesLoadCount; 
@property (nonatomic,retain) NSMutableDictionary * rightPropertiesLoadCount; 
@property (assign,nonatomic) int leftProgramVersion; 
@property (assign,nonatomic) int rightProgramVersion; 
@property (nonatomic,retain) NSDate * leftBatteryLowDate;                                 //@synthesize leftBatteryLowDate=_leftBatteryLowDate - In the implementation block
@property (nonatomic,retain) NSDate * rightBatteryLowDate;                                //@synthesize rightBatteryLowDate=_rightBatteryLowDate - In the implementation block
+(id)characteristicsUUIDs;
-(BOOL)isConnected;
-(id)rssi;
-(BOOL)isConnecting;
-(void)dealloc;
-(id)description;
-(void)_init;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)model;
-(void)connect;
-(BOOL)isPersistent;
-(void)disconnect;
-(id)valueForProperty:(int)arg1 ;
-(BOOL)leftAvailable;
-(BOOL)rightAvailable;
-(BOOL)isPaired;
-(float)leftBatteryLevel;
-(float)rightBatteryLevel;
-(void)setLeftPrograms:(id)arg1 ;
-(void)setRightPrograms:(id)arg1 ;
-(void)setLeftFirmwareVersion:(id)arg1 ;
-(void)setRightFirmwareVersion:(id)arg1 ;
-(void)setLeftHardwareVersion:(id)arg1 ;
-(void)setRightHardwareVersion:(id)arg1 ;
-(id)deviceUUID;
-(id)leftPrograms;
-(id)rightPrograms;
-(id)programs;
-(void)setLeftSelectedProgram:(id)arg1 ;
-(void)setRightSelectedProgram:(id)arg1 ;
-(id)leftSelectedProgram;
-(id)rightSelectedProgram;
-(BOOL)didLoadRequiredProperties;
-(void)loadRequiredProperties;
-(void)setLeftBatteryLevel:(float)arg1 ;
-(void)setRightBatteryLevel:(float)arg1 ;
-(void)setLeftUUID:(id)arg1 ;
-(void)setRightUUID:(id)arg1 ;
-(void)setIsPaired:(BOOL)arg1 ;
-(void)setLeftBatteryLowDate:(id)arg1 ;
-(void)setRightBatteryLowDate:(id)arg1 ;
-(BOOL)containsPeripheralWithUUID:(id)arg1 ;
-(BOOL)didLoadBasicProperties;
-(void)setLeftMicrophoneVolume:(float)arg1 ;
-(void)setRightMicrophoneVolume:(float)arg1 ;
-(void)setLeftStreamVolume:(float)arg1 ;
-(void)setRightStreamVolume:(float)arg1 ;
-(void)selectProgram:(id)arg1 ;
-(id)selectedPrograms;
-(id)selectedProgramIndexes;
-(void)setKeepInSync:(BOOL)arg1 ;
-(BOOL)keepInSync;
-(float)rightMicrophoneVolume;
-(float)leftMicrophoneVolume;
-(float)rightStreamVolume;
-(float)leftStreamVolume;
-(void)setIsConnecting:(BOOL)arg1 ;
-(id)leftFirmwareVersion;
-(id)rightFirmwareVersion;
-(id)leftHardwareVersion;
-(id)rightHardwareVersion;
-(id)rightUUID;
-(id)leftUUID;
-(id)leftPeripheralUUID;
-(void)setLeftPeripheralUUID:(id)arg1 ;
-(id)rightPeripheralUUID;
-(void)setRightPeripheralUUID:(id)arg1 ;
-(id)leftBatteryLowDate;
-(id)rightBatteryLowDate;
-(void)setLeftPropertiesLoadCount:(id)arg1 ;
-(void)setRightPropertiesLoadCount:(id)arg1 ;
-(void)setCurrentLeftProgram:(id)arg1 ;
-(void)setCurrentRightProgram:(id)arg1 ;
-(void)setLeftPeripheral:(id)arg1 ;
-(void)peripheral:(id)arg1 didUpdateCharacteristic:(id)arg2 ;
-(void)setIsPersistent:(BOOL)arg1 ;
-(id)leftPeripheral;
-(id)rightPeripheral;
-(int)rightLoadedProperties;
-(void)setRightLoadedProperties:(int)arg1 ;
-(int)leftLoadedProperties;
-(void)setLeftLoadedProperties:(int)arg1 ;
-(id)rightPropertiesLoadCount;
-(id)leftPropertiesLoadCount;
-(void)updateName;
-(void)setNotify:(BOOL)arg1 forPeripheral:(id)arg2 ;
-(void)loadProperties:(int)arg1 forPeripheral:(id)arg2 withRetryPeriod:(float)arg3 ;
-(void)loadBasicProperties;
-(BOOL)peripheral:(id)arg1 didLoadProperty:(int)arg2 ;
-(id)currentLeftProgram;
-(void)mateWithDevice:(id)arg1 ;
-(int)peripheral:(id)arg1 propertyForCharacteristic:(id)arg2 ;
-(void)loadFailedProperties;
-(void)readValueForCharacteristic:(id)arg1 fromPeripheral:(id)arg2 ;
-(unsigned char)volumeValueForProperty:(int)arg1 andPeripheral:(id)arg2 ;
-(void)writeInt:(unsigned char)arg1 toPeripheral:(id)arg2 forProperty:(int)arg3 ;
-(void)_sendDelayedWrites;
-(id)peripheral:(id)arg1 characteristicForProperty:(int)arg2 ;
-(int)leftWriteResponseProperties;
-(void)setLeftWriteResponseProperties:(int)arg1 ;
-(int)rightWriteResponseProperties;
-(void)setRightWriteResponseProperties:(int)arg1 ;
-(void)delayWriteProperty:(int)arg1 forPeripheral:(id)arg2 ;
-(void)setRightPeripheral:(id)arg1 ;
-(id)currentRightProgram;
-(void)readProperty:(int)arg1 fromPeripheral:(id)arg2 ;
-(int)rightProgramVersion;
-(int)leftProgramVersion;
-(id)peripheral:(id)arg1 characteristicForUUID:(id)arg2 ;
-(id)persistentRepresentation;
-(void)peripheralDidUpdateName:(id)arg1 ;
-(void)peripheral:(id)arg1 didDiscoverServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didFinishPairingWithResult:(id)arg2 ;
-(void)peripheralDidUnpair:(id)arg1 ;
-(id)initWithPeripheral:(id)arg1 ;
-(id)initWithPersistentRepresentation:(id)arg1 ;
-(void)connectionDidChange;
-(id)deviceDescription;
-(void)peripheral:(id)arg1 didInvalidateServices:(id)arg2 ;
-(BOOL)addPeripheral:(id)arg1 ;
-(int)leftWriteRequestProperties;
-(void)setLeftWriteRequestProperties:(int)arg1 ;
-(int)rightWriteRequestProperties;
-(void)setRightWriteRequestProperties:(int)arg1 ;
-(void)setLeftProgramVersion:(int)arg1 ;
-(void)setRightProgramVersion:(int)arg1 ;
-(void)setModel:(id)arg1 ;
-(id)manufacturer;
-(void)setManufacturer:(id)arg1 ;
-(void)setValue:(id)arg1 forProperty:(int)arg2 ;
@end

