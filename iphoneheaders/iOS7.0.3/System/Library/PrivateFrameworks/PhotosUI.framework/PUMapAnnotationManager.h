/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:08 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUMapAnnotationQuadtreeDataSource.h>

@protocol OS_dispatch_queue, PUMapAnnotationManagerDataSource;
@class NSMutableSet, NSMutableArray, PUMapAnnotationQuadtree, NSMutableDictionary, NSObject, , MKMapView, NSArray;

@interface PUMapAnnotationManager : NSObject <PUMapAnnotationQuadtreeDataSource> {

	NSMutableSet* _managedAnnotations;
	BOOL _showDebugOverlays;
	NSMutableArray* _debugOverlays;
	PUMapAnnotationQuadtree* _quadtree;
	unsigned _currentTreeLevel;
	NSMutableSet* _activeAnnotations;
	NSMutableDictionary* _activeAnnotationAddresses;
	NSMutableSet* _pendingRemoves;
	NSMutableSet* _animatedRemoves;
	NSObject<OS_dispatch_queue>* _processingQueue;
	int _updateId;
	CGSize _currentMapSize;
	SCD_Struct_PU11 _currentCoordRegion;
	BOOL _alwaysFadeRemoves;
	<PUMapAnnotationManagerDataSource>* _dataSource;
	MKMapView* _mapView;
	CGSize _annotationSize;

}

@property (assign,nonatomic,__weak) <PUMapAnnotationManagerDataSource> * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) MKMapView * mapView;                                                 //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,readonly) NSArray * annotations; 
@property (assign,nonatomic) CGSize annotationSize;                                               //@synthesize annotationSize=_annotationSize - In the implementation block
@property (assign,nonatomic) BOOL alwaysFadeRemoves;                                              //@synthesize alwaysFadeRemoves=_alwaysFadeRemoves - In the implementation block
+(void)mergeOverlappingAnnotations:(id)arg1 withQuadtree:(id)arg2 treeLevel:(unsigned)arg3 coordRegion:(SCD_Struct_PU11)arg4 mapSize:(CGSize)arg5 annotationSize:(CGSize)arg6 ;
+(id)newAnnotationsFromQuadtree:(id)arg1 treeLevel:(unsigned)arg2 coordRegion:(SCD_Struct_PU11)arg3 mapSize:(CGSize)arg4 updateId:(int)arg5 referenceId:(int*)arg6 annotationSize:(CGSize)arg7 ;
+(BOOL)coordinateRegion:(SCD_Struct_PU11)arg1 overlapsWithCoordinateRegion2:(SCD_Struct_PU11)arg2 ;
-(void)setDataSource:(id)arg1 ;
-(id)init;
-(id)dataSource;
-(void)addAnnotation:(id)arg1 ;
-(CGSize)annotationSize;
-(BOOL)alwaysFadeRemoves;
-(id)annotations;
-(void)removeAnnotations:(id)arg1 thenAddAnnotations:(id)arg2 ;
-(void)setAnnotationSize:(CGSize)arg1 ;
-(void)setAlwaysFadeRemoves:(BOOL)arg1 ;
-(void)setMapView:(id)arg1 ;
-(void)updateAnnotationsForMapViewAdjustTreeLevel:(BOOL)arg1 ;
-(void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2 ;
-(id)_puAnnotationViewForAnnotation:(id)arg1 ;
-(void)removeAnnotations:(id)arg1 ;
-(void)removeAllMapAnnotations;
-(void)_updateAnnotationsForMapViewAdjustTreeLevel:(BOOL)arg1 forceUpdate:(BOOL)arg2 ;
-(void)addAnnotations:(id)arg1 ;
-(void)_internalUpdateAnnotationsTreeLevel:(unsigned)arg1 coordRegion:(SCD_Struct_PU11)arg2 mapSize:(CGSize)arg3 updateId:(int)arg4 ;
-(void)_executeOnProcessingQueueWithBlock:(/*^block*/ id)arg1 ;
-(void)removeAnnotation:(id)arg1 ;
-(BOOL)_updateMapParams;
-(BOOL)_updateTreeLevelFromMap;
-(void)_updateAnnotationsFromQuadtreeWithTreeLevel:(unsigned)arg1 coordRegion:(SCD_Struct_PU11)arg2 mapSize:(CGSize)arg3 updateId:(int)arg4 ;
-(void)_updateAnnotationsWithIncomingAnnotationToAddress:(id)arg1 ;
-(id)_animatableMapViewAnnotations;
-(int)_fadeTypeWithIsEqual:(BOOL)arg1 removeAnnotation:(id)arg2 addAnnotation:(id)arg3 isRemove:(BOOL)arg4 ;
-(BOOL)_addMappedAnimationInfoToInfoSet:(id)arg1 forRemoveAnnotation:(id)arg2 remainingRemoveAnnotationsToAnimate:(id)arg3 remainingAddedAnnotationsToAnimate:(id)arg4 addContainsRemoveMap:(id)arg5 removeContainsAddMap:(id)arg6 activeTreeLevel:(unsigned)arg7 addAddressesToAnnotations:(id)arg8 ;
-(void)_updateZPositionForAnnotations:(id)arg1 withAnimationInfoSet:(id)arg2 ;
-(void)_removeAnnotationFromMapView:(id)arg1 wasAnimated:(BOOL)arg2 ;
-(id)mapAnnotationQuadtree:(id)arg1 aggregateAnnotationForAnnotations:(id)arg2 averageCoordinate:(SCD_Struct_PU9)arg3 ;
-(id)mapView;
-(void).cxx_destruct;
@end

