/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSCH3DSceneRenderPipeline.h>
#import <iWorkImport/TSCH3DMultipassRenderPipeline.h>

@class TSCH3DFramebufferCopyPipeline, TSCH3DTileSceneRenderPipeline, TSCH3DGLFramebuffer, TSCH3DViewFrustumCullingDelegate;

@interface TSCH3DSupersampleSceneRenderPipeline : TSCH3DSceneRenderPipeline <TSCH3DMultipassRenderPipeline> {

	TSCH3DFramebufferCopyPipeline* mCopyPipeline;
	TSCH3DTileSceneRenderPipeline* mTilePipeline;
	TSCH3DGLFramebuffer* mTileFBO;
	int mPass;
	int mNumTiles;
	unsigned mTileSize;
	unsigned mTileSamples;
	BOOL mEnableSinglePassRendering;
	TSCH3DViewFrustumCullingDelegate* mViewFrustumCullingDelegate;
	BOOL mDidProtectTargetFramebuffer;

}

@property (assign,nonatomic) unsigned tileSize; 
@property (assign,nonatomic) unsigned tileSamples; 
@property (assign,nonatomic) BOOL enableSinglePassRendering; 
-(id)initWithProcessor:(id)arg1 session:(id)arg2 scene:(id)arg3 ;
-(id)p_targetFramebuffer;
-(id)cloneWithProcessor:(id)arg1 scene:(id)arg2 ;
-(unsigned)p_tilePixelSize;
-(id)renderingFBOResource;
-(void)setupTiling;
-(BOOL)enableSinglePassRendering;
-(BOOL)p_renderTilesUntilFailingConditionBlock:(/*^block*/ id)arg1 ;
-(void)resetMultipassRendering;
-(BOOL)multipassRenderingIsDone;
-(BOOL)p_singlePassRender;
-(BOOL)p_multipassRender;
-(void)skipLowQualityPass;
-(BOOL)updatesTargetFramebuffer;
-(BOOL)isActivePass;
-(unsigned)tileSamples;
-(void)setTileSamples:(unsigned)arg1 ;
-(void)setEnableSinglePassRendering:(BOOL)arg1 ;
-(BOOL)render;
-(void)dealloc;
-(void)setTileSize:(unsigned)arg1 ;
-(unsigned)tileSize;
-(void)releaseResources;
@end

