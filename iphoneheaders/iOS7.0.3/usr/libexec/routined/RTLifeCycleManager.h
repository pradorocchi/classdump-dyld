/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/routined
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSMutableDictionary;

@interface RTLifeCycleManager : NSObject {

	BOOL _activeTransaction;
	BOOL _exitWhenNoTransactions;
	NSObject<OS_dispatch_queue>* _queue;
	NSMutableArray* _signals;
	NSMutableDictionary* _transactions;

}

@property (nonatomic,retain) NSObject<OS_dispatch_queue> * queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableArray * signals;                         //@synthesize signals=_signals - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * transactions;               //@synthesize transactions=_transactions - In the implementation block
@property (assign,nonatomic) BOOL activeTransaction;                           //@synthesize activeTransaction=_activeTransaction - In the implementation block
@property (assign,nonatomic) BOOL exitWhenNoTransactions;                      //@synthesize exitWhenNoTransactions=_exitWhenNoTransactions - In the implementation block
+(id)sharedInstance;
-(id)keyForObject:(id)arg1 ;
-(void)incrementTransactionsForObject:(id)arg1 ;
-(void)decrementTransactionsForObject:(id)arg1 ;
-(void)setExitWhenNoTransactions:(BOOL)arg1 ;
-(id)signals;
-(id)createSourceForSignal:(int)arg1 withBlock:(/*^block*/ id)arg2 ;
-(void)processTransactions;
-(void)setActiveTransaction:(BOOL)arg1 ;
-(BOOL)exitWhenNoTransactions;
-(void)setSignals:(id)arg1 ;
-(void)setTransactions:(id)arg1 ;
-(BOOL)activeTransaction;
-(id)transactions;
-(void)dealloc;
-(id)init;
-(void)start;
-(id)queue;
-(void)setQueue:(id)arg1 ;
-(void).cxx_destruct;
@end

