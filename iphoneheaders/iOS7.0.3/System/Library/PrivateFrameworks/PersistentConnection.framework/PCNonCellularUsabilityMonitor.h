/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:48 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PersistentConnection/PersistentConnection-Structs.h>
#import <PersistentConnection/PCInterfaceUsabilityMonitorProtocol.h>
#import <PersistentConnection/PCInterfaceUsabilityMonitorDelegate.h>

@class CUTWeakReference, NSString, NSMutableArray;

@interface PCNonCellularUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate> {

	dispatch_queue_sRef _delegateQueue;
	dispatch_queue_sRef _ivarQueue;
	dispatch_queue_sRef _monitorDelegateQueue;
	CUTWeakReference* _delegateReference;
	NSString* _demoOverrideInterface;
	int _previousLinkQuality;
	BOOL _trackUsability;
	unsigned _thresholdOffTransitionCount;
	double _trackedTimeInterval;
	NSMutableArray* _interfaceMonitors;

}

@property (nonatomic,readonly) int interfaceIdentifier; 
@property (nonatomic,readonly) int linkQuality; 
@property (nonatomic,readonly) BOOL isInterfaceUsable; 
@property (nonatomic,readonly) BOOL isInterfaceHistoricallyUsable; 
@property (nonatomic,readonly) BOOL isInternetReachable; 
@property (nonatomic,readonly) NSString * linkQualityString; 
@property (nonatomic,readonly) BOOL isPoorLinkQuality; 
@property (nonatomic,readonly) BOOL isRadioHot; 
@property (nonatomic,readonly) CFStringRef currentRAT; 
@property (nonatomic,readonly) BOOL isLTEWithCDRX; 
@property (assign,nonatomic) <PCInterfaceUsabilityMonitorDelegate> * delegate; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(BOOL)isInterfaceUsable;
-(BOOL)isPoorLinkQuality;
-(BOOL)isInternetReachable;
-(id)linkQualityString;
-(BOOL)isInterfaceHistoricallyUsable;
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(void)interfaceReachabilityChanged:(id)arg1 ;
-(void)_callDelegateOnIvarQueueWithBlock:(/*^block*/ id)arg1 ;
-(void)setTrackedTimeInterval:(double)arg1 ;
-(void)setThresholdOffTransitionCount:(unsigned)arg1 ;
-(void)setTrackUsability:(BOOL)arg1 ;
-(BOOL)isRadioHot;
-(int)interfaceIdentifier;
-(void)_addMonitorWithInterfaceName:(id)arg1 ;
-(void)_forwardConfigurationOnIvarQueue;
-(int)_linkQualityOnIvarQueue;
-(id)initWithDelegateQueue:(dispatch_queue_sRef)arg1 ;
-(int)linkQuality;
@end

