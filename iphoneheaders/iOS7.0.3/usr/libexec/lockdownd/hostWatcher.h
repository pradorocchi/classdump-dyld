/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/lockdownd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <lockdownd/lockdownd-Structs.h>
@interface hostWatcher : NSObject {

	CFStringRef _hostID;
	lockdown_connectionRef _ldConn;
	CFSetRef _watchedServices;
	CFStringRef _description;
	opaque_pthread_t* _pingThread;
	bool _running;
	bool _invalidated;
	bool _aboutToSleep;
	opaque_pthread_mutex_t _sleepMtx;
	opaque_pthread_cond_t _sleepCond;
	IONotificationPortRef _powerPort;
	unsigned _powerConn;
	unsigned _powerNotifier;
	int _sock;
	SSLContextRef _sslCtx;

}
+(void)invalidateServicesForHostID:(CFStringRef)arg1 ;
+(void)startWatcherWithCheckinGoop:(void*)arg1 ;
+(void)addService:(id)arg1 forHostID:(CFStringRef)arg2 ;
+(void)removeService:(id)arg1 forHostID:(CFStringRef)arg2 ;
+(void)invalidateServiceWithPID:(int)arg1 heartBeatRef:(unsigned long long)arg2 ;
+(int)dump;
-(long)_sendPartialPacket:(const char*)arg1 size:(unsigned long)arg2 ;
-(long)_receivePartialPacket:(char*)arg1 size:(unsigned long)arg2 ;
-(int)receivePacket:(char*)arg1 size:(unsigned long)arg2 ;
-(int)sendPacket:(const char*)arg1 size:(unsigned long)arg2 ;
-(id)receiveMessage:(char**)arg1 size:(unsigned*)arg2 ;
-(id)initWithCheckinGoop:(void*)arg1 ;
-(void)enumerateServices:(/*^block*/ id)arg1 ;
-(void)runWatcher;
-(void)handleSleepNotification:(unsigned)arg1 service:(unsigned)arg2 messageArgument:(void*)arg3 ;
-(void)addService:(id)arg1 ;
-(void)removeService:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
@end

