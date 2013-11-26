/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class IMPowerAssertion, NSMutableArray, NSMutableDictionary, NSDate, NSArray;

@interface IMAVCallManager : NSObject {

	IMPowerAssertion* _powerAssertion;
	NSMutableArray* _chatArray;
	NSMutableArray* _acChatProxyArray;
	NSMutableArray* _avChatProxyArray;
	NSMutableDictionary* _guidToACChatProxyMap;
	NSMutableDictionary* _guidToAVChatProxyMap;
	NSDate* _lastCallStateChange;
	int _avToken;
	int _acToken;
	unsigned _avCallState;
	unsigned _acCallState;
	unsigned _telephonyCallState;
	unsigned _globalCallState;

}

@property (nonatomic,readonly) unsigned callState; 
@property (nonatomic,readonly) BOOL hasActiveCall; 
@property (nonatomic,readonly) NSArray * calls; 
@property (assign,setter=_setTelephonyCallState:,nonatomic) unsigned _telephonyCallState;              //@synthesize telephonyCallState=_telephonyCallState - In the implementation block
@property (nonatomic,readonly) NSArray * _FTCalls; 
+(id)sharedInstance;
-(unsigned)callState;
-(void)dealloc;
-(id)init;
-(BOOL)hasActiveCall;
-(void)_updateACChatProxyWithInfo:(id)arg1 ;
-(void)_updateAVChatProxyWithInfo:(id)arg1 ;
-(void)_updateOverallChatState;
-(void)_addIMAVChatToChatList:(id)arg1 ;
-(void)_addAVChatProxy:(id)arg1 ;
-(void)_addACChatProxy:(id)arg1 ;
-(void)_removeIMAVChatFromChatList:(id)arg1 ;
-(void)_sendProxyUpdate;
-(id)calls;
-(unsigned)_callState;
-(BOOL)_hasActiveFaceTimeCall;
-(BOOL)_hasActiveAudioCall;
-(void)_updateAVCallState;
-(void)_updateACCallState;
-(void)_setTelephonyCallState:(unsigned)arg1 ;
-(BOOL)_hasActiveTelephonyCall;
-(void)_setAVCallState:(unsigned)arg1 ;
-(void)_setACCallState:(unsigned)arg1 ;
-(void)_setAVCallState:(unsigned)arg1 quietly:(BOOL)arg2 ;
-(void)_setACCallState:(unsigned)arg1 quietly:(BOOL)arg2 ;
-(void)__setTelephonyCallState:(unsigned)arg1 ;
-(id)_FTCalls;
-(id)_mutableFTCalls;
-(id)_copyMutableFTCalls;
-(void)_postStateChangeNamed:(id)arg1 fromState:(unsigned)arg2 toState:(unsigned)arg3 postType:(BOOL)arg4 type:(unsigned)arg5 ;
-(unsigned)_telephonyCallState;
-(void)_postStateChangeIfNecessary;
-(id)_calls;
-(unsigned)_callStateForType:(unsigned)arg1 ;
-(id)_nonRetainingChatList;
-(id)_activeFaceTimeCall;
-(id)_activeAudioCall;
@end

