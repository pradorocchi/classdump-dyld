/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:03:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/VectorKit.axbundle/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKMapViewAccessibilityElementDataSource.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject;

@interface VKMapViewAccessibilityElementManager : NSObject <VKMapViewAccessibilityElementDataSource> {

	BOOL _updating;
	NSArray* _accessibilityElements;
	int _orientation;
	NSObject<OS_dispatch_queue>* _properties_queue;
	NSObject<OS_dispatch_queue>* _updates_queue;
	double _yaw;
	SCD_Struct_VK5 _center;
	SCD_Struct_VK0 _bounds;

}

@property (nonatomic,retain) NSArray * accessibilityElements;                             //@synthesize accessibilityElements=_accessibilityElements - In the implementation block
@property (assign,nonatomic) SCD_Struct_VK0 bounds;                                       //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) SCD_Struct_VK5 center;                                       //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) int orientation;                                             //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double yaw;                                                  //@synthesize yaw=_yaw - In the implementation block
@property (assign,getter=isUpdating,nonatomic) BOOL updating;                             //@synthesize updating=_updating - In the implementation block
@property (assign,nonatomic) NSObject<OS_dispatch_queue> * properties_queue;              //@synthesize properties_queue=_properties_queue - In the implementation block
@property (assign,nonatomic) NSObject<OS_dispatch_queue> * updates_queue;                 //@synthesize updates_queue=_updates_queue - In the implementation block
-(id)updates_queue;
-(double)yawForMapView:(id)arg1 ;
-(id)accessibilityElementsForMapView:(id)arg1 ;
-(SCD_Struct_VK0)boundsForMapView:(id)arg1 ;
-(int)orientationForMapView:(id)arg1 ;
-(void)updateAccessibilityElementsForMapView:(id)arg1 ;
-(double)_yawForMapView:(id)arg1 ;
-(void)_processVisibleTile:(id)arg1 accessibilityElements:(id*)arg2 mapViewBounds:(SCD_Struct_VK0)arg3 mapView:(id)arg4 visibleLabels:(id)arg5 ;
-(SCD_Struct_VK0)_boundsForMapView:(id)arg1 ;
-(int)_orientationForMapView:(id)arg1 ;
-(id)accessibilityElements;
-(SCD_Struct_VK5)_centerForMapView:(id)arg1 ;
-(float)_zoomForMapView:(id)arg1 ;
-(id)_gatherVisibleLabelMarkersForMapView:(id)arg1 ;
-(id)_gatherVisibleTilesForMapView:(id)arg1 ;
-(id)_accessibilityElementsForMapView:(id)arg1 mapViewBounds:(SCD_Struct_VK0)arg2 visibleLabels:(id)arg3 visibleTiles:(id)arg4 ;
-(void)_consolidateAccessibilityElements:(id)arg1 ;
-(void)_sortAccessibilityElements:(id)arg1 ;
-(void)_filterAccessibilityElements:(id)arg1 zoomLevel:(float)arg2 ;
-(BOOL)_isValidBoundsForMapView:(id)arg1 bounds:(SCD_Struct_VK0)arg2 ;
-(BOOL)_isValidOrientationForMapView:(id)arg1 orientation:(int)arg2 ;
-(BOOL)_isValidYawForMapView:(id)arg1 yaw:(double)arg2 ;
-(void)setAccessibilityElements:(id)arg1 ;
-(SCD_Struct_VK5)centerForMapView:(id)arg1 ;
-(id)properties_queue;
-(void)setUpdates_queue:(id)arg1 ;
-(void)setProperties_queue:(id)arg1 ;
-(void)setUpdating:(BOOL)arg1 ;
-(BOOL)isUpdating;
-(void)dealloc;
-(SCD_Struct_VK0)bounds;
-(id)init;
-(void)setBounds:(SCD_Struct_VK0)arg1 ;
-(int)orientation;
-(SCD_Struct_VK5)center;
-(void)setCenter:(SCD_Struct_VK5)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(void)setYaw:(double)arg1 ;
-(double)yaw;
@end

