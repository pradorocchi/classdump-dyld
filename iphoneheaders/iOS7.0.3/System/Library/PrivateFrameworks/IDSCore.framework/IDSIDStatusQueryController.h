/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:42 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class IMTimer, NSRecursiveLock, NSMutableDictionary, NSDate;

@interface IDSIDStatusQueryController : NSObject {

	IMTimer* _purgeTimer;
	NSRecursiveLock* _lock;
	NSMutableDictionary* _idStatusCache;
	NSMutableDictionary* _completionBlocks;
	NSDate* _startQueryDate;
	/*^block*/ id _purgeCancelBlock;
	/*^block*/ id _purgeEnqueueBlock;
	BOOL _loaded;
	int _numQueriesThisHour;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_setPurgeTimer;
-(void)_loadIfNeeded;
-(void)_updateCacheWithStatusUpdates:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3 success:(BOOL)arg4 error:(id)arg5 ;
-(void)_sendIDStatusChanges:(id)arg1 forService:(id)arg2 URI:(id)arg3 success:(BOOL)arg4 error:(id)arg5 ;
-(unsigned)cachedIDStatusForID:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3 ;
-(unsigned)_IDStatusForURI:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3 ;
-(id)_lookupDateForURI:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3 ;
-(id)_cachedResultsForURIs:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3 ;
-(void)_lookupIDStatusForURIs:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(void)requestIDStatusForIDs:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(void)_saveCache;
-(void)_loadCache;
-(void)requestIDStatusForID:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 completionBlock:(/*^block*/ id)arg5 ;
-(id)currentCache;
-(id)currentCacheForService:(id)arg1 ;
-(void)addCompletionBlock:(/*^block*/ id)arg1 forUniqueIdentifier:(id)arg2 ;
-(void)removeCompletionBlockForUniqueIdentifier:(id)arg1 ;
-(void)clearCache;
-(void)_flush;
@end

