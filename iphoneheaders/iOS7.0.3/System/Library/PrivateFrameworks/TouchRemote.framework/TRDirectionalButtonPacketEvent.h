/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:10 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TouchRemote/TRPacketEvent.h>

@interface TRDirectionalButtonPacketEvent : TRPacketEvent {

	int _buttonType;
	int _gestureState;
	int _gestureType;

}

@property (nonatomic,readonly) int buttonType;                //@synthesize buttonType=_buttonType - In the implementation block
@property (nonatomic,readonly) int gestureState;              //@synthesize gestureState=_gestureState - In the implementation block
@property (nonatomic,readonly) int gestureType;               //@synthesize gestureType=_gestureType - In the implementation block
+(unsigned)_packetEventType;
-(id)description;
-(int)gestureType;
-(int)buttonType;
-(id)_initWithVersion:(unsigned)arg1 payloadDictionary:(id)arg2 ;
-(int)gestureState;
-(id)initWithButtonType:(int)arg1 gestureType:(int)arg2 gestureState:(int)arg3 ;
@end

