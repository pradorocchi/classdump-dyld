/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class NSObject;

@interface SUMescalSession : NSObject {

	NSObject<OS_dispatch_queue>* _dispatchQueue;
	BOOL _complete;
	FairPlayHWInfo_ _hardwareInfo;
	FPSAPContextOpaque_Ref _session;

}

@property (getter=isComplete,readonly) BOOL complete; 
-(void)dealloc;
-(id)init;
-(BOOL)isComplete;
-(BOOL)verifyPrimeSignature:(id)arg1 error:(id*)arg2 ;
-(id)primeForAccountCreationWithData:(id)arg1 error:(id*)arg2 ;
-(id)_newDataWithBytes:(char*)arg1 length:(unsigned long)arg2 ;
-(void)_teardownSession;
-(id)exchangeData:(id)arg1 error:(id*)arg2 ;
-(id)signData:(id)arg1 error:(id*)arg2 ;
@end

