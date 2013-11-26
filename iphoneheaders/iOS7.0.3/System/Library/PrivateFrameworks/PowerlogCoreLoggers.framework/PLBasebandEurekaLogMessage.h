/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:14 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCoreLoggers.framework/PowerlogCoreLoggers
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PowerlogCoreLoggers/PowerlogCoreLoggers-Structs.h>
#import <PowerlogCoreLoggers/PLBasebandMessage.h>

@class NSData;

@interface PLBasebandEurekaLogMessage : PLBasebandMessage {

	PLBasebandLogHeader* _header;
	NSData* _payload;

}

@property (assign,nonatomic) PLBasebandLogHeader* header;              //@synthesize header=_header - In the implementation block
@property (assign,nonatomic) NSData * payload;                         //@synthesize payload=_payload - In the implementation block
-(void)parseData:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)payload;
-(void)setPayload:(id)arg1 ;
-(PLBasebandLogHeader*)header;
-(void)setHeader:(PLBasebandLogHeader*)arg1 ;
-(void)logWithLogger:(id)arg1 ;
-(id)tooShortErrorString;
-(id)stringForUnknownBytes:(unsigned)arg1 ;
-(id)eventCodeString:(unsigned)arg1 ;
@end

