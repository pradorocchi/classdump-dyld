/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHUnretainedParent.h>

@protocol TSCH3DGLLayer;
@class TSCH3DChartRep, TSCH3DSession, TSCH3DRenderProcessor, TSCH3DChartRenderCycle, CALayer, TSCH3DGLLayerDelegate, TSCH3DSharegroupToken, TSCH3DScene;

@interface TSCH3DChartRendererState : NSObject <TSCHUnretainedParent> {

	TSCH3DChartRep* mRep;
	TSCH3DSession* mSession;
	TSCH3DRenderProcessor* mProcessor;
	TSCH3DChartRenderCycle* mRenderCycle;
	BOOL mInteractive;
	BOOL mWantInteractiveMode;
	BOOL mIsInteractiveMode;
	CGSize mMinimumBufferSize;
	CGRect mLayerVisibleBounds;
	CALayer<TSCH3DGLLayer>* mGLLayer;
	TSCH3DGLLayerDelegate* mGLLayerDelegate;
	TSCH3DSharegroupToken* mSharegroupToken;

}

@property (assign,nonatomic) int performance; 
@property (nonatomic,readonly) BOOL canRender; 
@property (nonatomic,readonly) BOOL framebufferCanRender; 
@property (nonatomic,readonly) BOOL hasSession; 
@property (nonatomic,readonly) BOOL mustRecreateRenderCycleForCurrentRenderCycleClass; 
@property (nonatomic,readonly) TSCH3DChartRenderCycle * renderCycle; 
@property (nonatomic,readonly) TSCH3DScene * scene; 
@property (nonatomic,readonly) TSCH3DSession * session; 
@property (nonatomic,readonly) TSCH3DRenderProcessor * processor; 
@property (assign,nonatomic) CGRect layerVisibleBounds; 
@property (nonatomic,readonly) TSCH3DSharegroupToken * sharegroupToken; 
-(void)destroy;
-(id)processor;
-(void)clearParent;
-(void)setPerformance:(int)arg1 ;
-(BOOL)isOneShot;
-(void)setIfIsMoreDemandingPerformance:(int)arg1 ;
-(int)performance;
-(void)destroyFramebuffer;
-(id)GLLayer;
-(void)setLayerVisibleBounds:(CGRect)arg1 ;
-(CGRect)layerVisibleBounds;
-(BOOL)usesMultipassRendering;
-(void)endInteractiveMode;
-(id)renderCycle;
-(BOOL)framebufferCanRender;
-(id)initWithRep:(id)arg1 sharegroupToken:(id)arg2 ;
-(id)sharegroupToken;
-(void)setupForRendering;
-(void)beginInteractiveModeWithMinimumBufferSize:(CGSize)arg1 performanceHint:(int)arg2 ;
-(BOOL)renderLegendIntoSeparateLayer;
-(void)recreateGLLayer;
-(BOOL)mustRecreateRenderCycleForCurrentRenderCycleClass;
-(BOOL)hasSession;
-(void)releaseGLLayer;
-(void)p_setupRenderCycle;
-(void)p_setupSession;
-(void)p_validateLabelBitmapContextInfoForScene:(id)arg1 ;
-(void)p_setupInteractiveMode;
-(void)p_createGLLayer;
-(BOOL)p_reusableForCurrentRenderCycleClass;
-(void)p_updateLabelBitmapContextInfoForScene:(id)arg1 ;
-(id)session;
-(id)scene;
-(void)dealloc;
-(id).cxx_construct;
-(BOOL)canRender;
@end
