/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface GEOSearchProvider : NSObject {

	/*^block*/ id _error;

}

@property (nonatomic,copy) id error;              //@synthesize error=_error - In the implementation block
+(unsigned short)provider;
-(void)setError:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(void)cancel;
-(void)search:(id)arg1 timeout:(int)arg2 useBackgroundConnection:(BOOL)arg3 finished:(/*^block*/ id)arg4 spellingSuggestion:(/*^block*/ id)arg5 refinement:(/*^block*/ id)arg6 error:(/*^block*/ id)arg7 isCompletions:(BOOL)arg8 ;
-(/*^block*/ id)error;
@end

