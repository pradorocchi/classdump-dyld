/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreMotion/CLIntersiloServiceProtocol.h>

@class CLSilo, CLIntersiloInterface;

@interface CLIntersiloService : NSObject <CLIntersiloServiceProtocol> {

	CLSilo* _silo;
	CLIntersiloInterface* _inboundInterface;
	CLIntersiloInterface* _outboundInterface;

}

@property (nonatomic,readonly) CLSilo * silo;                                         //@synthesize silo=_silo - In the implementation block
@property (nonatomic,readonly) CLIntersiloInterface * inboundInterface;               //@synthesize inboundInterface=_inboundInterface - In the implementation block
@property (nonatomic,readonly) CLIntersiloInterface * outboundInterface;              //@synthesize outboundInterface=_outboundInterface - In the implementation block
+(id)getSilo;
-(id)initInSilo:(id)arg1 ;
-(void)heartAttack;
-(id)initWithInboundProtocol:(id)arg1 outboundProtocol:(id)arg2 andSilo:(id)arg3 ;
-(id)silo;
-(id)inboundInterface;
-(id)outboundInterface;
-(BOOL)isHydrated;
-(id)init;
-(id)debugDescription;
-(void).cxx_destruct;
@end

