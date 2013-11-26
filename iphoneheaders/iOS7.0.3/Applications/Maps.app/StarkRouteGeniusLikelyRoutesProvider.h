/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class StarkLikelyRoutesManager, NSMapTable, MNTracePlayer, NSArray;

@interface StarkRouteGeniusLikelyRoutesProvider : NSObject {

	StarkLikelyRoutesManager* _likelyRoutesManager;
	NSMapTable* _changeHandlers;
	BOOL _started;
	MNTracePlayer* _tracePlayer;
	NSArray* _likelyRouteUpdaters;

}

@property (nonatomic,copy) NSArray * likelyRouteUpdaters;              //@synthesize likelyRouteUpdaters=_likelyRouteUpdaters - In the implementation block
-(id)likelyRouteUpdaters;
-(void)setLikelyRouteUpdaters:(id)arg1 ;
-(void)addObserver:(id)arg1 changeHandler:(/*^block*/ id)arg2 ;
-(id)initWithOptionalTracePlayer:(id)arg1 ;
-(void)_invokeChangeHandlers;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)start;
-(void)stop;
@end

