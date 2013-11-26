/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:53 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class EAAccessory, NSString, NSInputStream, NSOutputStream;

@interface EASession : NSObject {

	EAAccessory* _accessory;
	unsigned _sessionID;
	NSString* _protocolString;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	BOOL _openCompleted;
	int _sock;

}

@property (nonatomic,readonly) EAAccessory * accessory;                    //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) NSString * protocolString;                  //@synthesize protocolString=_protocolString - In the implementation block
@property (nonatomic,readonly) NSInputStream * inputStream;                //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) NSOutputStream * outputStream;              //@synthesize outputStream=_outputStream - In the implementation block
-(id)protocolString;
-(unsigned)_sessionID;
-(void)_streamClosed;
-(id)initWithAccessory:(id)arg1 forProtocol:(id)arg2 ;
-(void)_endStreams;
-(BOOL)isOpenCompleted;
-(void)setOpenCompleted:(BOOL)arg1 ;
-(id)accessory;
-(id)outputStream;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)_shortDescription;
-(id)inputStream;
@end

