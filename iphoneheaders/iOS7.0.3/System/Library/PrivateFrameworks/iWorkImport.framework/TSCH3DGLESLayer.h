/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <QuartzCore/CAEAGLLayer.h>
#import <iWorkImport/TSCH3DGLLayer.h>

@class TSCH3DLayerCacheLogic;

@interface TSCH3DGLESLayer : CAEAGLLayer <TSCH3DGLLayer> {

	TSCH3DLayerCacheLogic* mCacheLogic;

}
-(id)cacheLogic;
-(id)framebufferFromContext:(id)arg1 attributes:(const FramebufferAttributes*)arg2 ;
-(id)initWithLayerCacheLogicClass:(Class)arg1 ;
-(void)willDestroyFramebuffer:(id)arg1 session:(id)arg2 ;
-(void)presentLayerWithPresenterInfo:(const PresenterInfo*)arg1 ;
-(Class)layerDelegateClass;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(float)contentsScale;
-(void)setContentsScale:(float)arg1 ;
@end

