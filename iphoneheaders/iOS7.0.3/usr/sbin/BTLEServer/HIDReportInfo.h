/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/sbin/BTLEServer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSCondition;

@interface HIDReportInfo : NSObject {

	unsigned char _ID;
	unsigned char _type;
	NSCondition* _commandCondition;
	int _commandPending;
	BOOL _commandError;

}

@property (nonatomic,readonly) unsigned char ID;                            //@synthesize ID=_ID - In the implementation block
@property (nonatomic,readonly) unsigned char type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSCondition * commandCondition;              //@synthesize commandCondition=_commandCondition - In the implementation block
@property (assign,nonatomic) int commandPending;                            //@synthesize commandPending=_commandPending - In the implementation block
@property (assign,nonatomic) BOOL commandError;                             //@synthesize commandError=_commandError - In the implementation block
-(id)initWithID:(unsigned char)arg1 type:(unsigned char)arg2 ;
-(id)commandCondition;
-(void)setCommandPending:(int)arg1 ;
-(void)setCommandError:(BOOL)arg1 ;
-(int)commandPending;
-(BOOL)commandError;
-(void)dealloc;
-(unsigned char)type;
-(unsigned char)ID;
@end

