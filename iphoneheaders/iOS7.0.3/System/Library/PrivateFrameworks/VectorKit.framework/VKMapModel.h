/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKModelObject.h>
#import <VectorKit/VKAnnotationModelDelegate.h>
#import <VectorKit/VKOverlayContainerDelegate.h>
#import <VectorKit/VKLabelModelDelegate.h>
#import <GeoServices/GEOResourceManifestTileGroupObserver.h>
#import <VectorKit/VKTileProviderClient.h>

@protocol VKMapModelDelegate, VKRoutePreloadSession, VKMapModeObserver;
@class VKTileProvider, NSMapTable, VKTrafficTileSource, VKOverlayTileSource, VKRasterOverlayTileSource, VKGridModel, VKSkyModel, VKLabelModel, VKRasterMapModel, VKGroundCoverMapModel, VKRoadMapModel, VKRasterTrafficMapModel, VKPolygonMapModel, VKRoadTrafficMapModel, VKRealisticMapModel, VKBuildingFootprintMapModel, VKAnnotationModel, VKOverlayContainerModel, VKRasterOverlayMapModel, VKDebugModel, NSMutableArray, VKStylesheet, , VKMapRasterizer, NSMutableSet, VKAnimation, VKMercatorTerrainHeightCache, VKLabelMarker, NSArray, VKAnnotationMarker, NSSet, VKPolylineOverlayPainter;

@interface VKMapModel : VKModelObject <VKAnnotationModelDelegate, VKOverlayContainerDelegate, VKLabelModelDelegate, GEOResourceManifestTileGroupObserver, VKTileProviderClient> {

	unsigned _mapPurpose;
	int _tileSize;
	VKTileProvider* _tileProviders[3];
	VKTileProvider* _rasterOverlayProvider[2];
	int _mapMode;
	int _desiredMapMode;
	BOOL _transitioningToNav;
	BOOL _activeMapLayers[3][29];
	NSMapTable* _layerToSourceMaps[3];
	VKTrafficTileSource* _trafficSource;
	VKOverlayTileSource* _overlayTileSource;
	VKOverlayTileSource* _realisticOverlayTileSource;
	VKRasterOverlayTileSource* _rasterOverlayTileSource[2];
	VKGridModel* _gridModel;
	VKSkyModel* _skyModel;
	VKLabelModel* _labelModel;
	VKRasterMapModel* _rasterModel;
	VKRasterMapModel* _standardRasterModel;
	VKGroundCoverMapModel* _groundCoverModel;
	VKRoadMapModel* _riverLineModel;
	VKRasterTrafficMapModel* _rasterTrafficModel;
	VKPolygonMapModel* _polygonModel;
	VKRoadMapModel* _roadModel;
	VKRoadMapModel* _hybridRoadModel;
	VKRoadTrafficMapModel* _roadTrafficModel;
	VKRealisticMapModel* _realisticModel;
	VKBuildingFootprintMapModel* _buildingFootprintModel;
	VKAnnotationModel* _annotationModel;
	VKOverlayContainerModel* _overlayContainerModel;
	VKRasterOverlayMapModel* _rasterOverlayModel[2];
	VKDebugModel* _debugModel;
	NSMapTable* _tileSources;
	NSMutableArray* _drawOrder;
	NSMutableArray* _mapLayerSubmodels;
	NSMutableArray* _mapTileSubmodels;
	VKStylesheet* _activeStylesheet;
	VKStylesheet* _defaultStylesheet;
	VKStylesheet* _hybridStylesheet;
	VKStylesheet* _satelliteStylesheet;
	double _zoomLevel;
	int _mapType;
	<VKMapModelDelegate>* _delegate;
	<VKRoutePreloadSession>* _routePreloadSession;
	BOOL _dynamicMapModesEnabled;
	BOOL _debugDynamicMapModesEnabled;
	BOOL _buildingsAreVisible;
	BOOL _showsBuildings;
	BOOL _fullyDrawn;
	BOOL _shouldNotifyFullyDrawn;
	BOOL _hasFailedTile;
	BOOL _trafficEnabled;
	BOOL _shouldRasterize;
	int _loadingCount;
	float _contentScale;
	int _targetDisplay;
	double _lodBias;
	BOOL _disableRoads;
	BOOL _disableLabels;
	BOOL _disablePolygons;
	BOOL _disableBuildingFootprints;
	BOOL _disableRasters;
	BOOL _enableBlackRoadLines;
	BOOL _disableGrid;
	VGLColor _clearColor;
	VKMapRasterizer* _rasterizer;
	VKRasterMapModel* _rasterViewer;
	int _annotationMarkerStyle;
	BOOL _limitingNavCameraHeight;
	NSMutableSet* _blockingStylesheetObservers;
	float _styleTransitionProgress;
	NSMutableArray* _externalAnchors;
	VKAnimation* _modeTransitionAnimation;
	BOOL _disableRoadClass[9];
	<VKMapModeObserver>* _mapModeObserver;

}

@property (nonatomic,retain) VKStylesheet * stylesheet;                                                      //@synthesize activeStylesheet=_activeStylesheet - In the implementation block
@property (assign,nonatomic) int mapType;                                                                    //@synthesize mapType=_mapType - In the implementation block
@property (assign,nonatomic) BOOL shouldLoadFallbackTiles; 
@property (assign,nonatomic) unsigned neighborMode; 
@property (assign,nonatomic) int shieldSize; 
@property (assign,nonatomic) int navigationShieldSize; 
@property (assign,nonatomic) int shieldIdiom; 
@property (assign,nonatomic) BOOL showsPointsOfInterest; 
@property (assign,nonatomic) BOOL showsBuildings;                                                            //@synthesize showsBuildings=_showsBuildings - In the implementation block
@property (assign,nonatomic) BOOL dynamicMapModesEnabled;                                                    //@synthesize dynamicMapModesEnabled=_dynamicMapModesEnabled - In the implementation block
@property (nonatomic,readonly) int currentMapMode;                                                           //@synthesize mapMode=_mapMode - In the implementation block
@property (assign,nonatomic) BOOL limitingNavCameraHeight;                                                   //@synthesize limitingNavCameraHeight=_limitingNavCameraHeight - In the implementation block
@property (nonatomic,readonly) VKMercatorTerrainHeightCache * terrainHeightCache; 
@property (assign,getter=isTrafficEnabled,nonatomic) BOOL trafficEnabled;                                    //@synthesize trafficEnabled=_trafficEnabled - In the implementation block
@property (assign,nonatomic) BOOL localizeLabels; 
@property (assign,nonatomic) int labelScaleFactor; 
@property (assign,nonatomic) float contentScale;                                                             //@synthesize contentScale=_contentScale - In the implementation block
@property (assign,nonatomic) int targetDisplay; 
@property (assign,nonatomic) <VKMapModelDelegate> * delegate;                                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) VKBuildingFootprintMapModel * buildingFootprintModel;                         //@synthesize buildingFootprintModel=_buildingFootprintModel - In the implementation block
@property (nonatomic,readonly) BOOL buildingsAreVisible;                                                     //@synthesize buildingsAreVisible=_buildingsAreVisible - In the implementation block
@property (nonatomic,readonly) BOOL isFullyDrawn; 
@property (nonatomic,readonly) VKTileProvider * tileProvider; 
@property (nonatomic,readonly) VKLabelMarker * selectedLabelMarker; 
@property (assign,nonatomic) BOOL labelMarkerSelectionEnabled; 
@property (nonatomic,retain) NSArray * alwaysVisibleTrafficIncidents; 
@property (nonatomic,readonly) VKAnnotationMarker * selectedAnnotationMarker; 
@property (nonatomic,readonly) NSArray * overlays; 
@property (nonatomic,readonly) NSSet * persistentOverlays; 
@property (nonatomic,retain) VKPolylineOverlayPainter * focusedLabelsPolylinePainter; 
@property (assign,nonatomic) BOOL disableRoads;                                                              //@synthesize disableRoads=_disableRoads - In the implementation block
@property (assign,nonatomic) BOOL disableLabels;                                                             //@synthesize disableLabels=_disableLabels - In the implementation block
@property (assign,nonatomic) BOOL disablePolygons;                                                           //@synthesize disablePolygons=_disablePolygons - In the implementation block
@property (assign,nonatomic) BOOL disableBuildingFootprints;                                                 //@synthesize disableBuildingFootprints=_disableBuildingFootprints - In the implementation block
@property (assign,nonatomic) BOOL disableRasters;                                                            //@synthesize disableRasters=_disableRasters - In the implementation block
@property (assign,nonatomic) BOOL enableBlackRoadLines;                                                      //@synthesize enableBlackRoadLines=_enableBlackRoadLines - In the implementation block
@property (assign,nonatomic) BOOL disableRealisticRoads; 
@property (assign,nonatomic) BOOL disableRealisticLand; 
@property (assign,nonatomic) BOOL disableGrid;                                                               //@synthesize disableGrid=_disableGrid - In the implementation block
@property (assign,nonatomic) VGLColor clearColor;                                                            //@synthesize clearColor=_clearColor - In the implementation block
@property (nonatomic,retain) <VKRoutePreloadSession> * routePreloadSession; 
@property (assign,nonatomic) <VKRouteMatchedAnnotationPresentation> * routeLineSplitAnnotation; 
@property (nonatomic,readonly) NSArray * visibleTileSets; 
+(const char*)nameForRoadClass:(int)arg1 ;
+(unsigned long)numberOfRoadClasses;
-(void)dealloc;
-(VGLColor)clearColor;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)didReceiveMemoryWarning;
-(id).cxx_construct;
-(int)tileSize;
-(void)setContentScale:(float)arg1 ;
-(float)contentScale;
-(void)_localeChanged:(id)arg1 ;
-(BOOL)labelMarkerSelectionEnabled;
-(void)setLabelMarkerSelectionEnabled:(BOOL)arg1 ;
-(int)mapType;
-(id)visibleTileSets;
-(id)attributionsForCurrentRegion;
-(BOOL)isShowingNoDataPlaceholders;
-(id)stylesheet;
-(void)setStylesheet:(id)arg1 ;
-(void)setTargetDisplay:(int)arg1 ;
-(void)setTrafficEnabled:(BOOL)arg1 ;
-(BOOL)localizeLabels;
-(void)setLocalizeLabels:(BOOL)arg1 ;
-(int)labelScaleFactor;
-(void)setLabelScaleFactor:(int)arg1 ;
-(void)clearScene;
-(void)setShouldLoadFallbackTiles:(BOOL)arg1 ;
-(BOOL)shouldLoadFallbackTiles;
-(id)detailedDescription;
-(int)shieldSize;
-(void)setShieldSize:(int)arg1 ;
-(int)navigationShieldSize;
-(void)setNavigationShieldSize:(int)arg1 ;
-(int)shieldIdiom;
-(void)setShieldIdiom:(int)arg1 ;
-(BOOL)showsPointsOfInterest;
-(void)setShowsPointsOfInterest:(BOOL)arg1 ;
-(BOOL)showsBuildings;
-(void)setShowsBuildings:(BOOL)arg1 ;
-(void)setDesiredMapMode:(int)arg1 immediate:(BOOL)arg2 ;
-(BOOL)dynamicMapModesEnabled;
-(void)setDynamicMapModesEnabled:(BOOL)arg1 ;
-(id)alwaysVisibleTrafficIncidents;
-(void)setAlwaysVisibleTrafficIncidents:(id)arg1 ;
-(/*^block*/ id)annotationMarkerDeselectionCallback;
-(void)setAnnotationMarkerDeselectionCallback:(/*^block*/ id)arg1 ;
-(id)selectedAnnotationMarker;
-(id)annotationMarkers;
-(void)removeAnnotationMarker:(id)arg1 ;
-(void)addAnnotationMarker:(id)arg1 allowAnimation:(BOOL)arg2 ;
-(void)selectAnnotationMarker:(id)arg1 ;
-(id)persistentOverlays;
-(void)removePersistentOverlay:(id)arg1 ;
-(void)addPersistentOverlay:(id)arg1 ;
-(id)overlays;
-(void)removeOverlay:(id)arg1 ;
-(void)addOverlay:(id)arg1 ;
-(id)routeLineSplitAnnotation;
-(void)setRouteLineSplitAnnotation:(id)arg1 ;
-(void)deselectLabelMarker;
-(id)externalAnchors;
-(void)removeExternalAnchor:(id)arg1 ;
-(void)addExternalAnchor:(id)arg1 ;
-(BOOL)disableLabels;
-(void)setDisableLabels:(BOOL)arg1 ;
-(BOOL)disableRoads;
-(void)setDisableRoads:(BOOL)arg1 ;
-(void)setMapType:(int)arg1 ;
-(int)targetDisplay;
-(void)stylesheetAnimationDidEnd:(BOOL)arg1 ;
-(void)resetTileContainers;
-(void)stylesheetAnimationWillStartFromStyle:(int)arg1 toStyle:(int)arg2 ;
-(void)stylesheetAnimationDidProgress:(float)arg1 ;
-(void)requestStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(int)arg2 setupHandler:(/*^block*/ id)arg3 ;
-(float)_styleTransitionProgress;
-(void)_setStyleTransitionProgress:(float)arg1 targetStyle:(int)arg2 step:(int)arg3 ;
-(void)setRoutePreloadSession:(id)arg1 ;
-(id)routePreloadSession;
-(id)labelMarkerForSelectionAtPoint:(CGPoint)arg1 selectableLabelsOnly:(BOOL)arg2 ;
-(void)selectLabelMarker:(id)arg1 ;
-(void)deselectAnnotationMarker:(id)arg1 ;
-(/*^block*/ id)annotationRectTest;
-(/*^block*/ id)annotationCoordinateTest;
-(id)selectedLabelMarker;
-(id)labelMarkers;
-(void)addRasterOverlay:(id)arg1 ;
-(void)removeRasterOverlay:(id)arg1 ;
-(void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2 ;
-(void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2 ;
-(void)setRouteUserOffset:(PolylineCoordinate)arg1 ;
-(void)setCurrentLocationText:(id)arg1 ;
-(id)focusedLabelsPolylinePainter;
-(void)setFocusedLabelsPolylinePainter:(id)arg1 ;
-(void)forceMapType:(int)arg1 ;
-(void)setDisablePolygons:(BOOL)arg1 ;
-(void)setDisableBuildingFootprints:(BOOL)arg1 ;
-(void)setEnableBlackRoadLines:(BOOL)arg1 ;
-(void)setDisableRasters:(BOOL)arg1 ;
-(void)disableRoadClass:(BOOL)arg1 withRoadClass:(int)arg2 ;
-(void)setDisableRealisticRoads:(BOOL)arg1 ;
-(void)setDisableRealisticLand:(BOOL)arg1 ;
-(void)setDisableGrid:(BOOL)arg1 ;
-(BOOL)isRoadClassDisabled:(int)arg1 ;
-(BOOL)isFullyDrawn;
-(BOOL)disablePolygons;
-(BOOL)disableBuildingFootprints;
-(BOOL)disableRasters;
-(BOOL)disableRealisticRoads;
-(BOOL)disableRealisticLand;
-(BOOL)disableGrid;
-(BOOL)isTrafficEnabled;
-(unsigned)neighborMode;
-(void)setNeighborMode:(unsigned)arg1 ;
-(id)initShouldRasterize:(BOOL)arg1 mapPurpose:(unsigned)arg2 contentScale:(float)arg3 ;
-(void)addSubmodel:(id)arg1 ;
-(id)terrainHeightCache;
-(void)flushCaches;
-(int)currentMapMode;
-(void)layoutScene:(id)arg1 withContext:(id)arg2 ;
-(double)heightAtPoint:(VKPoint)arg1 ;
-(void)didEndNavigation;
-(void)didBeginTransitionToNavigation;
-(void)setLimitingNavCameraHeight:(BOOL)arg1 ;
-(id)navTileSource;
-(void)preloadNavigationSceneResourcesWithContext:(id)arg1 ;
-(void)preloadNavigationSceneAnimationResourcesForDisplayStyle:(int)arg1 context:(id)arg2 ;
-(id)annotationMarkerForSelectionAtPoint:(VKPoint)arg1 avoidCurrent:(BOOL)arg2 canvasSize:(CGSize)arg3 ;
-(void)debugHighlightLabelAtScreenPoint:(CGPoint)arg1 viewTransform:(id)arg2 ;
-(unsigned)supportedRenderPasses;
-(void)layoutSceneIfNeeded:(id)arg1 withContext:(id)arg2 ;
-(void)recursiveDrawScene:(id)arg1 withContext:(id)arg2 pass:(unsigned)arg3 ;
-(void)drawScene:(id)arg1 withContext:(id)arg2 ;
-(void)_transitionFromMode:(int)arg1 toMode:(int)arg2 animated:(BOOL)arg3 ;
-(void)_activateModel:(id)arg1 ;
-(void)_deactivateModel:(id)arg1 ;
-(void)configureTileSources;
-(int)tileStyleForMapLayer:(unsigned)arg1 ;
-(id)createSourceForLayer:(unsigned)arg1 tileSet:(id)arg2 mode:(int)arg3 ;
-(id)sourceForLayer:(unsigned)arg1 mode:(int)arg2 ;
-(void)createTrafficTileSourceIfNecessary;
-(void)_mapConfigurationDidChange;
-(void)_setStylesheetFromMapType:(int)arg1 ;
-(void)performStylesheetWillChange;
-(void)performStylesheetDidChange;
-(void)performStylesheetDoneChanging;
-(void)_updateRegularTileProviderMode;
-(void)_updateOverlayTileSource;
-(void)_forceLayout;
-(float)ppi;
-(void)_reloadStylesheet;
-(void)shouldFlushCaches:(id)arg1 ;
-(void)willTapZoom;
-(void)didTapZoom;
-(void)foreachActiveLayer:(/*^block*/ id)arg1 ;
-(double)maxTileHeightAtPoint:(VKPoint)arg1 ;
-(void)_updateZoomLevel:(id)arg1 ;
-(void)_tryTransitionAndPreloadIfNecessary:(id)arg1 ;
-(void)setClearColor:(VGLColor)arg1 ;
-(id)_rasterOverlayTileSourceForLevel:(unsigned)arg1 ;
-(void)_updateTileExclusionAreas;
-(id)labelDebugString;
-(void)annotationModel:(id)arg1 willAnimateInAnnotationMarkers:(id)arg2 ;
-(void)annotationModel:(id)arg1 didAnimateInAnnotationMarkers:(id)arg2 ;
-(void)annotationModel:(id)arg1 didFinishAddingAnnotationMarkers:(id)arg2 ;
-(id)overlayContainer:(id)arg1 painterForOverlay:(id)arg2 ;
-(id)overlayContainer:(id)arg1 roadTileForTile:(id)arg2 ;
-(BOOL)overlayContainerIsInRealisticMode:(id)arg1 ;
-(id)labelModel:(id)arg1 mapTileForTile:(id)arg2 layer:(unsigned)arg3 ;
-(void)labelModel:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(BOOL)tileProviderMayUseNetwork:(id)arg1 ;
-(void)tileProviderNeedsUpdate:(id)arg1 ;
-(void)willStartLoadingTiles;
-(void)didStopLoadingTilesWithError:(id)arg1 ;
-(id)tileProvider;
-(int)minimumZoomLevelInView:(id)arg1 ;
-(int)maximumZoomLevelInView:(id)arg1 ;
-(BOOL)enableBlackRoadLines;
-(id)buildingFootprintModel;
-(BOOL)buildingsAreVisible;
-(BOOL)limitingNavCameraHeight;
@end

