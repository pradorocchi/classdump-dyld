/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <WebKit/WebKit-Structs.h>
@interface WebInspectorFrontend : NSObject {

	WebInspectorFrontendClient* m_frontendClient;

}
-(void)detach;
-(void)attach;
-(void)showConsole;
-(BOOL)isDebuggingEnabled;
-(void)setDebuggingEnabled:(BOOL)arg1 ;
-(BOOL)isProfilingJavaScript;
-(void)stopProfilingJavaScript;
-(void)startProfilingJavaScript;
-(BOOL)isTimelineProfilingEnabled;
-(void)setTimelineProfilingEnabled:(BOOL)arg1 ;
-(id)initWithFrontendClient:(WebInspectorFrontendClient*)arg1 ;
@end

