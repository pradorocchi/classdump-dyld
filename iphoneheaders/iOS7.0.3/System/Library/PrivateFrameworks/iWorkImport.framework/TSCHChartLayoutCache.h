/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableArray;

@interface TSCHChartLayoutCache : NSObject {

	NSMutableArray* mCacheItems;
	BOOL mIgnoreInvalidation;

}

@property (assign,nonatomic) BOOL ignoreInvalidation; 
+(id)cacheWithCacheItem:(id)arg1 ;
-(void)accessWithCacheItemBlock:(/*^block*/ id)arg1 calculateBlock:(/*^block*/ id)arg2 ;
-(void)printDebug;
-(id)initWithCacheItem:(id)arg1 ;
-(BOOL)ignoreInvalidation;
-(void)setIgnoreInvalidation:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
@end

