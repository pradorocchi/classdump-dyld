/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/webinspectord
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol WebInspectorRelayConnectionDelegate;
@class , NSString;

@interface WebInspectorRelayConnection : NSObject {

	<WebInspectorRelayConnectionDelegate>* _delegate;
	NSString* _tag;

}

@property (nonatomic,readonly) <WebInspectorRelayConnectionDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * tag;                                                    //@synthesize tag=_tag - In the implementation block
-(void)_reportClose;
-(void)dealloc;
-(id)delegate;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setTag:(id)arg1 ;
-(id)tag;
-(void)forwardInvocation:(id)arg1 ;
-(void)_dispatchMessage:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

