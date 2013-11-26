/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder, GEOMapAccess;

@interface GEOMapEdgeBuilder : GEOMapRequest {

	deque<GEORoadEdge, std::__1::allocator<GEORoadEdge> >* _edges;
	unsigned _zoomLevel;
	BOOL _buildAhead;
	BOOL _buildBehind;
	Vec2Imp<float> _firstTilePoint;
	Vec2Imp<float> _lastTilePoint;
	GEOMapTileFinder* _currentTileFinder;
	/*^block*/ id _edgeHandler;
	unordered_set<_GEOTileKey, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<_GEOTileKey> >* _tileKeysSeen;
	BOOL _searchDirection;

}

@property (nonatomic,copy) id edgeHandler;                      //@synthesize edgeHandler=_edgeHandler - In the implementation block
@property (nonatomic,readonly) GEOMapAccess * map; 
-(void)dealloc;
-(void)cancel;
-(id).cxx_construct;
-(id)initWithMap:(id)arg1 firstEdge:(const SCD_Struct_GE121*)arg2 ;
-(void)buildEdge:(/*^block*/ id)arg1 ;
-(void)setEdgeHandler:(/*^block*/ id)arg1 ;
-(void)_findNeighborsOfKey:(const GEOTileKey*)arg1 center:(SCD_Struct_GE12)arg2 radius:(double)arg3 findAhead:(BOOL)arg4 ;
-(BOOL)_findEdgeAhead;
-(BOOL)_findEdgeBehind;
-(void)_buildCompleteEdge;
-(BOOL)_findNextEdge;
-(/*^block*/ id)edgeHandler;
-(id)map;
-(void).cxx_destruct;
@end

