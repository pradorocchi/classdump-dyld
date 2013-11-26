/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:55 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@class PTPOperationResponsePacket, PTPWrappedBytes;

@interface PTPTransport : NSObject {

	unsigned short _type;
	int _role;
	int _connectionStatus;
	id _delegate;
	BOOL _timedOut;
	BOOL _responseReceived;
	PTPOperationResponsePacket* _response;
	opaque_pthread_t* _callbackThread;
	opaque_pthread_mutex_t _callbackThreadMutex;
	opaque_pthread_cond_t _callbackThreadCondition;
	BOOL _callbackThreadConditionSignaled;
	CFRunLoopRef _callbackThreadRunLoop;
	CFRunLoopSourceRef _callbackDummyMachPortRLSrc;
	unsigned char _headerBuffer[12];
	BOOL _headerBufferFound;
	BOOL _delegateNeedsResponse;
	BOOL _busy;
	unsigned long _canceledTransactionID;
	PTPWrappedBytes* _dataForTransaction;
	unsigned long long _excessReceivedDataSize;
	unsigned long _totalBytesFilled;

}
-(void)setResponse:(id)arg1 ;
-(int)role;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(BOOL)sendEvent:(id)arg1 ;
-(unsigned short)type;
-(id)response;
-(void)stop;
-(void)setTimedOut:(BOOL)arg1 ;
-(BOOL)sendResponse:(id)arg1 ;
-(BOOL)timedOut;
-(CFRunLoopRef)callbackThreadRunLoop;
-(BOOL)startInitiator;
-(int)lockCallbackThreadMutex;
-(int)unlockCallbackThreadMutex;
-(int)waitForCallbackThreadConditionSignalWithTimeout:(long)arg1 ;
-(void)setResponseReceived:(BOOL)arg1 ;
-(int)signalCallbackThreadCondition;
-(BOOL)responseReceived;
-(BOOL)startResponder;
-(BOOL)connected;
-(id)sendRequest:(id)arg1 receiveData:(id)arg2 timeout:(unsigned long)arg3 ;
-(id)sendRequest:(id)arg1 sendData:(id)arg2 timeout:(unsigned long)arg3 ;
-(void)cancelTransaction:(id)arg1 ;
-(void)abortPendingIO;
-(int)connectionStatus;
-(unsigned long long)excessReceivedDataSize;
-(unsigned short)deviceStatus;
-(void)deviceReset;
-(BOOL)startCallbackThread;
-(void)endCallbackThread;
-(void)cleanupCallbackThread;
-(void*)callbackThreadFunction;
-(void)sendData:(id)arg1 ;
@end

