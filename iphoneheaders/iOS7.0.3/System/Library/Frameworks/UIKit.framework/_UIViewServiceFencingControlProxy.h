/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:21 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/_UIQueueingProxy.h>
#import <SpringBoardServices/XPCProxyTarget.h>

@class _UIViewServiceFencingController;

@interface _UIViewServiceFencingControlProxy : _UIQueueingProxy <XPCProxyTarget> {

	_UIViewServiceFencingController* _fencingController;

}
+(id)proxyWithTarget:(id)arg1 fencingController:(id)arg2 exportedProtocol:(id)arg3 ;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)__beginFencingMessagesWithSendRight:(id)arg1 connectionCount:(unsigned)arg2 ;
-(void)__endFencingMessagesForSendRight:(id)arg1 ;
-(id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2 ;
@end

