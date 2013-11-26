/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libAWDProtobuf.dylib
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <libAWDProtobuf.dylib/libAWDProtobuf.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSMutableArray;

@interface AWDCaptiveSession : PBCodable {

	unsigned long long _timestamp;
	NSString* _appTriggeredPassiveSymptom;
	NSString* _autoLoginCarrierID;
	unsigned _autoLoginType;
	unsigned _durationNetworkNotCaptive;
	unsigned _durationOnNetwork;
	NSString* _handlerCNP;
	NSMutableArray* _installedCNPDisplayIDs;
	unsigned _passiveCaptivityCorrectDetection;
	unsigned _passiveCaptivityIncorrectDetection;
	unsigned _passiveCaptivitySymptom;
	unsigned _result;
	unsigned _websheetProbeCount;
	unsigned _websheetScrapeResult;
	BOOL _autoLoginFailed;
	BOOL _detectedNotCaptiveHandledByCNP;
	BOOL _handlerCNPTriggeredLogOff;
	BOOL _isDetectedCaptive;
	BOOL _passiveCaptivityDetected;
	BOOL _websheetScraped;
	BOOL _wisprDetected;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasResult; 
@property (assign,nonatomic) unsigned result;                                          //@synthesize result=_result - In the implementation block
@property (assign,nonatomic) BOOL hasWebsheetProbeCount; 
@property (assign,nonatomic) unsigned websheetProbeCount;                              //@synthesize websheetProbeCount=_websheetProbeCount - In the implementation block
@property (assign,nonatomic) BOOL hasWebsheetScraped; 
@property (assign,nonatomic) BOOL websheetScraped;                                     //@synthesize websheetScraped=_websheetScraped - In the implementation block
@property (assign,nonatomic) BOOL hasWebsheetScrapeResult; 
@property (assign,nonatomic) unsigned websheetScrapeResult;                            //@synthesize websheetScrapeResult=_websheetScrapeResult - In the implementation block
@property (nonatomic,retain) NSMutableArray * installedCNPDisplayIDs;                  //@synthesize installedCNPDisplayIDs=_installedCNPDisplayIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasHandlerCNP; 
@property (nonatomic,retain) NSString * handlerCNP;                                    //@synthesize handlerCNP=_handlerCNP - In the implementation block
@property (assign,nonatomic) BOOL hasDetectedNotCaptiveHandledByCNP; 
@property (assign,nonatomic) BOOL detectedNotCaptiveHandledByCNP;                      //@synthesize detectedNotCaptiveHandledByCNP=_detectedNotCaptiveHandledByCNP - In the implementation block
@property (assign,nonatomic) BOOL hasAutoLoginType; 
@property (assign,nonatomic) unsigned autoLoginType;                                   //@synthesize autoLoginType=_autoLoginType - In the implementation block
@property (assign,nonatomic) BOOL hasAutoLoginFailed; 
@property (assign,nonatomic) BOOL autoLoginFailed;                                     //@synthesize autoLoginFailed=_autoLoginFailed - In the implementation block
@property (nonatomic,readonly) BOOL hasAutoLoginCarrierID; 
@property (nonatomic,retain) NSString * autoLoginCarrierID;                            //@synthesize autoLoginCarrierID=_autoLoginCarrierID - In the implementation block
@property (assign,nonatomic) BOOL hasWisprDetected; 
@property (assign,nonatomic) BOOL wisprDetected;                                       //@synthesize wisprDetected=_wisprDetected - In the implementation block
@property (assign,nonatomic) BOOL hasPassiveCaptivityDetected; 
@property (assign,nonatomic) BOOL passiveCaptivityDetected;                            //@synthesize passiveCaptivityDetected=_passiveCaptivityDetected - In the implementation block
@property (assign,nonatomic) BOOL hasPassiveCaptivityCorrectDetection; 
@property (assign,nonatomic) unsigned passiveCaptivityCorrectDetection;                //@synthesize passiveCaptivityCorrectDetection=_passiveCaptivityCorrectDetection - In the implementation block
@property (assign,nonatomic) BOOL hasPassiveCaptivityIncorrectDetection; 
@property (assign,nonatomic) unsigned passiveCaptivityIncorrectDetection;              //@synthesize passiveCaptivityIncorrectDetection=_passiveCaptivityIncorrectDetection - In the implementation block
@property (assign,nonatomic) BOOL hasHandlerCNPTriggeredLogOff; 
@property (assign,nonatomic) BOOL handlerCNPTriggeredLogOff;                           //@synthesize handlerCNPTriggeredLogOff=_handlerCNPTriggeredLogOff - In the implementation block
@property (assign,nonatomic) BOOL hasIsDetectedCaptive; 
@property (assign,nonatomic) BOOL isDetectedCaptive;                                   //@synthesize isDetectedCaptive=_isDetectedCaptive - In the implementation block
@property (assign,nonatomic) BOOL hasDurationOnNetwork; 
@property (assign,nonatomic) unsigned durationOnNetwork;                               //@synthesize durationOnNetwork=_durationOnNetwork - In the implementation block
@property (assign,nonatomic) BOOL hasDurationNetworkNotCaptive; 
@property (assign,nonatomic) unsigned durationNetworkNotCaptive;                       //@synthesize durationNetworkNotCaptive=_durationNetworkNotCaptive - In the implementation block
@property (assign,nonatomic) BOOL hasPassiveCaptivitySymptom; 
@property (assign,nonatomic) unsigned passiveCaptivitySymptom;                         //@synthesize passiveCaptivitySymptom=_passiveCaptivitySymptom - In the implementation block
@property (nonatomic,readonly) BOOL hasAppTriggeredPassiveSymptom; 
@property (nonatomic,retain) NSString * appTriggeredPassiveSymptom;                    //@synthesize appTriggeredPassiveSymptom=_appTriggeredPassiveSymptom - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)setResult:(unsigned)arg1 ;
-(unsigned)result;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setInstalledCNPDisplayIDs:(id)arg1 ;
-(void)setHandlerCNP:(id)arg1 ;
-(void)setAutoLoginCarrierID:(id)arg1 ;
-(void)setAppTriggeredPassiveSymptom:(id)arg1 ;
-(void)addInstalledCNPDisplayIDs:(id)arg1 ;
-(BOOL)hasResult;
-(BOOL)hasWebsheetProbeCount;
-(unsigned)websheetProbeCount;
-(void)setWebsheetProbeCount:(unsigned)arg1 ;
-(BOOL)hasWebsheetScraped;
-(BOOL)websheetScraped;
-(void)setWebsheetScraped:(BOOL)arg1 ;
-(BOOL)hasWebsheetScrapeResult;
-(unsigned)websheetScrapeResult;
-(void)setWebsheetScrapeResult:(unsigned)arg1 ;
-(unsigned)installedCNPDisplayIDsCount;
-(void)clearInstalledCNPDisplayIDs;
-(id)installedCNPDisplayIDsAtIndex:(unsigned)arg1 ;
-(BOOL)hasHandlerCNP;
-(id)handlerCNP;
-(BOOL)hasDetectedNotCaptiveHandledByCNP;
-(BOOL)detectedNotCaptiveHandledByCNP;
-(void)setDetectedNotCaptiveHandledByCNP:(BOOL)arg1 ;
-(BOOL)hasAutoLoginType;
-(unsigned)autoLoginType;
-(void)setAutoLoginType:(unsigned)arg1 ;
-(BOOL)hasAutoLoginFailed;
-(BOOL)autoLoginFailed;
-(void)setAutoLoginFailed:(BOOL)arg1 ;
-(BOOL)hasAutoLoginCarrierID;
-(id)autoLoginCarrierID;
-(BOOL)hasWisprDetected;
-(BOOL)wisprDetected;
-(void)setWisprDetected:(BOOL)arg1 ;
-(BOOL)hasPassiveCaptivityDetected;
-(BOOL)passiveCaptivityDetected;
-(void)setPassiveCaptivityDetected:(BOOL)arg1 ;
-(BOOL)hasPassiveCaptivityCorrectDetection;
-(unsigned)passiveCaptivityCorrectDetection;
-(void)setPassiveCaptivityCorrectDetection:(unsigned)arg1 ;
-(BOOL)hasPassiveCaptivityIncorrectDetection;
-(unsigned)passiveCaptivityIncorrectDetection;
-(void)setPassiveCaptivityIncorrectDetection:(unsigned)arg1 ;
-(BOOL)hasHandlerCNPTriggeredLogOff;
-(BOOL)handlerCNPTriggeredLogOff;
-(void)setHandlerCNPTriggeredLogOff:(BOOL)arg1 ;
-(BOOL)hasIsDetectedCaptive;
-(BOOL)isDetectedCaptive;
-(void)setIsDetectedCaptive:(BOOL)arg1 ;
-(BOOL)hasDurationOnNetwork;
-(unsigned)durationOnNetwork;
-(void)setDurationOnNetwork:(unsigned)arg1 ;
-(BOOL)hasDurationNetworkNotCaptive;
-(unsigned)durationNetworkNotCaptive;
-(void)setDurationNetworkNotCaptive:(unsigned)arg1 ;
-(BOOL)hasPassiveCaptivitySymptom;
-(unsigned)passiveCaptivitySymptom;
-(void)setPassiveCaptivitySymptom:(unsigned)arg1 ;
-(BOOL)hasAppTriggeredPassiveSymptom;
-(id)appTriggeredPassiveSymptom;
-(void)setHasResult:(BOOL)arg1 ;
-(void)setHasWebsheetProbeCount:(BOOL)arg1 ;
-(void)setHasWebsheetScraped:(BOOL)arg1 ;
-(void)setHasWebsheetScrapeResult:(BOOL)arg1 ;
-(void)setHasDetectedNotCaptiveHandledByCNP:(BOOL)arg1 ;
-(void)setHasAutoLoginType:(BOOL)arg1 ;
-(void)setHasAutoLoginFailed:(BOOL)arg1 ;
-(void)setHasWisprDetected:(BOOL)arg1 ;
-(void)setHasPassiveCaptivityDetected:(BOOL)arg1 ;
-(void)setHasPassiveCaptivityCorrectDetection:(BOOL)arg1 ;
-(void)setHasPassiveCaptivityIncorrectDetection:(BOOL)arg1 ;
-(void)setHasHandlerCNPTriggeredLogOff:(BOOL)arg1 ;
-(void)setHasIsDetectedCaptive:(BOOL)arg1 ;
-(void)setHasDurationOnNetwork:(BOOL)arg1 ;
-(void)setHasDurationNetworkNotCaptive:(BOOL)arg1 ;
-(void)setHasPassiveCaptivitySymptom:(BOOL)arg1 ;
-(id)installedCNPDisplayIDs;
@end

