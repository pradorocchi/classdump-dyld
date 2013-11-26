/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreServices/SSRequest.h>
#import <StoreServices/SSXPCCoding.h>

@class SSURLRequestProperties, SSAuthenticationContext, SSVURLDataConsumer, NSURLRequest;

@interface SSURLConnectionRequest : SSRequest <SSXPCCoding> {

	SSURLRequestProperties* _requestProperties;
	SSAuthenticationContext* _authenticationContext;
	SSVURLDataConsumer* _dataConsumer;
	BOOL _runsInProcess;
	BOOL _sendsResponseForHTTPFailures;
	BOOL _shouldMescalSign;

}

@property (readonly) NSURLRequest * URLRequest; 
@property (readonly) SSURLRequestProperties * requestProperties; 
@property (assign) BOOL shouldMescalSign; 
@property (assign,nonatomic,@dynamic) <SSURLConnectionRequestDelegate> * delegate; 
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (retain) SSVURLDataConsumer * dataConsumer; 
@property (assign) BOOL runsInProcess; 
@property (assign) BOOL sendsResponseForHTTPFailures; 
+(id)newRadioRequestWithRequestProperties:(id)arg1 ;
-(id)sendSynchronousRequestReturningError:(id*)arg1 ;
-(id)initWithURLRequest:(id)arg1 ;
-(void)setDataConsumer:(id)arg1 ;
-(id)URLRequest;
-(void)startWithConnectionResponseBlock:(/*^block*/ id)arg1 ;
-(id)initWithRequestProperties:(id)arg1 ;
-(void)setShouldMescalSign:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)start;
-(id)dataConsumer;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithCompletionBlock:(/*^block*/ id)arg1 ;
-(BOOL)_canRunInProcess;
-(BOOL)runsInProcess;
-(BOOL)sendsResponseForHTTPFailures;
-(BOOL)shouldMescalSign;
-(void)setSendsResponseForHTTPFailures:(BOOL)arg1 ;
-(void)setRunsInProcess:(BOOL)arg1 ;
-(id)authenticationContext;
-(void)setAuthenticationContext:(id)arg1 ;
-(id)requestProperties;
@end

