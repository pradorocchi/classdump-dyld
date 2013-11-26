/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:03 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface NSUbiquitousKeyValueStore : NSObject {

	id _private1;
	id _private2;
	id _private3;
	void* _private4;
	void** _reserved[3];

}
+(void)_synchronizeStoresForced:(BOOL)arg1 ;
+(id)defaultStore;
+(id)additionalStoreWithIdentifier:(id)arg1 ;
+(void)_appWillDeactivate;
+(void)_appWillActivate;
-(id)dictionaryForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 additionalStore:(BOOL)arg3 ;
-(void)_scheduleRemoteSynchronization;
-(void)_sourceDidChange:(id)arg1 ;
-(void)_configurationDidChange;
-(void)_registerToDaemon;
-(void)_pleaseSynchronize:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 ;
-(void)_setShouldAvoidSynchronize:(BOOL)arg1 ;
-(int)_storeChangeFromSourceChange:(int)arg1 ;
-(BOOL)_hasPendingSynchronize;
-(void)_setHasPendingSynchronize:(BOOL)arg1 ;
-(void)_rethrowException:(id)arg1 ;
-(BOOL)synchronizeWithSourceForced:(BOOL)arg1 ;
-(BOOL)_postDidChangeNotificationExternalChanges:(id)arg1 sourceChangeCount:(int)arg2 ;
-(void)_syncConcurrentlyForced:(BOOL)arg1 ;
-(void)_syncConcurrently;
-(void)_adjustTimer:(id)arg1 ;
-(void)_adjustTimerForAutosync;
-(BOOL)_synchronizeForced:(BOOL)arg1 notificationQueue:(id)arg2 ;
-(BOOL)_shouldAvoidSynchronize;
-(BOOL)_synchronizeForced:(BOOL)arg1 ;
-(unsigned)maximumKeyCount;
-(unsigned)maximumKeyLength;
-(unsigned)maximumDataLengthPerKey;
-(unsigned)maximumTotalDataLength;
-(void)_useSourceAsyncWithBlock:(/*^block*/ id)arg1 ;
-(void)_useSourceSyncWithBlock:(/*^block*/ id)arg1 ;
-(void)registerDefaultValues:(id)arg1 ;
-(void)synchronizeWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)_unregisterFromDaemon;
-(void)setArray:(id)arg1 forKey:(id)arg2 ;
-(void)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(long long)longLongForKey:(id)arg1 ;
-(void)setLongLong:(long long)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(BOOL)boolForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)synchronize;
-(id)stringForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setData:(id)arg1 forKey:(id)arg2 ;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(id)dataForKey:(id)arg1 ;
-(void)finalize;
-(id)arrayForKey:(id)arg1 ;
@end

