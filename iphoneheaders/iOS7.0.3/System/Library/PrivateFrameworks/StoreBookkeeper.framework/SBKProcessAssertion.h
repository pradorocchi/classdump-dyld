/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSObject, BKSProcessAssertion;

@interface SBKProcessAssertion : NSObject {

	NSObject<OS_dispatch_queue>* _queue;
	/*^block*/ id _expirationBlock;
	unsigned _identifier;
	BKSProcessAssertion* _bkProcessAssertion;
	id _expirationObserver;

}

@property (readonly) unsigned identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (retain) BKSProcessAssertion * bkProcessAssertion;              //@synthesize bkProcessAssertion=_bkProcessAssertion - In the implementation block
@property (retain) id expirationObserver;                                 //@synthesize expirationObserver=_expirationObserver - In the implementation block
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(unsigned)identifier;
-(void)setBkProcessAssertion:(id)arg1 ;
-(void)_expireBackgroundTask;
-(void)setExpirationObserver:(id)arg1 ;
-(void)_onQueueSetBkProcessAssertion:(id)arg1 ;
-(id)initWithExpirationBlock:(/*^block*/ id)arg1 debugDescription:(id)arg2 ;
-(id)bkProcessAssertion;
-(id)expirationObserver;
-(void).cxx_destruct;
@end

