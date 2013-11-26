/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iap2d/iAP2EASession.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;
@class NSMutableArray, NSRecursiveLock, NSObject;

@interface iAP2EASessionBasic : iAP2EASession {

	unsigned short _maxPayloadSize;
	char* _transferBuffer;
	unsigned short _maxPayloadBufferSize;
	char* _payloadBuffer;
	NSMutableArray* _eaPacketPool;
	NSRecursiveLock* _packetPoolLock;
	BOOL _continueRunningSession;
	NSObject<OS_dispatch_queue>* _continueRunningQueue;
	NSObject<OS_dispatch_semaphore>* _continueRunningSemaphore;
	NSObject<OS_dispatch_queue>* _msgSerialQueue;
	NSObject<OS_dispatch_source>* _listenSource;
	NSObject<OS_dispatch_source>* _readSource;

}
-(void)sendEABufferDataToApp:(char*)arg1 withLength:(unsigned)arg2 ;
-(void)_openPipeToApp;
-(void)_openPipeFromApp;
-(id)initWithClient:(id)arg1 connection:(id)arg2 protocolID:(unsigned char)arg3 sessionID:(unsigned short*)arg4 ;
-(void)shuttingDownSession;
-(BOOL)closeDataPipes;
-(id)_getUnusedEAPacket;
-(void)_releasePacketForSessionAfterUse:(id)arg1 ;
-(void)dealloc;
@end

