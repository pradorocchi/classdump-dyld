/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISOperation.h>
#import <iTunesStore/ISStoreURLOperationDelegate.h>

@class NSNumber, NSMutableOrderedSet, NSMutableArray, NSString, SSURLRequestProperties, NSOrderedSet;

@interface LoadDownloadQueueOperation : ISOperation <ISStoreURLOperationDelegate> {

	NSNumber* _accountIdentifier;
	NSMutableOrderedSet* _downloads;
	BOOL _needsAuthentication;
	NSMutableArray* _rangesToLoad;
	int _reason;
	NSString* _requestIdentifier;
	SSURLRequestProperties* _requestProperties;

}

@property (readonly) SSURLRequestProperties * requestProperties; 
@property (retain) NSNumber * accountIdentifier; 
@property (assign) BOOL needsAuthentication; 
@property (assign) int reason; 
@property (copy) NSString * requestIdentifier; 
@property (readonly) NSOrderedSet * downloads; 
+(id)newLoadAutomaticDownloadQueueOperation;
-(BOOL)_loadDownloadsFromStart:(id)arg1 toEnd:(id)arg2 ;
-(id)_newURLOperationWithStartIdentifier:(id)arg1 endIdentifier:(id)arg2 ;
-(void)_handleResponse:(id)arg1 ;
-(BOOL)_shouldSendKeyBagSync;
-(void)setReason:(int)arg1 ;
-(id)downloads;
-(id)initWithRequestProperties:(id)arg1 ;
-(void)setAccountIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)run;
-(int)reason;
-(id)accountIdentifier;
-(id)requestIdentifier;
-(void)setRequestIdentifier:(id)arg1 ;
-(id)_account;
-(BOOL)needsAuthentication;
-(void)setNeedsAuthentication:(BOOL)arg1 ;
-(id)requestProperties;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
@end

