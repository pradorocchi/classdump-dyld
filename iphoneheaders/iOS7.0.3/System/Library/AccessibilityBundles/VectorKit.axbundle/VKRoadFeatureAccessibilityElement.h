/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:03:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/VectorKit.axbundle/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKMultiSectionFeatureAccessibilityElement.h>

@class NSMutableArray, NSArray, NSString;

@interface VKRoadFeatureAccessibilityElement : VKMultiSectionFeatureAccessibilityElement {

	NSMutableArray* _expandedPaths;
	NSMutableArray* _gutterPaths;
	NSMutableArray* _originalPaths;
	BOOL _lastHitTestNearBorder;
	NSArray* _allPoints;
	NSString* _roadDirection;
	int _roadType;
	NSArray* _intersectingRoads;
	int _travelDirection;

}

@property (assign) int roadType;                                       //@synthesize roadType=_roadType - In the implementation block
@property (nonatomic,retain) NSArray * intersectingRoads;              //@synthesize intersectingRoads=_intersectingRoads - In the implementation block
@property (nonatomic,readonly) NSArray * originalPaths;                //@synthesize originalPaths=_originalPaths - In the implementation block
@property (assign,nonatomic) int travelDirection;                      //@synthesize travelDirection=_travelDirection - In the implementation block
@property (nonatomic,retain) NSString * roadDirection;                 //@synthesize roadDirection=_roadDirection - In the implementation block
-(void)_mergePaths;
-(id)_axRoadSuffix;
-(id)roadDirection;
-(id)_axRoadPrefix;
-(id)trueLabel;
-(void)setRoadType:(int)arg1 ;
-(id)accessibilityPaths;
-(id)detailedFeatureElementInfoAtPoint:(CGPoint)arg1 ;
-(int)_accessibilityMapRoadType;
-(id)_roadDirectionDescription;
-(void)_combineRoadPaths:(id)arg1 ;
-(id)_nearestIntersectionForPoint:(CGPoint)arg1 ;
-(id)originalPaths;
-(id)intersectingRoads;
-(void)setIntersectingRoads:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 ;
-(id)_roadLength;
-(id)_nearestPOIsForPoint:(CGPoint)arg1 ;
-(void)setRoadDirection:(id)arg1 ;
-(int)roadType;
-(void)dealloc;
-(id)accessibilityLabel;
-(void)_updatePath;
-(CGRect)accessibilityFrame;
-(int)travelDirection;
-(void)setTravelDirection:(int)arg1 ;
-(id)_accessibilityUpcomingRoadForPoint:(CGPoint)arg1 forAngle:(float)arg2 ;
-(float)_accessibilityDistanceFromEndOfRoad:(CGPoint)arg1 forAngle:(float)arg2 ;
-(BOOL)_accessibilityRoadContainsTrackingPoint:(CGPoint)arg1 ;
-(int)_accessibilityMapFeatureType;
-(BOOL)_accessibilityLastHitTestNearBorder;
@end

