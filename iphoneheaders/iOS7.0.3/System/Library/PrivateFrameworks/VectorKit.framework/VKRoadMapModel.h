/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:22 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VKVectorMapModel.h>
#import <VectorKit/VKStylesheetObserver.h>

@class VKRoadPainter, VKStylesheet;

@interface VKRoadMapModel : VKVectorMapModel <VKStylesheetObserver> {

	VKRoadPainter* _roadPainter;
	BOOL _drawRoads;
	unsigned _mapLayerPosition;
	unsigned _supportedRenderPasses;

}

@property (assign,nonatomic) BOOL drawRoads;                              //@synthesize drawRoads=_drawRoads - In the implementation block
@property (assign,nonatomic) unsigned mapLayerPosition;                   //@synthesize mapLayerPosition=_mapLayerPosition - In the implementation block
@property (assign,nonatomic) unsigned supportedRenderPasses;              //@synthesize supportedRenderPasses=_supportedRenderPasses - In the implementation block
@property (nonatomic,readonly) VKStylesheet * stylesheet; 
-(void)dealloc;
-(id)init;
-(unsigned)mapLayerPosition;
-(void)setMapLayerPosition:(unsigned)arg1 ;
-(unsigned)supportedRenderPasses;
-(void)drawScene:(id)arg1 withContext:(id)arg2 ;
-(void)setDrawRoads:(BOOL)arg1 ;
-(void)stylesheetDidChange;
-(void)setSupportedRenderPasses:(unsigned)arg1 ;
-(void)drawDebugScene:(id)arg1 WithContext:(id)arg2 ;
-(BOOL)drawRoads;
@end

