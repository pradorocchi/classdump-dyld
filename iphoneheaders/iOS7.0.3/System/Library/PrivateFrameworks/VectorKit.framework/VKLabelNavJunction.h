/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:29 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKLabelNavFeature.h>

@class VKLabelTile, NSMutableArray, VKLabelNavRoad, NSString, VKLabelNavRoadLabel, NSArray;

@interface VKLabelNavJunction : NSObject <VKLabelNavFeature> {

	VKLabelTile* _tile;
	Vec2Imp<float> _tileCoordinate;
	SCD_Struct_VK215* _geoJunction;
	PolylineCoordinate _routeOffset;
	NSMutableArray* _roads;
	VKLabelNavRoad* _incomingRoad;
	VKLabelNavRoad* _outgoingRoad;
	float _distanceFromPreviousShieldLabel;
	int _preferredLabelPlacement;
	BOOL _isOnDualCarriageway;
	BOOL _hasSharedRouteDirection;
	Vec2Imp<float> _sharedRouteDirection;
	BOOL _foundRoads;
	BOOL _isOverpass;
	BOOL _isRouteOverpass;
	int _largestRoadClass;
	SCD_Struct_VK242* _labelFeature;
	NSString* _name;
	VKLabelNavRoadLabel* _junctionSign;
	BOOL _areLabelsDisabled;
	unsigned _depthFromRoute;
	double _worldUnitsPerMeter;
	VKLabelNavJunction* _overpassJunction;
	VKPoint _worldCoordinate;
	double _sortValue;
	BOOL _isRouteRefineJunction;

}

@property (nonatomic,readonly) VKLabelTile * tile;                               //@synthesize tile=_tile - In the implementation block
@property (nonatomic,readonly) const SCD_Struct_VK215* geoJunction;              //@synthesize geoJunction=_geoJunction - In the implementation block
@property (nonatomic,readonly) Vec2Imp<float> tileCoordinate;                    //@synthesize tileCoordinate=_tileCoordinate - In the implementation block
@property (assign,nonatomic) PolylineCoordinate routeOffset;                     //@synthesize routeOffset=_routeOffset - In the implementation block
@property (nonatomic,readonly) NSArray * roads;                                  //@synthesize roads=_roads - In the implementation block
@property (nonatomic,readonly) VKLabelNavRoad * outgoingRoad;                    //@synthesize outgoingRoad=_outgoingRoad - In the implementation block
@property (nonatomic,readonly) VKLabelNavRoad * incomingRoad;                    //@synthesize incomingRoad=_incomingRoad - In the implementation block
@property (assign,nonatomic) float distanceFromPreviousShieldLabel;              //@synthesize distanceFromPreviousShieldLabel=_distanceFromPreviousShieldLabel - In the implementation block
@property (assign,nonatomic) BOOL isOnDualCarriageway;                           //@synthesize isOnDualCarriageway=_isOnDualCarriageway - In the implementation block
@property (nonatomic,readonly) BOOL hasSharedRouteDirection;                     //@synthesize hasSharedRouteDirection=_hasSharedRouteDirection - In the implementation block
@property (assign,nonatomic) Vec2Imp<float> sharedRouteDirection;                //@synthesize sharedRouteDirection=_sharedRouteDirection - In the implementation block
@property (nonatomic,readonly) BOOL isOnRoute; 
@property (nonatomic,readonly) BOOL isIntraRamp; 
@property (nonatomic,readonly) BOOL isTileEdgeJunction; 
@property (assign,nonatomic) BOOL isRouteRefineJunction;                         //@synthesize isRouteRefineJunction=_isRouteRefineJunction - In the implementation block
@property (nonatomic,readonly) BOOL isRoadTerminus; 
@property (nonatomic,readonly) BOOL isIntersection; 
@property (nonatomic,readonly) BOOL isMultiRoadIntersection; 
@property (nonatomic,readonly) BOOL isAwayFromRoute; 
@property (nonatomic,readonly) BOOL isOffRouteGraph; 
@property (nonatomic,readonly) BOOL isOverpass;                                  //@synthesize isOverpass=_isOverpass - In the implementation block
@property (assign,nonatomic) BOOL isRouteOverpass;                               //@synthesize isRouteOverpass=_isRouteOverpass - In the implementation block
@property (nonatomic,readonly) int largestRoadClass; 
@property (assign,nonatomic) unsigned depthFromRoute;                            //@synthesize depthFromRoute=_depthFromRoute - In the implementation block
@property (assign,nonatomic) VKLabelNavJunction * overpassJunction;              //@synthesize overpassJunction=_overpassJunction - In the implementation block
@property (nonatomic,readonly) double worldUnitsPerMeter;                        //@synthesize worldUnitsPerMeter=_worldUnitsPerMeter - In the implementation block
@property (nonatomic,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) VKLabelNavRoadLabel * junctionSign;               //@synthesize junctionSign=_junctionSign - In the implementation block
@property (nonatomic,readonly) int requiredLabelPlacement; 
@property (assign,nonatomic) int preferredLabelPlacement;                        //@synthesize preferredLabelPlacement=_preferredLabelPlacement - In the implementation block
@property (nonatomic,readonly) BOOL isRamp; 
@property (nonatomic,readonly) NSString * shieldDisplayGroup; 
@property (nonatomic,readonly) BOOL isStartOfRoadName; 
@property (nonatomic,readonly) BOOL isInGuidance; 
@property (nonatomic,readonly) int intraRoadPriority; 
@property (nonatomic,readonly) BOOL isGuidanceStepStart; 
-(void)dealloc;
-(id)description;
-(id)name;
-(id).cxx_construct;
-(id)tile;
-(BOOL)isRamp;
-(BOOL)isAwayFromRoute;
-(double)worldUnitsPerMeter;
-(BOOL)isMultiRoadIntersection;
-(BOOL)isOnRoute;
-(id)outgoingRoad;
-(id)incomingRoad;
-(PolylineCoordinate)routeOffset;
-(id)shieldDisplayGroup;
-(BOOL)isStartOfRoadName;
-(BOOL)isInGuidance;
-(int)intraRoadPriority;
-(BOOL)isGuidanceStepStart;
-(void)setRouteOffset:(PolylineCoordinate)arg1 ;
-(void)createLabelWithNavContext:(NavContext*)arg1 isDrivingSideRight:(BOOL)arg2 ;
-(id)junctionSign;
-(id)roads;
-(void)evaluateCrossStreets;
-(void)setDepthFromRoute:(unsigned)arg1 ;
-(BOOL)isOverpass;
-(BOOL)isIntraRamp;
-(void)setIsRouteOverpass:(BOOL)arg1 ;
-(void)evaluateCrossStreetsUsingRouteJunction:(id)arg1 ;
-(BOOL)isOnDualCarriageway;
-(int)requiredLabelPlacement;
-(void)setPreferredLabelPlacement:(int)arg1 ;
-(Vec2Imp<float>)tileCoordinate;
-(void)findRoads;
-(BOOL)isIntersection;
-(int)_signOrientationWithDrivingSide:(BOOL)arg1 ;
-(VKPoint)_anchorCoordinateForSignOrientation:(int)arg1 ;
-(id)initWithGEOJunction:(SCD_Struct_VK215*)arg1 routeOffset:(PolylineCoordinate)arg2 tile:(id)arg3 ;
-(id)initWithRoadEdge:(const SCD_Struct_VK218*)arg1 atA:(BOOL)arg2 routeOffset:(PolylineCoordinate)arg3 tile:(id)arg4 ;
-(BOOL)matchesLocationForJunction:(id)arg1 ;
-(BOOL)isTileEdgeJunction;
-(BOOL)isRoadTerminus;
-(BOOL)isOffRouteGraph;
-(int)largestRoadClass;
-(void)addRouteEdge:(const VKLabelNavRouteRoadEdge*)arg1 atA:(BOOL)arg2 ;
-(void)setSharedRouteDirection:(Vec2Imp<float>)arg1 ;
-(const SCD_Struct_VK215*)geoJunction;
-(int)preferredLabelPlacement;
-(float)distanceFromPreviousShieldLabel;
-(void)setDistanceFromPreviousShieldLabel:(float)arg1 ;
-(void)setIsOnDualCarriageway:(BOOL)arg1 ;
-(BOOL)hasSharedRouteDirection;
-(Vec2Imp<float>)sharedRouteDirection;
-(unsigned)depthFromRoute;
-(id)overpassJunction;
-(void)setOverpassJunction:(id)arg1 ;
-(BOOL)isRouteOverpass;
-(BOOL)isRouteRefineJunction;
-(void)setIsRouteRefineJunction:(BOOL)arg1 ;
@end

