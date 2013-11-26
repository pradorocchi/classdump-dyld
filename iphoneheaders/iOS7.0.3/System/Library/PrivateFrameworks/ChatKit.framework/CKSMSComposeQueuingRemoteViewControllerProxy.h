/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol CKSMSCompose;
@class NSMutableArray, XPCProxy;

@interface CKSMSComposeQueuingRemoteViewControllerProxy : NSObject {

	NSMutableArray* _queuedInvocations;
	XPCProxy<CKSMSCompose>* _serviceViewControllerProxy;

}

@property (nonatomic,retain) NSMutableArray * queuedInvocations;                               //@synthesize queuedInvocations=_queuedInvocations - In the implementation block
@property (nonatomic,retain) XPCProxy<CKSMSCompose> * serviceViewControllerProxy;              //@synthesize serviceViewControllerProxy=_serviceViewControllerProxy - In the implementation block
-(void)dealloc;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)serviceViewControllerProxy;
-(void)setServiceViewControllerProxy:(id)arg1 ;
-(void)setQueuedInvocations:(id)arg1 ;
-(id)queuedInvocations;
@end

