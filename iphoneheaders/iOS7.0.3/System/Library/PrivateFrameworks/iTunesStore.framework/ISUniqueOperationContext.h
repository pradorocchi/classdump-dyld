/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:51 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableSet, NSMutableDictionary;

@interface ISUniqueOperationContext : NSObject {

	NSMutableSet* _operations;
	NSMutableDictionary* _uniqueOperations;

}
-(void)dealloc;
-(id)init;
-(void)addOperation:(id)arg1 ;
-(void)removeOperation:(id)arg1 ;
-(unsigned)countOfOperations;
-(id)uniqueOperationForKey:(id)arg1 ;
-(void)setUniqueOperation:(id)arg1 forKey:(id)arg2 ;
-(BOOL)containsOperation:(id)arg1 ;
@end

