/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libAWDProtobuf.dylib
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libAWDProtobuf.dylib/libAWDProtobuf.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface AWDFaceTimeCallEnded : PBCodable {

	unsigned long long _timestamp;
	unsigned _backCameraCaptureDuration;
	unsigned _callDuration;
	unsigned _conferenceMiscError;
	unsigned _connectDuration;
	unsigned _connectionType;
	unsigned _currentNatType;
	unsigned _dataRate;
	unsigned _diagnosticPingAvg;
	unsigned _diagnosticPingMax;
	unsigned _diagnosticPingMin;
	unsigned _diagnosticPingPacketLoss;
	unsigned _endedReason;
	unsigned _frontCameraCaptureDuration;
	unsigned _gameKitError;
	int _genericError;
	int _gksError;
	int _gksReturnCode;
	NSString* _guid;
	unsigned _invitationServiceError;
	unsigned _isAudioInterrupted;
	unsigned _isCallUpgrade;
	unsigned _isInitiator;
	unsigned _isNetworkActive;
	unsigned _isNetworkEnabled;
	unsigned _isNetworkReachable;
	unsigned _isVideo;
	unsigned _isVideoInterrupted;
	int _linkQuality;
	unsigned _localNetworkConnection;
	unsigned _messageDeliveryError;
	unsigned _networkCheckResult;
	unsigned _registrationError;
	unsigned _relayConnectDuration;
	unsigned _relayError;
	unsigned _remoteNatType;
	unsigned _remoteNetworkConnection;
	unsigned _usesRelay;
	unsigned _viceroyError;
	SCD_Struct_AW3 _has;

}

@property (nonatomic,readonly) BOOL hasGuid; 
@property (nonatomic,retain) NSString * guid;                                  //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEndedReason; 
@property (assign,nonatomic) unsigned endedReason;                             //@synthesize endedReason=_endedReason - In the implementation block
@property (assign,nonatomic) BOOL hasGenericError; 
@property (assign,nonatomic) int genericError;                                 //@synthesize genericError=_genericError - In the implementation block
@property (assign,nonatomic) BOOL hasViceroyError; 
@property (assign,nonatomic) unsigned viceroyError;                            //@synthesize viceroyError=_viceroyError - In the implementation block
@property (assign,nonatomic) BOOL hasGameKitError; 
@property (assign,nonatomic) unsigned gameKitError;                            //@synthesize gameKitError=_gameKitError - In the implementation block
@property (assign,nonatomic) BOOL hasMessageDeliveryError; 
@property (assign,nonatomic) unsigned messageDeliveryError;                    //@synthesize messageDeliveryError=_messageDeliveryError - In the implementation block
@property (assign,nonatomic) BOOL hasConferenceMiscError; 
@property (assign,nonatomic) unsigned conferenceMiscError;                     //@synthesize conferenceMiscError=_conferenceMiscError - In the implementation block
@property (assign,nonatomic) BOOL hasRegistrationError; 
@property (assign,nonatomic) unsigned registrationError;                       //@synthesize registrationError=_registrationError - In the implementation block
@property (assign,nonatomic) BOOL hasRelayError; 
@property (assign,nonatomic) unsigned relayError;                              //@synthesize relayError=_relayError - In the implementation block
@property (assign,nonatomic) BOOL hasInvitationServiceError; 
@property (assign,nonatomic) unsigned invitationServiceError;                  //@synthesize invitationServiceError=_invitationServiceError - In the implementation block
@property (assign,nonatomic) BOOL hasCallDuration; 
@property (assign,nonatomic) unsigned callDuration;                            //@synthesize callDuration=_callDuration - In the implementation block
@property (assign,nonatomic) BOOL hasDiagnosticPingMin; 
@property (assign,nonatomic) unsigned diagnosticPingMin;                       //@synthesize diagnosticPingMin=_diagnosticPingMin - In the implementation block
@property (assign,nonatomic) BOOL hasDiagnosticPingAvg; 
@property (assign,nonatomic) unsigned diagnosticPingAvg;                       //@synthesize diagnosticPingAvg=_diagnosticPingAvg - In the implementation block
@property (assign,nonatomic) BOOL hasDiagnosticPingMax; 
@property (assign,nonatomic) unsigned diagnosticPingMax;                       //@synthesize diagnosticPingMax=_diagnosticPingMax - In the implementation block
@property (assign,nonatomic) BOOL hasDiagnosticPingPacketLoss; 
@property (assign,nonatomic) unsigned diagnosticPingPacketLoss;                //@synthesize diagnosticPingPacketLoss=_diagnosticPingPacketLoss - In the implementation block
@property (assign,nonatomic) BOOL hasIsNetworkEnabled; 
@property (assign,nonatomic) unsigned isNetworkEnabled;                        //@synthesize isNetworkEnabled=_isNetworkEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasIsNetworkActive; 
@property (assign,nonatomic) unsigned isNetworkActive;                         //@synthesize isNetworkActive=_isNetworkActive - In the implementation block
@property (assign,nonatomic) BOOL hasIsNetworkReachable; 
@property (assign,nonatomic) unsigned isNetworkReachable;                      //@synthesize isNetworkReachable=_isNetworkReachable - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkCheckResult; 
@property (assign,nonatomic) unsigned networkCheckResult;                      //@synthesize networkCheckResult=_networkCheckResult - In the implementation block
@property (assign,nonatomic) BOOL hasFrontCameraCaptureDuration; 
@property (assign,nonatomic) unsigned frontCameraCaptureDuration;              //@synthesize frontCameraCaptureDuration=_frontCameraCaptureDuration - In the implementation block
@property (assign,nonatomic) BOOL hasBackCameraCaptureDuration; 
@property (assign,nonatomic) unsigned backCameraCaptureDuration;               //@synthesize backCameraCaptureDuration=_backCameraCaptureDuration - In the implementation block
@property (assign,nonatomic) BOOL hasDataRate; 
@property (assign,nonatomic) unsigned dataRate;                                //@synthesize dataRate=_dataRate - In the implementation block
@property (assign,nonatomic) BOOL hasGksError; 
@property (assign,nonatomic) int gksError;                                     //@synthesize gksError=_gksError - In the implementation block
@property (assign,nonatomic) BOOL hasConnectDuration; 
@property (assign,nonatomic) unsigned connectDuration;                         //@synthesize connectDuration=_connectDuration - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteNetworkConnection; 
@property (assign,nonatomic) unsigned remoteNetworkConnection;                 //@synthesize remoteNetworkConnection=_remoteNetworkConnection - In the implementation block
@property (assign,nonatomic) BOOL hasLocalNetworkConnection; 
@property (assign,nonatomic) unsigned localNetworkConnection;                  //@synthesize localNetworkConnection=_localNetworkConnection - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                          //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) BOOL hasUsesRelay; 
@property (assign,nonatomic) unsigned usesRelay;                               //@synthesize usesRelay=_usesRelay - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentNatType; 
@property (assign,nonatomic) unsigned currentNatType;                          //@synthesize currentNatType=_currentNatType - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteNatType; 
@property (assign,nonatomic) unsigned remoteNatType;                           //@synthesize remoteNatType=_remoteNatType - In the implementation block
@property (assign,nonatomic) BOOL hasRelayConnectDuration; 
@property (assign,nonatomic) unsigned relayConnectDuration;                    //@synthesize relayConnectDuration=_relayConnectDuration - In the implementation block
@property (assign,nonatomic) BOOL hasIsInitiator; 
@property (assign,nonatomic) unsigned isInitiator;                             //@synthesize isInitiator=_isInitiator - In the implementation block
@property (assign,nonatomic) BOOL hasIsVideoInterrupted; 
@property (assign,nonatomic) unsigned isVideoInterrupted;                      //@synthesize isVideoInterrupted=_isVideoInterrupted - In the implementation block
@property (assign,nonatomic) BOOL hasIsAudioInterrupted; 
@property (assign,nonatomic) unsigned isAudioInterrupted;                      //@synthesize isAudioInterrupted=_isAudioInterrupted - In the implementation block
@property (assign,nonatomic) BOOL hasIsCallUpgrade; 
@property (assign,nonatomic) unsigned isCallUpgrade;                           //@synthesize isCallUpgrade=_isCallUpgrade - In the implementation block
@property (assign,nonatomic) BOOL hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                                  //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) BOOL hasGksReturnCode; 
@property (assign,nonatomic) int gksReturnCode;                                //@synthesize gksReturnCode=_gksReturnCode - In the implementation block
@property (assign,nonatomic) BOOL hasIsVideo; 
@property (assign,nonatomic) unsigned isVideo;                                 //@synthesize isVideo=_isVideo - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)isNetworkReachable;
-(id)dictionaryRepresentation;
-(unsigned)isVideo;
-(unsigned)connectionType;
-(void)setConnectionType:(unsigned)arg1 ;
-(id)guid;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIsVideo:(unsigned)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setGuid:(id)arg1 ;
-(BOOL)hasGuid;
-(BOOL)hasTimestamp;
-(BOOL)hasIsVideo;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasIsVideo:(BOOL)arg1 ;
-(BOOL)hasConnectDuration;
-(unsigned)connectDuration;
-(void)setConnectDuration:(unsigned)arg1 ;
-(BOOL)hasRemoteNetworkConnection;
-(unsigned)remoteNetworkConnection;
-(void)setRemoteNetworkConnection:(unsigned)arg1 ;
-(BOOL)hasLocalNetworkConnection;
-(unsigned)localNetworkConnection;
-(void)setLocalNetworkConnection:(unsigned)arg1 ;
-(BOOL)hasConnectionType;
-(BOOL)hasUsesRelay;
-(unsigned)usesRelay;
-(void)setUsesRelay:(unsigned)arg1 ;
-(BOOL)hasCurrentNatType;
-(unsigned)currentNatType;
-(void)setCurrentNatType:(unsigned)arg1 ;
-(BOOL)hasRemoteNatType;
-(unsigned)remoteNatType;
-(void)setRemoteNatType:(unsigned)arg1 ;
-(BOOL)hasRelayConnectDuration;
-(unsigned)relayConnectDuration;
-(void)setRelayConnectDuration:(unsigned)arg1 ;
-(void)setHasConnectDuration:(BOOL)arg1 ;
-(void)setHasRemoteNetworkConnection:(BOOL)arg1 ;
-(void)setHasLocalNetworkConnection:(BOOL)arg1 ;
-(void)setHasConnectionType:(BOOL)arg1 ;
-(void)setHasUsesRelay:(BOOL)arg1 ;
-(void)setHasCurrentNatType:(BOOL)arg1 ;
-(void)setHasRemoteNatType:(BOOL)arg1 ;
-(void)setHasRelayConnectDuration:(BOOL)arg1 ;
-(BOOL)hasEndedReason;
-(unsigned)endedReason;
-(void)setEndedReason:(unsigned)arg1 ;
-(BOOL)hasGenericError;
-(int)genericError;
-(void)setGenericError:(int)arg1 ;
-(BOOL)hasViceroyError;
-(unsigned)viceroyError;
-(void)setViceroyError:(unsigned)arg1 ;
-(BOOL)hasGameKitError;
-(unsigned)gameKitError;
-(void)setGameKitError:(unsigned)arg1 ;
-(BOOL)hasMessageDeliveryError;
-(unsigned)messageDeliveryError;
-(void)setMessageDeliveryError:(unsigned)arg1 ;
-(BOOL)hasConferenceMiscError;
-(unsigned)conferenceMiscError;
-(void)setConferenceMiscError:(unsigned)arg1 ;
-(BOOL)hasRegistrationError;
-(unsigned)registrationError;
-(void)setRegistrationError:(unsigned)arg1 ;
-(BOOL)hasRelayError;
-(unsigned)relayError;
-(void)setRelayError:(unsigned)arg1 ;
-(BOOL)hasInvitationServiceError;
-(unsigned)invitationServiceError;
-(void)setInvitationServiceError:(unsigned)arg1 ;
-(BOOL)hasCallDuration;
-(unsigned)callDuration;
-(void)setCallDuration:(unsigned)arg1 ;
-(BOOL)hasDiagnosticPingMin;
-(unsigned)diagnosticPingMin;
-(void)setDiagnosticPingMin:(unsigned)arg1 ;
-(BOOL)hasDiagnosticPingAvg;
-(unsigned)diagnosticPingAvg;
-(void)setDiagnosticPingAvg:(unsigned)arg1 ;
-(BOOL)hasDiagnosticPingMax;
-(unsigned)diagnosticPingMax;
-(void)setDiagnosticPingMax:(unsigned)arg1 ;
-(BOOL)hasDiagnosticPingPacketLoss;
-(unsigned)diagnosticPingPacketLoss;
-(void)setDiagnosticPingPacketLoss:(unsigned)arg1 ;
-(BOOL)hasIsNetworkEnabled;
-(unsigned)isNetworkEnabled;
-(void)setIsNetworkEnabled:(unsigned)arg1 ;
-(BOOL)hasIsNetworkActive;
-(unsigned)isNetworkActive;
-(void)setIsNetworkActive:(unsigned)arg1 ;
-(BOOL)hasIsNetworkReachable;
-(void)setIsNetworkReachable:(unsigned)arg1 ;
-(BOOL)hasNetworkCheckResult;
-(unsigned)networkCheckResult;
-(void)setNetworkCheckResult:(unsigned)arg1 ;
-(BOOL)hasFrontCameraCaptureDuration;
-(unsigned)frontCameraCaptureDuration;
-(void)setFrontCameraCaptureDuration:(unsigned)arg1 ;
-(BOOL)hasBackCameraCaptureDuration;
-(unsigned)backCameraCaptureDuration;
-(void)setBackCameraCaptureDuration:(unsigned)arg1 ;
-(BOOL)hasDataRate;
-(unsigned)dataRate;
-(void)setDataRate:(unsigned)arg1 ;
-(BOOL)hasGksError;
-(int)gksError;
-(void)setGksError:(int)arg1 ;
-(BOOL)hasIsInitiator;
-(unsigned)isInitiator;
-(void)setIsInitiator:(unsigned)arg1 ;
-(BOOL)hasIsVideoInterrupted;
-(unsigned)isVideoInterrupted;
-(void)setIsVideoInterrupted:(unsigned)arg1 ;
-(BOOL)hasIsAudioInterrupted;
-(unsigned)isAudioInterrupted;
-(void)setIsAudioInterrupted:(unsigned)arg1 ;
-(BOOL)hasIsCallUpgrade;
-(unsigned)isCallUpgrade;
-(void)setIsCallUpgrade:(unsigned)arg1 ;
-(BOOL)hasLinkQuality;
-(int)linkQuality;
-(void)setLinkQuality:(int)arg1 ;
-(BOOL)hasGksReturnCode;
-(int)gksReturnCode;
-(void)setGksReturnCode:(int)arg1 ;
-(void)setHasEndedReason:(BOOL)arg1 ;
-(void)setHasGenericError:(BOOL)arg1 ;
-(void)setHasViceroyError:(BOOL)arg1 ;
-(void)setHasGameKitError:(BOOL)arg1 ;
-(void)setHasMessageDeliveryError:(BOOL)arg1 ;
-(void)setHasConferenceMiscError:(BOOL)arg1 ;
-(void)setHasRegistrationError:(BOOL)arg1 ;
-(void)setHasRelayError:(BOOL)arg1 ;
-(void)setHasInvitationServiceError:(BOOL)arg1 ;
-(void)setHasCallDuration:(BOOL)arg1 ;
-(void)setHasDiagnosticPingMin:(BOOL)arg1 ;
-(void)setHasDiagnosticPingAvg:(BOOL)arg1 ;
-(void)setHasDiagnosticPingMax:(BOOL)arg1 ;
-(void)setHasDiagnosticPingPacketLoss:(BOOL)arg1 ;
-(void)setHasIsNetworkEnabled:(BOOL)arg1 ;
-(void)setHasIsNetworkActive:(BOOL)arg1 ;
-(void)setHasIsNetworkReachable:(BOOL)arg1 ;
-(void)setHasNetworkCheckResult:(BOOL)arg1 ;
-(void)setHasFrontCameraCaptureDuration:(BOOL)arg1 ;
-(void)setHasBackCameraCaptureDuration:(BOOL)arg1 ;
-(void)setHasDataRate:(BOOL)arg1 ;
-(void)setHasGksError:(BOOL)arg1 ;
-(void)setHasIsInitiator:(BOOL)arg1 ;
-(void)setHasIsVideoInterrupted:(BOOL)arg1 ;
-(void)setHasIsAudioInterrupted:(BOOL)arg1 ;
-(void)setHasIsCallUpgrade:(BOOL)arg1 ;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(void)setHasGksReturnCode:(BOOL)arg1 ;
@end

