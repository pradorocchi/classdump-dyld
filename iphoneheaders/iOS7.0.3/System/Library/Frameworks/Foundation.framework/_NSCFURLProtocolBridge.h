/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSURLProtocolClient.h>

@class NSURLProtocol, NSURLAuthenticationChallenge;

@interface _NSCFURLProtocolBridge : NSObject <NSURLProtocolClient> {

	NSURLProtocol* _nsProt;
	CFURLProtocolRef _cfProt;
	CFURLAuthChallengeRef _cfChallenge;
	NSURLAuthenticationChallenge* _nsChallenge;
	BOOL _loading;

}
+(void)barRequest:(CFURLRequestRef)arg1 ;
+(void)permitRequest:(CFURLRequestRef)arg1 ;
+(void)registerWithCFURLProtocol;
+(void)_fillinProtocolImplementation:(CFURLProtocolImplementation_V0*)arg1 ;
-(void)URLProtocol:(id)arg1 didReceiveResponse:(id)arg2 cacheStoragePolicy:(unsigned)arg3 ;
-(void)URLProtocolDidFinishLoading:(id)arg1 ;
-(void)URLProtocol:(id)arg1 didFailWithError:(id)arg2 ;
-(void)URLProtocol:(id)arg1 didLoadData:(id)arg2 lengthReceived:(long long)arg3 ;
-(void)URLProtocol:(id)arg1 didLoadData:(id)arg2 ;
-(void)URLProtocol:(id)arg1 cachedResponseIsValid:(id)arg2 ;
-(void)URLProtocol:(id)arg1 wasRedirectedToRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(id)initWithCFURLProtocol:(CFURLProtocolRef)arg1 request:(id)arg2 protocolClass:(Class)arg3 ;
-(void)schedule:(CFRunLoopRef)arg1 mode:(CFStringRef)arg2 ;
-(void)unschedule:(CFRunLoopRef)arg1 mode:(CFStringRef)arg2 ;
-(void)pushEvent:(/*^block*/ id)arg1 from:(const char*)arg2 ;
-(void)wasRedirectedToRequest:(id)arg1 redirectResponse:(id)arg2 ;
-(void)cachedResponseIsValid:(id)arg1 ;
-(void)didReceiveResponse:(id)arg1 ;
-(void)didLoadData:(id)arg1 lengthReceived:(long long)arg2 ;
-(void)didFinishLoading;
-(void)didFailWithError:(id)arg1 ;
-(void)didReceiveAuthenticationChallenge:(id)arg1 ;
-(void)URLProtocol:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)URLProtocol:(id)arg1 didCancelAuthenticationChallenge:(id)arg2 ;
-(void)halt;
-(void)_forgetClient;
-(void)useCredential:(CFURLCredentialRef)arg1 forChallenge:(CFURLAuthChallengeRef)arg2 ;
-(void)bridgeRetain;
-(void)bridgeRelease;
-(void)dealloc;
-(id)description;
-(void)start;
-(void)resume;
-(void)stop;
@end

