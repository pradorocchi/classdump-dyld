/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:22 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKVectorMapModel.h>
#import <VectorKit/VKMercatorTerrainHeightProvider.h>
#import <VectorKit/VKMapLayer.h>

@class VKAnimation, VKSkyModel, VGLRenderState, VKMercatorTerrainHeightCache;

@interface VKBuildingFootprintMapModel : VKVectorMapModel <VKMercatorTerrainHeightProvider, VKMapLayer> {

	VGLColor _topColor;
	VGLColor _facadeColor;
	VGLColor _landmarkColor;
	VGLColor _flatColor;
	VGLColor _pointyFacadeColor;
	VGLColor _pointyTopColor;
	float _brightness;
	int _vectorType;
	int _buildingMode;
	VKAnimation* _styleChangeAnimation;
	VKAnimation* _fadeBuildingAnimation;
	float _buildingOccluderAlpha;
	BOOL _fadeTiles;
	VKSkyModel* _skyModel;
	VGLColor _footprintStrokeColor;
	float _footprintStrokeWidth;
	VGLColor _3DStrokeColor;
	float _3DStrokeWidth;
	double _nearDistance;
	double _farDistance;
	unordered_map<VKVectorTile *, OccluderGroupList, std::__1::hash<VKVectorTile *>, std::__1::equal_to<VKVectorTile *>, vk_allocator<std::__1::pair<VKVectorTile *const, OccluderGroupList> > >* _currentOccluders;
	unordered_map<VKVectorTile *, OccluderGroupList, std::__1::hash<VKVectorTile *>, std::__1::equal_to<VKVectorTile *>, vk_allocator<std::__1::pair<VKVectorTile *const, OccluderGroupList> > >* _previousOccluders;
	VGLRenderState* _renderState;
	float _minLayeringHeight;
	float _maxLayeringHeight;
	bool _shouldDraw3DBuildingsInVectorBuildingsRenderPass;
	bool _shouldDraw3DBuildingsIn3DBuildingsRenderPass;
	BOOL _initializedStyles;
	VKMercatorTerrainHeightCache* _heightCache;

}

@property (nonatomic,readonly) VKMercatorTerrainHeightCache * heightCache;              //@synthesize heightCache=_heightCache - In the implementation block
@property (assign,nonatomic) int vectorType;                                            //@synthesize vectorType=_vectorType - In the implementation block
@property (assign,nonatomic) BOOL fadeTiles;                                            //@synthesize fadeTiles=_fadeTiles - In the implementation block
@property (assign,nonatomic) int buildingMode;                                          //@synthesize buildingMode=_buildingMode - In the implementation block
@property (nonatomic,retain) VKSkyModel * skyModel;                                     //@synthesize skyModel=_skyModel - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setActive:(BOOL)arg1 ;
-(id).cxx_construct;
-(void)reset;
-(unsigned)mapLayerPosition;
-(void)layoutScene:(id)arg1 withContext:(id)arg2 ;
-(double)heightAtPoint:(VKPoint)arg1 ;
-(unsigned)supportedRenderPasses;
-(void)drawScene:(id)arg1 withContext:(id)arg2 pass:(unsigned)arg3 ;
-(void)drawDebugScene:(id)arg1 withContext:(id)arg2 ;
-(id)heightCache;
-(void)setFadeTiles:(BOOL)arg1 ;
-(void)stylesheetDidChange;
-(void)setVectorType:(int)arg1 ;
-(void)setSkyModel:(id)arg1 ;
-(double)maxTileHeightAtPoint:(VKPoint)arg1 ;
-(int)buildingMode;
-(void)setBuildingMode:(int)arg1 animated:(BOOL)arg2 ;
-(BOOL)wantsCategorizedSourceTiles;
-(void)removePersistingExitingTiles:(id)arg1 ;
-(void)willStartDrawingTiles:(id)arg1 ;
-(void)willStopDrawingTiles:(id)arg1 ;
-(int)vectorType;
-(void)vectorTypeDidChange;
-(void)_clearOccluders;
-(id)_globalBuildingDrawStyle;
-(id)_globalPointyBuildingDrawStyle;
-(void)_updateStyles;
-(void)draw3DBuildingsInScene:(id)arg1 withContext:(id)arg2 passes:(unsigned)arg3 ;
-(void)draw3DBuildingShadowsInScene:(id)arg1 withContext:(id)arg2 ;
-(void)drawFootprintsInScene:(id)arg1 withContext:(id)arg2 ;
-(void)draw3DBuildingStrokesInScene:(id)arg1 withContext:(id)arg2 ;
-(void)draw2DBuildingsInScene:(id)arg1 withContext:(id)arg2 ;
-(BOOL)fadeTiles;
-(void)setBuildingMode:(int)arg1 ;
-(id)skyModel;
-(void).cxx_destruct;
@end

