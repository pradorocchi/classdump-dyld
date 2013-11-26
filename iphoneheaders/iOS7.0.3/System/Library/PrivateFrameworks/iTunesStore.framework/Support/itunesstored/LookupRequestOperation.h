/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISOperation.h>
#import <iTunesStore/ISStoreURLOperationDelegate.h>

@class SSAuthenticationContext, NSString, ISFairPlaySAPSession, SSLookupProperties, SSLookupResponse;

@interface LookupRequestOperation : ISOperation <ISStoreURLOperationDelegate> {

	BOOL _authenticatesIfNeeded;
	SSAuthenticationContext* _authenticationContext;
	NSString* _clientIdentifierHeader;
	ISFairPlaySAPSession* _mescalSession;
	SSLookupProperties* _properties;
	SSLookupResponse* _response;
	NSString* _userAgent;

}

@property (readonly) SSLookupProperties * lookupProperties; 
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (assign) BOOL authenticatesIfNeeded; 
@property (copy) NSString * clientIdentifierHeader; 
@property (copy) NSString * userAgent; 
@property (readonly) SSLookupResponse * lookupResponse; 
-(id)_URLBagContext;
-(id)_authenticationContext;
-(id)initWithLookupProperties:(id)arg1 ;
-(id)lookupResponse;
-(BOOL)_performLocationLookup:(id*)arg1 ;
-(BOOL)_performPlatformLookup:(id*)arg1 ;
-(void)_setLookupResponse:(id)arg1 ;
-(BOOL)_isMescalEnabledInBagContext:(id)arg1 ;
-(id)_beginMescalSession:(id*)arg1 ;
-(id)_newStoreURLOperationWithBagKey:(id)arg1 ;
-(id)_newLookupResponseWithResultsFromOperation:(id)arg1 ;
-(void)_setAccountID:(id)arg1 ;
-(id)lookupProperties;
-(void)setAuthenticatesIfNeeded:(BOOL)arg1 ;
-(void)dealloc;
-(void)run;
-(void)setUserAgent:(id)arg1 ;
-(id)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(id)arg1 ;
-(id)authenticationContext;
-(void)setAuthenticationContext:(id)arg1 ;
-(id)userAgent;
-(void)operation:(id)arg1 willSendRequest:(id)arg2 ;
-(BOOL)authenticatesIfNeeded;
@end

