/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableArray;

@interface CommunicationsFilterBlockListCache : NSObject {

	NSMutableArray* _recentItems;

}
-(id)init;
-(void)_blockListChanged:(id)arg1 ;
-(long long)cachedResponseForItem:(id)arg1 ;
-(void)removeItemFromCache:(id)arg1 ;
-(void)setResponse:(BOOL)arg1 forItem:(id)arg2 ;
@end

