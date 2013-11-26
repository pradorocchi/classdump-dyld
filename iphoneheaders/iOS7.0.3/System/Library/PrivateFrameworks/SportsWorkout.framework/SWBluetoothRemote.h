/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:08:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SportsWorkout/SportsWorkout-Structs.h>
#import <SportsWorkout/SWRemote.h>

@class NSMutableData, SWBluetoothMessageHandler, SWPacketUnscrambler, NSTimer;

@interface SWBluetoothRemote : SWRemote {

	NSMutableData* _bluetoothInputData;
	SWBluetoothMessageHandler* _messageHandler;
	SWPacketUnscrambler* _packetUnscrambler;
	NSTimer* _remoteLeftKeyLongPressTimer;
	NSTimer* _remoteRightKeyLongPressTimer;
	NSTimer* _remoteNikeKeyLongPressTimer;
	NSTimer* _remotePlayKeyLongPressTimer;
	NSTimer* _playKeyTimer;
	NSTimer* _volumeUpKeyTimer;
	NSTimer* _volumeDownKeyTimer;
	NSTimer* _leftKeyTimer;
	NSTimer* _rightKeyTimer;
	NSTimer* _nikeKeyTimer;
	BOOL _playKeyWasDown;
	BOOL _volumeUpKeyWasDown;
	BOOL _volumeDownKeyWasDown;
	BOOL _leftKeyWasDown;
	BOOL _rightKeyWasDown;
	BOOL _nikeKeyWasDown;

}
-(void)beginLinking;
-(void)cancelLinking;
-(void)beginSearching;
-(void)cancelSearching;
-(void)unlink;
-(void)_receivedActivationNotification:(id)arg1 ;
-(void)_receivedDiscoveryNotification:(id)arg1 ;
-(void)_receivedConnectionNotification:(id)arg1 ;
-(void)_receivedConnectionFailureNotification:(id)arg1 ;
-(void)_discoverDevice;
-(SCD_Struct_SW7)_deviceAddressForSerialNumber:(id)arg1 ;
-(void)_connectToDeviceWithAddress:(SCD_Struct_SW7)arg1 ;
-(void)_registerToReadInput;
-(void)_receivedInputReadNotification:(id)arg1 ;
-(id)_serialNumberForPacket:(id)arg1 timestamp:(unsigned)arg2 radioId:(unsigned*)arg3 ;
-(void)_handleSimpleRemotePlayKeyIsDown:(BOOL)arg1 ;
-(void)_handleSimpleRemoteVolumeUpKeyIsDown:(BOOL)arg1 ;
-(void)_handleSimpleRemoteVolumeDownKeyIsDown:(BOOL)arg1 ;
-(void)_handleSimpleRemoteLeftKeyIsDown:(BOOL)arg1 ;
-(void)_handleSimpleRemoteRightKeyIsDown:(BOOL)arg1 ;
-(void)_handleNikeKeyIsDown:(BOOL)arg1 ;
-(void)_handleSimpleRemotePlayKeyUpTimer:(id)arg1 ;
-(void)_postEndWorkoutNotification:(id)arg1 ;
-(void)_handleSimpleRemoteVolumeUpKeyUpTimer:(id)arg1 ;
-(void)_handleSimpleRemoteVolumeDownKeyUpTimer:(id)arg1 ;
-(void)_handleSimpleRemoteLeftKeyUpTimer:(id)arg1 ;
-(void)_postBeginMusicRewindNotification:(id)arg1 ;
-(void)_handleSimpleRemoteRightKeyUpTimer:(id)arg1 ;
-(void)_postBeginMusicFastForwardNotification:(id)arg1 ;
-(void)_handleNikeKeyUpTimer:(id)arg1 ;
-(void)_postFirePowersongNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)deactivate;
@end

