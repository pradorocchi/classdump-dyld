/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:55 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@interface ICPTPIPBonjourService : NSObject {

	id _bonjourServiceProperties;

}
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(CFNetServiceRef)publishedService;
-(void)releaseNetService;
-(void)releaseSocket;
-(BOOL)createSocket;
-(BOOL)createAndPublishNetService;
-(id)clientForAddress:(CFDataRef)arg1 ;
-(int)messagePTPDIPInstance:(id)arg1 withSocket:(int)arg2 ;
-(int)createPTPDIPInstanceWithAddress:(CFDataRef)arg1 fileDescriptor:(int)arg2 ;
-(id)clientForPID:(unsigned long)arg1 ;
-(id)initWithHostPort:(unsigned long)arg1 hostName:(id)arg2 hostGUID:(id)arg3 bonjourServiceType:(id)arg4 bonjourTXTRecords:(id)arg5 ;
-(BOOL)startService;
-(void)dispatchConnectionFromSocket:(int)arg1 withAddress:(CFDataRef)arg2 ;
-(int)destroyPTPDIPInstance:(id)arg1 ;
-(int)numClients;
-(void)clientTerminated:(id)arg1 ;
-(void)handleNetServiceError:(SCD_Struct_PT3*)arg1 ;
-(void)unlockDeviceForClient:(id)arg1 ;
-(void)disconnectClient:(id)arg1 ;
@end

