/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <GeoServices/GEOAttributedRoute.h>
#import <VectorKit/VKOverlay.h>
#import <VectorKit/GEOMapAccessRestrictions.h>

@class GEOMapRegion, NSMutableArray, GEOZilchDecoder, VKTrafficSegmentsAlongRoute, GEORoute, NSArray;

@interface VKPolylineOverlay : GEOAttributedRoute <VKOverlay, GEOMapAccessRestrictions> {

	GEOMapRegion* _boundingMapRegion;
	NSMutableArray* _sections;
	NSMutableArray* _snappedPaths;
	GEOZilchDecoder* _zilchDecoder;
	CFSetRef _observers;
	unsigned _firstVisiblePoint;
	BOOL _isReadyForSnapping;
	BOOL _allowsNetworkTileLoad;
	unordered_map<VKPolylineOverlaySection *, std::__1::vector<VGLRect, vk_allocator<VGLRect> >, std::__1::hash<VKPolylineOverlaySection *>, std::__1::equal_to<VKPolylineOverlaySection *>, vk_allocator<std::__1::pair<VKPolylineOverlaySection *const, std::__1::vector<VGLRect, vk_allocator<VGLRect> > > > >* _sectionToRectsMap;
	double _trafficTimeStamp;
	VKTrafficSegmentsAlongRoute* _trafficSegments;

}

@property (nonatomic,readonly) GEORoute * geoRoute; 
@property (nonatomic,readonly) unsigned pointCount; 
@property (assign,nonatomic) unsigned firstVisiblePoint;                                   //@synthesize firstVisiblePoint=_firstVisiblePoint - In the implementation block
@property (assign,nonatomic) BOOL allowsNetworkTileLoad;                                   //@synthesize allowsNetworkTileLoad=_allowsNetworkTileLoad - In the implementation block
@property (nonatomic,readonly) unsigned trafficColorsCount; 
@property (nonatomic,readonly) unsigned* trafficColors; 
@property (nonatomic,readonly) unsigned trafficColorOffsetsCount; 
@property (nonatomic,readonly) unsigned* trafficColorOffsets; 
@property (nonatomic,readonly) NSArray * sections;                                         //@synthesize sections=_sections - In the implementation block
@property (nonatomic,readonly) VKTrafficSegmentsAlongRoute * trafficSegments;              //@synthesize trafficSegments=_trafficSegments - In the implementation block
@property (nonatomic,readonly) double trafficTimeStamp;                                    //@synthesize trafficTimeStamp=_trafficTimeStamp - In the implementation block
@property (nonatomic,readonly) SCD_Struct_VK61 coordinate; 
@property (nonatomic,readonly) GEOMapRegion * boundingMapRegion;                           //@synthesize boundingMapRegion=_boundingMapRegion - In the implementation block
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(id).cxx_construct;
-(id)sections;
-(void)addObserver:(id)arg1 ;
-(unsigned)pointCount;
-(SCD_Struct_VK61)coordinate;
-(id)boundingMapRegion;
-(id)initWithRoute:(id)arg1 ;
-(NSRange)sectionRangeForBounds:(SCD_Struct_VK47)arg1 ;
-(id)geoRoute;
-(void)forEachSnappedPath:(/*^block*/ id)arg1 ;
-(BOOL)allowsNetworkTileLoad;
-(BOOL)supportsSnapping;
-(BOOL)updateRectsForPainter:(id)arg1 keysInView:(id)arg2 tiles:(id)arg3 shouldSnapToRoads:(BOOL)arg4 ;
-(id)getPathsForPainter:(id)arg1 keysInView:(id)arg2 tiles:(id)arg3 shouldSnapToRoads:(BOOL)arg4 snappingCompletionHandler:(/*^block*/ id)arg5 ;
-(double)trafficTimeStamp;
-(id)trafficSegments;
-(void)_buildSectionsFromRoute:(id)arg1 ;
-(void)updateTraffic;
-(void)clearPathsForObserver:(id)arg1 ;
-(unsigned)trafficColorsCount;
-(unsigned*)trafficColors;
-(unsigned)trafficColorOffsetsCount;
-(unsigned*)trafficColorOffsets;
-(void)_setNeedsLayout;
-(void)calibrate:(RouteCalibration*)arg1 from:(unsigned)arg2 to:(unsigned)arg3 forDistance:(unsigned)arg4 ;
-(BOOL)resetTrafficWithRoute:(id)arg1 WithStep:(RouteCalibration*)arg2 trafficWalking:(TrafficWalking*)arg3 routeIndex:(int*)arg4 ;
-(BOOL)_meetsMinimumPathLengthBetweenStart:(unsigned)arg1 end:(unsigned)arg2 ;
-(void)_addSnappedPolylinePathsForSection:(id)arg1 toPaths:(id)arg2 localRects:(const vector<VGLRect, vk_allocator<VGLRect> >*)arg3 ;
-(void)_addSnappedPolylinePathsForSection:(id)arg1 toPaths:(id)arg2 ;
-(void)_snapPaths:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)_addPaths:(id)arg1 forObserver:(id)arg2 ;
-(void)_addPolylinePathsForSection:(id)arg1 toPaths:(id)arg2 ;
-(SCD_Struct_VK61)coordinateAtIndex:(unsigned)arg1 ;
-(void)setFirstVisiblePoint:(unsigned)arg1 ;
-(void)updateSnappedPathsForLocation:(id)arg1 ;
-(BOOL)isSnappingForSceneTiles;
-(void)attributedRouteHasChanged;
-(unsigned)firstVisiblePoint;
-(void)setAllowsNetworkTileLoad:(BOOL)arg1 ;
-(void).cxx_destruct;
@end

