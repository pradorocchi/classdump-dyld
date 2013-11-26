/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:12 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
#import <Message/Message-Structs.h>
@class NSObject, NSCountedSet;

@interface MFPowerController : NSObject {

	NSObject<OS_dispatch_queue>* _queue;
	int _powerToken;
	int _pluggedIn;
	CFDictionaryRef _assertionsByIdentifier;
	NSCountedSet* _identifiers;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)retainAssertionWithIdentifier:(id)arg1 ;
-(void)releaseAssertionWithIdentifier:(id)arg1 ;
-(id)copyDiagnosticInformation;
-(BOOL)isPluggedIn;
-(void)log:(id)arg1 message:(id)arg2 ;
-(void)_powerAssertionDidExpire:(id)arg1 ;
-(void)_setPluggedIn:(unsigned)arg1 ;
-(void)_createAssertionWithIdentifier_nts:(id)arg1 ;
-(void)_destroyAssertionWithIdentifier_nts:(id)arg1 ;
@end

