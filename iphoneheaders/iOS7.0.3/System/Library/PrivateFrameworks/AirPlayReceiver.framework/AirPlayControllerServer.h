/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:39 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileCoreServices/NSXPCListenerDelegate.h>
#import <AirPlayReceiver/AirPlayControllerAsync.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSXPCListener;

@interface AirPlayControllerServer : NSObject <NSXPCListenerDelegate, AirPlayControllerAsync> {

	NSObject<OS_dispatch_queue>* _queue;
	NSString* _serviceName;
	NSXPCListener* _xpcListener;
	/*^block*/ id _performCommandBlock;
	/*^block*/ id _copyPropertyBlock;
	/*^block*/ id _setPropertyBlock;

}

@property (assign,nonatomic) NSObject<OS_dispatch_queue> * dispatchQueue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id performCommandBlock;                                     //@synthesize performCommandBlock=_performCommandBlock - In the implementation block
@property (nonatomic,copy) id copyPropertyBlock;                                       //@synthesize copyPropertyBlock=_copyPropertyBlock - In the implementation block
@property (nonatomic,copy) id setPropertyBlock;                                        //@synthesize setPropertyBlock=_setPropertyBlock - In the implementation block
-(id)dispatchQueue;
-(void)dealloc;
-(void)invalidate;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(void)getProperty:(id)arg1 qualifier:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(void)_connectionInvalidated:(id)arg1 ;
-(void)startWithXPCName:(id)arg1 ;
-(/*^block*/ id)performCommandBlock;
-(void)setPerformCommandBlock:(/*^block*/ id)arg1 ;
-(/*^block*/ id)copyPropertyBlock;
-(void)setCopyPropertyBlock:(/*^block*/ id)arg1 ;
-(/*^block*/ id)setPropertyBlock;
-(void)setSetPropertyBlock:(/*^block*/ id)arg1 ;
-(void)setDispatchQueue:(id)arg1 ;
@end

