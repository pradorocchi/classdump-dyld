/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKOverlayPainter.h>
#import <VectorKit/VKPolylineObserver.h>

@class VKRouteLine, VGLTexture, GEORoute, NSSet, VKTileKeyList, VKAnimation, VGLRenderState, VKTrafficDrawStyle, VKPolylineOverlay;

@interface VKPolylineOverlayPainter : VKOverlayPainter <VKPolylineObserver> {

	VKRouteLine* _routeLine;
	double _routeLineHalfWidthRegular;
	double _routeLineHalfWidthRealistic;
	BOOL _selected;
	VGLTexture* _selectedTextureRealistic;
	VGLTexture* _obscuredTextureRealistic;
	VGLTexture* _travelledTextureRealistic;
	GEORoute* _route;
	RouteLineStyle _style;
	SCD_Struct_VK42 _matrix;
	SCD_Struct_VK42 _inverseMatrix;
	NSSet* _previousTilesInView;
	VKTileKeyList* _previousKeysInView;
	double _simplificationEpsilon;
	VKAnimation* _fadeAnimation;
	float _alphaScale;
	VKAnimation* _arrowFadeAnimation;
	float _arrowAlphaScale;
	BOOL _showArrows;
	VKAnimation* _arrowCrossFadeAnimation;
	BOOL _showTraffic;
	BOOL _forceRoutelineUpdate;
	int _stencilValue;
	float _contentScale;
	VGLRenderState* _renderState;
	VKTrafficDrawStyle* _trafficDrawStyle;
	unsigned _targetDisplayStep;
	float _crossfadingDisplayStep;
	BOOL _wasInRealisticMode;

}

@property (assign,nonatomic) BOOL selected;                               //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) GEORoute * route;                            //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) BOOL showTraffic;                            //@synthesize showTraffic=_showTraffic - In the implementation block
@property (nonatomic,readonly) VKPolylineOverlay * polyline; 
-(void)dealloc;
-(void)setSelected:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id).cxx_construct;
-(BOOL)selected;
-(id)stylesheet;
-(void)stylesheetDidChange;
-(void)setRoute:(id)arg1 ;
-(id)route;
-(void)setContainerModel:(id)arg1 ;
-(void)layoutWithContext:(id)arg1 tiles:(id)arg2 keysInView:(id)arg3 ;
-(void)drawWithContext:(id)arg1 tiles:(id)arg2 ;
-(void)drawDebug:(id)arg1 tiles:(id)arg2 ;
-(BOOL)_shouldShowTraffic;
-(id)initWithOverlay:(id)arg1 ;
-(void)_didReceiveMemoryWarning;
-(id)polyline;
-(void)_releaseTextures;
-(float)routeLineWidthForCamera:(id)arg1 canvasSize:(CGSize)arg2 ;
-(void)drawWithContext:(id)arg1 tiles:(id)arg2 prepare:(BOOL)arg3 updateStencil:(BOOL)arg4 ;
-(void)updateRouteLineStencilValue:(int)arg1 ;
-(void)prepareToDrawWithContext:(id)arg1 ;
-(void)_drawRegularWithContext:(id)arg1 ;
-(void)_drawRealisticWithContext:(id)arg1 ;
-(void)_populateRenderBuffer:(/*^block*/ id)arg1 matrix:(const /*function pointer*/ void**)arg2 halfWidth:(float)arg3 context:(id)arg4 ;
-(void)setNeedsLayoutForPolyline:(id)arg1 ;
-(void)drawArrowsWithContext:(id)arg1 ;
-(BOOL)showTraffic;
-(void)setShowTraffic:(BOOL)arg1 ;
-(void).cxx_destruct;
@end

